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
extern TypeInfo IList_1_t7159_il2cpp_TypeInfo;

// SetCustomAttributesArray
#include "AssemblyU2DCSharp_SetCustomAttributesArray.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<SetCustomAttributesArray>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SetCustomAttributesArray>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SetCustomAttributesArray>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SetCustomAttributesArray>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SetCustomAttributesArray>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SetCustomAttributesArray>
extern MethodInfo IList_1_get_Item_m37163_MethodInfo;
extern MethodInfo IList_1_set_Item_m37164_MethodInfo;
static PropertyInfo IList_1_t7159____Item_PropertyInfo = 
{
	&IList_1_t7159_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37163_MethodInfo/* get */
	, &IList_1_set_Item_m37164_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7159_PropertyInfos[] =
{
	&IList_1_t7159____Item_PropertyInfo,
	NULL
};
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
static ParameterInfo IList_1_t7159_IList_1_IndexOf_m37165_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SetCustomAttributesArray_t143_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37165_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<SetCustomAttributesArray>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37165_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7159_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7159_IList_1_IndexOf_m37165_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37165_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
static ParameterInfo IList_1_t7159_IList_1_Insert_m37166_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SetCustomAttributesArray_t143_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37166_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SetCustomAttributesArray>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37166_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7159_IList_1_Insert_m37166_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37166_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7159_IList_1_RemoveAt_m37167_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37167_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SetCustomAttributesArray>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37167_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7159_IList_1_RemoveAt_m37167_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37167_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7159_IList_1_get_Item_m37163_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37163_GenericMethod;
// T System.Collections.Generic.IList`1<SetCustomAttributesArray>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37163_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7159_il2cpp_TypeInfo/* declaring_type */
	, &SetCustomAttributesArray_t143_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7159_IList_1_get_Item_m37163_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37163_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
static ParameterInfo IList_1_t7159_IList_1_set_Item_m37164_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SetCustomAttributesArray_t143_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37164_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SetCustomAttributesArray>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37164_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7159_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7159_IList_1_set_Item_m37164_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37164_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7159_MethodInfos[] =
{
	&IList_1_IndexOf_m37165_MethodInfo,
	&IList_1_Insert_m37166_MethodInfo,
	&IList_1_RemoveAt_m37167_MethodInfo,
	&IList_1_get_Item_m37163_MethodInfo,
	&IList_1_set_Item_m37164_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t7158_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t7160_il2cpp_TypeInfo;
static TypeInfo* IList_1_t7159_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7158_il2cpp_TypeInfo,
	&IEnumerable_1_t7160_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7159_0_0_0;
extern Il2CppType IList_1_t7159_1_0_0;
struct IList_1_t7159;
extern Il2CppGenericClass IList_1_t7159_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7159_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7159_MethodInfos/* methods */
	, IList_1_t7159_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7159_il2cpp_TypeInfo/* element_class */
	, IList_1_t7159_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7159_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7159_0_0_0/* byval_arg */
	, &IList_1_t7159_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7159_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// UnityEngine.Events.CachedInvokableCall`1<SetCustomAttributesArray>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2970_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SetCustomAttributesArray>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_13MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_9.h"
extern TypeInfo ObjectU5BU5D_t96_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo SetCustomAttributesArray_t143_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2971_il2cpp_TypeInfo;
extern TypeInfo Void_t72_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_9MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m14564_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m14566_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SetCustomAttributesArray>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SetCustomAttributesArray>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SetCustomAttributesArray>
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t2970____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t2970_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2970, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2970_FieldInfos[] =
{
	&CachedInvokableCall_1_t2970____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2970_CachedInvokableCall_1__ctor_m14562_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SetCustomAttributesArray_t143_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m14562_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<SetCustomAttributesArray>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m14562_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m12827_gshared/* method */
	, &CachedInvokableCall_1_t2970_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2970_CachedInvokableCall_1__ctor_m14562_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m14562_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2970_CachedInvokableCall_1_Invoke_m14563_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m14563_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<SetCustomAttributesArray>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m14563_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m12829_gshared/* method */
	, &CachedInvokableCall_1_t2970_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2970_CachedInvokableCall_1_Invoke_m14563_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m14563_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2970_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m14562_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14563_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m517_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo Object_GetHashCode_m518_MethodInfo;
extern MethodInfo Object_ToString_m498_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m14563_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m14567_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2970_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14563_MethodInfo,
	&InvokableCall_1_Find_m14567_MethodInfo,
};
extern Il2CppType UnityAction_1_t2972_0_0_0;
extern TypeInfo UnityAction_1_t2972_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSetCustomAttributesArray_t143_m27796_MethodInfo;
extern TypeInfo SetCustomAttributesArray_t143_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m14569_MethodInfo;
extern TypeInfo SetCustomAttributesArray_t143_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2970_RGCTXData[8] = 
{
	&UnityAction_1_t2972_0_0_0/* Type Usage */,
	&UnityAction_1_t2972_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSetCustomAttributesArray_t143_m27796_MethodInfo/* Method Usage */,
	&SetCustomAttributesArray_t143_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14569_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m14564_MethodInfo/* Method Usage */,
	&SetCustomAttributesArray_t143_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m14566_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2970_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2970_1_0_0;
struct CachedInvokableCall_1_t2970;
extern Il2CppGenericClass CachedInvokableCall_1_t2970_GenericClass;
TypeInfo CachedInvokableCall_1_t2970_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2970_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2970_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2970_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2970_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2970_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2970_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2970_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2970_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2970_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2970)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_16.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo UnityAction_1_t2972_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t128_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_16MethodDeclarations.h"
extern MethodInfo BaseInvokableCall__ctor_m5018_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m642_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m5198_MethodInfo;
extern MethodInfo Delegate_Combine_m3561_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m5017_MethodInfo;
extern MethodInfo ArgumentException__ctor_m651_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m5019_MethodInfo;
extern MethodInfo Delegate_get_Target_m5194_MethodInfo;
extern MethodInfo Delegate_get_Method_m5192_MethodInfo;
struct BaseInvokableCall_t981;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
struct BaseInvokableCall_t981;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
 void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared (Object_t * __this/* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SetCustomAttributesArray>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SetCustomAttributesArray>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSetCustomAttributesArray_t143_m27796(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>
extern Il2CppType UnityAction_1_t2972_0_0_1;
FieldInfo InvokableCall_1_t2971____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2972_0_0_1/* type */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2971, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2971_FieldInfos[] =
{
	&InvokableCall_1_t2971____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2971_InvokableCall_1__ctor_m14564_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14564_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m14564_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12830_gshared/* method */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2971_InvokableCall_1__ctor_m14564_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m14564_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2972_0_0_0;
static ParameterInfo InvokableCall_1_t2971_InvokableCall_1__ctor_m14565_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2972_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14565_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m14565_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12831_gshared/* method */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2971_InvokableCall_1__ctor_m14565_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m14565_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t2971_InvokableCall_1_Invoke_m14566_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14566_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m14566_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m12832_gshared/* method */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2971_InvokableCall_1_Invoke_m14566_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m14566_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2971_InvokableCall_1_Find_m14567_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m14567_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<SetCustomAttributesArray>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m14567_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m12833_gshared/* method */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2971_InvokableCall_1_Find_m14567_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m14567_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2971_MethodInfos[] =
{
	&InvokableCall_1__ctor_m14564_MethodInfo,
	&InvokableCall_1__ctor_m14565_MethodInfo,
	&InvokableCall_1_Invoke_m14566_MethodInfo,
	&InvokableCall_1_Find_m14567_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2971_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_1_Invoke_m14566_MethodInfo,
	&InvokableCall_1_Find_m14567_MethodInfo,
};
extern TypeInfo UnityAction_1_t2972_il2cpp_TypeInfo;
extern TypeInfo SetCustomAttributesArray_t143_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2971_RGCTXData[5] = 
{
	&UnityAction_1_t2972_0_0_0/* Type Usage */,
	&UnityAction_1_t2972_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSetCustomAttributesArray_t143_m27796_MethodInfo/* Method Usage */,
	&SetCustomAttributesArray_t143_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14569_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2971_0_0_0;
extern Il2CppType InvokableCall_1_t2971_1_0_0;
extern TypeInfo BaseInvokableCall_t981_il2cpp_TypeInfo;
struct InvokableCall_1_t2971;
extern Il2CppGenericClass InvokableCall_1_t2971_GenericClass;
TypeInfo InvokableCall_1_t2971_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2971_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2971_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2971_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2971_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2971_0_0_0/* byval_arg */
	, &InvokableCall_1_t2971_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2971_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2971_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2971)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t2972_UnityAction_1__ctor_m14568_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m14568_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m14568_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m12834_gshared/* method */
	, &UnityAction_1_t2972_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_1_t2972_UnityAction_1__ctor_m14568_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m14568_GenericMethod/* genericMethod */

};
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
static ParameterInfo UnityAction_1_t2972_UnityAction_1_Invoke_m14569_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SetCustomAttributesArray_t143_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m14569_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m14569_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m12835_gshared/* method */
	, &UnityAction_1_t2972_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2972_UnityAction_1_Invoke_m14569_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m14569_GenericMethod/* genericMethod */

};
extern Il2CppType SetCustomAttributesArray_t143_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2972_UnityAction_1_BeginInvoke_m14570_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SetCustomAttributesArray_t143_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14570_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m14570_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m12836_gshared/* method */
	, &UnityAction_1_t2972_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2972_UnityAction_1_BeginInvoke_m14570_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m14570_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t2972_UnityAction_1_EndInvoke_m14571_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14571_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SetCustomAttributesArray>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m14571_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m12837_gshared/* method */
	, &UnityAction_1_t2972_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2972_UnityAction_1_EndInvoke_m14571_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m14571_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2972_MethodInfos[] =
{
	&UnityAction_1__ctor_m14568_MethodInfo,
	&UnityAction_1_Invoke_m14569_MethodInfo,
	&UnityAction_1_BeginInvoke_m14570_MethodInfo,
	&UnityAction_1_EndInvoke_m14571_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m3646_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m3647_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m3648_MethodInfo;
extern MethodInfo Delegate_Clone_m3649_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m3650_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m3651_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m3652_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m14570_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m14571_MethodInfo;
static MethodInfo* UnityAction_1_t2972_VTable[] =
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
	&UnityAction_1_Invoke_m14569_MethodInfo,
	&UnityAction_1_BeginInvoke_m14570_MethodInfo,
	&UnityAction_1_EndInvoke_m14571_MethodInfo,
};
extern TypeInfo ICloneable_t755_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t305_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t2972_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2972_1_0_0;
extern TypeInfo MulticastDelegate_t608_il2cpp_TypeInfo;
struct UnityAction_1_t2972;
extern Il2CppGenericClass UnityAction_1_t2972_GenericClass;
TypeInfo UnityAction_1_t2972_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2972_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2972_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2972_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2972_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2972_0_0_0/* byval_arg */
	, &UnityAction_1_t2972_1_0_0/* this_arg */
	, UnityAction_1_t2972_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2972_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2972)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5621_il2cpp_TypeInfo;

// SetUserField
#include "AssemblyU2DCSharp_SetUserField.h"


// T System.Collections.Generic.IEnumerator`1<SetUserField>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SetUserField>
extern MethodInfo IEnumerator_1_get_Current_m37168_MethodInfo;
static PropertyInfo IEnumerator_1_t5621____Current_PropertyInfo = 
{
	&IEnumerator_1_t5621_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37168_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5621_PropertyInfos[] =
{
	&IEnumerator_1_t5621____Current_PropertyInfo,
	NULL
};
extern Il2CppType SetUserField_t144_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37168_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<SetUserField>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37168_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5621_il2cpp_TypeInfo/* declaring_type */
	, &SetUserField_t144_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37168_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5621_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37168_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t5621_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5621_0_0_0;
extern Il2CppType IEnumerator_1_t5621_1_0_0;
struct IEnumerator_1_t5621;
extern Il2CppGenericClass IEnumerator_1_t5621_GenericClass;
TypeInfo IEnumerator_1_t5621_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5621_MethodInfos/* methods */
	, IEnumerator_1_t5621_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5621_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5621_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5621_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5621_0_0_0/* byval_arg */
	, &IEnumerator_1_t5621_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5621_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<SetUserField>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2973_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SetUserField>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo SetUserField_t144_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m14576_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSetUserField_t144_m27798_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<SetUserField>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SetUserField>(System.Int32)
#define Array_InternalArray__get_Item_TisSetUserField_t144_m27798(__this, p0, method) (SetUserField_t144 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<SetUserField>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<SetUserField>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SetUserField>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SetUserField>::MoveNext()
// T System.Array/InternalEnumerator`1<SetUserField>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SetUserField>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2973____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2973, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2973____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2973, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2973_FieldInfos[] =
{
	&InternalEnumerator_1_t2973____array_0_FieldInfo,
	&InternalEnumerator_1_t2973____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14573_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2973____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2973_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14573_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2973____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2973_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14576_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2973_PropertyInfos[] =
{
	&InternalEnumerator_1_t2973____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2973____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2973_InternalEnumerator_1__ctor_m14572_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14572_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<SetUserField>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14572_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2973_InternalEnumerator_1__ctor_m14572_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14572_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14573_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<SetUserField>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14573_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14573_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14574_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<SetUserField>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14574_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14574_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14575_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<SetUserField>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14575_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14575_GenericMethod/* genericMethod */

};
extern Il2CppType SetUserField_t144_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14576_GenericMethod;
// T System.Array/InternalEnumerator`1<SetUserField>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14576_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* declaring_type */
	, &SetUserField_t144_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14576_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2973_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14572_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14573_MethodInfo,
	&InternalEnumerator_1_Dispose_m14574_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14575_MethodInfo,
	&InternalEnumerator_1_get_Current_m14576_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m14575_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14574_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2973_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14573_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14575_MethodInfo,
	&InternalEnumerator_1_Dispose_m14574_MethodInfo,
	&InternalEnumerator_1_get_Current_m14576_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2973_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5621_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2973_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5621_il2cpp_TypeInfo, 7},
};
extern TypeInfo SetUserField_t144_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2973_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14576_MethodInfo/* Method Usage */,
	&SetUserField_t144_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSetUserField_t144_m27798_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2973_0_0_0;
extern Il2CppType InternalEnumerator_1_t2973_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t2973_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t2973_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2973_MethodInfos/* methods */
	, InternalEnumerator_1_t2973_PropertyInfos/* properties */
	, InternalEnumerator_1_t2973_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2973_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2973_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2973_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2973_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2973_1_0_0/* this_arg */
	, InternalEnumerator_1_t2973_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2973_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2973_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2973)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t7161_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<SetUserField>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SetUserField>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SetUserField>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SetUserField>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SetUserField>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SetUserField>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SetUserField>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SetUserField>
extern MethodInfo ICollection_1_get_Count_m37169_MethodInfo;
static PropertyInfo ICollection_1_t7161____Count_PropertyInfo = 
{
	&ICollection_1_t7161_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37169_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37170_MethodInfo;
static PropertyInfo ICollection_1_t7161____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7161_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37170_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7161_PropertyInfos[] =
{
	&ICollection_1_t7161____Count_PropertyInfo,
	&ICollection_1_t7161____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37169_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<SetUserField>::get_Count()
MethodInfo ICollection_1_get_Count_m37169_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37169_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37170_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<SetUserField>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37170_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37170_GenericMethod/* genericMethod */

};
extern Il2CppType SetUserField_t144_0_0_0;
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo ICollection_1_t7161_ICollection_1_Add_m37171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37171_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<SetUserField>::Add(T)
MethodInfo ICollection_1_Add_m37171_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7161_ICollection_1_Add_m37171_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37171_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37172_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<SetUserField>::Clear()
MethodInfo ICollection_1_Clear_m37172_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37172_GenericMethod/* genericMethod */

};
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo ICollection_1_t7161_ICollection_1_Contains_m37173_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37173_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<SetUserField>::Contains(T)
MethodInfo ICollection_1_Contains_m37173_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7161_ICollection_1_Contains_m37173_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37173_GenericMethod/* genericMethod */

};
extern Il2CppType SetUserFieldU5BU5D_t5262_0_0_0;
extern Il2CppType SetUserFieldU5BU5D_t5262_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7161_ICollection_1_CopyTo_m37174_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SetUserFieldU5BU5D_t5262_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37174_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<SetUserField>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37174_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7161_ICollection_1_CopyTo_m37174_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37174_GenericMethod/* genericMethod */

};
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo ICollection_1_t7161_ICollection_1_Remove_m37175_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37175_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<SetUserField>::Remove(T)
MethodInfo ICollection_1_Remove_m37175_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7161_ICollection_1_Remove_m37175_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37175_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7161_MethodInfos[] =
{
	&ICollection_1_get_Count_m37169_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37170_MethodInfo,
	&ICollection_1_Add_m37171_MethodInfo,
	&ICollection_1_Clear_m37172_MethodInfo,
	&ICollection_1_Contains_m37173_MethodInfo,
	&ICollection_1_CopyTo_m37174_MethodInfo,
	&ICollection_1_Remove_m37175_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7163_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7161_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7163_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7161_0_0_0;
extern Il2CppType ICollection_1_t7161_1_0_0;
struct ICollection_1_t7161;
extern Il2CppGenericClass ICollection_1_t7161_GenericClass;
TypeInfo ICollection_1_t7161_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7161_MethodInfos/* methods */
	, ICollection_1_t7161_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7161_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7161_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7161_0_0_0/* byval_arg */
	, &ICollection_1_t7161_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7161_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SetUserField>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SetUserField>
extern Il2CppType IEnumerator_1_t5621_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37176_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SetUserField>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37176_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7163_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5621_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37176_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7163_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37176_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7163_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7163_0_0_0;
extern Il2CppType IEnumerable_1_t7163_1_0_0;
struct IEnumerable_1_t7163;
extern Il2CppGenericClass IEnumerable_1_t7163_GenericClass;
TypeInfo IEnumerable_1_t7163_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7163_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7163_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7163_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7163_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7163_0_0_0/* byval_arg */
	, &IEnumerable_1_t7163_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7163_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t7162_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SetUserField>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SetUserField>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SetUserField>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SetUserField>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SetUserField>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SetUserField>
extern MethodInfo IList_1_get_Item_m37177_MethodInfo;
extern MethodInfo IList_1_set_Item_m37178_MethodInfo;
static PropertyInfo IList_1_t7162____Item_PropertyInfo = 
{
	&IList_1_t7162_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37177_MethodInfo/* get */
	, &IList_1_set_Item_m37178_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7162_PropertyInfos[] =
{
	&IList_1_t7162____Item_PropertyInfo,
	NULL
};
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo IList_1_t7162_IList_1_IndexOf_m37179_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37179_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<SetUserField>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37179_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7162_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7162_IList_1_IndexOf_m37179_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37179_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo IList_1_t7162_IList_1_Insert_m37180_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37180_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SetUserField>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37180_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7162_IList_1_Insert_m37180_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37180_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7162_IList_1_RemoveAt_m37181_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37181_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SetUserField>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37181_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7162_IList_1_RemoveAt_m37181_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37181_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7162_IList_1_get_Item_m37177_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SetUserField_t144_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37177_GenericMethod;
// T System.Collections.Generic.IList`1<SetUserField>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37177_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7162_il2cpp_TypeInfo/* declaring_type */
	, &SetUserField_t144_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7162_IList_1_get_Item_m37177_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37177_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo IList_1_t7162_IList_1_set_Item_m37178_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37178_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SetUserField>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37178_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7162_IList_1_set_Item_m37178_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37178_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7162_MethodInfos[] =
{
	&IList_1_IndexOf_m37179_MethodInfo,
	&IList_1_Insert_m37180_MethodInfo,
	&IList_1_RemoveAt_m37181_MethodInfo,
	&IList_1_get_Item_m37177_MethodInfo,
	&IList_1_set_Item_m37178_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7162_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7161_il2cpp_TypeInfo,
	&IEnumerable_1_t7163_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7162_0_0_0;
extern Il2CppType IList_1_t7162_1_0_0;
struct IList_1_t7162;
extern Il2CppGenericClass IList_1_t7162_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7162_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7162_MethodInfos/* methods */
	, IList_1_t7162_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7162_il2cpp_TypeInfo/* element_class */
	, IList_1_t7162_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7162_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7162_0_0_0/* byval_arg */
	, &IList_1_t7162_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7162_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// UnityEngine.Events.CachedInvokableCall`1<SetUserField>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2974_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SetUserField>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_14MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SetUserField>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_10.h"
extern TypeInfo InvokableCall_1_t2975_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SetUserField>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_10MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m14579_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m14581_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SetUserField>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SetUserField>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SetUserField>
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t2974____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t2974_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2974, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2974_FieldInfos[] =
{
	&CachedInvokableCall_1_t2974____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2974_CachedInvokableCall_1__ctor_m14577_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m14577_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<SetUserField>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m14577_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m12827_gshared/* method */
	, &CachedInvokableCall_1_t2974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2974_CachedInvokableCall_1__ctor_m14577_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m14577_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2974_CachedInvokableCall_1_Invoke_m14578_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m14578_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<SetUserField>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m14578_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m12829_gshared/* method */
	, &CachedInvokableCall_1_t2974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2974_CachedInvokableCall_1_Invoke_m14578_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m14578_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2974_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m14577_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14578_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m14578_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m14582_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2974_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14578_MethodInfo,
	&InvokableCall_1_Find_m14582_MethodInfo,
};
extern Il2CppType UnityAction_1_t2976_0_0_0;
extern TypeInfo UnityAction_1_t2976_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSetUserField_t144_m27808_MethodInfo;
extern TypeInfo SetUserField_t144_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m14584_MethodInfo;
extern TypeInfo SetUserField_t144_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2974_RGCTXData[8] = 
{
	&UnityAction_1_t2976_0_0_0/* Type Usage */,
	&UnityAction_1_t2976_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSetUserField_t144_m27808_MethodInfo/* Method Usage */,
	&SetUserField_t144_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14584_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m14579_MethodInfo/* Method Usage */,
	&SetUserField_t144_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m14581_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2974_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2974_1_0_0;
struct CachedInvokableCall_1_t2974;
extern Il2CppGenericClass CachedInvokableCall_1_t2974_GenericClass;
TypeInfo CachedInvokableCall_1_t2974_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2974_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2974_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2974_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2974_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2974_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2974_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2974_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2974_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2974_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2974)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<SetUserField>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_17.h"
extern TypeInfo UnityAction_1_t2976_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SetUserField>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_17MethodDeclarations.h"
struct BaseInvokableCall_t981;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SetUserField>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SetUserField>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSetUserField_t144_m27808(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<SetUserField>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SetUserField>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SetUserField>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SetUserField>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SetUserField>
extern Il2CppType UnityAction_1_t2976_0_0_1;
FieldInfo InvokableCall_1_t2975____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2976_0_0_1/* type */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2975, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2975_FieldInfos[] =
{
	&InvokableCall_1_t2975____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2975_InvokableCall_1__ctor_m14579_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14579_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SetUserField>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m14579_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12830_gshared/* method */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2975_InvokableCall_1__ctor_m14579_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m14579_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2976_0_0_0;
static ParameterInfo InvokableCall_1_t2975_InvokableCall_1__ctor_m14580_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2976_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14580_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SetUserField>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m14580_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12831_gshared/* method */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2975_InvokableCall_1__ctor_m14580_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m14580_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t2975_InvokableCall_1_Invoke_m14581_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14581_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SetUserField>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m14581_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m12832_gshared/* method */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2975_InvokableCall_1_Invoke_m14581_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m14581_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2975_InvokableCall_1_Find_m14582_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m14582_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<SetUserField>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m14582_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m12833_gshared/* method */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2975_InvokableCall_1_Find_m14582_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m14582_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2975_MethodInfos[] =
{
	&InvokableCall_1__ctor_m14579_MethodInfo,
	&InvokableCall_1__ctor_m14580_MethodInfo,
	&InvokableCall_1_Invoke_m14581_MethodInfo,
	&InvokableCall_1_Find_m14582_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2975_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_1_Invoke_m14581_MethodInfo,
	&InvokableCall_1_Find_m14582_MethodInfo,
};
extern TypeInfo UnityAction_1_t2976_il2cpp_TypeInfo;
extern TypeInfo SetUserField_t144_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2975_RGCTXData[5] = 
{
	&UnityAction_1_t2976_0_0_0/* Type Usage */,
	&UnityAction_1_t2976_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSetUserField_t144_m27808_MethodInfo/* Method Usage */,
	&SetUserField_t144_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14584_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2975_0_0_0;
extern Il2CppType InvokableCall_1_t2975_1_0_0;
struct InvokableCall_1_t2975;
extern Il2CppGenericClass InvokableCall_1_t2975_GenericClass;
TypeInfo InvokableCall_1_t2975_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2975_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2975_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2975_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2975_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2975_0_0_0/* byval_arg */
	, &InvokableCall_1_t2975_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2975_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2975_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2975)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<SetUserField>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SetUserField>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SetUserField>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SetUserField>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SetUserField>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t2976_UnityAction_1__ctor_m14583_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m14583_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SetUserField>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m14583_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m12834_gshared/* method */
	, &UnityAction_1_t2976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_1_t2976_UnityAction_1__ctor_m14583_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m14583_GenericMethod/* genericMethod */

};
extern Il2CppType SetUserField_t144_0_0_0;
static ParameterInfo UnityAction_1_t2976_UnityAction_1_Invoke_m14584_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m14584_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SetUserField>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m14584_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m12835_gshared/* method */
	, &UnityAction_1_t2976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2976_UnityAction_1_Invoke_m14584_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m14584_GenericMethod/* genericMethod */

};
extern Il2CppType SetUserField_t144_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2976_UnityAction_1_BeginInvoke_m14585_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SetUserField_t144_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14585_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SetUserField>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m14585_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m12836_gshared/* method */
	, &UnityAction_1_t2976_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2976_UnityAction_1_BeginInvoke_m14585_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m14585_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t2976_UnityAction_1_EndInvoke_m14586_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14586_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SetUserField>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m14586_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m12837_gshared/* method */
	, &UnityAction_1_t2976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2976_UnityAction_1_EndInvoke_m14586_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m14586_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2976_MethodInfos[] =
{
	&UnityAction_1__ctor_m14583_MethodInfo,
	&UnityAction_1_Invoke_m14584_MethodInfo,
	&UnityAction_1_BeginInvoke_m14585_MethodInfo,
	&UnityAction_1_EndInvoke_m14586_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m14585_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m14586_MethodInfo;
static MethodInfo* UnityAction_1_t2976_VTable[] =
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
	&UnityAction_1_Invoke_m14584_MethodInfo,
	&UnityAction_1_BeginInvoke_m14585_MethodInfo,
	&UnityAction_1_EndInvoke_m14586_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t2976_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2976_1_0_0;
struct UnityAction_1_t2976;
extern Il2CppGenericClass UnityAction_1_t2976_GenericClass;
TypeInfo UnityAction_1_t2976_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2976_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2976_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2976_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2976_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2976_0_0_0/* byval_arg */
	, &UnityAction_1_t2976_1_0_0/* this_arg */
	, UnityAction_1_t2976_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2976_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2976)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5623_il2cpp_TypeInfo;

// SubmitFeedback
#include "AssemblyU2DCSharp_SubmitFeedback.h"


// T System.Collections.Generic.IEnumerator`1<SubmitFeedback>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SubmitFeedback>
extern MethodInfo IEnumerator_1_get_Current_m37182_MethodInfo;
static PropertyInfo IEnumerator_1_t5623____Current_PropertyInfo = 
{
	&IEnumerator_1_t5623_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37182_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5623_PropertyInfos[] =
{
	&IEnumerator_1_t5623____Current_PropertyInfo,
	NULL
};
extern Il2CppType SubmitFeedback_t145_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37182_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<SubmitFeedback>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37182_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5623_il2cpp_TypeInfo/* declaring_type */
	, &SubmitFeedback_t145_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37182_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5623_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37182_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5623_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5623_0_0_0;
extern Il2CppType IEnumerator_1_t5623_1_0_0;
struct IEnumerator_1_t5623;
extern Il2CppGenericClass IEnumerator_1_t5623_GenericClass;
TypeInfo IEnumerator_1_t5623_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5623_MethodInfos/* methods */
	, IEnumerator_1_t5623_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5623_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5623_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5623_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5623_0_0_0/* byval_arg */
	, &IEnumerator_1_t5623_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5623_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<SubmitFeedback>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2977_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SubmitFeedback>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"

extern TypeInfo SubmitFeedback_t145_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14591_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSubmitFeedback_t145_m27810_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SubmitFeedback>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SubmitFeedback>(System.Int32)
#define Array_InternalArray__get_Item_TisSubmitFeedback_t145_m27810(__this, p0, method) (SubmitFeedback_t145 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<SubmitFeedback>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<SubmitFeedback>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SubmitFeedback>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SubmitFeedback>::MoveNext()
// T System.Array/InternalEnumerator`1<SubmitFeedback>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SubmitFeedback>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2977____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2977, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2977____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2977, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2977_FieldInfos[] =
{
	&InternalEnumerator_1_t2977____array_0_FieldInfo,
	&InternalEnumerator_1_t2977____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14588_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2977____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2977_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14588_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2977____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2977_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14591_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2977_PropertyInfos[] =
{
	&InternalEnumerator_1_t2977____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2977____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2977_InternalEnumerator_1__ctor_m14587_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14587_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<SubmitFeedback>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14587_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2977_InternalEnumerator_1__ctor_m14587_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14587_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14588_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<SubmitFeedback>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14588_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14588_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14589_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<SubmitFeedback>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14589_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14589_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14590_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<SubmitFeedback>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14590_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14590_GenericMethod/* genericMethod */

};
extern Il2CppType SubmitFeedback_t145_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14591_GenericMethod;
// T System.Array/InternalEnumerator`1<SubmitFeedback>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14591_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* declaring_type */
	, &SubmitFeedback_t145_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14591_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2977_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14587_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14588_MethodInfo,
	&InternalEnumerator_1_Dispose_m14589_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14590_MethodInfo,
	&InternalEnumerator_1_get_Current_m14591_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14590_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14589_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2977_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14588_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14590_MethodInfo,
	&InternalEnumerator_1_Dispose_m14589_MethodInfo,
	&InternalEnumerator_1_get_Current_m14591_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2977_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5623_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2977_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5623_il2cpp_TypeInfo, 7},
};
extern TypeInfo SubmitFeedback_t145_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2977_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14591_MethodInfo/* Method Usage */,
	&SubmitFeedback_t145_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSubmitFeedback_t145_m27810_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2977_0_0_0;
extern Il2CppType InternalEnumerator_1_t2977_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2977_GenericClass;
TypeInfo InternalEnumerator_1_t2977_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2977_MethodInfos/* methods */
	, InternalEnumerator_1_t2977_PropertyInfos/* properties */
	, InternalEnumerator_1_t2977_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2977_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2977_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2977_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2977_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2977_1_0_0/* this_arg */
	, InternalEnumerator_1_t2977_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2977_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2977_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2977)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t7164_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SubmitFeedback>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SubmitFeedback>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SubmitFeedback>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SubmitFeedback>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SubmitFeedback>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SubmitFeedback>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SubmitFeedback>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SubmitFeedback>
extern MethodInfo ICollection_1_get_Count_m37183_MethodInfo;
static PropertyInfo ICollection_1_t7164____Count_PropertyInfo = 
{
	&ICollection_1_t7164_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37183_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37184_MethodInfo;
static PropertyInfo ICollection_1_t7164____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7164_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37184_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7164_PropertyInfos[] =
{
	&ICollection_1_t7164____Count_PropertyInfo,
	&ICollection_1_t7164____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37183_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<SubmitFeedback>::get_Count()
MethodInfo ICollection_1_get_Count_m37183_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37183_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37184_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<SubmitFeedback>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37184_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37184_GenericMethod/* genericMethod */

};
extern Il2CppType SubmitFeedback_t145_0_0_0;
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo ICollection_1_t7164_ICollection_1_Add_m37185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37185_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<SubmitFeedback>::Add(T)
MethodInfo ICollection_1_Add_m37185_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7164_ICollection_1_Add_m37185_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37185_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37186_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<SubmitFeedback>::Clear()
MethodInfo ICollection_1_Clear_m37186_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37186_GenericMethod/* genericMethod */

};
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo ICollection_1_t7164_ICollection_1_Contains_m37187_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37187_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<SubmitFeedback>::Contains(T)
MethodInfo ICollection_1_Contains_m37187_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7164_ICollection_1_Contains_m37187_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37187_GenericMethod/* genericMethod */

};
extern Il2CppType SubmitFeedbackU5BU5D_t5263_0_0_0;
extern Il2CppType SubmitFeedbackU5BU5D_t5263_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7164_ICollection_1_CopyTo_m37188_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SubmitFeedbackU5BU5D_t5263_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37188_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<SubmitFeedback>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37188_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7164_ICollection_1_CopyTo_m37188_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37188_GenericMethod/* genericMethod */

};
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo ICollection_1_t7164_ICollection_1_Remove_m37189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37189_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<SubmitFeedback>::Remove(T)
MethodInfo ICollection_1_Remove_m37189_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7164_ICollection_1_Remove_m37189_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37189_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7164_MethodInfos[] =
{
	&ICollection_1_get_Count_m37183_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37184_MethodInfo,
	&ICollection_1_Add_m37185_MethodInfo,
	&ICollection_1_Clear_m37186_MethodInfo,
	&ICollection_1_Contains_m37187_MethodInfo,
	&ICollection_1_CopyTo_m37188_MethodInfo,
	&ICollection_1_Remove_m37189_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7166_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7164_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7166_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7164_0_0_0;
extern Il2CppType ICollection_1_t7164_1_0_0;
struct ICollection_1_t7164;
extern Il2CppGenericClass ICollection_1_t7164_GenericClass;
TypeInfo ICollection_1_t7164_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7164_MethodInfos/* methods */
	, ICollection_1_t7164_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7164_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7164_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7164_0_0_0/* byval_arg */
	, &ICollection_1_t7164_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7164_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SubmitFeedback>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SubmitFeedback>
extern Il2CppType IEnumerator_1_t5623_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37190_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SubmitFeedback>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37190_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7166_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5623_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37190_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7166_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37190_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7166_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7166_0_0_0;
extern Il2CppType IEnumerable_1_t7166_1_0_0;
struct IEnumerable_1_t7166;
extern Il2CppGenericClass IEnumerable_1_t7166_GenericClass;
TypeInfo IEnumerable_1_t7166_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7166_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7166_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7166_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7166_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7166_0_0_0/* byval_arg */
	, &IEnumerable_1_t7166_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7166_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t7165_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SubmitFeedback>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SubmitFeedback>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SubmitFeedback>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SubmitFeedback>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SubmitFeedback>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SubmitFeedback>
extern MethodInfo IList_1_get_Item_m37191_MethodInfo;
extern MethodInfo IList_1_set_Item_m37192_MethodInfo;
static PropertyInfo IList_1_t7165____Item_PropertyInfo = 
{
	&IList_1_t7165_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37191_MethodInfo/* get */
	, &IList_1_set_Item_m37192_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7165_PropertyInfos[] =
{
	&IList_1_t7165____Item_PropertyInfo,
	NULL
};
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo IList_1_t7165_IList_1_IndexOf_m37193_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37193_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<SubmitFeedback>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37193_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7165_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7165_IList_1_IndexOf_m37193_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37193_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo IList_1_t7165_IList_1_Insert_m37194_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37194_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SubmitFeedback>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37194_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7165_IList_1_Insert_m37194_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37194_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7165_IList_1_RemoveAt_m37195_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37195_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SubmitFeedback>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37195_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7165_IList_1_RemoveAt_m37195_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37195_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7165_IList_1_get_Item_m37191_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SubmitFeedback_t145_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37191_GenericMethod;
// T System.Collections.Generic.IList`1<SubmitFeedback>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37191_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7165_il2cpp_TypeInfo/* declaring_type */
	, &SubmitFeedback_t145_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7165_IList_1_get_Item_m37191_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37191_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo IList_1_t7165_IList_1_set_Item_m37192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37192_GenericMethod;
// System.Void System.Collections.Generic.IList`1<SubmitFeedback>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37192_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7165_IList_1_set_Item_m37192_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37192_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7165_MethodInfos[] =
{
	&IList_1_IndexOf_m37193_MethodInfo,
	&IList_1_Insert_m37194_MethodInfo,
	&IList_1_RemoveAt_m37195_MethodInfo,
	&IList_1_get_Item_m37191_MethodInfo,
	&IList_1_set_Item_m37192_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7165_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7164_il2cpp_TypeInfo,
	&IEnumerable_1_t7166_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7165_0_0_0;
extern Il2CppType IList_1_t7165_1_0_0;
struct IList_1_t7165;
extern Il2CppGenericClass IList_1_t7165_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7165_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7165_MethodInfos/* methods */
	, IList_1_t7165_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7165_il2cpp_TypeInfo/* element_class */
	, IList_1_t7165_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7165_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7165_0_0_0/* byval_arg */
	, &IList_1_t7165_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7165_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// UnityEngine.Events.CachedInvokableCall`1<SubmitFeedback>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2978_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SubmitFeedback>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_15MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SubmitFeedback>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_11.h"
extern TypeInfo InvokableCall_1_t2979_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SubmitFeedback>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_11MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m14594_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m14596_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SubmitFeedback>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SubmitFeedback>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SubmitFeedback>
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t2978____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t2978_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2978, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2978_FieldInfos[] =
{
	&CachedInvokableCall_1_t2978____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2978_CachedInvokableCall_1__ctor_m14592_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m14592_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<SubmitFeedback>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m14592_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m12827_gshared/* method */
	, &CachedInvokableCall_1_t2978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2978_CachedInvokableCall_1__ctor_m14592_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m14592_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2978_CachedInvokableCall_1_Invoke_m14593_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m14593_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<SubmitFeedback>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m14593_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m12829_gshared/* method */
	, &CachedInvokableCall_1_t2978_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2978_CachedInvokableCall_1_Invoke_m14593_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m14593_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2978_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m14592_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14593_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m14593_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m14597_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2978_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14593_MethodInfo,
	&InvokableCall_1_Find_m14597_MethodInfo,
};
extern Il2CppType UnityAction_1_t2980_0_0_0;
extern TypeInfo UnityAction_1_t2980_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSubmitFeedback_t145_m27820_MethodInfo;
extern TypeInfo SubmitFeedback_t145_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m14599_MethodInfo;
extern TypeInfo SubmitFeedback_t145_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2978_RGCTXData[8] = 
{
	&UnityAction_1_t2980_0_0_0/* Type Usage */,
	&UnityAction_1_t2980_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSubmitFeedback_t145_m27820_MethodInfo/* Method Usage */,
	&SubmitFeedback_t145_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14599_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m14594_MethodInfo/* Method Usage */,
	&SubmitFeedback_t145_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m14596_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2978_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2978_1_0_0;
struct CachedInvokableCall_1_t2978;
extern Il2CppGenericClass CachedInvokableCall_1_t2978_GenericClass;
TypeInfo CachedInvokableCall_1_t2978_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2978_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2978_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2978_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2978_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2978_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2978_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2978_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2978_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2978_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2978)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<SubmitFeedback>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_18.h"
extern TypeInfo UnityAction_1_t2980_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SubmitFeedback>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_18MethodDeclarations.h"
struct BaseInvokableCall_t981;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SubmitFeedback>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SubmitFeedback>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSubmitFeedback_t145_m27820(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<SubmitFeedback>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SubmitFeedback>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SubmitFeedback>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SubmitFeedback>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SubmitFeedback>
extern Il2CppType UnityAction_1_t2980_0_0_1;
FieldInfo InvokableCall_1_t2979____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2980_0_0_1/* type */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2979, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2979_FieldInfos[] =
{
	&InvokableCall_1_t2979____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2979_InvokableCall_1__ctor_m14594_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14594_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SubmitFeedback>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m14594_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12830_gshared/* method */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2979_InvokableCall_1__ctor_m14594_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m14594_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2980_0_0_0;
static ParameterInfo InvokableCall_1_t2979_InvokableCall_1__ctor_m14595_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2980_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14595_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SubmitFeedback>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m14595_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12831_gshared/* method */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2979_InvokableCall_1__ctor_m14595_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m14595_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t2979_InvokableCall_1_Invoke_m14596_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14596_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<SubmitFeedback>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m14596_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m12832_gshared/* method */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2979_InvokableCall_1_Invoke_m14596_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m14596_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2979_InvokableCall_1_Find_m14597_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m14597_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<SubmitFeedback>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m14597_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m12833_gshared/* method */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2979_InvokableCall_1_Find_m14597_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m14597_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2979_MethodInfos[] =
{
	&InvokableCall_1__ctor_m14594_MethodInfo,
	&InvokableCall_1__ctor_m14595_MethodInfo,
	&InvokableCall_1_Invoke_m14596_MethodInfo,
	&InvokableCall_1_Find_m14597_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2979_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_1_Invoke_m14596_MethodInfo,
	&InvokableCall_1_Find_m14597_MethodInfo,
};
extern TypeInfo UnityAction_1_t2980_il2cpp_TypeInfo;
extern TypeInfo SubmitFeedback_t145_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2979_RGCTXData[5] = 
{
	&UnityAction_1_t2980_0_0_0/* Type Usage */,
	&UnityAction_1_t2980_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSubmitFeedback_t145_m27820_MethodInfo/* Method Usage */,
	&SubmitFeedback_t145_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14599_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2979_0_0_0;
extern Il2CppType InvokableCall_1_t2979_1_0_0;
struct InvokableCall_1_t2979;
extern Il2CppGenericClass InvokableCall_1_t2979_GenericClass;
TypeInfo InvokableCall_1_t2979_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2979_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2979_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2979_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2979_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2979_0_0_0/* byval_arg */
	, &InvokableCall_1_t2979_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2979_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2979_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2979)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<SubmitFeedback>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SubmitFeedback>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SubmitFeedback>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SubmitFeedback>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SubmitFeedback>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t2980_UnityAction_1__ctor_m14598_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m14598_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SubmitFeedback>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m14598_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m12834_gshared/* method */
	, &UnityAction_1_t2980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_1_t2980_UnityAction_1__ctor_m14598_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m14598_GenericMethod/* genericMethod */

};
extern Il2CppType SubmitFeedback_t145_0_0_0;
static ParameterInfo UnityAction_1_t2980_UnityAction_1_Invoke_m14599_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m14599_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SubmitFeedback>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m14599_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m12835_gshared/* method */
	, &UnityAction_1_t2980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2980_UnityAction_1_Invoke_m14599_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m14599_GenericMethod/* genericMethod */

};
extern Il2CppType SubmitFeedback_t145_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2980_UnityAction_1_BeginInvoke_m14600_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SubmitFeedback_t145_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14600_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SubmitFeedback>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m14600_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m12836_gshared/* method */
	, &UnityAction_1_t2980_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2980_UnityAction_1_BeginInvoke_m14600_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m14600_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t2980_UnityAction_1_EndInvoke_m14601_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14601_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<SubmitFeedback>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m14601_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m12837_gshared/* method */
	, &UnityAction_1_t2980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2980_UnityAction_1_EndInvoke_m14601_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m14601_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2980_MethodInfos[] =
{
	&UnityAction_1__ctor_m14598_MethodInfo,
	&UnityAction_1_Invoke_m14599_MethodInfo,
	&UnityAction_1_BeginInvoke_m14600_MethodInfo,
	&UnityAction_1_EndInvoke_m14601_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m14600_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m14601_MethodInfo;
static MethodInfo* UnityAction_1_t2980_VTable[] =
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
	&UnityAction_1_Invoke_m14599_MethodInfo,
	&UnityAction_1_BeginInvoke_m14600_MethodInfo,
	&UnityAction_1_EndInvoke_m14601_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t2980_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2980_1_0_0;
struct UnityAction_1_t2980;
extern Il2CppGenericClass UnityAction_1_t2980_GenericClass;
TypeInfo UnityAction_1_t2980_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2980_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2980_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2980_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2980_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2980_0_0_0/* byval_arg */
	, &UnityAction_1_t2980_1_0_0/* this_arg */
	, UnityAction_1_t2980_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2980_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2980)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t3326_il2cpp_TypeInfo;

// UnityTest.AssertionComponent
#include "AssemblyU2DCSharp_UnityTest_AssertionComponent.h"


// T System.Collections.Generic.IEnumerator`1<UnityTest.AssertionComponent>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.AssertionComponent>
extern MethodInfo IEnumerator_1_get_Current_m29079_MethodInfo;
static PropertyInfo IEnumerator_1_t3326____Current_PropertyInfo = 
{
	&IEnumerator_1_t3326_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m29079_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t3326_PropertyInfos[] =
{
	&IEnumerator_1_t3326____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssertionComponent_t148_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m29079_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.AssertionComponent>::get_Current()
MethodInfo IEnumerator_1_get_Current_m29079_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t3326_il2cpp_TypeInfo/* declaring_type */
	, &AssertionComponent_t148_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m29079_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t3326_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m29079_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t3326_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t3326_0_0_0;
extern Il2CppType IEnumerator_1_t3326_1_0_0;
struct IEnumerator_1_t3326;
extern Il2CppGenericClass IEnumerator_1_t3326_GenericClass;
TypeInfo IEnumerator_1_t3326_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t3326_MethodInfos/* methods */
	, IEnumerator_1_t3326_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t3326_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t3326_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t3326_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t3326_0_0_0/* byval_arg */
	, &IEnumerator_1_t3326_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t3326_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2981_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63MethodDeclarations.h"

extern TypeInfo AssertionComponent_t148_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14606_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssertionComponent_t148_m27822_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.AssertionComponent>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.AssertionComponent>(System.Int32)
#define Array_InternalArray__get_Item_TisAssertionComponent_t148_m27822(__this, p0, method) (AssertionComponent_t148 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2981____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2981, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2981____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2981, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2981_FieldInfos[] =
{
	&InternalEnumerator_1_t2981____array_0_FieldInfo,
	&InternalEnumerator_1_t2981____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14603_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2981____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2981_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14603_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2981____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2981_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14606_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2981_PropertyInfos[] =
{
	&InternalEnumerator_1_t2981____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2981____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2981_InternalEnumerator_1__ctor_m14602_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14602_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14602_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2981_InternalEnumerator_1__ctor_m14602_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14602_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14603_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14603_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14603_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14604_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14604_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14604_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14605_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14605_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14605_GenericMethod/* genericMethod */

};
extern Il2CppType AssertionComponent_t148_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14606_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.AssertionComponent>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14606_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* declaring_type */
	, &AssertionComponent_t148_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14606_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2981_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14602_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14603_MethodInfo,
	&InternalEnumerator_1_Dispose_m14604_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14605_MethodInfo,
	&InternalEnumerator_1_get_Current_m14606_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14605_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14604_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2981_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14603_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14605_MethodInfo,
	&InternalEnumerator_1_Dispose_m14604_MethodInfo,
	&InternalEnumerator_1_get_Current_m14606_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2981_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t3326_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2981_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t3326_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssertionComponent_t148_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2981_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14606_MethodInfo/* Method Usage */,
	&AssertionComponent_t148_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssertionComponent_t148_m27822_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2981_0_0_0;
extern Il2CppType InternalEnumerator_1_t2981_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2981_GenericClass;
TypeInfo InternalEnumerator_1_t2981_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2981_MethodInfos/* methods */
	, InternalEnumerator_1_t2981_PropertyInfos/* properties */
	, InternalEnumerator_1_t2981_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2981_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2981_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2981_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2981_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2981_1_0_0/* this_arg */
	, InternalEnumerator_1_t2981_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2981_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2981_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2981)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t3329_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>
extern MethodInfo ICollection_1_get_Count_m29061_MethodInfo;
static PropertyInfo ICollection_1_t3329____Count_PropertyInfo = 
{
	&ICollection_1_t3329_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m29061_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37196_MethodInfo;
static PropertyInfo ICollection_1_t3329____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t3329_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37196_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t3329_PropertyInfos[] =
{
	&ICollection_1_t3329____Count_PropertyInfo,
	&ICollection_1_t3329____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m29061_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::get_Count()
MethodInfo ICollection_1_get_Count_m29061_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m29061_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37196_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37196_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37196_GenericMethod/* genericMethod */

};
extern Il2CppType AssertionComponent_t148_0_0_0;
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo ICollection_1_t3329_ICollection_1_Add_m37197_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37197_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Add(T)
MethodInfo ICollection_1_Add_m37197_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t3329_ICollection_1_Add_m37197_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37197_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37198_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Clear()
MethodInfo ICollection_1_Clear_m37198_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37198_GenericMethod/* genericMethod */

};
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo ICollection_1_t3329_ICollection_1_Contains_m37199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37199_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Contains(T)
MethodInfo ICollection_1_Contains_m37199_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t3329_ICollection_1_Contains_m37199_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37199_GenericMethod/* genericMethod */

};
extern Il2CppType AssertionComponentU5BU5D_t155_0_0_0;
extern Il2CppType AssertionComponentU5BU5D_t155_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t3329_ICollection_1_CopyTo_m29062_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssertionComponentU5BU5D_t155_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m29062_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m29062_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t3329_ICollection_1_CopyTo_m29062_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m29062_GenericMethod/* genericMethod */

};
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo ICollection_1_t3329_ICollection_1_Remove_m37200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37200_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.AssertionComponent>::Remove(T)
MethodInfo ICollection_1_Remove_m37200_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t3329_ICollection_1_Remove_m37200_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37200_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t3329_MethodInfos[] =
{
	&ICollection_1_get_Count_m29061_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37196_MethodInfo,
	&ICollection_1_Add_m37197_MethodInfo,
	&ICollection_1_Clear_m37198_MethodInfo,
	&ICollection_1_Contains_m37199_MethodInfo,
	&ICollection_1_CopyTo_m29062_MethodInfo,
	&ICollection_1_Remove_m37200_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t3325_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t3329_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t3325_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t3329_0_0_0;
extern Il2CppType ICollection_1_t3329_1_0_0;
struct ICollection_1_t3329;
extern Il2CppGenericClass ICollection_1_t3329_GenericClass;
TypeInfo ICollection_1_t3329_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t3329_MethodInfos/* methods */
	, ICollection_1_t3329_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t3329_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t3329_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t3329_0_0_0/* byval_arg */
	, &ICollection_1_t3329_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t3329_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.AssertionComponent>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.AssertionComponent>
extern Il2CppType IEnumerator_1_t3326_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m29078_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.AssertionComponent>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m29078_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t3325_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t3326_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m29078_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t3325_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m29078_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t3325_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t3325_0_0_0;
extern Il2CppType IEnumerable_1_t3325_1_0_0;
struct IEnumerable_1_t3325;
extern Il2CppGenericClass IEnumerable_1_t3325_GenericClass;
TypeInfo IEnumerable_1_t3325_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t3325_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t3325_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t3325_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t3325_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t3325_0_0_0/* byval_arg */
	, &IEnumerable_1_t3325_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t3325_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t3334_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.AssertionComponent>
extern MethodInfo IList_1_get_Item_m37201_MethodInfo;
extern MethodInfo IList_1_set_Item_m37202_MethodInfo;
static PropertyInfo IList_1_t3334____Item_PropertyInfo = 
{
	&IList_1_t3334_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37201_MethodInfo/* get */
	, &IList_1_set_Item_m37202_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t3334_PropertyInfos[] =
{
	&IList_1_t3334____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo IList_1_t3334_IList_1_IndexOf_m37203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37203_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37203_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t3334_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t3334_IList_1_IndexOf_m37203_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37203_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo IList_1_t3334_IList_1_Insert_m37204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37204_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37204_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t3334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t3334_IList_1_Insert_m37204_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37204_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t3334_IList_1_RemoveAt_m37205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37205_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37205_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t3334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t3334_IList_1_RemoveAt_m37205_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37205_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t3334_IList_1_get_Item_m37201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssertionComponent_t148_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37201_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37201_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t3334_il2cpp_TypeInfo/* declaring_type */
	, &AssertionComponent_t148_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t3334_IList_1_get_Item_m37201_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37201_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo IList_1_t3334_IList_1_set_Item_m37202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37202_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.AssertionComponent>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37202_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t3334_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t3334_IList_1_set_Item_m37202_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37202_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t3334_MethodInfos[] =
{
	&IList_1_IndexOf_m37203_MethodInfo,
	&IList_1_Insert_m37204_MethodInfo,
	&IList_1_RemoveAt_m37205_MethodInfo,
	&IList_1_get_Item_m37201_MethodInfo,
	&IList_1_set_Item_m37202_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t3334_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t3329_il2cpp_TypeInfo,
	&IEnumerable_1_t3325_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t3334_0_0_0;
extern Il2CppType IList_1_t3334_1_0_0;
struct IList_1_t3334;
extern Il2CppGenericClass IList_1_t3334_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t3334_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t3334_MethodInfos/* methods */
	, IList_1_t3334_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t3334_il2cpp_TypeInfo/* element_class */
	, IList_1_t3334_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t3334_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t3334_0_0_0/* byval_arg */
	, &IList_1_t3334_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t3334_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t7167_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>
extern MethodInfo ICollection_1_get_Count_m37206_MethodInfo;
static PropertyInfo ICollection_1_t7167____Count_PropertyInfo = 
{
	&ICollection_1_t7167_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37206_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37207_MethodInfo;
static PropertyInfo ICollection_1_t7167____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7167_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7167_PropertyInfos[] =
{
	&ICollection_1_t7167____Count_PropertyInfo,
	&ICollection_1_t7167____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37206_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::get_Count()
MethodInfo ICollection_1_get_Count_m37206_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37206_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37207_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37207_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37207_GenericMethod/* genericMethod */

};
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
static ParameterInfo ICollection_1_t7167_ICollection_1_Add_m37208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IAssertionComponentConfigurator_t297_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37208_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Add(T)
MethodInfo ICollection_1_Add_m37208_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7167_ICollection_1_Add_m37208_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37208_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37209_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Clear()
MethodInfo ICollection_1_Clear_m37209_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37209_GenericMethod/* genericMethod */

};
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
static ParameterInfo ICollection_1_t7167_ICollection_1_Contains_m37210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IAssertionComponentConfigurator_t297_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37210_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Contains(T)
MethodInfo ICollection_1_Contains_m37210_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7167_ICollection_1_Contains_m37210_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37210_GenericMethod/* genericMethod */

};
extern Il2CppType IAssertionComponentConfiguratorU5BU5D_t5264_0_0_0;
extern Il2CppType IAssertionComponentConfiguratorU5BU5D_t5264_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7167_ICollection_1_CopyTo_m37211_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IAssertionComponentConfiguratorU5BU5D_t5264_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37211_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37211_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7167_ICollection_1_CopyTo_m37211_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37211_GenericMethod/* genericMethod */

};
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
static ParameterInfo ICollection_1_t7167_ICollection_1_Remove_m37212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IAssertionComponentConfigurator_t297_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37212_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.IAssertionComponentConfigurator>::Remove(T)
MethodInfo ICollection_1_Remove_m37212_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7167_ICollection_1_Remove_m37212_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37212_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7167_MethodInfos[] =
{
	&ICollection_1_get_Count_m37206_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37207_MethodInfo,
	&ICollection_1_Add_m37208_MethodInfo,
	&ICollection_1_Clear_m37209_MethodInfo,
	&ICollection_1_Contains_m37210_MethodInfo,
	&ICollection_1_CopyTo_m37211_MethodInfo,
	&ICollection_1_Remove_m37212_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7169_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7167_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7169_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7167_0_0_0;
extern Il2CppType ICollection_1_t7167_1_0_0;
struct ICollection_1_t7167;
extern Il2CppGenericClass ICollection_1_t7167_GenericClass;
TypeInfo ICollection_1_t7167_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7167_MethodInfos/* methods */
	, ICollection_1_t7167_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7167_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7167_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7167_0_0_0/* byval_arg */
	, &ICollection_1_t7167_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7167_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.IAssertionComponentConfigurator>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.IAssertionComponentConfigurator>
extern Il2CppType IEnumerator_1_t5626_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37213_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.IAssertionComponentConfigurator>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37213_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7169_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5626_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37213_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7169_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37213_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7169_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7169_0_0_0;
extern Il2CppType IEnumerable_1_t7169_1_0_0;
struct IEnumerable_1_t7169;
extern Il2CppGenericClass IEnumerable_1_t7169_GenericClass;
TypeInfo IEnumerable_1_t7169_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7169_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7169_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7169_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7169_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7169_0_0_0/* byval_arg */
	, &IEnumerable_1_t7169_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7169_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t5626_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityTest.IAssertionComponentConfigurator>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.IAssertionComponentConfigurator>
extern MethodInfo IEnumerator_1_get_Current_m37214_MethodInfo;
static PropertyInfo IEnumerator_1_t5626____Current_PropertyInfo = 
{
	&IEnumerator_1_t5626_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37214_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5626_PropertyInfos[] =
{
	&IEnumerator_1_t5626____Current_PropertyInfo,
	NULL
};
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37214_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.IAssertionComponentConfigurator>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37214_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5626_il2cpp_TypeInfo/* declaring_type */
	, &IAssertionComponentConfigurator_t297_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37214_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5626_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37214_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5626_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5626_0_0_0;
extern Il2CppType IEnumerator_1_t5626_1_0_0;
struct IEnumerator_1_t5626;
extern Il2CppGenericClass IEnumerator_1_t5626_GenericClass;
TypeInfo IEnumerator_1_t5626_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5626_MethodInfos/* methods */
	, IEnumerator_1_t5626_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5626_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5626_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5626_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5626_0_0_0/* byval_arg */
	, &IEnumerator_1_t5626_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5626_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2982_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64MethodDeclarations.h"

extern TypeInfo IAssertionComponentConfigurator_t297_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14611_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIAssertionComponentConfigurator_t297_m27833_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.IAssertionComponentConfigurator>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.IAssertionComponentConfigurator>(System.Int32)
#define Array_InternalArray__get_Item_TisIAssertionComponentConfigurator_t297_m27833(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2982____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2982, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2982____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2982, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2982_FieldInfos[] =
{
	&InternalEnumerator_1_t2982____array_0_FieldInfo,
	&InternalEnumerator_1_t2982____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14608_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2982____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2982_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14608_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2982____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2982_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14611_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2982_PropertyInfos[] =
{
	&InternalEnumerator_1_t2982____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2982____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2982_InternalEnumerator_1__ctor_m14607_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14607_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14607_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2982_InternalEnumerator_1__ctor_m14607_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14607_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14608_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14608_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14608_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14609_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14609_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14609_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14610_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14610_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14610_GenericMethod/* genericMethod */

};
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14611_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.IAssertionComponentConfigurator>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14611_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* declaring_type */
	, &IAssertionComponentConfigurator_t297_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14611_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2982_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14607_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14608_MethodInfo,
	&InternalEnumerator_1_Dispose_m14609_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14610_MethodInfo,
	&InternalEnumerator_1_get_Current_m14611_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14610_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14609_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2982_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14608_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14610_MethodInfo,
	&InternalEnumerator_1_Dispose_m14609_MethodInfo,
	&InternalEnumerator_1_get_Current_m14611_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2982_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5626_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2982_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5626_il2cpp_TypeInfo, 7},
};
extern TypeInfo IAssertionComponentConfigurator_t297_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2982_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14611_MethodInfo/* Method Usage */,
	&IAssertionComponentConfigurator_t297_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIAssertionComponentConfigurator_t297_m27833_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2982_0_0_0;
extern Il2CppType InternalEnumerator_1_t2982_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2982_GenericClass;
TypeInfo InternalEnumerator_1_t2982_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2982_MethodInfos/* methods */
	, InternalEnumerator_1_t2982_PropertyInfos/* properties */
	, InternalEnumerator_1_t2982_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2982_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2982_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2982_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2982_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2982_1_0_0/* this_arg */
	, InternalEnumerator_1_t2982_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2982_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2982_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2982)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t7168_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>
extern MethodInfo IList_1_get_Item_m37215_MethodInfo;
extern MethodInfo IList_1_set_Item_m37216_MethodInfo;
static PropertyInfo IList_1_t7168____Item_PropertyInfo = 
{
	&IList_1_t7168_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37215_MethodInfo/* get */
	, &IList_1_set_Item_m37216_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7168_PropertyInfos[] =
{
	&IList_1_t7168____Item_PropertyInfo,
	NULL
};
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
static ParameterInfo IList_1_t7168_IList_1_IndexOf_m37217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IAssertionComponentConfigurator_t297_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37217_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37217_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7168_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7168_IList_1_IndexOf_m37217_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37217_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
static ParameterInfo IList_1_t7168_IList_1_Insert_m37218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IAssertionComponentConfigurator_t297_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37218_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37218_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7168_IList_1_Insert_m37218_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37218_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7168_IList_1_RemoveAt_m37219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37219_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37219_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7168_IList_1_RemoveAt_m37219_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37219_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7168_IList_1_get_Item_m37215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37215_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37215_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7168_il2cpp_TypeInfo/* declaring_type */
	, &IAssertionComponentConfigurator_t297_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7168_IList_1_get_Item_m37215_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37215_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IAssertionComponentConfigurator_t297_0_0_0;
static ParameterInfo IList_1_t7168_IList_1_set_Item_m37216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IAssertionComponentConfigurator_t297_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37216_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.IAssertionComponentConfigurator>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37216_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7168_IList_1_set_Item_m37216_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37216_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7168_MethodInfos[] =
{
	&IList_1_IndexOf_m37217_MethodInfo,
	&IList_1_Insert_m37218_MethodInfo,
	&IList_1_RemoveAt_m37219_MethodInfo,
	&IList_1_get_Item_m37215_MethodInfo,
	&IList_1_set_Item_m37216_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7168_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7167_il2cpp_TypeInfo,
	&IEnumerable_1_t7169_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7168_0_0_0;
extern Il2CppType IList_1_t7168_1_0_0;
struct IList_1_t7168;
extern Il2CppGenericClass IList_1_t7168_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7168_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7168_MethodInfos/* methods */
	, IList_1_t7168_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7168_il2cpp_TypeInfo/* element_class */
	, IList_1_t7168_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7168_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7168_0_0_0/* byval_arg */
	, &IList_1_t7168_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7168_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.AssertionComponent>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2983_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.AssertionComponent>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_16MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_12.h"
extern TypeInfo InvokableCall_1_t2984_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_12MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m14614_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m14616_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.AssertionComponent>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.AssertionComponent>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityTest.AssertionComponent>
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t2983____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t2983_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2983, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2983_FieldInfos[] =
{
	&CachedInvokableCall_1_t2983____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2983_CachedInvokableCall_1__ctor_m14612_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m14612_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.AssertionComponent>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m14612_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m12827_gshared/* method */
	, &CachedInvokableCall_1_t2983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2983_CachedInvokableCall_1__ctor_m14612_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m14612_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2983_CachedInvokableCall_1_Invoke_m14613_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m14613_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.AssertionComponent>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m14613_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m12829_gshared/* method */
	, &CachedInvokableCall_1_t2983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2983_CachedInvokableCall_1_Invoke_m14613_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m14613_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2983_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m14612_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14613_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m14613_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m14617_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2983_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14613_MethodInfo,
	&InvokableCall_1_Find_m14617_MethodInfo,
};
extern Il2CppType UnityAction_1_t2985_0_0_0;
extern TypeInfo UnityAction_1_t2985_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisAssertionComponent_t148_m27843_MethodInfo;
extern TypeInfo AssertionComponent_t148_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m14619_MethodInfo;
extern TypeInfo AssertionComponent_t148_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2983_RGCTXData[8] = 
{
	&UnityAction_1_t2985_0_0_0/* Type Usage */,
	&UnityAction_1_t2985_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisAssertionComponent_t148_m27843_MethodInfo/* Method Usage */,
	&AssertionComponent_t148_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14619_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m14614_MethodInfo/* Method Usage */,
	&AssertionComponent_t148_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m14616_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2983_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2983_1_0_0;
struct CachedInvokableCall_1_t2983;
extern Il2CppGenericClass CachedInvokableCall_1_t2983_GenericClass;
TypeInfo CachedInvokableCall_1_t2983_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2983_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2983_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2983_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2983_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2983_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2983_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2983_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2983_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2983_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2983)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_19.h"
extern TypeInfo UnityAction_1_t2985_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_19MethodDeclarations.h"
struct BaseInvokableCall_t981;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.AssertionComponent>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.AssertionComponent>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisAssertionComponent_t148_m27843(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>
extern Il2CppType UnityAction_1_t2985_0_0_1;
FieldInfo InvokableCall_1_t2984____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2985_0_0_1/* type */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2984, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2984_FieldInfos[] =
{
	&InvokableCall_1_t2984____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2984_InvokableCall_1__ctor_m14614_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14614_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m14614_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12830_gshared/* method */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2984_InvokableCall_1__ctor_m14614_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m14614_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2985_0_0_0;
static ParameterInfo InvokableCall_1_t2984_InvokableCall_1__ctor_m14615_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2985_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14615_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m14615_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12831_gshared/* method */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2984_InvokableCall_1__ctor_m14615_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m14615_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t2984_InvokableCall_1_Invoke_m14616_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14616_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m14616_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m12832_gshared/* method */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2984_InvokableCall_1_Invoke_m14616_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m14616_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2984_InvokableCall_1_Find_m14617_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m14617_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.AssertionComponent>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m14617_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m12833_gshared/* method */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2984_InvokableCall_1_Find_m14617_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m14617_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2984_MethodInfos[] =
{
	&InvokableCall_1__ctor_m14614_MethodInfo,
	&InvokableCall_1__ctor_m14615_MethodInfo,
	&InvokableCall_1_Invoke_m14616_MethodInfo,
	&InvokableCall_1_Find_m14617_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2984_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_1_Invoke_m14616_MethodInfo,
	&InvokableCall_1_Find_m14617_MethodInfo,
};
extern TypeInfo UnityAction_1_t2985_il2cpp_TypeInfo;
extern TypeInfo AssertionComponent_t148_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2984_RGCTXData[5] = 
{
	&UnityAction_1_t2985_0_0_0/* Type Usage */,
	&UnityAction_1_t2985_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisAssertionComponent_t148_m27843_MethodInfo/* Method Usage */,
	&AssertionComponent_t148_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14619_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2984_0_0_0;
extern Il2CppType InvokableCall_1_t2984_1_0_0;
struct InvokableCall_1_t2984;
extern Il2CppGenericClass InvokableCall_1_t2984_GenericClass;
TypeInfo InvokableCall_1_t2984_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2984_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2984_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2984_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2984_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2984_0_0_0/* byval_arg */
	, &InvokableCall_1_t2984_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2984_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2984_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2984)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t2985_UnityAction_1__ctor_m14618_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m14618_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m14618_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m12834_gshared/* method */
	, &UnityAction_1_t2985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_1_t2985_UnityAction_1__ctor_m14618_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m14618_GenericMethod/* genericMethod */

};
extern Il2CppType AssertionComponent_t148_0_0_0;
static ParameterInfo UnityAction_1_t2985_UnityAction_1_Invoke_m14619_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m14619_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m14619_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m12835_gshared/* method */
	, &UnityAction_1_t2985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2985_UnityAction_1_Invoke_m14619_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m14619_GenericMethod/* genericMethod */

};
extern Il2CppType AssertionComponent_t148_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2985_UnityAction_1_BeginInvoke_m14620_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &AssertionComponent_t148_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14620_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m14620_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m12836_gshared/* method */
	, &UnityAction_1_t2985_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2985_UnityAction_1_BeginInvoke_m14620_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m14620_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t2985_UnityAction_1_EndInvoke_m14621_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14621_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.AssertionComponent>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m14621_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m12837_gshared/* method */
	, &UnityAction_1_t2985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2985_UnityAction_1_EndInvoke_m14621_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m14621_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2985_MethodInfos[] =
{
	&UnityAction_1__ctor_m14618_MethodInfo,
	&UnityAction_1_Invoke_m14619_MethodInfo,
	&UnityAction_1_BeginInvoke_m14620_MethodInfo,
	&UnityAction_1_EndInvoke_m14621_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m14620_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m14621_MethodInfo;
static MethodInfo* UnityAction_1_t2985_VTable[] =
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
	&UnityAction_1_Invoke_m14619_MethodInfo,
	&UnityAction_1_BeginInvoke_m14620_MethodInfo,
	&UnityAction_1_EndInvoke_m14621_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t2985_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2985_1_0_0;
struct UnityAction_1_t2985;
extern Il2CppGenericClass UnityAction_1_t2985_GenericClass;
TypeInfo UnityAction_1_t2985_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2985_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2985_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2985_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2985_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2985_0_0_0/* byval_arg */
	, &UnityAction_1_t2985_1_0_0/* this_arg */
	, UnityAction_1_t2985_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2985)/* instance_size */
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
// System.Func`2<UnityEngine.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t293_il2cpp_TypeInfo;
// System.Func`2<UnityEngine.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"



// System.Void System.Func`2<UnityEngine.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Func_2__ctor_m1195_MethodInfo;
 void Func_2__ctor_m1195 (Func_2_t293 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<UnityEngine.Object,System.Boolean>::Invoke(T)
extern MethodInfo Func_2_Invoke_m14622_MethodInfo;
 bool Func_2_Invoke_m14622 (Func_2_t293 * __this, Object_t151 * ___arg1, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m14622((Func_2_t293 *)__this->___prev_9,___arg1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t151 * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t151 * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<UnityEngine.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern MethodInfo Func_2_BeginInvoke_m14623_MethodInfo;
 Object_t * Func_2_BeginInvoke_m14623 (Func_2_t293 * __this, Object_t151 * ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<UnityEngine.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern MethodInfo Func_2_EndInvoke_m14624_MethodInfo;
 bool Func_2_EndInvoke_m14624 (Func_2_t293 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<UnityEngine.Object,System.Boolean>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo Func_2_t293_Func_2__ctor_m1195_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2__ctor_m1195_GenericMethod;
// System.Void System.Func`2<UnityEngine.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
MethodInfo Func_2__ctor_m1195_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Func_2__ctor_m1195/* method */
	, &Func_2_t293_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, Func_2_t293_Func_2__ctor_m1195_ParameterInfos/* parameters */
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
	, &Func_2__ctor_m1195_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t151_0_0_0;
static ParameterInfo Func_2_t293_Func_2_Invoke_m14622_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_Invoke_m14622_GenericMethod;
// TResult System.Func`2<UnityEngine.Object,System.Boolean>::Invoke(T)
MethodInfo Func_2_Invoke_m14622_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Func_2_Invoke_m14622/* method */
	, &Func_2_t293_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, Func_2_t293_Func_2_Invoke_m14622_ParameterInfos/* parameters */
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
	, &Func_2_Invoke_m14622_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Func_2_t293_Func_2_BeginInvoke_m14623_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_BeginInvoke_m14623_GenericMethod;
// System.IAsyncResult System.Func`2<UnityEngine.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Func_2_BeginInvoke_m14623_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Func_2_BeginInvoke_m14623/* method */
	, &Func_2_t293_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Func_2_t293_Func_2_BeginInvoke_m14623_ParameterInfos/* parameters */
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
	, &Func_2_BeginInvoke_m14623_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo Func_2_t293_Func_2_EndInvoke_m14624_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_EndInvoke_m14624_GenericMethod;
// TResult System.Func`2<UnityEngine.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
MethodInfo Func_2_EndInvoke_m14624_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Func_2_EndInvoke_m14624/* method */
	, &Func_2_t293_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, Func_2_t293_Func_2_EndInvoke_m14624_ParameterInfos/* parameters */
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
	, &Func_2_EndInvoke_m14624_GenericMethod/* genericMethod */

};
static MethodInfo* Func_2_t293_MethodInfos[] =
{
	&Func_2__ctor_m1195_MethodInfo,
	&Func_2_Invoke_m14622_MethodInfo,
	&Func_2_BeginInvoke_m14623_MethodInfo,
	&Func_2_EndInvoke_m14624_MethodInfo,
	NULL
};
static MethodInfo* Func_2_t293_VTable[] =
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
	&Func_2_Invoke_m14622_MethodInfo,
	&Func_2_BeginInvoke_m14623_MethodInfo,
	&Func_2_EndInvoke_m14624_MethodInfo,
};
static Il2CppInterfaceOffsetPair Func_2_t293_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType Func_2_t293_0_0_0;
extern Il2CppType Func_2_t293_1_0_0;
struct Func_2_t293;
extern Il2CppGenericClass Func_2_t293_GenericClass;
TypeInfo Func_2_t293_il2cpp_TypeInfo = 
{
	&g_System_Core_dll_Image/* image */
	, NULL/* gc_desc */
	, "Func`2"/* name */
	, "System"/* namespaze */
	, Func_2_t293_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Func_2_t293_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Func_2_t293_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Func_2_t293_il2cpp_TypeInfo/* cast_class */
	, &Func_2_t293_0_0_0/* byval_arg */
	, &Func_2_t293_1_0_0/* this_arg */
	, Func_2_t293_InterfacesOffsets/* interface_offsets */
	, &Func_2_t293_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Func_2_t293)/* instance_size */
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
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t294_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Func_2__ctor_m14625_MethodInfo;
 void Func_2__ctor_m14625 (Func_2_t294 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern MethodInfo Func_2_Invoke_m14626_MethodInfo;
 bool Func_2_Invoke_m14626 (Func_2_t294 * __this, Object_t * ___arg1, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m14626((Func_2_t294 *)__this->___prev_9,___arg1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern MethodInfo Func_2_BeginInvoke_m14627_MethodInfo;
 Object_t * Func_2_BeginInvoke_m14627 (Func_2_t294 * __this, Object_t * ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern MethodInfo Func_2_EndInvoke_m14628_MethodInfo;
 bool Func_2_EndInvoke_m14628 (Func_2_t294 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<System.Object,System.Boolean>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo Func_2_t294_Func_2__ctor_m14625_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2__ctor_m14625_GenericMethod;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
MethodInfo Func_2__ctor_m14625_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Func_2__ctor_m14625/* method */
	, &Func_2_t294_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, Func_2_t294_Func_2__ctor_m14625_ParameterInfos/* parameters */
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
	, &Func_2__ctor_m14625_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Func_2_t294_Func_2_Invoke_m14626_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_Invoke_m14626_GenericMethod;
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
MethodInfo Func_2_Invoke_m14626_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Func_2_Invoke_m14626/* method */
	, &Func_2_t294_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, Func_2_t294_Func_2_Invoke_m14626_ParameterInfos/* parameters */
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
	, &Func_2_Invoke_m14626_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Func_2_t294_Func_2_BeginInvoke_m14627_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_BeginInvoke_m14627_GenericMethod;
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Func_2_BeginInvoke_m14627_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Func_2_BeginInvoke_m14627/* method */
	, &Func_2_t294_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Func_2_t294_Func_2_BeginInvoke_m14627_ParameterInfos/* parameters */
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
	, &Func_2_BeginInvoke_m14627_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo Func_2_t294_Func_2_EndInvoke_m14628_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_EndInvoke_m14628_GenericMethod;
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
MethodInfo Func_2_EndInvoke_m14628_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Func_2_EndInvoke_m14628/* method */
	, &Func_2_t294_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, Func_2_t294_Func_2_EndInvoke_m14628_ParameterInfos/* parameters */
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
	, &Func_2_EndInvoke_m14628_GenericMethod/* genericMethod */

};
static MethodInfo* Func_2_t294_MethodInfos[] =
{
	&Func_2__ctor_m14625_MethodInfo,
	&Func_2_Invoke_m14626_MethodInfo,
	&Func_2_BeginInvoke_m14627_MethodInfo,
	&Func_2_EndInvoke_m14628_MethodInfo,
	NULL
};
static MethodInfo* Func_2_t294_VTable[] =
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
	&Func_2_Invoke_m14626_MethodInfo,
	&Func_2_BeginInvoke_m14627_MethodInfo,
	&Func_2_EndInvoke_m14628_MethodInfo,
};
static Il2CppInterfaceOffsetPair Func_2_t294_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType Func_2_t294_0_0_0;
extern Il2CppType Func_2_t294_1_0_0;
struct Func_2_t294;
extern Il2CppGenericClass Func_2_t294_GenericClass;
TypeInfo Func_2_t294_il2cpp_TypeInfo = 
{
	&g_System_Core_dll_Image/* image */
	, NULL/* gc_desc */
	, "Func`2"/* name */
	, "System"/* namespaze */
	, Func_2_t294_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Func_2_t294_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Func_2_t294_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Func_2_t294_il2cpp_TypeInfo/* cast_class */
	, &Func_2_t294_0_0_0/* byval_arg */
	, &Func_2_t294_1_0_0/* this_arg */
	, Func_2_t294_InterfacesOffsets/* interface_offsets */
	, &Func_2_t294_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Func_2_t294)/* instance_size */
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
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_1MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo IEnumerator_1_t88_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t87_il2cpp_TypeInfo;
extern TypeInfo Boolean_t74_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern MethodInfo Object__ctor_m499_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m554_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m496_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m497_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m495_MethodInfo;
extern MethodInfo IDisposable_Dispose_m488_MethodInfo;


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
 void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method)
{
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_MethodInfo;
 Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_MethodInfo;
 Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_MethodInfo;
 Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
 Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___$PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m554(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m554_MethodInfo);
		if ((((uint32_t)L_1) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_2;
		Object_t* L_3 = (__this->___U3C$U3Esource_6);
		NullCheck(V_0);
		V_0->___source_0 = L_3;
		Func_2_t294 * L_4 = (__this->___U3C$U3Epredicate_7);
		NullCheck(V_0);
		V_0->___predicate_3 = L_4;
		return V_0;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_MethodInfo;
 bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t leaveInstructions[1] = {0};
	Exception_t82 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t82 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		V_1 = 0;
		if (V_0 == 0)
		{
			goto IL_0023;
		}
		if (V_0 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00be;
	}

IL_0023:
	{
		Object_t* L_1 = (__this->___source_0);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_1);
		__this->___U3C$s_97U3E__0_1 = L_2;
		V_0 = ((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			if (((uint32_t)(V_0-1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			Object_t* L_3 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_3);
			__this->___U3CelementU3E__1_2 = L_4;
			Func_2_t294 * L_5 = (__this->___predicate_3);
			Object_t * L_6 = (__this->___U3CelementU3E__1_2);
			NullCheck(L_5);
			bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_5, L_6);
			if (!L_7)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			Object_t * L_8 = (__this->___U3CelementU3E__1_2);
			__this->___$current_5 = L_8;
			__this->___$PC_4 = 1;
			V_1 = 1;
			// IL_0084: leave IL_00c0
			leaveInstructions[0] = 0xC0; // 1
			THROW_SENTINEL(IL_00c0);
			// finally target depth: 1
		}

IL_0089:
		{
			Object_t* L_9 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m495_MethodInfo, L_9);
			if (L_10)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			// IL_0099: leave IL_00b7
			leaveInstructions[0] = 0xB7; // 1
			THROW_SENTINEL(IL_00b7);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_009e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t82 *)e.ex;
		goto IL_009e;
	}

IL_009e:
	{ // begin finally (depth: 1)
		{
			if (!V_1)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t82 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_00a2:
		{
			Object_t* L_11 = (__this->___U3C$s_97U3E__0_1);
			if (L_11)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t82 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_00ab:
		{
			Object_t* L_12 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m488_MethodInfo, L_12);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC0:
					goto IL_00c0;
				case 0xB7:
					goto IL_00b7;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t82 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_00b7:
	{
		__this->___$PC_4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_MethodInfo;
 void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t leaveInstructions[1] = {0};
	Exception_t82 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t82 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		if (V_0 == 0)
		{
			goto IL_003b;
		}
		if (V_0 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// IL_0021: leave IL_003b
		leaveInstructions[0] = 0x3B; // 1
		THROW_SENTINEL(IL_003b);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0026;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t82 *)e.ex;
		goto IL_0026;
	}

IL_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_1 = (__this->___U3C$s_97U3E__0_1);
			if (L_1)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t82 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_002f:
		{
			Object_t* L_2 = (__this->___U3C$s_97U3E__0_1);
			NullCheck(L_2);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m488_MethodInfo, L_2);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x3B:
					goto IL_003b;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t82 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_003b:
	{
		return;
	}
}
// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
extern Il2CppType IEnumerable_1_t87_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____source_0_FieldInfo = 
{
	"source"/* name */
	, &IEnumerable_1_t87_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___source_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IEnumerator_1_t88_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3C$s_97U3E__0_1_FieldInfo = 
{
	"<$s_97>__0"/* name */
	, &IEnumerator_1_t88_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___U3C$s_97U3E__0_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3CelementU3E__1_2_FieldInfo = 
{
	"<element>__1"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___U3CelementU3E__1_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t294_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____predicate_3_FieldInfo = 
{
	"predicate"/* name */
	, &Func_2_t294_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___predicate_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____$PC_4_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___$PC_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____$current_5_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___$current_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IEnumerable_1_t87_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3C$U3Esource_6_FieldInfo = 
{
	"<$>source"/* name */
	, &IEnumerable_1_t87_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___U3C$U3Esource_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t294_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3C$U3Epredicate_7_FieldInfo = 
{
	"<$>predicate"/* name */
	, &Func_2_t294_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986, ___U3C$U3Epredicate_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_FieldInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____source_0_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3C$s_97U3E__0_1_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3CelementU3E__1_2_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____predicate_3_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____$PC_4_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____$current_5_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3C$U3Esource_6_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____U3C$U3Epredicate_7_FieldInfo,
	NULL
};
static PropertyInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<TSource>.Current"/* name */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_PropertyInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_GenericMethod;
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* declaring_type */
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
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_GenericMethod;
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_GenericMethod;
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t19_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_GenericMethod;
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t19_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_1_t88_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_GenericMethod;
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_MethodInfo = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t88_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_GenericMethod;
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* declaring_type */
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
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_GenericMethod;
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_GenericMethod/* genericMethod */

};
static MethodInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_MethodInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_MethodInfo,
	NULL
};
static MethodInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_MethodInfo,
};
static TypeInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t87_il2cpp_TypeInfo,
	&IEnumerator_1_t88_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerable_t103_il2cpp_TypeInfo, 7},
	{ &IEnumerable_1_t87_il2cpp_TypeInfo, 8},
	{ &IEnumerator_1_t88_il2cpp_TypeInfo, 9},
};
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_RGCTXData[7] = 
{
	&Object_t_il2cpp_TypeInfo/* Class Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_MethodInfo/* Method Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* Class Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_MethodInfo/* Method Usage */,
	&IEnumerable_1_GetEnumerator_m496_MethodInfo/* Method Usage */,
	&IEnumerator_1_get_Current_m497_MethodInfo/* Method Usage */,
	&Func_2_Invoke_m14626_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_0_0_0;
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_1_0_0;
struct U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986;
extern Il2CppGenericClass U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_GenericClass;
extern TypeInfo Enumerable_t119_il2cpp_TypeInfo;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494;
TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo = 
{
	&g_System_Core_dll_Image/* image */
	, NULL/* gc_desc */
	, "<CreateWhereIterator>c__Iterator1D`1"/* name */
	, ""/* namespaze */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_MethodInfos/* methods */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_PropertyInfos/* properties */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Enumerable_t119_il2cpp_TypeInfo/* nested_in */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* element_class */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_InterfacesTypeInfos/* implemented_interfaces */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_VTable/* vtable */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache/* custom_attributes_cache */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_il2cpp_TypeInfo/* cast_class */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_0_0_0/* byval_arg */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_1_0_0/* this_arg */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_InterfacesOffsets/* interface_offsets */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2986)/* instance_size */
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
	, 7/* method_count */
	, 2/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 5/* interfaces_count */
	, 5/* interface_offsets_count */

};
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_2MethodDeclarations.h"

extern TypeInfo Object_t151_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t2988_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t2987_il2cpp_TypeInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14640_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14636_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m27847_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m27850_MethodInfo;


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::.ctor()
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.IEnumerator.get_Current()
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::MoveNext()
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::Dispose()
// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>
extern Il2CppType IEnumerable_1_t2987_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____source_0_FieldInfo = 
{
	"source"/* name */
	, &IEnumerable_1_t2987_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___source_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IEnumerator_1_t2988_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3C$s_97U3E__0_1_FieldInfo = 
{
	"<$s_97>__0"/* name */
	, &IEnumerator_1_t2988_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___U3C$s_97U3E__0_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t151_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3CelementU3E__1_2_FieldInfo = 
{
	"<element>__1"/* name */
	, &Object_t151_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___U3CelementU3E__1_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t293_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____predicate_3_FieldInfo = 
{
	"predicate"/* name */
	, &Func_2_t293_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___predicate_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____$PC_4_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___$PC_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t151_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____$current_5_FieldInfo = 
{
	"$current"/* name */
	, &Object_t151_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___$current_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IEnumerable_1_t2987_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3C$U3Esource_6_FieldInfo = 
{
	"<$>source"/* name */
	, &IEnumerable_1_t2987_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___U3C$U3Esource_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t293_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3C$U3Epredicate_7_FieldInfo = 
{
	"<$>predicate"/* name */
	, &Func_2_t293_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989, ___U3C$U3Epredicate_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_FieldInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____source_0_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3C$s_97U3E__0_1_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3CelementU3E__1_2_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____predicate_3_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____$PC_4_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____$current_5_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3C$U3Esource_6_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____U3C$U3Epredicate_7_FieldInfo,
	NULL
};
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14637_MethodInfo;
static PropertyInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<TSource>.Current"/* name */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14637_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14638_MethodInfo;
static PropertyInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14638_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_PropertyInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14636_GenericMethod;
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::.ctor()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14636_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* declaring_type */
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
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14636_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t151_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14637_GenericMethod;
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14637_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* declaring_type */
	, &Object_t151_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14637_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14638_GenericMethod;
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14638_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14638_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t19_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14639_GenericMethod;
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14639_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t19_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14639_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_1_t2988_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14640_GenericMethod;
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14640_MethodInfo = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t2988_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14640_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14641_GenericMethod;
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::MoveNext()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14641_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* declaring_type */
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
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14641_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14642_GenericMethod;
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<UnityEngine.Object>::Dispose()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14642_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14642_GenericMethod/* genericMethod */

};
static MethodInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_MethodInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14636_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14637_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14638_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14639_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14640_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14641_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14642_MethodInfo,
	NULL
};
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14641_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14642_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14639_MethodInfo;
static MethodInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14638_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14641_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14642_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14639_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14640_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14637_MethodInfo,
};
static TypeInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t2987_il2cpp_TypeInfo,
	&IEnumerator_1_t2988_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerable_t103_il2cpp_TypeInfo, 7},
	{ &IEnumerable_1_t2987_il2cpp_TypeInfo, 8},
	{ &IEnumerator_1_t2988_il2cpp_TypeInfo, 9},
};
extern TypeInfo Object_t151_il2cpp_TypeInfo;
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_RGCTXData[7] = 
{
	&Object_t151_il2cpp_TypeInfo/* Class Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14640_MethodInfo/* Method Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* Class Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14636_MethodInfo/* Method Usage */,
	&IEnumerable_1_GetEnumerator_m27847_MethodInfo/* Method Usage */,
	&IEnumerator_1_get_Current_m27850_MethodInfo/* Method Usage */,
	&Func_2_Invoke_m14622_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_0_0_0;
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_1_0_0;
struct U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989;
extern Il2CppGenericClass U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_GenericClass;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494;
TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo = 
{
	&g_System_Core_dll_Image/* image */
	, NULL/* gc_desc */
	, "<CreateWhereIterator>c__Iterator1D`1"/* name */
	, ""/* namespaze */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_MethodInfos/* methods */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_PropertyInfos/* properties */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Enumerable_t119_il2cpp_TypeInfo/* nested_in */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* element_class */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_InterfacesTypeInfos/* implemented_interfaces */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_VTable/* vtable */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache/* custom_attributes_cache */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_il2cpp_TypeInfo/* cast_class */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_0_0_0/* byval_arg */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_1_0_0/* this_arg */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_InterfacesOffsets/* interface_offsets */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2989)/* instance_size */
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
	, 7/* method_count */
	, 2/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 5/* interfaces_count */
	, 5/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5630_il2cpp_TypeInfo;

// UnityTest.CheckMethod
#include "AssemblyU2DCSharp_UnityTest_CheckMethod.h"


// T System.Collections.Generic.IEnumerator`1<UnityTest.CheckMethod>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.CheckMethod>
extern MethodInfo IEnumerator_1_get_Current_m37220_MethodInfo;
static PropertyInfo IEnumerator_1_t5630____Current_PropertyInfo = 
{
	&IEnumerator_1_t5630_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37220_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5630_PropertyInfos[] =
{
	&IEnumerator_1_t5630____Current_PropertyInfo,
	NULL
};
extern Il2CppType CheckMethod_t156_0_0_0;
extern void* RuntimeInvoker_CheckMethod_t156 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37220_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.CheckMethod>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37220_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5630_il2cpp_TypeInfo/* declaring_type */
	, &CheckMethod_t156_0_0_0/* return_type */
	, RuntimeInvoker_CheckMethod_t156/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m37220_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5630_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37220_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5630_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5630_0_0_0;
extern Il2CppType IEnumerator_1_t5630_1_0_0;
struct IEnumerator_1_t5630;
extern Il2CppGenericClass IEnumerator_1_t5630_GenericClass;
TypeInfo IEnumerator_1_t5630_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5630_MethodInfos/* methods */
	, IEnumerator_1_t5630_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5630_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5630_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5630_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5630_0_0_0/* byval_arg */
	, &IEnumerator_1_t5630_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5630_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.CheckMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2990_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.CheckMethod>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65MethodDeclarations.h"

extern TypeInfo CheckMethod_t156_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14647_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCheckMethod_t156_m27853_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.CheckMethod>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.CheckMethod>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCheckMethod_t156_m27853 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m14643_MethodInfo;
 void InternalEnumerator_1__ctor_m14643 (InternalEnumerator_1_t2990 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644 (InternalEnumerator_1_t2990 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m14647(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m14647_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CheckMethod_t156_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m14645_MethodInfo;
 void InternalEnumerator_1_Dispose_m14645 (InternalEnumerator_1_t2990 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m14646_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m14646 (InternalEnumerator_1_t2990 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m14647 (InternalEnumerator_1_t2990 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCheckMethod_t156_m27853(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCheckMethod_t156_m27853_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.CheckMethod>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2990____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2990, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2990____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2990, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2990_FieldInfos[] =
{
	&InternalEnumerator_1_t2990____array_0_FieldInfo,
	&InternalEnumerator_1_t2990____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t2990____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2990_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2990____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2990_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14647_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2990_PropertyInfos[] =
{
	&InternalEnumerator_1_t2990____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2990____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2990_InternalEnumerator_1__ctor_m14643_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14643_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14643_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14643/* method */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2990_InternalEnumerator_1__ctor_m14643_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14643_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644/* method */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14645_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14645_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14645/* method */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14645_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14646_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14646_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14646/* method */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14646_GenericMethod/* genericMethod */

};
extern Il2CppType CheckMethod_t156_0_0_0;
extern void* RuntimeInvoker_CheckMethod_t156 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14647_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.CheckMethod>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14647_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14647/* method */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* declaring_type */
	, &CheckMethod_t156_0_0_0/* return_type */
	, RuntimeInvoker_CheckMethod_t156/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m14647_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2990_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14643_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644_MethodInfo,
	&InternalEnumerator_1_Dispose_m14645_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14646_MethodInfo,
	&InternalEnumerator_1_get_Current_m14647_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t2990_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14644_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14646_MethodInfo,
	&InternalEnumerator_1_Dispose_m14645_MethodInfo,
	&InternalEnumerator_1_get_Current_m14647_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2990_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5630_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2990_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5630_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2990_0_0_0;
extern Il2CppType InternalEnumerator_1_t2990_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2990_GenericClass;
TypeInfo InternalEnumerator_1_t2990_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2990_MethodInfos/* methods */
	, InternalEnumerator_1_t2990_PropertyInfos/* properties */
	, InternalEnumerator_1_t2990_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2990_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2990_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2990_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2990_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2990_1_0_0/* this_arg */
	, InternalEnumerator_1_t2990_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2990_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2990)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t7170_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>
extern MethodInfo ICollection_1_get_Count_m37221_MethodInfo;
static PropertyInfo ICollection_1_t7170____Count_PropertyInfo = 
{
	&ICollection_1_t7170_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37221_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37222_MethodInfo;
static PropertyInfo ICollection_1_t7170____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7170_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37222_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7170_PropertyInfos[] =
{
	&ICollection_1_t7170____Count_PropertyInfo,
	&ICollection_1_t7170____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37221_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::get_Count()
MethodInfo ICollection_1_get_Count_m37221_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37221_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37222_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37222_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37222_GenericMethod/* genericMethod */

};
extern Il2CppType CheckMethod_t156_0_0_0;
extern Il2CppType CheckMethod_t156_0_0_0;
static ParameterInfo ICollection_1_t7170_ICollection_1_Add_m37223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CheckMethod_t156_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37223_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Add(T)
MethodInfo ICollection_1_Add_m37223_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t7170_ICollection_1_Add_m37223_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37223_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37224_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Clear()
MethodInfo ICollection_1_Clear_m37224_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37224_GenericMethod/* genericMethod */

};
extern Il2CppType CheckMethod_t156_0_0_0;
static ParameterInfo ICollection_1_t7170_ICollection_1_Contains_m37225_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CheckMethod_t156_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37225_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Contains(T)
MethodInfo ICollection_1_Contains_m37225_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t7170_ICollection_1_Contains_m37225_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37225_GenericMethod/* genericMethod */

};
extern Il2CppType CheckMethodU5BU5D_t5265_0_0_0;
extern Il2CppType CheckMethodU5BU5D_t5265_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7170_ICollection_1_CopyTo_m37226_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CheckMethodU5BU5D_t5265_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37226_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37226_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7170_ICollection_1_CopyTo_m37226_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37226_GenericMethod/* genericMethod */

};
extern Il2CppType CheckMethod_t156_0_0_0;
static ParameterInfo ICollection_1_t7170_ICollection_1_Remove_m37227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CheckMethod_t156_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37227_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.CheckMethod>::Remove(T)
MethodInfo ICollection_1_Remove_m37227_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t7170_ICollection_1_Remove_m37227_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37227_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7170_MethodInfos[] =
{
	&ICollection_1_get_Count_m37221_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37222_MethodInfo,
	&ICollection_1_Add_m37223_MethodInfo,
	&ICollection_1_Clear_m37224_MethodInfo,
	&ICollection_1_Contains_m37225_MethodInfo,
	&ICollection_1_CopyTo_m37226_MethodInfo,
	&ICollection_1_Remove_m37227_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7172_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7170_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7172_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7170_0_0_0;
extern Il2CppType ICollection_1_t7170_1_0_0;
struct ICollection_1_t7170;
extern Il2CppGenericClass ICollection_1_t7170_GenericClass;
TypeInfo ICollection_1_t7170_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7170_MethodInfos/* methods */
	, ICollection_1_t7170_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7170_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7170_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7170_0_0_0/* byval_arg */
	, &ICollection_1_t7170_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7170_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.CheckMethod>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.CheckMethod>
extern Il2CppType IEnumerator_1_t5630_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37228_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.CheckMethod>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37228_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7172_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5630_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37228_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7172_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37228_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7172_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7172_0_0_0;
extern Il2CppType IEnumerable_1_t7172_1_0_0;
struct IEnumerable_1_t7172;
extern Il2CppGenericClass IEnumerable_1_t7172_GenericClass;
TypeInfo IEnumerable_1_t7172_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7172_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7172_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7172_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7172_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7172_0_0_0/* byval_arg */
	, &IEnumerable_1_t7172_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7172_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t7171_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.CheckMethod>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.CheckMethod>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.CheckMethod>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.CheckMethod>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.CheckMethod>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.CheckMethod>
extern MethodInfo IList_1_get_Item_m37229_MethodInfo;
extern MethodInfo IList_1_set_Item_m37230_MethodInfo;
static PropertyInfo IList_1_t7171____Item_PropertyInfo = 
{
	&IList_1_t7171_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37229_MethodInfo/* get */
	, &IList_1_set_Item_m37230_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7171_PropertyInfos[] =
{
	&IList_1_t7171____Item_PropertyInfo,
	NULL
};
extern Il2CppType CheckMethod_t156_0_0_0;
static ParameterInfo IList_1_t7171_IList_1_IndexOf_m37231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CheckMethod_t156_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37231_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.CheckMethod>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37231_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7171_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t7171_IList_1_IndexOf_m37231_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37231_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CheckMethod_t156_0_0_0;
static ParameterInfo IList_1_t7171_IList_1_Insert_m37232_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CheckMethod_t156_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37232_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.CheckMethod>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37232_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t7171_IList_1_Insert_m37232_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37232_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7171_IList_1_RemoveAt_m37233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37233_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.CheckMethod>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37233_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7171_IList_1_RemoveAt_m37233_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37233_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7171_IList_1_get_Item_m37229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType CheckMethod_t156_0_0_0;
extern void* RuntimeInvoker_CheckMethod_t156_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37229_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.CheckMethod>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37229_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7171_il2cpp_TypeInfo/* declaring_type */
	, &CheckMethod_t156_0_0_0/* return_type */
	, RuntimeInvoker_CheckMethod_t156_Int32_t73/* invoker_method */
	, IList_1_t7171_IList_1_get_Item_m37229_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37229_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CheckMethod_t156_0_0_0;
static ParameterInfo IList_1_t7171_IList_1_set_Item_m37230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CheckMethod_t156_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37230_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.CheckMethod>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37230_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t7171_IList_1_set_Item_m37230_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37230_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7171_MethodInfos[] =
{
	&IList_1_IndexOf_m37231_MethodInfo,
	&IList_1_Insert_m37232_MethodInfo,
	&IList_1_RemoveAt_m37233_MethodInfo,
	&IList_1_get_Item_m37229_MethodInfo,
	&IList_1_set_Item_m37230_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7171_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7170_il2cpp_TypeInfo,
	&IEnumerable_1_t7172_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7171_0_0_0;
extern Il2CppType IList_1_t7171_1_0_0;
struct IList_1_t7171;
extern Il2CppGenericClass IList_1_t7171_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7171_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7171_MethodInfos/* methods */
	, IList_1_t7171_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7171_il2cpp_TypeInfo/* element_class */
	, IList_1_t7171_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7171_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7171_0_0_0/* byval_arg */
	, &IList_1_t7171_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7171_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t5632_il2cpp_TypeInfo;

// UnityTest.ActionBase
#include "AssemblyU2DCSharp_UnityTest_ActionBase.h"


// T System.Collections.Generic.IEnumerator`1<UnityTest.ActionBase>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.ActionBase>
extern MethodInfo IEnumerator_1_get_Current_m37234_MethodInfo;
static PropertyInfo IEnumerator_1_t5632____Current_PropertyInfo = 
{
	&IEnumerator_1_t5632_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37234_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5632_PropertyInfos[] =
{
	&IEnumerator_1_t5632____Current_PropertyInfo,
	NULL
};
extern Il2CppType ActionBase_t150_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37234_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.ActionBase>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37234_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5632_il2cpp_TypeInfo/* declaring_type */
	, &ActionBase_t150_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37234_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5632_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37234_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5632_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5632_0_0_0;
extern Il2CppType IEnumerator_1_t5632_1_0_0;
struct IEnumerator_1_t5632;
extern Il2CppGenericClass IEnumerator_1_t5632_GenericClass;
TypeInfo IEnumerator_1_t5632_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5632_MethodInfos/* methods */
	, IEnumerator_1_t5632_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5632_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5632_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5632_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5632_0_0_0/* byval_arg */
	, &IEnumerator_1_t5632_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5632_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.ActionBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_66.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2991_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.ActionBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_66MethodDeclarations.h"

extern TypeInfo ActionBase_t150_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14652_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisActionBase_t150_m27864_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.ActionBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.ActionBase>(System.Int32)
#define Array_InternalArray__get_Item_TisActionBase_t150_m27864(__this, p0, method) (ActionBase_t150 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.ActionBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.ActionBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.ActionBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ActionBase>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.ActionBase>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.ActionBase>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2991____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2991, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2991____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2991, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2991_FieldInfos[] =
{
	&InternalEnumerator_1_t2991____array_0_FieldInfo,
	&InternalEnumerator_1_t2991____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14649_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2991____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2991_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14649_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2991____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2991_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14652_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2991_PropertyInfos[] =
{
	&InternalEnumerator_1_t2991____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2991____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2991_InternalEnumerator_1__ctor_m14648_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14648_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ActionBase>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14648_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2991_InternalEnumerator_1__ctor_m14648_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14648_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14649_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.ActionBase>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14649_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14649_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14650_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ActionBase>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14650_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14650_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14651_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ActionBase>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14651_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14651_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBase_t150_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14652_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.ActionBase>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14652_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* declaring_type */
	, &ActionBase_t150_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14652_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2991_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14648_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14649_MethodInfo,
	&InternalEnumerator_1_Dispose_m14650_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14651_MethodInfo,
	&InternalEnumerator_1_get_Current_m14652_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14651_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14650_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2991_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14649_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14651_MethodInfo,
	&InternalEnumerator_1_Dispose_m14650_MethodInfo,
	&InternalEnumerator_1_get_Current_m14652_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2991_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5632_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2991_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5632_il2cpp_TypeInfo, 7},
};
extern TypeInfo ActionBase_t150_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2991_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14652_MethodInfo/* Method Usage */,
	&ActionBase_t150_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisActionBase_t150_m27864_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2991_0_0_0;
extern Il2CppType InternalEnumerator_1_t2991_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2991_GenericClass;
TypeInfo InternalEnumerator_1_t2991_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2991_MethodInfos/* methods */
	, InternalEnumerator_1_t2991_PropertyInfos/* properties */
	, InternalEnumerator_1_t2991_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2991_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2991_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2991_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2991_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2991_1_0_0/* this_arg */
	, InternalEnumerator_1_t2991_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2991_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2991_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2991)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t7173_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.ActionBase>
extern MethodInfo ICollection_1_get_Count_m37235_MethodInfo;
static PropertyInfo ICollection_1_t7173____Count_PropertyInfo = 
{
	&ICollection_1_t7173_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37235_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37236_MethodInfo;
static PropertyInfo ICollection_1_t7173____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7173_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37236_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7173_PropertyInfos[] =
{
	&ICollection_1_t7173____Count_PropertyInfo,
	&ICollection_1_t7173____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37235_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::get_Count()
MethodInfo ICollection_1_get_Count_m37235_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37235_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37236_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37236_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37236_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBase_t150_0_0_0;
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo ICollection_1_t7173_ICollection_1_Add_m37237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37237_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Add(T)
MethodInfo ICollection_1_Add_m37237_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7173_ICollection_1_Add_m37237_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37237_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37238_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Clear()
MethodInfo ICollection_1_Clear_m37238_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37238_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo ICollection_1_t7173_ICollection_1_Contains_m37239_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37239_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Contains(T)
MethodInfo ICollection_1_Contains_m37239_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7173_ICollection_1_Contains_m37239_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37239_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBaseU5BU5D_t5266_0_0_0;
extern Il2CppType ActionBaseU5BU5D_t5266_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7173_ICollection_1_CopyTo_m37240_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ActionBaseU5BU5D_t5266_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37240_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37240_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7173_ICollection_1_CopyTo_m37240_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37240_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo ICollection_1_t7173_ICollection_1_Remove_m37241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37241_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ActionBase>::Remove(T)
MethodInfo ICollection_1_Remove_m37241_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7173_ICollection_1_Remove_m37241_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37241_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7173_MethodInfos[] =
{
	&ICollection_1_get_Count_m37235_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37236_MethodInfo,
	&ICollection_1_Add_m37237_MethodInfo,
	&ICollection_1_Clear_m37238_MethodInfo,
	&ICollection_1_Contains_m37239_MethodInfo,
	&ICollection_1_CopyTo_m37240_MethodInfo,
	&ICollection_1_Remove_m37241_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7175_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7173_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7175_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7173_0_0_0;
extern Il2CppType ICollection_1_t7173_1_0_0;
struct ICollection_1_t7173;
extern Il2CppGenericClass ICollection_1_t7173_GenericClass;
TypeInfo ICollection_1_t7173_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7173_MethodInfos/* methods */
	, ICollection_1_t7173_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7173_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7173_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7173_0_0_0/* byval_arg */
	, &ICollection_1_t7173_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7173_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ActionBase>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.ActionBase>
extern Il2CppType IEnumerator_1_t5632_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37242_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ActionBase>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37242_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7175_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5632_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37242_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7175_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37242_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7175_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7175_0_0_0;
extern Il2CppType IEnumerable_1_t7175_1_0_0;
struct IEnumerable_1_t7175;
extern Il2CppGenericClass IEnumerable_1_t7175_GenericClass;
TypeInfo IEnumerable_1_t7175_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7175_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7175_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7175_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7175_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7175_0_0_0/* byval_arg */
	, &IEnumerable_1_t7175_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7175_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t7174_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.ActionBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ActionBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ActionBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.ActionBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.ActionBase>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.ActionBase>
extern MethodInfo IList_1_get_Item_m37243_MethodInfo;
extern MethodInfo IList_1_set_Item_m37244_MethodInfo;
static PropertyInfo IList_1_t7174____Item_PropertyInfo = 
{
	&IList_1_t7174_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37243_MethodInfo/* get */
	, &IList_1_set_Item_m37244_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7174_PropertyInfos[] =
{
	&IList_1_t7174____Item_PropertyInfo,
	NULL
};
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo IList_1_t7174_IList_1_IndexOf_m37245_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37245_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.ActionBase>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37245_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7174_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7174_IList_1_IndexOf_m37245_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37245_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo IList_1_t7174_IList_1_Insert_m37246_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37246_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ActionBase>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37246_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7174_IList_1_Insert_m37246_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37246_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7174_IList_1_RemoveAt_m37247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37247_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ActionBase>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37247_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7174_IList_1_RemoveAt_m37247_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37247_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7174_IList_1_get_Item_m37243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ActionBase_t150_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37243_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.ActionBase>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37243_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7174_il2cpp_TypeInfo/* declaring_type */
	, &ActionBase_t150_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7174_IList_1_get_Item_m37243_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37243_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo IList_1_t7174_IList_1_set_Item_m37244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37244_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ActionBase>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37244_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7174_IList_1_set_Item_m37244_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37244_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7174_MethodInfos[] =
{
	&IList_1_IndexOf_m37245_MethodInfo,
	&IList_1_Insert_m37246_MethodInfo,
	&IList_1_RemoveAt_m37247_MethodInfo,
	&IList_1_get_Item_m37243_MethodInfo,
	&IList_1_set_Item_m37244_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7174_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7173_il2cpp_TypeInfo,
	&IEnumerable_1_t7175_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7174_0_0_0;
extern Il2CppType IList_1_t7174_1_0_0;
struct IList_1_t7174;
extern Il2CppGenericClass IList_1_t7174_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7174_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7174_MethodInfos/* methods */
	, IList_1_t7174_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7174_il2cpp_TypeInfo/* element_class */
	, IList_1_t7174_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7174_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7174_0_0_0/* byval_arg */
	, &IList_1_t7174_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7174_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t7176_il2cpp_TypeInfo;

// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>
extern MethodInfo ICollection_1_get_Count_m37248_MethodInfo;
static PropertyInfo ICollection_1_t7176____Count_PropertyInfo = 
{
	&ICollection_1_t7176_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37248_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37249_MethodInfo;
static PropertyInfo ICollection_1_t7176____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7176_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37249_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7176_PropertyInfos[] =
{
	&ICollection_1_t7176____Count_PropertyInfo,
	&ICollection_1_t7176____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37248_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_Count()
MethodInfo ICollection_1_get_Count_m37248_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37248_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37249_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37249_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37249_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t159_0_0_0;
extern Il2CppType ScriptableObject_t159_0_0_0;
static ParameterInfo ICollection_1_t7176_ICollection_1_Add_m37250_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t159_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37250_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Add(T)
MethodInfo ICollection_1_Add_m37250_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7176_ICollection_1_Add_m37250_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37250_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37251_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Clear()
MethodInfo ICollection_1_Clear_m37251_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37251_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t159_0_0_0;
static ParameterInfo ICollection_1_t7176_ICollection_1_Contains_m37252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t159_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37252_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Contains(T)
MethodInfo ICollection_1_Contains_m37252_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7176_ICollection_1_Contains_m37252_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37252_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObjectU5BU5D_t5163_0_0_0;
extern Il2CppType ScriptableObjectU5BU5D_t5163_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7176_ICollection_1_CopyTo_m37253_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObjectU5BU5D_t5163_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37253_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37253_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7176_ICollection_1_CopyTo_m37253_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37253_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t159_0_0_0;
static ParameterInfo ICollection_1_t7176_ICollection_1_Remove_m37254_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t159_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37254_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Remove(T)
MethodInfo ICollection_1_Remove_m37254_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7176_ICollection_1_Remove_m37254_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37254_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7176_MethodInfos[] =
{
	&ICollection_1_get_Count_m37248_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37249_MethodInfo,
	&ICollection_1_Add_m37250_MethodInfo,
	&ICollection_1_Clear_m37251_MethodInfo,
	&ICollection_1_Contains_m37252_MethodInfo,
	&ICollection_1_CopyTo_m37253_MethodInfo,
	&ICollection_1_Remove_m37254_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7178_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7176_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7178_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7176_0_0_0;
extern Il2CppType ICollection_1_t7176_1_0_0;
struct ICollection_1_t7176;
extern Il2CppGenericClass ICollection_1_t7176_GenericClass;
TypeInfo ICollection_1_t7176_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7176_MethodInfos/* methods */
	, ICollection_1_t7176_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7176_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7176_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7176_0_0_0/* byval_arg */
	, &ICollection_1_t7176_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7176_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ScriptableObject>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.ScriptableObject>
extern Il2CppType IEnumerator_1_t5634_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37255_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ScriptableObject>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37255_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7178_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5634_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37255_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7178_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37255_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7178_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7178_0_0_0;
extern Il2CppType IEnumerable_1_t7178_1_0_0;
struct IEnumerable_1_t7178;
extern Il2CppGenericClass IEnumerable_1_t7178_GenericClass;
TypeInfo IEnumerable_1_t7178_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7178_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7178_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7178_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7178_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7178_0_0_0/* byval_arg */
	, &IEnumerable_1_t7178_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7178_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t5634_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.ScriptableObject>
extern MethodInfo IEnumerator_1_get_Current_m37256_MethodInfo;
static PropertyInfo IEnumerator_1_t5634____Current_PropertyInfo = 
{
	&IEnumerator_1_t5634_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37256_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5634_PropertyInfos[] =
{
	&IEnumerator_1_t5634____Current_PropertyInfo,
	NULL
};
extern Il2CppType ScriptableObject_t159_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37256_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37256_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5634_il2cpp_TypeInfo/* declaring_type */
	, &ScriptableObject_t159_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37256_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5634_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37256_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5634_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5634_0_0_0;
extern Il2CppType IEnumerator_1_t5634_1_0_0;
struct IEnumerator_1_t5634;
extern Il2CppGenericClass IEnumerator_1_t5634_GenericClass;
TypeInfo IEnumerator_1_t5634_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5634_MethodInfos/* methods */
	, IEnumerator_1_t5634_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5634_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5634_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5634_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5634_0_0_0/* byval_arg */
	, &IEnumerator_1_t5634_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5634_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2992_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_67MethodDeclarations.h"

extern TypeInfo ScriptableObject_t159_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14657_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisScriptableObject_t159_m27875_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.ScriptableObject>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.ScriptableObject>(System.Int32)
#define Array_InternalArray__get_Item_TisScriptableObject_t159_m27875(__this, p0, method) (ScriptableObject_t159 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2992____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2992, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2992____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2992, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2992_FieldInfos[] =
{
	&InternalEnumerator_1_t2992____array_0_FieldInfo,
	&InternalEnumerator_1_t2992____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14654_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2992____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2992_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14654_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2992____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2992_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14657_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2992_PropertyInfos[] =
{
	&InternalEnumerator_1_t2992____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2992____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2992_InternalEnumerator_1__ctor_m14653_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14653_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14653_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2992_InternalEnumerator_1__ctor_m14653_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14653_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14654_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14654_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14654_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14655_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14655_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14655_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14656_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14656_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14656_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t159_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14657_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14657_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* declaring_type */
	, &ScriptableObject_t159_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14657_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2992_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14653_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14654_MethodInfo,
	&InternalEnumerator_1_Dispose_m14655_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14656_MethodInfo,
	&InternalEnumerator_1_get_Current_m14657_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14656_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14655_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2992_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14654_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14656_MethodInfo,
	&InternalEnumerator_1_Dispose_m14655_MethodInfo,
	&InternalEnumerator_1_get_Current_m14657_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2992_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5634_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2992_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5634_il2cpp_TypeInfo, 7},
};
extern TypeInfo ScriptableObject_t159_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2992_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14657_MethodInfo/* Method Usage */,
	&ScriptableObject_t159_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisScriptableObject_t159_m27875_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2992_0_0_0;
extern Il2CppType InternalEnumerator_1_t2992_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2992_GenericClass;
TypeInfo InternalEnumerator_1_t2992_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2992_MethodInfos/* methods */
	, InternalEnumerator_1_t2992_PropertyInfos/* properties */
	, InternalEnumerator_1_t2992_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2992_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2992_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2992_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2992_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2992_1_0_0/* this_arg */
	, InternalEnumerator_1_t2992_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2992_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2992_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2992)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t7177_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>
extern MethodInfo IList_1_get_Item_m37257_MethodInfo;
extern MethodInfo IList_1_set_Item_m37258_MethodInfo;
static PropertyInfo IList_1_t7177____Item_PropertyInfo = 
{
	&IList_1_t7177_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37257_MethodInfo/* get */
	, &IList_1_set_Item_m37258_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7177_PropertyInfos[] =
{
	&IList_1_t7177____Item_PropertyInfo,
	NULL
};
extern Il2CppType ScriptableObject_t159_0_0_0;
static ParameterInfo IList_1_t7177_IList_1_IndexOf_m37259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t159_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37259_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37259_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7177_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7177_IList_1_IndexOf_m37259_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37259_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ScriptableObject_t159_0_0_0;
static ParameterInfo IList_1_t7177_IList_1_Insert_m37260_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t159_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37260_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37260_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7177_IList_1_Insert_m37260_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37260_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7177_IList_1_RemoveAt_m37261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37261_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37261_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7177_IList_1_RemoveAt_m37261_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37261_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7177_IList_1_get_Item_m37257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ScriptableObject_t159_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37257_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37257_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7177_il2cpp_TypeInfo/* declaring_type */
	, &ScriptableObject_t159_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7177_IList_1_get_Item_m37257_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37257_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ScriptableObject_t159_0_0_0;
static ParameterInfo IList_1_t7177_IList_1_set_Item_m37258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t159_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37258_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.ScriptableObject>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37258_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7177_IList_1_set_Item_m37258_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37258_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7177_MethodInfos[] =
{
	&IList_1_IndexOf_m37259_MethodInfo,
	&IList_1_Insert_m37260_MethodInfo,
	&IList_1_RemoveAt_m37261_MethodInfo,
	&IList_1_get_Item_m37257_MethodInfo,
	&IList_1_set_Item_m37258_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7177_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7176_il2cpp_TypeInfo,
	&IEnumerable_1_t7178_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7177_0_0_0;
extern Il2CppType IList_1_t7177_1_0_0;
struct IList_1_t7177;
extern Il2CppGenericClass IList_1_t7177_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7177_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7177_MethodInfos/* methods */
	, IList_1_t7177_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7177_il2cpp_TypeInfo/* element_class */
	, IList_1_t7177_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7177_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7177_0_0_0/* byval_arg */
	, &IList_1_t7177_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7177_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBase>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2993_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBase>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_17MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_13.h"
extern TypeInfo InvokableCall_1_t2994_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_13MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m14660_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m14662_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBase>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBase>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBase>
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t2993____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t2993_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2993, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2993_FieldInfos[] =
{
	&CachedInvokableCall_1_t2993____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2993_CachedInvokableCall_1__ctor_m14658_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m14658_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBase>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m14658_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m12827_gshared/* method */
	, &CachedInvokableCall_1_t2993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2993_CachedInvokableCall_1__ctor_m14658_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m14658_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2993_CachedInvokableCall_1_Invoke_m14659_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m14659_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBase>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m14659_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m12829_gshared/* method */
	, &CachedInvokableCall_1_t2993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2993_CachedInvokableCall_1_Invoke_m14659_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m14659_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2993_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m14658_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14659_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m14659_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m14663_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2993_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14659_MethodInfo,
	&InvokableCall_1_Find_m14663_MethodInfo,
};
extern Il2CppType UnityAction_1_t2995_0_0_0;
extern TypeInfo UnityAction_1_t2995_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisActionBase_t150_m27885_MethodInfo;
extern TypeInfo ActionBase_t150_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m14665_MethodInfo;
extern TypeInfo ActionBase_t150_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2993_RGCTXData[8] = 
{
	&UnityAction_1_t2995_0_0_0/* Type Usage */,
	&UnityAction_1_t2995_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisActionBase_t150_m27885_MethodInfo/* Method Usage */,
	&ActionBase_t150_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14665_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m14660_MethodInfo/* Method Usage */,
	&ActionBase_t150_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m14662_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2993_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2993_1_0_0;
struct CachedInvokableCall_1_t2993;
extern Il2CppGenericClass CachedInvokableCall_1_t2993_GenericClass;
TypeInfo CachedInvokableCall_1_t2993_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2993_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2993_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2993_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2993_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2993_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2993_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2993_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2993_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2993_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2993)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_20.h"
extern TypeInfo UnityAction_1_t2995_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_20MethodDeclarations.h"
struct BaseInvokableCall_t981;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.ActionBase>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.ActionBase>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisActionBase_t150_m27885(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>
extern Il2CppType UnityAction_1_t2995_0_0_1;
FieldInfo InvokableCall_1_t2994____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2995_0_0_1/* type */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2994, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2994_FieldInfos[] =
{
	&InvokableCall_1_t2994____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2994_InvokableCall_1__ctor_m14660_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14660_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m14660_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12830_gshared/* method */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2994_InvokableCall_1__ctor_m14660_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m14660_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2995_0_0_0;
static ParameterInfo InvokableCall_1_t2994_InvokableCall_1__ctor_m14661_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2995_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14661_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m14661_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12831_gshared/* method */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2994_InvokableCall_1__ctor_m14661_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m14661_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t2994_InvokableCall_1_Invoke_m14662_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14662_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m14662_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m12832_gshared/* method */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t2994_InvokableCall_1_Invoke_m14662_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m14662_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t2994_InvokableCall_1_Find_m14663_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m14663_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.ActionBase>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m14663_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m12833_gshared/* method */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2994_InvokableCall_1_Find_m14663_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m14663_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2994_MethodInfos[] =
{
	&InvokableCall_1__ctor_m14660_MethodInfo,
	&InvokableCall_1__ctor_m14661_MethodInfo,
	&InvokableCall_1_Invoke_m14662_MethodInfo,
	&InvokableCall_1_Find_m14663_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2994_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_1_Invoke_m14662_MethodInfo,
	&InvokableCall_1_Find_m14663_MethodInfo,
};
extern TypeInfo UnityAction_1_t2995_il2cpp_TypeInfo;
extern TypeInfo ActionBase_t150_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2994_RGCTXData[5] = 
{
	&UnityAction_1_t2995_0_0_0/* Type Usage */,
	&UnityAction_1_t2995_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisActionBase_t150_m27885_MethodInfo/* Method Usage */,
	&ActionBase_t150_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14665_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2994_0_0_0;
extern Il2CppType InvokableCall_1_t2994_1_0_0;
struct InvokableCall_1_t2994;
extern Il2CppGenericClass InvokableCall_1_t2994_GenericClass;
TypeInfo InvokableCall_1_t2994_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2994_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2994_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2994_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2994_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2994_0_0_0/* byval_arg */
	, &InvokableCall_1_t2994_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2994_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2994_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2994)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t2995_UnityAction_1__ctor_m14664_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m14664_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m14664_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m12834_gshared/* method */
	, &UnityAction_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_1_t2995_UnityAction_1__ctor_m14664_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m14664_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBase_t150_0_0_0;
static ParameterInfo UnityAction_1_t2995_UnityAction_1_Invoke_m14665_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m14665_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m14665_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m12835_gshared/* method */
	, &UnityAction_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2995_UnityAction_1_Invoke_m14665_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m14665_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBase_t150_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2995_UnityAction_1_BeginInvoke_m14666_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ActionBase_t150_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14666_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m14666_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m12836_gshared/* method */
	, &UnityAction_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2995_UnityAction_1_BeginInvoke_m14666_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m14666_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t2995_UnityAction_1_EndInvoke_m14667_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14667_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBase>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m14667_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m12837_gshared/* method */
	, &UnityAction_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t2995_UnityAction_1_EndInvoke_m14667_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m14667_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2995_MethodInfos[] =
{
	&UnityAction_1__ctor_m14664_MethodInfo,
	&UnityAction_1_Invoke_m14665_MethodInfo,
	&UnityAction_1_BeginInvoke_m14666_MethodInfo,
	&UnityAction_1_EndInvoke_m14667_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m14666_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m14667_MethodInfo;
static MethodInfo* UnityAction_1_t2995_VTable[] =
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
	&UnityAction_1_Invoke_m14665_MethodInfo,
	&UnityAction_1_BeginInvoke_m14666_MethodInfo,
	&UnityAction_1_EndInvoke_m14667_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t2995_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2995_1_0_0;
struct UnityAction_1_t2995;
extern Il2CppGenericClass UnityAction_1_t2995_GenericClass;
TypeInfo UnityAction_1_t2995_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2995_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2995_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2995_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2995_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2995_0_0_0/* byval_arg */
	, &UnityAction_1_t2995_1_0_0/* this_arg */
	, UnityAction_1_t2995_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2995_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2995)/* instance_size */
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
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
#include "System_Core_System_Func_2_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t158_il2cpp_TypeInfo;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
#include "System_Core_System_Func_2_gen_2MethodDeclarations.h"

// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"


// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Func_2__ctor_m1243_MethodInfo;
 void Func_2__ctor_m1243 (Func_2_t158 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::Invoke(T)
extern MethodInfo Func_2_Invoke_m14668_MethodInfo;
 bool Func_2_Invoke_m14668 (Func_2_t158 * __this, FieldInfo_t162 * ___arg1, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m14668((Func_2_t158 *)__this->___prev_9,___arg1, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, FieldInfo_t162 * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, FieldInfo_t162 * ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern MethodInfo Func_2_BeginInvoke_m14669_MethodInfo;
 Object_t * Func_2_BeginInvoke_m14669 (Func_2_t158 * __this, FieldInfo_t162 * ___arg1, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::EndInvoke(System.IAsyncResult)
extern MethodInfo Func_2_EndInvoke_m14670_MethodInfo;
 bool Func_2_EndInvoke_m14670 (Func_2_t158 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition System.Func`2<System.Reflection.FieldInfo,System.Boolean>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo Func_2_t158_Func_2__ctor_m1243_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2__ctor_m1243_GenericMethod;
// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
MethodInfo Func_2__ctor_m1243_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Func_2__ctor_m1243/* method */
	, &Func_2_t158_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, Func_2_t158_Func_2__ctor_m1243_ParameterInfos/* parameters */
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
	, &Func_2__ctor_m1243_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfo_t162_0_0_0;
extern Il2CppType FieldInfo_t162_0_0_0;
static ParameterInfo Func_2_t158_Func_2_Invoke_m14668_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_Invoke_m14668_GenericMethod;
// TResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::Invoke(T)
MethodInfo Func_2_Invoke_m14668_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Func_2_Invoke_m14668/* method */
	, &Func_2_t158_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, Func_2_t158_Func_2_Invoke_m14668_ParameterInfos/* parameters */
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
	, &Func_2_Invoke_m14668_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfo_t162_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Func_2_t158_Func_2_BeginInvoke_m14669_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_BeginInvoke_m14669_GenericMethod;
// System.IAsyncResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Func_2_BeginInvoke_m14669_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Func_2_BeginInvoke_m14669/* method */
	, &Func_2_t158_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Func_2_t158_Func_2_BeginInvoke_m14669_ParameterInfos/* parameters */
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
	, &Func_2_BeginInvoke_m14669_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo Func_2_t158_Func_2_EndInvoke_m14670_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_EndInvoke_m14670_GenericMethod;
// TResult System.Func`2<System.Reflection.FieldInfo,System.Boolean>::EndInvoke(System.IAsyncResult)
MethodInfo Func_2_EndInvoke_m14670_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Func_2_EndInvoke_m14670/* method */
	, &Func_2_t158_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, Func_2_t158_Func_2_EndInvoke_m14670_ParameterInfos/* parameters */
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
	, &Func_2_EndInvoke_m14670_GenericMethod/* genericMethod */

};
static MethodInfo* Func_2_t158_MethodInfos[] =
{
	&Func_2__ctor_m1243_MethodInfo,
	&Func_2_Invoke_m14668_MethodInfo,
	&Func_2_BeginInvoke_m14669_MethodInfo,
	&Func_2_EndInvoke_m14670_MethodInfo,
	NULL
};
static MethodInfo* Func_2_t158_VTable[] =
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
	&Func_2_Invoke_m14668_MethodInfo,
	&Func_2_BeginInvoke_m14669_MethodInfo,
	&Func_2_EndInvoke_m14670_MethodInfo,
};
static Il2CppInterfaceOffsetPair Func_2_t158_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType Func_2_t158_0_0_0;
extern Il2CppType Func_2_t158_1_0_0;
struct Func_2_t158;
extern Il2CppGenericClass Func_2_t158_GenericClass;
TypeInfo Func_2_t158_il2cpp_TypeInfo = 
{
	&g_System_Core_dll_Image/* image */
	, NULL/* gc_desc */
	, "Func`2"/* name */
	, "System"/* namespaze */
	, Func_2_t158_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Func_2_t158_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Func_2_t158_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Func_2_t158_il2cpp_TypeInfo/* cast_class */
	, &Func_2_t158_0_0_0/* byval_arg */
	, &Func_2_t158_1_0_0/* this_arg */
	, Func_2_t158_InterfacesOffsets/* interface_offsets */
	, &Func_2_t158_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Func_2_t158)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t310_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>
extern MethodInfo IEnumerator_1_get_Current_m1246_MethodInfo;
static PropertyInfo IEnumerator_1_t310____Current_PropertyInfo = 
{
	&IEnumerator_1_t310_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m1246_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t310_PropertyInfos[] =
{
	&IEnumerator_1_t310____Current_PropertyInfo,
	NULL
};
extern Il2CppType FieldInfo_t162_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m1246_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m1246_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t310_il2cpp_TypeInfo/* declaring_type */
	, &FieldInfo_t162_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m1246_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t310_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m1246_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t310_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t310_0_0_0;
extern Il2CppType IEnumerator_1_t310_1_0_0;
struct IEnumerator_1_t310;
extern Il2CppGenericClass IEnumerator_1_t310_GenericClass;
TypeInfo IEnumerator_1_t310_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t310_MethodInfos/* methods */
	, IEnumerator_1_t310_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t310_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t310_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t310_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t310_0_0_0/* byval_arg */
	, &IEnumerator_1_t310_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t310_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_68.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2996_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_68MethodDeclarations.h"

extern TypeInfo FieldInfo_t162_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14675_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldInfo_t162_m27887_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.FieldInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.FieldInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisFieldInfo_t162_m27887(__this, p0, method) (FieldInfo_t162 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2996____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2996, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2996____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2996, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2996_FieldInfos[] =
{
	&InternalEnumerator_1_t2996____array_0_FieldInfo,
	&InternalEnumerator_1_t2996____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14672_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2996____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2996_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14672_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2996____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2996_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14675_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2996_PropertyInfos[] =
{
	&InternalEnumerator_1_t2996____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2996____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2996_InternalEnumerator_1__ctor_m14671_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14671_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14671_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2996_InternalEnumerator_1__ctor_m14671_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14671_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14672_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14672_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14672_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14673_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14673_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14673_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14674_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14674_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14674_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfo_t162_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14675_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.FieldInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14675_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* declaring_type */
	, &FieldInfo_t162_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14675_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2996_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14671_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14672_MethodInfo,
	&InternalEnumerator_1_Dispose_m14673_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14674_MethodInfo,
	&InternalEnumerator_1_get_Current_m14675_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14674_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14673_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2996_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14672_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14674_MethodInfo,
	&InternalEnumerator_1_Dispose_m14673_MethodInfo,
	&InternalEnumerator_1_get_Current_m14675_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2996_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t310_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2996_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t310_il2cpp_TypeInfo, 7},
};
extern TypeInfo FieldInfo_t162_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2996_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14675_MethodInfo/* Method Usage */,
	&FieldInfo_t162_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFieldInfo_t162_m27887_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2996_0_0_0;
extern Il2CppType InternalEnumerator_1_t2996_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2996_GenericClass;
TypeInfo InternalEnumerator_1_t2996_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2996_MethodInfos/* methods */
	, InternalEnumerator_1_t2996_PropertyInfos/* properties */
	, InternalEnumerator_1_t2996_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2996_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2996_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2996_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2996_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2996_1_0_0/* this_arg */
	, InternalEnumerator_1_t2996_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2996_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2996_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2996)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t7179_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>
extern MethodInfo ICollection_1_get_Count_m37262_MethodInfo;
static PropertyInfo ICollection_1_t7179____Count_PropertyInfo = 
{
	&ICollection_1_t7179_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37262_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37263_MethodInfo;
static PropertyInfo ICollection_1_t7179____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7179_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7179_PropertyInfos[] =
{
	&ICollection_1_t7179____Count_PropertyInfo,
	&ICollection_1_t7179____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37262_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m37262_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37262_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37263_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37263_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37263_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfo_t162_0_0_0;
static ParameterInfo ICollection_1_t7179_ICollection_1_Add_m37264_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37264_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Add(T)
MethodInfo ICollection_1_Add_m37264_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7179_ICollection_1_Add_m37264_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37264_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37265_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Clear()
MethodInfo ICollection_1_Clear_m37265_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37265_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfo_t162_0_0_0;
static ParameterInfo ICollection_1_t7179_ICollection_1_Contains_m37266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37266_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m37266_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7179_ICollection_1_Contains_m37266_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37266_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfoU5BU5D_t308_0_0_0;
extern Il2CppType FieldInfoU5BU5D_t308_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7179_ICollection_1_CopyTo_m37267_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FieldInfoU5BU5D_t308_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37267_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37267_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7179_ICollection_1_CopyTo_m37267_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37267_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfo_t162_0_0_0;
static ParameterInfo ICollection_1_t7179_ICollection_1_Remove_m37268_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37268_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m37268_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7179_ICollection_1_Remove_m37268_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37268_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7179_MethodInfos[] =
{
	&ICollection_1_get_Count_m37262_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37263_MethodInfo,
	&ICollection_1_Add_m37264_MethodInfo,
	&ICollection_1_Clear_m37265_MethodInfo,
	&ICollection_1_Contains_m37266_MethodInfo,
	&ICollection_1_CopyTo_m37267_MethodInfo,
	&ICollection_1_Remove_m37268_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t161_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7179_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t161_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7179_0_0_0;
extern Il2CppType ICollection_1_t7179_1_0_0;
struct ICollection_1_t7179;
extern Il2CppGenericClass ICollection_1_t7179_GenericClass;
TypeInfo ICollection_1_t7179_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7179_MethodInfos/* methods */
	, ICollection_1_t7179_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7179_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7179_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7179_0_0_0/* byval_arg */
	, &ICollection_1_t7179_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7179_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
extern Il2CppType IEnumerator_1_t310_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m1245_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m1245_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t161_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t310_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m1245_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t161_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m1245_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t161_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t161_0_0_0;
extern Il2CppType IEnumerable_1_t161_1_0_0;
struct IEnumerable_1_t161;
extern Il2CppGenericClass IEnumerable_1_t161_GenericClass;
TypeInfo IEnumerable_1_t161_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t161_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t161_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t161_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t161_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t161_0_0_0/* byval_arg */
	, &IEnumerable_1_t161_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t161_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t7180_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.FieldInfo>
extern MethodInfo IList_1_get_Item_m37269_MethodInfo;
extern MethodInfo IList_1_set_Item_m37270_MethodInfo;
static PropertyInfo IList_1_t7180____Item_PropertyInfo = 
{
	&IList_1_t7180_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37269_MethodInfo/* get */
	, &IList_1_set_Item_m37270_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7180_PropertyInfos[] =
{
	&IList_1_t7180____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldInfo_t162_0_0_0;
static ParameterInfo IList_1_t7180_IList_1_IndexOf_m37271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37271_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37271_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7180_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7180_IList_1_IndexOf_m37271_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37271_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldInfo_t162_0_0_0;
static ParameterInfo IList_1_t7180_IList_1_Insert_m37272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37272_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37272_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7180_IList_1_Insert_m37272_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37272_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7180_IList_1_RemoveAt_m37273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37273_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37273_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7180_IList_1_RemoveAt_m37273_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37273_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7180_IList_1_get_Item_m37269_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FieldInfo_t162_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37269_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37269_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7180_il2cpp_TypeInfo/* declaring_type */
	, &FieldInfo_t162_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7180_IList_1_get_Item_m37269_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37269_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldInfo_t162_0_0_0;
static ParameterInfo IList_1_t7180_IList_1_set_Item_m37270_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldInfo_t162_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37270_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37270_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7180_IList_1_set_Item_m37270_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37270_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7180_MethodInfos[] =
{
	&IList_1_IndexOf_m37271_MethodInfo,
	&IList_1_Insert_m37272_MethodInfo,
	&IList_1_RemoveAt_m37273_MethodInfo,
	&IList_1_get_Item_m37269_MethodInfo,
	&IList_1_set_Item_m37270_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7180_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7179_il2cpp_TypeInfo,
	&IEnumerable_1_t161_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7180_0_0_0;
extern Il2CppType IList_1_t7180_1_0_0;
struct IList_1_t7180;
extern Il2CppGenericClass IList_1_t7180_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7180_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7180_MethodInfos/* methods */
	, IList_1_t7180_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7180_il2cpp_TypeInfo/* element_class */
	, IList_1_t7180_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7180_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7180_0_0_0/* byval_arg */
	, &IList_1_t7180_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7180_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t7181_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo ICollection_1_get_Count_m37274_MethodInfo;
static PropertyInfo ICollection_1_t7181____Count_PropertyInfo = 
{
	&ICollection_1_t7181_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37274_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37275_MethodInfo;
static PropertyInfo ICollection_1_t7181____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7181_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37275_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7181_PropertyInfos[] =
{
	&ICollection_1_t7181____Count_PropertyInfo,
	&ICollection_1_t7181____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37274_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m37274_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37274_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37275_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37275_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37275_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldInfo_t2653_0_0_0;
extern Il2CppType _FieldInfo_t2653_0_0_0;
static ParameterInfo ICollection_1_t7181_ICollection_1_Add_m37276_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldInfo_t2653_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37276_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Add(T)
MethodInfo ICollection_1_Add_m37276_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7181_ICollection_1_Add_m37276_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37276_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37277_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Clear()
MethodInfo ICollection_1_Clear_m37277_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37277_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldInfo_t2653_0_0_0;
static ParameterInfo ICollection_1_t7181_ICollection_1_Contains_m37278_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldInfo_t2653_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37278_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m37278_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7181_ICollection_1_Contains_m37278_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37278_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldInfoU5BU5D_t4969_0_0_0;
extern Il2CppType _FieldInfoU5BU5D_t4969_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7181_ICollection_1_CopyTo_m37279_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_FieldInfoU5BU5D_t4969_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37279_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37279_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7181_ICollection_1_CopyTo_m37279_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37279_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldInfo_t2653_0_0_0;
static ParameterInfo ICollection_1_t7181_ICollection_1_Remove_m37280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldInfo_t2653_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37280_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m37280_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7181_ICollection_1_Remove_m37280_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37280_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7181_MethodInfos[] =
{
	&ICollection_1_get_Count_m37274_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37275_MethodInfo,
	&ICollection_1_Add_m37276_MethodInfo,
	&ICollection_1_Clear_m37277_MethodInfo,
	&ICollection_1_Contains_m37278_MethodInfo,
	&ICollection_1_CopyTo_m37279_MethodInfo,
	&ICollection_1_Remove_m37280_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7183_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7181_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7183_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7181_0_0_0;
extern Il2CppType ICollection_1_t7181_1_0_0;
struct ICollection_1_t7181;
extern Il2CppGenericClass ICollection_1_t7181_GenericClass;
TypeInfo ICollection_1_t7181_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7181_MethodInfos/* methods */
	, ICollection_1_t7181_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7181_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7181_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7181_0_0_0/* byval_arg */
	, &ICollection_1_t7181_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7181_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldInfo>
extern Il2CppType IEnumerator_1_t5637_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37281_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37281_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7183_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5637_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37281_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7183_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37281_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7183_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7183_0_0_0;
extern Il2CppType IEnumerable_1_t7183_1_0_0;
struct IEnumerable_1_t7183;
extern Il2CppGenericClass IEnumerable_1_t7183_GenericClass;
TypeInfo IEnumerable_1_t7183_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7183_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7183_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7183_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7183_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7183_0_0_0/* byval_arg */
	, &IEnumerable_1_t7183_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7183_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t5637_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo IEnumerator_1_get_Current_m37282_MethodInfo;
static PropertyInfo IEnumerator_1_t5637____Current_PropertyInfo = 
{
	&IEnumerator_1_t5637_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5637_PropertyInfos[] =
{
	&IEnumerator_1_t5637____Current_PropertyInfo,
	NULL
};
extern Il2CppType _FieldInfo_t2653_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37282_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37282_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5637_il2cpp_TypeInfo/* declaring_type */
	, &_FieldInfo_t2653_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37282_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5637_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37282_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5637_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5637_0_0_0;
extern Il2CppType IEnumerator_1_t5637_1_0_0;
struct IEnumerator_1_t5637;
extern Il2CppGenericClass IEnumerator_1_t5637_GenericClass;
TypeInfo IEnumerator_1_t5637_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5637_MethodInfos/* methods */
	, IEnumerator_1_t5637_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5637_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5637_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5637_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5637_0_0_0/* byval_arg */
	, &IEnumerator_1_t5637_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5637_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2997_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_69MethodDeclarations.h"

extern TypeInfo _FieldInfo_t2653_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14680_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_FieldInfo_t2653_m27898_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_FieldInfo_t2653_m27898(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2997____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2997, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t2997____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2997, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2997_FieldInfos[] =
{
	&InternalEnumerator_1_t2997____array_0_FieldInfo,
	&InternalEnumerator_1_t2997____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14677_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2997____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14677_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2997____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2997_PropertyInfos[] =
{
	&InternalEnumerator_1_t2997____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2997____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2997_InternalEnumerator_1__ctor_m14676_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14676_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14676_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t2997_InternalEnumerator_1__ctor_m14676_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14676_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14677_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14677_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14677_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14678_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14678_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14678_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14679_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14679_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14679_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldInfo_t2653_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14680_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14680_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
	, &_FieldInfo_t2653_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14680_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2997_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14676_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14677_MethodInfo,
	&InternalEnumerator_1_Dispose_m14678_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14679_MethodInfo,
	&InternalEnumerator_1_get_Current_m14680_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14679_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14678_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2997_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14677_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14679_MethodInfo,
	&InternalEnumerator_1_Dispose_m14678_MethodInfo,
	&InternalEnumerator_1_get_Current_m14680_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2997_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5637_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2997_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5637_il2cpp_TypeInfo, 7},
};
extern TypeInfo _FieldInfo_t2653_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2997_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14680_MethodInfo/* Method Usage */,
	&_FieldInfo_t2653_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_FieldInfo_t2653_m27898_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2997_0_0_0;
extern Il2CppType InternalEnumerator_1_t2997_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2997_GenericClass;
TypeInfo InternalEnumerator_1_t2997_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2997_MethodInfos/* methods */
	, InternalEnumerator_1_t2997_PropertyInfos/* properties */
	, InternalEnumerator_1_t2997_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2997_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2997_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2997_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2997_1_0_0/* this_arg */
	, InternalEnumerator_1_t2997_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2997_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2997_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2997)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t7182_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>
extern MethodInfo IList_1_get_Item_m37283_MethodInfo;
extern MethodInfo IList_1_set_Item_m37284_MethodInfo;
static PropertyInfo IList_1_t7182____Item_PropertyInfo = 
{
	&IList_1_t7182_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37283_MethodInfo/* get */
	, &IList_1_set_Item_m37284_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7182_PropertyInfos[] =
{
	&IList_1_t7182____Item_PropertyInfo,
	NULL
};
extern Il2CppType _FieldInfo_t2653_0_0_0;
static ParameterInfo IList_1_t7182_IList_1_IndexOf_m37285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldInfo_t2653_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37285_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37285_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7182_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7182_IList_1_IndexOf_m37285_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37285_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _FieldInfo_t2653_0_0_0;
static ParameterInfo IList_1_t7182_IList_1_Insert_m37286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_FieldInfo_t2653_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37286_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37286_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7182_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7182_IList_1_Insert_m37286_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37286_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7182_IList_1_RemoveAt_m37287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37287_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37287_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7182_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7182_IList_1_RemoveAt_m37287_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37287_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7182_IList_1_get_Item_m37283_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _FieldInfo_t2653_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37283_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37283_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7182_il2cpp_TypeInfo/* declaring_type */
	, &_FieldInfo_t2653_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7182_IList_1_get_Item_m37283_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37283_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _FieldInfo_t2653_0_0_0;
static ParameterInfo IList_1_t7182_IList_1_set_Item_m37284_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_FieldInfo_t2653_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37284_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37284_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7182_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7182_IList_1_set_Item_m37284_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37284_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7182_MethodInfos[] =
{
	&IList_1_IndexOf_m37285_MethodInfo,
	&IList_1_Insert_m37286_MethodInfo,
	&IList_1_RemoveAt_m37287_MethodInfo,
	&IList_1_get_Item_m37283_MethodInfo,
	&IList_1_set_Item_m37284_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7182_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7181_il2cpp_TypeInfo,
	&IEnumerable_1_t7183_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7182_0_0_0;
extern Il2CppType IList_1_t7182_1_0_0;
struct IList_1_t7182;
extern Il2CppGenericClass IList_1_t7182_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7182_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7182_MethodInfos/* methods */
	, IList_1_t7182_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7182_il2cpp_TypeInfo/* element_class */
	, IList_1_t7182_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7182_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7182_0_0_0/* byval_arg */
	, &IList_1_t7182_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7182_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo;
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_3MethodDeclarations.h"

extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14685_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14681_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m1245_MethodInfo;


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::.ctor()
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.IEnumerator.get_Current()
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::MoveNext()
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::Dispose()
// Metadata Definition System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>
extern Il2CppType IEnumerable_1_t161_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____source_0_FieldInfo = 
{
	"source"/* name */
	, &IEnumerable_1_t161_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___source_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IEnumerator_1_t310_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3C$s_97U3E__0_1_FieldInfo = 
{
	"<$s_97>__0"/* name */
	, &IEnumerator_1_t310_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___U3C$s_97U3E__0_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType FieldInfo_t162_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3CelementU3E__1_2_FieldInfo = 
{
	"<element>__1"/* name */
	, &FieldInfo_t162_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___U3CelementU3E__1_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t158_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____predicate_3_FieldInfo = 
{
	"predicate"/* name */
	, &Func_2_t158_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___predicate_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____$PC_4_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___$PC_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType FieldInfo_t162_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____$current_5_FieldInfo = 
{
	"$current"/* name */
	, &FieldInfo_t162_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___$current_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IEnumerable_1_t161_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3C$U3Esource_6_FieldInfo = 
{
	"<$>source"/* name */
	, &IEnumerable_1_t161_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___U3C$U3Esource_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t158_0_0_3;
FieldInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3C$U3Epredicate_7_FieldInfo = 
{
	"<$>predicate"/* name */
	, &Func_2_t158_0_0_3/* type */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998, ___U3C$U3Epredicate_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_FieldInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____source_0_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3C$s_97U3E__0_1_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3CelementU3E__1_2_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____predicate_3_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____$PC_4_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____$current_5_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3C$U3Esource_6_FieldInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____U3C$U3Epredicate_7_FieldInfo,
	NULL
};
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14682_MethodInfo;
static PropertyInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo = 
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<TSource>.Current"/* name */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14682_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14683_MethodInfo;
static PropertyInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14683_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_PropertyInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____System_Collections_Generic_IEnumeratorU3CTSourceU3E_Current_PropertyInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14681_GenericMethod;
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::.ctor()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14681_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14629_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* declaring_type */
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
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14681_GenericMethod/* genericMethod */

};
extern Il2CppType FieldInfo_t162_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14682_GenericMethod;
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14682_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<TSource>.get_Current"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14630_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* declaring_type */
	, &FieldInfo_t162_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14682_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14683_GenericMethod;
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14683_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14631_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14683_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t19_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14684_GenericMethod;
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14684_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14632_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t19_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14684_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_1_t310_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14685_GenericMethod;
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14685_MethodInfo = 
{
	"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14633_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t310_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14685_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14686_GenericMethod;
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::MoveNext()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14686_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14634_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* declaring_type */
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
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14686_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494;
extern Il2CppGenericMethod U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14687_GenericMethod;
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Reflection.FieldInfo>::Dispose()
MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14687_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14635_gshared/* method */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14687_GenericMethod/* genericMethod */

};
static MethodInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_MethodInfos[] =
{
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14681_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14682_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14683_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14684_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14685_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14686_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14687_MethodInfo,
	NULL
};
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14686_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14687_MethodInfo;
extern MethodInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14684_MethodInfo;
static MethodInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m14683_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m14686_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m14687_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m14684_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14685_MethodInfo,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m14682_MethodInfo,
};
static TypeInfo* U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t161_il2cpp_TypeInfo,
	&IEnumerator_1_t310_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerable_t103_il2cpp_TypeInfo, 7},
	{ &IEnumerable_1_t161_il2cpp_TypeInfo, 8},
	{ &IEnumerator_1_t310_il2cpp_TypeInfo, 9},
};
extern TypeInfo FieldInfo_t162_il2cpp_TypeInfo;
extern TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_RGCTXData[7] = 
{
	&FieldInfo_t162_il2cpp_TypeInfo/* Class Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m14685_MethodInfo/* Method Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* Class Usage */,
	&U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m14681_MethodInfo/* Method Usage */,
	&IEnumerable_1_GetEnumerator_m1245_MethodInfo/* Method Usage */,
	&IEnumerator_1_get_Current_m1246_MethodInfo/* Method Usage */,
	&Func_2_Invoke_m14668_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_0_0_0;
extern Il2CppType U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_1_0_0;
struct U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998;
extern Il2CppGenericClass U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_GenericClass;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5489;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m5490;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m5491;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m5492;
extern CustomAttributesCache U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache_U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m5494;
TypeInfo U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo = 
{
	&g_System_Core_dll_Image/* image */
	, NULL/* gc_desc */
	, "<CreateWhereIterator>c__Iterator1D`1"/* name */
	, ""/* namespaze */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_MethodInfos/* methods */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_PropertyInfos/* properties */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Enumerable_t119_il2cpp_TypeInfo/* nested_in */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* element_class */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_InterfacesTypeInfos/* implemented_interfaces */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_VTable/* vtable */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t1191__CustomAttributeCache/* custom_attributes_cache */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_il2cpp_TypeInfo/* cast_class */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_0_0_0/* byval_arg */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_1_0_0/* this_arg */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_InterfacesOffsets/* interface_offsets */
	, &U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t2998)/* instance_size */
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
	, 7/* method_count */
	, 2/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 5/* interfaces_count */
	, 5/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBaseGeneric`1>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2999_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBaseGeneric`1>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_18MethodDeclarations.h"

// UnityTest.ActionBaseGeneric`1
#include "AssemblyU2DCSharp_UnityTest_ActionBaseGeneric_1.h"
// UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_14.h"
extern TypeInfo ActionBaseGeneric_1_t163_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3000_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_14MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m14690_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m14692_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBaseGeneric`1>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBaseGeneric`1>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBaseGeneric`1>
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t2999____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t2999_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2999, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2999_FieldInfos[] =
{
	&CachedInvokableCall_1_t2999____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType ActionBaseGeneric_1_t163_0_0_0;
extern Il2CppType ActionBaseGeneric_1_t163_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2999_CachedInvokableCall_1__ctor_m14688_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &ActionBaseGeneric_1_t163_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m14688_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBaseGeneric`1>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m14688_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m12827_gshared/* method */
	, &CachedInvokableCall_1_t2999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2999_CachedInvokableCall_1__ctor_m14688_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m14688_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2999_CachedInvokableCall_1_Invoke_m14689_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m14689_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.ActionBaseGeneric`1>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m14689_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m12829_gshared/* method */
	, &CachedInvokableCall_1_t2999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2999_CachedInvokableCall_1_Invoke_m14689_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m14689_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2999_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m14688_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14689_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m14689_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m14693_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2999_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14689_MethodInfo,
	&InvokableCall_1_Find_m14693_MethodInfo,
};
extern Il2CppType UnityAction_1_t3001_0_0_0;
extern TypeInfo UnityAction_1_t3001_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisActionBaseGeneric_1_t163_m27909_MethodInfo;
extern TypeInfo ActionBaseGeneric_1_t163_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m14695_MethodInfo;
extern TypeInfo ActionBaseGeneric_1_t163_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2999_RGCTXData[8] = 
{
	&UnityAction_1_t3001_0_0_0/* Type Usage */,
	&UnityAction_1_t3001_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisActionBaseGeneric_1_t163_m27909_MethodInfo/* Method Usage */,
	&ActionBaseGeneric_1_t163_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14695_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m14690_MethodInfo/* Method Usage */,
	&ActionBaseGeneric_1_t163_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m14692_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2999_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2999_1_0_0;
struct CachedInvokableCall_1_t2999;
extern Il2CppGenericClass CachedInvokableCall_1_t2999_GenericClass;
TypeInfo CachedInvokableCall_1_t2999_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2999_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2999_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2999_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2999_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2999_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2999_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2999_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2999_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2999_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2999)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_21.h"
extern TypeInfo UnityAction_1_t3001_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_21MethodDeclarations.h"
struct BaseInvokableCall_t981;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.ActionBaseGeneric`1>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.ActionBaseGeneric`1>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisActionBaseGeneric_1_t163_m27909(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>
extern Il2CppType UnityAction_1_t3001_0_0_1;
FieldInfo InvokableCall_1_t3000____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3001_0_0_1/* type */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3000, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3000_FieldInfos[] =
{
	&InvokableCall_1_t3000____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t3000_InvokableCall_1__ctor_m14690_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14690_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m14690_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12830_gshared/* method */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3000_InvokableCall_1__ctor_m14690_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m14690_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3001_0_0_0;
static ParameterInfo InvokableCall_1_t3000_InvokableCall_1__ctor_m14691_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3001_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14691_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m14691_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12831_gshared/* method */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t3000_InvokableCall_1__ctor_m14691_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m14691_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t3000_InvokableCall_1_Invoke_m14692_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14692_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m14692_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m12832_gshared/* method */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t3000_InvokableCall_1_Invoke_m14692_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m14692_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t3000_InvokableCall_1_Find_m14693_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m14693_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.ActionBaseGeneric`1>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m14693_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m12833_gshared/* method */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3000_InvokableCall_1_Find_m14693_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m14693_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3000_MethodInfos[] =
{
	&InvokableCall_1__ctor_m14690_MethodInfo,
	&InvokableCall_1__ctor_m14691_MethodInfo,
	&InvokableCall_1_Invoke_m14692_MethodInfo,
	&InvokableCall_1_Find_m14693_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3000_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_1_Invoke_m14692_MethodInfo,
	&InvokableCall_1_Find_m14693_MethodInfo,
};
extern TypeInfo UnityAction_1_t3001_il2cpp_TypeInfo;
extern TypeInfo ActionBaseGeneric_1_t163_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3000_RGCTXData[5] = 
{
	&UnityAction_1_t3001_0_0_0/* Type Usage */,
	&UnityAction_1_t3001_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisActionBaseGeneric_1_t163_m27909_MethodInfo/* Method Usage */,
	&ActionBaseGeneric_1_t163_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14695_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3000_0_0_0;
extern Il2CppType InvokableCall_1_t3000_1_0_0;
struct InvokableCall_1_t3000;
extern Il2CppGenericClass InvokableCall_1_t3000_GenericClass;
TypeInfo InvokableCall_1_t3000_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3000_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3000_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3000_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3000_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3000_0_0_0/* byval_arg */
	, &InvokableCall_1_t3000_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3000_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3000_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3000)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t3001_UnityAction_1__ctor_m14694_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m14694_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m14694_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m12834_gshared/* method */
	, &UnityAction_1_t3001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_1_t3001_UnityAction_1__ctor_m14694_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m14694_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBaseGeneric_1_t163_0_0_0;
static ParameterInfo UnityAction_1_t3001_UnityAction_1_Invoke_m14695_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ActionBaseGeneric_1_t163_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m14695_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m14695_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m12835_gshared/* method */
	, &UnityAction_1_t3001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t3001_UnityAction_1_Invoke_m14695_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m14695_GenericMethod/* genericMethod */

};
extern Il2CppType ActionBaseGeneric_1_t163_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3001_UnityAction_1_BeginInvoke_m14696_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ActionBaseGeneric_1_t163_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14696_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m14696_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m12836_gshared/* method */
	, &UnityAction_1_t3001_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3001_UnityAction_1_BeginInvoke_m14696_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m14696_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t3001_UnityAction_1_EndInvoke_m14697_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14697_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.ActionBaseGeneric`1>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m14697_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m12837_gshared/* method */
	, &UnityAction_1_t3001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t3001_UnityAction_1_EndInvoke_m14697_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m14697_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3001_MethodInfos[] =
{
	&UnityAction_1__ctor_m14694_MethodInfo,
	&UnityAction_1_Invoke_m14695_MethodInfo,
	&UnityAction_1_BeginInvoke_m14696_MethodInfo,
	&UnityAction_1_EndInvoke_m14697_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m14696_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m14697_MethodInfo;
static MethodInfo* UnityAction_1_t3001_VTable[] =
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
	&UnityAction_1_Invoke_m14695_MethodInfo,
	&UnityAction_1_BeginInvoke_m14696_MethodInfo,
	&UnityAction_1_EndInvoke_m14697_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3001_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3001_1_0_0;
struct UnityAction_1_t3001;
extern Il2CppGenericClass UnityAction_1_t3001_GenericClass;
TypeInfo UnityAction_1_t3001_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3001_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3001_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3001_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3001_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3001_0_0_0/* byval_arg */
	, &UnityAction_1_t3001_1_0_0/* this_arg */
	, UnityAction_1_t3001_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3001_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3001)/* instance_size */
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
// UnityTest.ActionBaseGeneric`1<System.Object>
#include "AssemblyU2DCSharp_UnityTest_ActionBaseGeneric_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ActionBaseGeneric_1_t3002_il2cpp_TypeInfo;
// UnityTest.ActionBaseGeneric`1<System.Object>
#include "AssemblyU2DCSharp_UnityTest_ActionBaseGeneric_1_genMethodDeclarations.h"

extern TypeInfo TypeU5BU5D_t160_il2cpp_TypeInfo;
// UnityTest.ActionBase
#include "AssemblyU2DCSharp_UnityTest_ActionBaseMethodDeclarations.h"
extern MethodInfo ActionBase__ctor_m819_MethodInfo;
extern MethodInfo ActionBaseGeneric_1_Compare_m37288_MethodInfo;


// System.Void UnityTest.ActionBaseGeneric`1<System.Object>::.ctor()
extern MethodInfo ActionBaseGeneric_1__ctor_m14698_MethodInfo;
 void ActionBaseGeneric_1__ctor_m14698_gshared (ActionBaseGeneric_1_t3002 * __this, MethodInfo* method)
{
	{
		ActionBase__ctor_m819(__this, /*hidden argument*/&ActionBase__ctor_m819_MethodInfo);
		return;
	}
}
// System.Boolean UnityTest.ActionBaseGeneric`1<System.Object>::Compare(System.Object)
extern MethodInfo ActionBaseGeneric_1_Compare_m14699_MethodInfo;
 bool ActionBaseGeneric_1_Compare_m14699_gshared (ActionBaseGeneric_1_t3002 * __this, Object_t * ___objVal, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this, ((Object_t *)Castclass(___objVal, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_0;
	}
}
// System.Boolean UnityTest.ActionBaseGeneric`1<System.Object>::Compare(T)
// System.Type[] UnityTest.ActionBaseGeneric`1<System.Object>::GetAccepatbleTypesForA()
extern MethodInfo ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_MethodInfo;
 TypeU5BU5D_t160* ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_gshared (ActionBaseGeneric_1_t3002 * __this, MethodInfo* method)
{
	{
		TypeU5BU5D_t160* L_0 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		return L_0;
	}
}
// System.Type UnityTest.ActionBaseGeneric`1<System.Object>::GetParameterType()
extern MethodInfo ActionBaseGeneric_1_GetParameterType_m14701_MethodInfo;
 Type_t * ActionBaseGeneric_1_GetParameterType_m14701_gshared (ActionBaseGeneric_1_t3002 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityTest.ActionBaseGeneric`1<System.Object>::get_UseCache()
extern MethodInfo ActionBaseGeneric_1_get_UseCache_m14702_MethodInfo;
 bool ActionBaseGeneric_1_get_UseCache_m14702_gshared (ActionBaseGeneric_1_t3002 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// Metadata Definition UnityTest.ActionBaseGeneric`1<System.Object>
static PropertyInfo ActionBaseGeneric_1_t3002____UseCache_PropertyInfo = 
{
	&ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* parent */
	, "UseCache"/* name */
	, &ActionBaseGeneric_1_get_UseCache_m14702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ActionBaseGeneric_1_t3002_PropertyInfos[] =
{
	&ActionBaseGeneric_1_t3002____UseCache_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ActionBaseGeneric_1__ctor_m14698_GenericMethod;
// System.Void UnityTest.ActionBaseGeneric`1<System.Object>::.ctor()
MethodInfo ActionBaseGeneric_1__ctor_m14698_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ActionBaseGeneric_1__ctor_m14698_gshared/* method */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ActionBaseGeneric_1__ctor_m14698_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ActionBaseGeneric_1_t3002_ActionBaseGeneric_1_Compare_m14699_ParameterInfos[] = 
{
	{"objVal", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ActionBaseGeneric_1_Compare_m14699_GenericMethod;
// System.Boolean UnityTest.ActionBaseGeneric`1<System.Object>::Compare(System.Object)
MethodInfo ActionBaseGeneric_1_Compare_m14699_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&ActionBaseGeneric_1_Compare_m14699_gshared/* method */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ActionBaseGeneric_1_t3002_ActionBaseGeneric_1_Compare_m14699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ActionBaseGeneric_1_Compare_m14699_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ActionBaseGeneric_1_t3002_ActionBaseGeneric_1_Compare_m37288_ParameterInfos[] = 
{
	{"objVal", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ActionBaseGeneric_1_Compare_m37288_GenericMethod;
// System.Boolean UnityTest.ActionBaseGeneric`1<System.Object>::Compare(T)
MethodInfo ActionBaseGeneric_1_Compare_m37288_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ActionBaseGeneric_1_t3002_ActionBaseGeneric_1_Compare_m37288_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ActionBaseGeneric_1_Compare_m37288_GenericMethod/* genericMethod */

};
extern Il2CppType TypeU5BU5D_t160_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_GenericMethod;
// System.Type[] UnityTest.ActionBaseGeneric`1<System.Object>::GetAccepatbleTypesForA()
MethodInfo ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_MethodInfo = 
{
	"GetAccepatbleTypesForA"/* name */
	, (methodPointerType)&ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_gshared/* method */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t160_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_GenericMethod/* genericMethod */

};
extern Il2CppType Type_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ActionBaseGeneric_1_GetParameterType_m14701_GenericMethod;
// System.Type UnityTest.ActionBaseGeneric`1<System.Object>::GetParameterType()
MethodInfo ActionBaseGeneric_1_GetParameterType_m14701_MethodInfo = 
{
	"GetParameterType"/* name */
	, (methodPointerType)&ActionBaseGeneric_1_GetParameterType_m14701_gshared/* method */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ActionBaseGeneric_1_GetParameterType_m14701_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ActionBaseGeneric_1_get_UseCache_m14702_GenericMethod;
// System.Boolean UnityTest.ActionBaseGeneric`1<System.Object>::get_UseCache()
MethodInfo ActionBaseGeneric_1_get_UseCache_m14702_MethodInfo = 
{
	"get_UseCache"/* name */
	, (methodPointerType)&ActionBaseGeneric_1_get_UseCache_m14702_gshared/* method */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2244/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ActionBaseGeneric_1_get_UseCache_m14702_GenericMethod/* genericMethod */

};
static MethodInfo* ActionBaseGeneric_1_t3002_MethodInfos[] =
{
	&ActionBaseGeneric_1__ctor_m14698_MethodInfo,
	&ActionBaseGeneric_1_Compare_m14699_MethodInfo,
	&ActionBaseGeneric_1_Compare_m37288_MethodInfo,
	&ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_MethodInfo,
	&ActionBaseGeneric_1_GetParameterType_m14701_MethodInfo,
	&ActionBaseGeneric_1_get_UseCache_m14702_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m472_MethodInfo;
extern MethodInfo Object_GetHashCode_m474_MethodInfo;
extern MethodInfo Object_ToString_m475_MethodInfo;
extern MethodInfo ActionBase_GetDepthOfSearch_m821_MethodInfo;
extern MethodInfo ActionBase_GetExcludedFieldNames_m822_MethodInfo;
extern MethodInfo ActionBase_GetConfigurationDescription_m826_MethodInfo;
extern MethodInfo ActionBase_Fail_m829_MethodInfo;
extern MethodInfo ActionBase_GetFailureMessage_m830_MethodInfo;
static MethodInfo* ActionBaseGeneric_1_t3002_VTable[] =
{
	&Object_Equals_m472_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m474_MethodInfo,
	&Object_ToString_m475_MethodInfo,
	&ActionBaseGeneric_1_GetAccepatbleTypesForA_m14700_MethodInfo,
	&ActionBase_GetDepthOfSearch_m821_MethodInfo,
	&ActionBase_GetExcludedFieldNames_m822_MethodInfo,
	&ActionBaseGeneric_1_Compare_m14699_MethodInfo,
	&ActionBaseGeneric_1_get_UseCache_m14702_MethodInfo,
	&ActionBaseGeneric_1_GetParameterType_m14701_MethodInfo,
	&ActionBase_GetConfigurationDescription_m826_MethodInfo,
	&ActionBase_Fail_m829_MethodInfo,
	&ActionBase_GetFailureMessage_m830_MethodInfo,
	NULL,
};
extern TypeInfo Object_t_il2cpp_TypeInfo;
static Il2CppRGCTXData ActionBaseGeneric_1_t3002_RGCTXData[3] = 
{
	&Object_t_il2cpp_TypeInfo/* Class Usage */,
	&ActionBaseGeneric_1_Compare_m37288_MethodInfo/* Method Usage */,
	&Object_t_0_0_0/* Type Usage */,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType ActionBaseGeneric_1_t3002_0_0_0;
extern Il2CppType ActionBaseGeneric_1_t3002_1_0_0;
struct ActionBaseGeneric_1_t3002;
extern Il2CppGenericClass ActionBaseGeneric_1_t3002_GenericClass;
TypeInfo ActionBaseGeneric_1_t3002_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "ActionBaseGeneric`1"/* name */
	, "UnityTest"/* namespaze */
	, ActionBaseGeneric_1_t3002_MethodInfos/* methods */
	, ActionBaseGeneric_1_t3002_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ActionBase_t150_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ActionBaseGeneric_1_t3002_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ActionBaseGeneric_1_t3002_il2cpp_TypeInfo/* cast_class */
	, &ActionBaseGeneric_1_t3002_0_0_0/* byval_arg */
	, &ActionBaseGeneric_1_t3002_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ActionBaseGeneric_1_t3002_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, ActionBaseGeneric_1_t3002_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ActionBaseGeneric_1_t3002)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
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
	, 6/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5639_il2cpp_TypeInfo;

// UnityTest.BoolComparer
#include "AssemblyU2DCSharp_UnityTest_BoolComparer.h"


// T System.Collections.Generic.IEnumerator`1<UnityTest.BoolComparer>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.BoolComparer>
extern MethodInfo IEnumerator_1_get_Current_m37289_MethodInfo;
static PropertyInfo IEnumerator_1_t5639____Current_PropertyInfo = 
{
	&IEnumerator_1_t5639_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37289_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5639_PropertyInfos[] =
{
	&IEnumerator_1_t5639____Current_PropertyInfo,
	NULL
};
extern Il2CppType BoolComparer_t164_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37289_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.BoolComparer>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37289_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5639_il2cpp_TypeInfo/* declaring_type */
	, &BoolComparer_t164_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37289_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5639_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37289_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5639_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5639_0_0_0;
extern Il2CppType IEnumerator_1_t5639_1_0_0;
struct IEnumerator_1_t5639;
extern Il2CppGenericClass IEnumerator_1_t5639_GenericClass;
TypeInfo IEnumerator_1_t5639_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5639_MethodInfos/* methods */
	, IEnumerator_1_t5639_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5639_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5639_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5639_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5639_0_0_0/* byval_arg */
	, &IEnumerator_1_t5639_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5639_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.BoolComparer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3003_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.BoolComparer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70MethodDeclarations.h"

extern TypeInfo BoolComparer_t164_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14707_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBoolComparer_t164_m27911_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.BoolComparer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.BoolComparer>(System.Int32)
#define Array_InternalArray__get_Item_TisBoolComparer_t164_m27911(__this, p0, method) (BoolComparer_t164 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.BoolComparer>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3003____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3003, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t3003____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3003, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3003_FieldInfos[] =
{
	&InternalEnumerator_1_t3003____array_0_FieldInfo,
	&InternalEnumerator_1_t3003____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14704_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3003____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3003_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14704_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3003____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3003_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14707_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3003_PropertyInfos[] =
{
	&InternalEnumerator_1_t3003____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3003____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3003_InternalEnumerator_1__ctor_m14703_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14703_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14703_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t3003_InternalEnumerator_1__ctor_m14703_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14703_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14704_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14704_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14704_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14705_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14705_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14705_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14706_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14706_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14706_GenericMethod/* genericMethod */

};
extern Il2CppType BoolComparer_t164_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14707_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.BoolComparer>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14707_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* declaring_type */
	, &BoolComparer_t164_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14707_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3003_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14703_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14704_MethodInfo,
	&InternalEnumerator_1_Dispose_m14705_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14706_MethodInfo,
	&InternalEnumerator_1_get_Current_m14707_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14706_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14705_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3003_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14704_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14706_MethodInfo,
	&InternalEnumerator_1_Dispose_m14705_MethodInfo,
	&InternalEnumerator_1_get_Current_m14707_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3003_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5639_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3003_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5639_il2cpp_TypeInfo, 7},
};
extern TypeInfo BoolComparer_t164_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3003_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14707_MethodInfo/* Method Usage */,
	&BoolComparer_t164_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBoolComparer_t164_m27911_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3003_0_0_0;
extern Il2CppType InternalEnumerator_1_t3003_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3003_GenericClass;
TypeInfo InternalEnumerator_1_t3003_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3003_MethodInfos/* methods */
	, InternalEnumerator_1_t3003_PropertyInfos/* properties */
	, InternalEnumerator_1_t3003_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3003_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3003_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3003_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3003_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3003_1_0_0/* this_arg */
	, InternalEnumerator_1_t3003_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3003_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3003_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3003)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t7184_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>
extern MethodInfo ICollection_1_get_Count_m37290_MethodInfo;
static PropertyInfo ICollection_1_t7184____Count_PropertyInfo = 
{
	&ICollection_1_t7184_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37290_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37291_MethodInfo;
static PropertyInfo ICollection_1_t7184____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7184_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7184_PropertyInfos[] =
{
	&ICollection_1_t7184____Count_PropertyInfo,
	&ICollection_1_t7184____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37290_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::get_Count()
MethodInfo ICollection_1_get_Count_m37290_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37290_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37291_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37291_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37291_GenericMethod/* genericMethod */

};
extern Il2CppType BoolComparer_t164_0_0_0;
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo ICollection_1_t7184_ICollection_1_Add_m37292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37292_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Add(T)
MethodInfo ICollection_1_Add_m37292_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7184_ICollection_1_Add_m37292_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37292_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37293_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Clear()
MethodInfo ICollection_1_Clear_m37293_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37293_GenericMethod/* genericMethod */

};
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo ICollection_1_t7184_ICollection_1_Contains_m37294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37294_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Contains(T)
MethodInfo ICollection_1_Contains_m37294_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7184_ICollection_1_Contains_m37294_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37294_GenericMethod/* genericMethod */

};
extern Il2CppType BoolComparerU5BU5D_t5267_0_0_0;
extern Il2CppType BoolComparerU5BU5D_t5267_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7184_ICollection_1_CopyTo_m37295_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BoolComparerU5BU5D_t5267_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37295_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37295_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7184_ICollection_1_CopyTo_m37295_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37295_GenericMethod/* genericMethod */

};
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo ICollection_1_t7184_ICollection_1_Remove_m37296_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37296_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.BoolComparer>::Remove(T)
MethodInfo ICollection_1_Remove_m37296_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7184_ICollection_1_Remove_m37296_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37296_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7184_MethodInfos[] =
{
	&ICollection_1_get_Count_m37290_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37291_MethodInfo,
	&ICollection_1_Add_m37292_MethodInfo,
	&ICollection_1_Clear_m37293_MethodInfo,
	&ICollection_1_Contains_m37294_MethodInfo,
	&ICollection_1_CopyTo_m37295_MethodInfo,
	&ICollection_1_Remove_m37296_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7186_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7184_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7186_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7184_0_0_0;
extern Il2CppType ICollection_1_t7184_1_0_0;
struct ICollection_1_t7184;
extern Il2CppGenericClass ICollection_1_t7184_GenericClass;
TypeInfo ICollection_1_t7184_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7184_MethodInfos/* methods */
	, ICollection_1_t7184_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7184_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7184_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7184_0_0_0/* byval_arg */
	, &ICollection_1_t7184_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7184_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.BoolComparer>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.BoolComparer>
extern Il2CppType IEnumerator_1_t5639_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37297_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.BoolComparer>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37297_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7186_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5639_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37297_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7186_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37297_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7186_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7186_0_0_0;
extern Il2CppType IEnumerable_1_t7186_1_0_0;
struct IEnumerable_1_t7186;
extern Il2CppGenericClass IEnumerable_1_t7186_GenericClass;
TypeInfo IEnumerable_1_t7186_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7186_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7186_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7186_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7186_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7186_0_0_0/* byval_arg */
	, &IEnumerable_1_t7186_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7186_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t7185_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.BoolComparer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.BoolComparer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.BoolComparer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.BoolComparer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.BoolComparer>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.BoolComparer>
extern MethodInfo IList_1_get_Item_m37298_MethodInfo;
extern MethodInfo IList_1_set_Item_m37299_MethodInfo;
static PropertyInfo IList_1_t7185____Item_PropertyInfo = 
{
	&IList_1_t7185_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37298_MethodInfo/* get */
	, &IList_1_set_Item_m37299_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7185_PropertyInfos[] =
{
	&IList_1_t7185____Item_PropertyInfo,
	NULL
};
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo IList_1_t7185_IList_1_IndexOf_m37300_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37300_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.BoolComparer>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37300_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7185_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7185_IList_1_IndexOf_m37300_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37300_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo IList_1_t7185_IList_1_Insert_m37301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37301_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.BoolComparer>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37301_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7185_IList_1_Insert_m37301_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37301_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7185_IList_1_RemoveAt_m37302_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37302_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.BoolComparer>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37302_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7185_IList_1_RemoveAt_m37302_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37302_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7185_IList_1_get_Item_m37298_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType BoolComparer_t164_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37298_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.BoolComparer>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37298_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7185_il2cpp_TypeInfo/* declaring_type */
	, &BoolComparer_t164_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7185_IList_1_get_Item_m37298_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37298_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo IList_1_t7185_IList_1_set_Item_m37299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37299_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.BoolComparer>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37299_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7185_IList_1_set_Item_m37299_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37299_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7185_MethodInfos[] =
{
	&IList_1_IndexOf_m37300_MethodInfo,
	&IList_1_Insert_m37301_MethodInfo,
	&IList_1_RemoveAt_m37302_MethodInfo,
	&IList_1_get_Item_m37298_MethodInfo,
	&IList_1_set_Item_m37299_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7185_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7184_il2cpp_TypeInfo,
	&IEnumerable_1_t7186_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7185_0_0_0;
extern Il2CppType IList_1_t7185_1_0_0;
struct IList_1_t7185;
extern Il2CppGenericClass IList_1_t7185_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7185_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7185_MethodInfos/* methods */
	, IList_1_t7185_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7185_il2cpp_TypeInfo/* element_class */
	, IList_1_t7185_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7185_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7185_0_0_0/* byval_arg */
	, &IList_1_t7185_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7185_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t7187_il2cpp_TypeInfo;

// UnityTest.ComparerBaseGeneric`1<System.Boolean>
#include "AssemblyU2DCSharp_UnityTest_ComparerBaseGeneric_1_gen.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>
extern MethodInfo ICollection_1_get_Count_m37303_MethodInfo;
static PropertyInfo ICollection_1_t7187____Count_PropertyInfo = 
{
	&ICollection_1_t7187_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37303_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37304_MethodInfo;
static PropertyInfo ICollection_1_t7187____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7187_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37304_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7187_PropertyInfos[] =
{
	&ICollection_1_t7187____Count_PropertyInfo,
	&ICollection_1_t7187____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37303_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Count()
MethodInfo ICollection_1_get_Count_m37303_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37303_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37304_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37304_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37304_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
static ParameterInfo ICollection_1_t7187_ICollection_1_Add_m37305_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_1_t165_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37305_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Add(T)
MethodInfo ICollection_1_Add_m37305_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7187_ICollection_1_Add_m37305_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37305_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37306_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Clear()
MethodInfo ICollection_1_Clear_m37306_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37306_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
static ParameterInfo ICollection_1_t7187_ICollection_1_Contains_m37307_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_1_t165_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37307_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Contains(T)
MethodInfo ICollection_1_Contains_m37307_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7187_ICollection_1_Contains_m37307_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37307_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_1U5BU5D_t5268_0_0_0;
extern Il2CppType ComparerBaseGeneric_1U5BU5D_t5268_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7187_ICollection_1_CopyTo_m37308_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_1U5BU5D_t5268_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37308_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37308_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7187_ICollection_1_CopyTo_m37308_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37308_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
static ParameterInfo ICollection_1_t7187_ICollection_1_Remove_m37309_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_1_t165_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37309_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Remove(T)
MethodInfo ICollection_1_Remove_m37309_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7187_ICollection_1_Remove_m37309_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37309_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7187_MethodInfos[] =
{
	&ICollection_1_get_Count_m37303_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37304_MethodInfo,
	&ICollection_1_Add_m37305_MethodInfo,
	&ICollection_1_Clear_m37306_MethodInfo,
	&ICollection_1_Contains_m37307_MethodInfo,
	&ICollection_1_CopyTo_m37308_MethodInfo,
	&ICollection_1_Remove_m37309_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7189_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7187_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7189_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7187_0_0_0;
extern Il2CppType ICollection_1_t7187_1_0_0;
struct ICollection_1_t7187;
extern Il2CppGenericClass ICollection_1_t7187_GenericClass;
TypeInfo ICollection_1_t7187_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7187_MethodInfos/* methods */
	, ICollection_1_t7187_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7187_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7187_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7187_0_0_0/* byval_arg */
	, &ICollection_1_t7187_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7187_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>
extern Il2CppType IEnumerator_1_t5641_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37310_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37310_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7189_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5641_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37310_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7189_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37310_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7189_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7189_0_0_0;
extern Il2CppType IEnumerable_1_t7189_1_0_0;
struct IEnumerable_1_t7189;
extern Il2CppGenericClass IEnumerable_1_t7189_GenericClass;
TypeInfo IEnumerable_1_t7189_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7189_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7189_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7189_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7189_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7189_0_0_0/* byval_arg */
	, &IEnumerable_1_t7189_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7189_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t5641_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>
extern MethodInfo IEnumerator_1_get_Current_m37311_MethodInfo;
static PropertyInfo IEnumerator_1_t5641____Current_PropertyInfo = 
{
	&IEnumerator_1_t5641_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37311_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5641_PropertyInfos[] =
{
	&IEnumerator_1_t5641____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37311_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37311_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5641_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBaseGeneric_1_t165_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37311_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5641_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37311_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5641_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5641_0_0_0;
extern Il2CppType IEnumerator_1_t5641_1_0_0;
struct IEnumerator_1_t5641;
extern Il2CppGenericClass IEnumerator_1_t5641_GenericClass;
TypeInfo IEnumerator_1_t5641_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5641_MethodInfos/* methods */
	, IEnumerator_1_t5641_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5641_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5641_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5641_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5641_0_0_0/* byval_arg */
	, &IEnumerator_1_t5641_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5641_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ComparerBaseGeneric_1_t165_il2cpp_TypeInfo;
// UnityTest.ComparerBaseGeneric`1<System.Boolean>
#include "AssemblyU2DCSharp_UnityTest_ComparerBaseGeneric_1_genMethodDeclarations.h"

// UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>
#include "AssemblyU2DCSharp_UnityTest_ComparerBaseGeneric_2_gen_0MethodDeclarations.h"
extern MethodInfo ComparerBaseGeneric_2__ctor_m14708_MethodInfo;


// System.Void UnityTest.ComparerBaseGeneric`1<System.Boolean>::.ctor()
extern MethodInfo ComparerBaseGeneric_1__ctor_m1263_MethodInfo;
 void ComparerBaseGeneric_1__ctor_m1263 (ComparerBaseGeneric_1_t165 * __this, MethodInfo* method){
	{
		ComparerBaseGeneric_2__ctor_m14708(__this, /*hidden argument*/&ComparerBaseGeneric_2__ctor_m14708_MethodInfo);
		return;
	}
}
// Metadata Definition UnityTest.ComparerBaseGeneric`1<System.Boolean>
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_1__ctor_m1263_GenericMethod;
// System.Void UnityTest.ComparerBaseGeneric`1<System.Boolean>::.ctor()
MethodInfo ComparerBaseGeneric_1__ctor_m1263_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ComparerBaseGeneric_1__ctor_m1263/* method */
	, &ComparerBaseGeneric_1_t165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_1__ctor_m1263_GenericMethod/* genericMethod */

};
static MethodInfo* ComparerBaseGeneric_1_t165_MethodInfos[] =
{
	&ComparerBaseGeneric_1__ctor_m1263_MethodInfo,
	NULL
};
extern MethodInfo ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264_MethodInfo;
extern MethodInfo ComparerBase_Compare_m837_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_get_UseCache_m1265_MethodInfo;
extern MethodInfo ActionBase_GetParameterType_m825_MethodInfo;
extern MethodInfo ComparerBase_GetFailureMessage_m842_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_Compare_m1266_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_get_ConstValue_m1268_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_set_ConstValue_m1269_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_GetDefaultConstValue_m1270_MethodInfo;
static MethodInfo* ComparerBaseGeneric_1_t165_VTable[] =
{
	&Object_Equals_m472_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m474_MethodInfo,
	&Object_ToString_m475_MethodInfo,
	&ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264_MethodInfo,
	&ActionBase_GetDepthOfSearch_m821_MethodInfo,
	&ActionBase_GetExcludedFieldNames_m822_MethodInfo,
	&ComparerBase_Compare_m837_MethodInfo,
	&ComparerBaseGeneric_2_get_UseCache_m1265_MethodInfo,
	&ActionBase_GetParameterType_m825_MethodInfo,
	&ActionBase_GetConfigurationDescription_m826_MethodInfo,
	&ActionBase_Fail_m829_MethodInfo,
	&ComparerBase_GetFailureMessage_m842_MethodInfo,
	&ComparerBaseGeneric_2_Compare_m1266_MethodInfo,
	&ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267_MethodInfo,
	&ComparerBaseGeneric_2_get_ConstValue_m1268_MethodInfo,
	&ComparerBaseGeneric_2_set_ConstValue_m1269_MethodInfo,
	&ComparerBaseGeneric_2_GetDefaultConstValue_m1270_MethodInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType ComparerBaseGeneric_1_t165_1_0_0;
extern TypeInfo ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo;
struct ComparerBaseGeneric_1_t165;
extern Il2CppGenericClass ComparerBaseGeneric_1_t165_GenericClass;
TypeInfo ComparerBaseGeneric_1_t165_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "ComparerBaseGeneric`1"/* name */
	, "UnityTest"/* namespaze */
	, ComparerBaseGeneric_1_t165_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ComparerBaseGeneric_1_t165_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ComparerBaseGeneric_1_t165_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ComparerBaseGeneric_1_t165_il2cpp_TypeInfo/* cast_class */
	, &ComparerBaseGeneric_1_t165_0_0_0/* byval_arg */
	, &ComparerBaseGeneric_1_t165_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ComparerBaseGeneric_1_t165_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ComparerBaseGeneric_1_t165)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 19/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>
#include "AssemblyU2DCSharp_UnityTest_ComparerBaseGeneric_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif

// UnityTest.ComparerBase
#include "AssemblyU2DCSharp_UnityTest_ComparerBaseMethodDeclarations.h"
extern Il2CppType Boolean_t74_0_0_0;
extern MethodInfo ComparerBase__ctor_m836_MethodInfo;
extern MethodInfo Type_get_IsValueType_m1400_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_IsValueType_m14709_MethodInfo;
extern MethodInfo ComparerBaseGeneric_2_Compare_m37312_MethodInfo;


// System.Void UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::.ctor()
 void ComparerBaseGeneric_2__ctor_m14708 (ComparerBaseGeneric_2_t3004 * __this, MethodInfo* method){
	bool V_0 = false;
	{
		Initobj (&Boolean_t74_il2cpp_TypeInfo, (&V_0));
		__this->___constantValueGeneric_13 = V_0;
		ComparerBase__ctor_m836(__this, /*hidden argument*/&ComparerBase__ctor_m836_MethodInfo);
		return;
	}
}
// System.Object UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::get_ConstValue()
 Object_t * ComparerBaseGeneric_2_get_ConstValue_m1268 (ComparerBaseGeneric_2_t3004 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___constantValueGeneric_13);
		bool L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::set_ConstValue(System.Object)
 void ComparerBaseGeneric_2_set_ConstValue_m1269 (ComparerBaseGeneric_2_t3004 * __this, Object_t * ___value, MethodInfo* method){
	{
		__this->___constantValueGeneric_13 = ((*(bool*)((bool*)UnBox (___value, InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo)))));
		return;
	}
}
// System.Object UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::GetDefaultConstValue()
 Object_t * ComparerBaseGeneric_2_GetDefaultConstValue_m1270 (ComparerBaseGeneric_2_t3004 * __this, MethodInfo* method){
	bool V_0 = false;
	{
		Initobj (&Boolean_t74_il2cpp_TypeInfo, (&V_0));
		bool L_0 = V_0;
		Object_t * L_1 = Box(InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo), &L_0);
		return L_1;
	}
}
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::IsValueType(System.Type)
 bool ComparerBaseGeneric_2_IsValueType_m14709 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method){
	{
		NullCheck(___type);
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m1400_MethodInfo, ___type);
		return L_0;
	}
}
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::Compare(System.Object,System.Object)
 bool ComparerBaseGeneric_2_Compare_m1266 (ComparerBaseGeneric_2_t3004 * __this, Object_t * ___a, Object_t * ___b, MethodInfo* method){
	Type_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Boolean_t74_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		V_0 = L_0;
		if (___b)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = ComparerBaseGeneric_2_IsValueType_m14709(NULL /*static, unused*/, V_0, /*hidden argument*/&ComparerBaseGeneric_2_IsValueType_m14709_MethodInfo);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t128 * L_2 = (ArgumentException_t128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t128_il2cpp_TypeInfo));
		ArgumentException__ctor_m651(L_2, (String_t*) &_stringLiteral200, /*hidden argument*/&ArgumentException__ctor_m651_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0027:
	{
		bool L_3 = (bool)VirtFuncInvoker2< bool, bool, bool >::Invoke(&ComparerBaseGeneric_2_Compare_m37312_MethodInfo, __this, ((*(bool*)((bool*)UnBox (___a, InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo))))), ((*(bool*)((bool*)UnBox (___b, InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo))))));
		return L_3;
	}
}
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::Compare(T1,T2)
// System.Type[] UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::GetAccepatbleTypesForA()
 TypeU5BU5D_t160* ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264 (ComparerBaseGeneric_2_t3004 * __this, MethodInfo* method){
	{
		TypeU5BU5D_t160* L_0 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Boolean_t74_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		return L_0;
	}
}
// System.Type[] UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::GetAccepatbleTypesForB()
 TypeU5BU5D_t160* ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267 (ComparerBaseGeneric_2_t3004 * __this, MethodInfo* method){
	{
		TypeU5BU5D_t160* L_0 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Boolean_t74_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		return L_0;
	}
}
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::get_UseCache()
 bool ComparerBaseGeneric_2_get_UseCache_m1265 (ComparerBaseGeneric_2_t3004 * __this, MethodInfo* method){
	{
		return 1;
	}
}
// Metadata Definition UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo ComparerBaseGeneric_2_t3004____constantValueGeneric_13_FieldInfo = 
{
	"constantValueGeneric"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* parent */
	, offsetof(ComparerBaseGeneric_2_t3004, ___constantValueGeneric_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ComparerBaseGeneric_2_t3004_FieldInfos[] =
{
	&ComparerBaseGeneric_2_t3004____constantValueGeneric_13_FieldInfo,
	NULL
};
static PropertyInfo ComparerBaseGeneric_2_t3004____ConstValue_PropertyInfo = 
{
	&ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* parent */
	, "ConstValue"/* name */
	, &ComparerBaseGeneric_2_get_ConstValue_m1268_MethodInfo/* get */
	, &ComparerBaseGeneric_2_set_ConstValue_m1269_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ComparerBaseGeneric_2_t3004____UseCache_PropertyInfo = 
{
	&ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* parent */
	, "UseCache"/* name */
	, &ComparerBaseGeneric_2_get_UseCache_m1265_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ComparerBaseGeneric_2_t3004_PropertyInfos[] =
{
	&ComparerBaseGeneric_2_t3004____ConstValue_PropertyInfo,
	&ComparerBaseGeneric_2_t3004____UseCache_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2__ctor_m14708_GenericMethod;
// System.Void UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::.ctor()
MethodInfo ComparerBaseGeneric_2__ctor_m14708_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2__ctor_m14708/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2__ctor_m14708_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_get_ConstValue_m1268_GenericMethod;
// System.Object UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::get_ConstValue()
MethodInfo ComparerBaseGeneric_2_get_ConstValue_m1268_MethodInfo = 
{
	"get_ConstValue"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_get_ConstValue_m1268/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_get_ConstValue_m1268_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_set_ConstValue_m1269_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_set_ConstValue_m1269_GenericMethod;
// System.Void UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::set_ConstValue(System.Object)
MethodInfo ComparerBaseGeneric_2_set_ConstValue_m1269_MethodInfo = 
{
	"set_ConstValue"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_set_ConstValue_m1269/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_set_ConstValue_m1269_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2246/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_set_ConstValue_m1269_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_GetDefaultConstValue_m1270_GenericMethod;
// System.Object UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::GetDefaultConstValue()
MethodInfo ComparerBaseGeneric_2_GetDefaultConstValue_m1270_MethodInfo = 
{
	"GetDefaultConstValue"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_GetDefaultConstValue_m1270/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_GetDefaultConstValue_m1270_GenericMethod/* genericMethod */

};
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_IsValueType_m14709_ParameterInfos[] = 
{
	{"type", 0, 134217728, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_IsValueType_m14709_GenericMethod;
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::IsValueType(System.Type)
MethodInfo ComparerBaseGeneric_2_IsValueType_m14709_MethodInfo = 
{
	"IsValueType"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_IsValueType_m14709/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_IsValueType_m14709_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_IsValueType_m14709_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_Compare_m1266_ParameterInfos[] = 
{
	{"a", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"b", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_Compare_m1266_GenericMethod;
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::Compare(System.Object,System.Object)
MethodInfo ComparerBaseGeneric_2_Compare_m1266_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_Compare_m1266/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_Compare_m1266_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_Compare_m1266_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
static ParameterInfo ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_Compare_m37312_ParameterInfos[] = 
{
	{"a", 0, 134217728, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
	{"b", 1, 134217728, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_SByte_t75_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_Compare_m37312_GenericMethod;
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::Compare(T1,T2)
MethodInfo ComparerBaseGeneric_2_Compare_m37312_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_SByte_t75_SByte_t75/* invoker_method */
	, ComparerBaseGeneric_2_t3004_ComparerBaseGeneric_2_Compare_m37312_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_Compare_m37312_GenericMethod/* genericMethod */

};
extern Il2CppType TypeU5BU5D_t160_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264_GenericMethod;
// System.Type[] UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::GetAccepatbleTypesForA()
MethodInfo ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264_MethodInfo = 
{
	"GetAccepatbleTypesForA"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t160_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264_GenericMethod/* genericMethod */

};
extern Il2CppType TypeU5BU5D_t160_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267_GenericMethod;
// System.Type[] UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::GetAccepatbleTypesForB()
MethodInfo ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267_MethodInfo = 
{
	"GetAccepatbleTypesForB"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t160_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ComparerBaseGeneric_2_get_UseCache_m1265_GenericMethod;
// System.Boolean UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>::get_UseCache()
MethodInfo ComparerBaseGeneric_2_get_UseCache_m1265_MethodInfo = 
{
	"get_UseCache"/* name */
	, (methodPointerType)&ComparerBaseGeneric_2_get_UseCache_m1265/* method */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2244/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ComparerBaseGeneric_2_get_UseCache_m1265_GenericMethod/* genericMethod */

};
static MethodInfo* ComparerBaseGeneric_2_t3004_MethodInfos[] =
{
	&ComparerBaseGeneric_2__ctor_m14708_MethodInfo,
	&ComparerBaseGeneric_2_get_ConstValue_m1268_MethodInfo,
	&ComparerBaseGeneric_2_set_ConstValue_m1269_MethodInfo,
	&ComparerBaseGeneric_2_GetDefaultConstValue_m1270_MethodInfo,
	&ComparerBaseGeneric_2_IsValueType_m14709_MethodInfo,
	&ComparerBaseGeneric_2_Compare_m1266_MethodInfo,
	&ComparerBaseGeneric_2_Compare_m37312_MethodInfo,
	&ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264_MethodInfo,
	&ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267_MethodInfo,
	&ComparerBaseGeneric_2_get_UseCache_m1265_MethodInfo,
	NULL
};
static MethodInfo* ComparerBaseGeneric_2_t3004_VTable[] =
{
	&Object_Equals_m472_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m474_MethodInfo,
	&Object_ToString_m475_MethodInfo,
	&ComparerBaseGeneric_2_GetAccepatbleTypesForA_m1264_MethodInfo,
	&ActionBase_GetDepthOfSearch_m821_MethodInfo,
	&ActionBase_GetExcludedFieldNames_m822_MethodInfo,
	&ComparerBase_Compare_m837_MethodInfo,
	&ComparerBaseGeneric_2_get_UseCache_m1265_MethodInfo,
	&ActionBase_GetParameterType_m825_MethodInfo,
	&ActionBase_GetConfigurationDescription_m826_MethodInfo,
	&ActionBase_Fail_m829_MethodInfo,
	&ComparerBase_GetFailureMessage_m842_MethodInfo,
	&ComparerBaseGeneric_2_Compare_m1266_MethodInfo,
	&ComparerBaseGeneric_2_GetAccepatbleTypesForB_m1267_MethodInfo,
	&ComparerBaseGeneric_2_get_ConstValue_m1268_MethodInfo,
	&ComparerBaseGeneric_2_set_ConstValue_m1269_MethodInfo,
	&ComparerBaseGeneric_2_GetDefaultConstValue_m1270_MethodInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
extern Il2CppType ComparerBaseGeneric_2_t3004_1_0_0;
extern TypeInfo ComparerBase_t171_il2cpp_TypeInfo;
struct ComparerBaseGeneric_2_t3004;
extern Il2CppGenericClass ComparerBaseGeneric_2_t3004_GenericClass;
TypeInfo ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "ComparerBaseGeneric`2"/* name */
	, "UnityTest"/* namespaze */
	, ComparerBaseGeneric_2_t3004_MethodInfos/* methods */
	, ComparerBaseGeneric_2_t3004_PropertyInfos/* properties */
	, ComparerBaseGeneric_2_t3004_FieldInfos/* fields */
	, NULL/* events */
	, &ComparerBase_t171_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ComparerBaseGeneric_2_t3004_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* cast_class */
	, &ComparerBaseGeneric_2_t3004_0_0_0/* byval_arg */
	, &ComparerBaseGeneric_2_t3004_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ComparerBaseGeneric_2_t3004_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ComparerBaseGeneric_2_t3004)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056897/* flags */
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
	, 10/* method_count */
	, 2/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 19/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_71.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3005_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_71MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m14714_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComparerBaseGeneric_1_t165_m27922_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.ComparerBaseGeneric`1<System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.ComparerBaseGeneric`1<System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisComparerBaseGeneric_1_t165_m27922(__this, p0, method) (ComparerBaseGeneric_1_t165 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3005____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3005, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t3005____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3005, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3005_FieldInfos[] =
{
	&InternalEnumerator_1_t3005____array_0_FieldInfo,
	&InternalEnumerator_1_t3005____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14711_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3005____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3005_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14711_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3005____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3005_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14714_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3005_PropertyInfos[] =
{
	&InternalEnumerator_1_t3005____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3005____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3005_InternalEnumerator_1__ctor_m14710_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14710_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14710_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t3005_InternalEnumerator_1__ctor_m14710_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14710_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14711_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14711_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14711_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14712_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14712_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14712_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14713_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14713_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14713_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14714_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14714_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBaseGeneric_1_t165_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14714_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3005_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14710_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14711_MethodInfo,
	&InternalEnumerator_1_Dispose_m14712_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14713_MethodInfo,
	&InternalEnumerator_1_get_Current_m14714_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14713_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14712_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3005_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14711_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14713_MethodInfo,
	&InternalEnumerator_1_Dispose_m14712_MethodInfo,
	&InternalEnumerator_1_get_Current_m14714_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3005_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5641_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3005_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5641_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComparerBaseGeneric_1_t165_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3005_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14714_MethodInfo/* Method Usage */,
	&ComparerBaseGeneric_1_t165_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComparerBaseGeneric_1_t165_m27922_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3005_0_0_0;
extern Il2CppType InternalEnumerator_1_t3005_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3005_GenericClass;
TypeInfo InternalEnumerator_1_t3005_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3005_MethodInfos/* methods */
	, InternalEnumerator_1_t3005_PropertyInfos/* properties */
	, InternalEnumerator_1_t3005_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3005_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3005_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3005_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3005_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3005_1_0_0/* this_arg */
	, InternalEnumerator_1_t3005_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3005_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3005_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3005)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t7188_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>
extern MethodInfo IList_1_get_Item_m37313_MethodInfo;
extern MethodInfo IList_1_set_Item_m37314_MethodInfo;
static PropertyInfo IList_1_t7188____Item_PropertyInfo = 
{
	&IList_1_t7188_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37313_MethodInfo/* get */
	, &IList_1_set_Item_m37314_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7188_PropertyInfos[] =
{
	&IList_1_t7188____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
static ParameterInfo IList_1_t7188_IList_1_IndexOf_m37315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_1_t165_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37315_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37315_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7188_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7188_IList_1_IndexOf_m37315_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37315_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
static ParameterInfo IList_1_t7188_IList_1_Insert_m37316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_1_t165_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37316_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37316_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7188_IList_1_Insert_m37316_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37316_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7188_IList_1_RemoveAt_m37317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37317_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37317_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7188_IList_1_RemoveAt_m37317_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37317_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7188_IList_1_get_Item_m37313_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37313_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37313_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7188_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBaseGeneric_1_t165_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7188_IList_1_get_Item_m37313_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37313_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComparerBaseGeneric_1_t165_0_0_0;
static ParameterInfo IList_1_t7188_IList_1_set_Item_m37314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_1_t165_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37314_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`1<System.Boolean>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37314_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7188_IList_1_set_Item_m37314_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37314_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7188_MethodInfos[] =
{
	&IList_1_IndexOf_m37315_MethodInfo,
	&IList_1_Insert_m37316_MethodInfo,
	&IList_1_RemoveAt_m37317_MethodInfo,
	&IList_1_get_Item_m37313_MethodInfo,
	&IList_1_set_Item_m37314_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7188_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7187_il2cpp_TypeInfo,
	&IEnumerable_1_t7189_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7188_0_0_0;
extern Il2CppType IList_1_t7188_1_0_0;
struct IList_1_t7188;
extern Il2CppGenericClass IList_1_t7188_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7188_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7188_MethodInfos/* methods */
	, IList_1_t7188_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7188_il2cpp_TypeInfo/* element_class */
	, IList_1_t7188_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7188_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7188_0_0_0/* byval_arg */
	, &IList_1_t7188_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7188_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t7190_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>
extern MethodInfo ICollection_1_get_Count_m37318_MethodInfo;
static PropertyInfo ICollection_1_t7190____Count_PropertyInfo = 
{
	&ICollection_1_t7190_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37319_MethodInfo;
static PropertyInfo ICollection_1_t7190____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7190_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37319_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7190_PropertyInfos[] =
{
	&ICollection_1_t7190____Count_PropertyInfo,
	&ICollection_1_t7190____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37318_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Count()
MethodInfo ICollection_1_get_Count_m37318_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37318_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37319_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37319_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37319_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
static ParameterInfo ICollection_1_t7190_ICollection_1_Add_m37320_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_2_t3004_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37320_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Add(T)
MethodInfo ICollection_1_Add_m37320_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7190_ICollection_1_Add_m37320_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37320_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37321_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Clear()
MethodInfo ICollection_1_Clear_m37321_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37321_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
static ParameterInfo ICollection_1_t7190_ICollection_1_Contains_m37322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_2_t3004_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37322_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Contains(T)
MethodInfo ICollection_1_Contains_m37322_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7190_ICollection_1_Contains_m37322_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37322_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_2U5BU5D_t5269_0_0_0;
extern Il2CppType ComparerBaseGeneric_2U5BU5D_t5269_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7190_ICollection_1_CopyTo_m37323_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_2U5BU5D_t5269_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37323_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37323_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7190_ICollection_1_CopyTo_m37323_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37323_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
static ParameterInfo ICollection_1_t7190_ICollection_1_Remove_m37324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_2_t3004_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37324_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Remove(T)
MethodInfo ICollection_1_Remove_m37324_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7190_ICollection_1_Remove_m37324_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37324_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7190_MethodInfos[] =
{
	&ICollection_1_get_Count_m37318_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37319_MethodInfo,
	&ICollection_1_Add_m37320_MethodInfo,
	&ICollection_1_Clear_m37321_MethodInfo,
	&ICollection_1_Contains_m37322_MethodInfo,
	&ICollection_1_CopyTo_m37323_MethodInfo,
	&ICollection_1_Remove_m37324_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7192_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7190_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7192_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7190_0_0_0;
extern Il2CppType ICollection_1_t7190_1_0_0;
struct ICollection_1_t7190;
extern Il2CppGenericClass ICollection_1_t7190_GenericClass;
TypeInfo ICollection_1_t7190_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7190_MethodInfos/* methods */
	, ICollection_1_t7190_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7190_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7190_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7190_0_0_0/* byval_arg */
	, &ICollection_1_t7190_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7190_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>
extern Il2CppType IEnumerator_1_t5643_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37325_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37325_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7192_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5643_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37325_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7192_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37325_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7192_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7192_0_0_0;
extern Il2CppType IEnumerable_1_t7192_1_0_0;
struct IEnumerable_1_t7192;
extern Il2CppGenericClass IEnumerable_1_t7192_GenericClass;
TypeInfo IEnumerable_1_t7192_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7192_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7192_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7192_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7192_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7192_0_0_0/* byval_arg */
	, &IEnumerable_1_t7192_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7192_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t5643_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>
extern MethodInfo IEnumerator_1_get_Current_m37326_MethodInfo;
static PropertyInfo IEnumerator_1_t5643____Current_PropertyInfo = 
{
	&IEnumerator_1_t5643_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5643_PropertyInfos[] =
{
	&IEnumerator_1_t5643____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37326_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37326_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5643_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBaseGeneric_2_t3004_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37326_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5643_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37326_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5643_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5643_0_0_0;
extern Il2CppType IEnumerator_1_t5643_1_0_0;
struct IEnumerator_1_t5643;
extern Il2CppGenericClass IEnumerator_1_t5643_GenericClass;
TypeInfo IEnumerator_1_t5643_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5643_MethodInfos/* methods */
	, IEnumerator_1_t5643_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5643_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5643_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5643_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5643_0_0_0/* byval_arg */
	, &IEnumerator_1_t5643_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5643_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_72.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3006_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_72MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m14719_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComparerBaseGeneric_2_t3004_m27933_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisComparerBaseGeneric_2_t3004_m27933(__this, p0, method) (ComparerBaseGeneric_2_t3004 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3006____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3006, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t3006____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3006, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3006_FieldInfos[] =
{
	&InternalEnumerator_1_t3006____array_0_FieldInfo,
	&InternalEnumerator_1_t3006____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14716_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3006____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3006_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14716_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3006____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3006_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14719_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3006_PropertyInfos[] =
{
	&InternalEnumerator_1_t3006____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3006____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3006_InternalEnumerator_1__ctor_m14715_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14715_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14715_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t3006_InternalEnumerator_1__ctor_m14715_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14715_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14716_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14716_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14716_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14717_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14717_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14717_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14718_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14718_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14718_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14719_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14719_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBaseGeneric_2_t3004_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14719_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3006_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14715_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14716_MethodInfo,
	&InternalEnumerator_1_Dispose_m14717_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14718_MethodInfo,
	&InternalEnumerator_1_get_Current_m14719_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14718_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14717_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3006_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14716_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14718_MethodInfo,
	&InternalEnumerator_1_Dispose_m14717_MethodInfo,
	&InternalEnumerator_1_get_Current_m14719_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3006_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5643_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3006_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5643_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3006_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14719_MethodInfo/* Method Usage */,
	&ComparerBaseGeneric_2_t3004_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComparerBaseGeneric_2_t3004_m27933_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3006_0_0_0;
extern Il2CppType InternalEnumerator_1_t3006_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3006_GenericClass;
TypeInfo InternalEnumerator_1_t3006_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3006_MethodInfos/* methods */
	, InternalEnumerator_1_t3006_PropertyInfos/* properties */
	, InternalEnumerator_1_t3006_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3006_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3006_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3006_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3006_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3006_1_0_0/* this_arg */
	, InternalEnumerator_1_t3006_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3006_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3006_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3006)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t7191_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>
extern MethodInfo IList_1_get_Item_m37327_MethodInfo;
extern MethodInfo IList_1_set_Item_m37328_MethodInfo;
static PropertyInfo IList_1_t7191____Item_PropertyInfo = 
{
	&IList_1_t7191_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37327_MethodInfo/* get */
	, &IList_1_set_Item_m37328_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7191_PropertyInfos[] =
{
	&IList_1_t7191____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
static ParameterInfo IList_1_t7191_IList_1_IndexOf_m37329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_2_t3004_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37329_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37329_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7191_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7191_IList_1_IndexOf_m37329_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37329_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
static ParameterInfo IList_1_t7191_IList_1_Insert_m37330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_2_t3004_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37330_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37330_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7191_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7191_IList_1_Insert_m37330_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37330_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7191_IList_1_RemoveAt_m37331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37331_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37331_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7191_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7191_IList_1_RemoveAt_m37331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37331_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7191_IList_1_get_Item_m37327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37327_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37327_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7191_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBaseGeneric_2_t3004_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7191_IList_1_get_Item_m37327_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37327_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComparerBaseGeneric_2_t3004_0_0_0;
static ParameterInfo IList_1_t7191_IList_1_set_Item_m37328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComparerBaseGeneric_2_t3004_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37328_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBaseGeneric`2<System.Boolean,System.Boolean>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37328_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7191_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7191_IList_1_set_Item_m37328_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37328_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7191_MethodInfos[] =
{
	&IList_1_IndexOf_m37329_MethodInfo,
	&IList_1_Insert_m37330_MethodInfo,
	&IList_1_RemoveAt_m37331_MethodInfo,
	&IList_1_get_Item_m37327_MethodInfo,
	&IList_1_set_Item_m37328_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7191_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7190_il2cpp_TypeInfo,
	&IEnumerable_1_t7192_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7191_0_0_0;
extern Il2CppType IList_1_t7191_1_0_0;
struct IList_1_t7191;
extern Il2CppGenericClass IList_1_t7191_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7191_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7191_MethodInfos/* methods */
	, IList_1_t7191_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7191_il2cpp_TypeInfo/* element_class */
	, IList_1_t7191_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7191_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7191_0_0_0/* byval_arg */
	, &IList_1_t7191_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7191_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t7193_il2cpp_TypeInfo;

// UnityTest.ComparerBase
#include "AssemblyU2DCSharp_UnityTest_ComparerBase.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>
extern MethodInfo ICollection_1_get_Count_m37332_MethodInfo;
static PropertyInfo ICollection_1_t7193____Count_PropertyInfo = 
{
	&ICollection_1_t7193_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37332_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37333_MethodInfo;
static PropertyInfo ICollection_1_t7193____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7193_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7193_PropertyInfos[] =
{
	&ICollection_1_t7193____Count_PropertyInfo,
	&ICollection_1_t7193____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37332_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::get_Count()
MethodInfo ICollection_1_get_Count_m37332_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37332_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37333_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37333_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37333_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBase_t171_0_0_0;
extern Il2CppType ComparerBase_t171_0_0_0;
static ParameterInfo ICollection_1_t7193_ICollection_1_Add_m37334_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBase_t171_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37334_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Add(T)
MethodInfo ICollection_1_Add_m37334_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7193_ICollection_1_Add_m37334_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37334_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37335_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Clear()
MethodInfo ICollection_1_Clear_m37335_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37335_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBase_t171_0_0_0;
static ParameterInfo ICollection_1_t7193_ICollection_1_Contains_m37336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBase_t171_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37336_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Contains(T)
MethodInfo ICollection_1_Contains_m37336_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7193_ICollection_1_Contains_m37336_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37336_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBaseU5BU5D_t5270_0_0_0;
extern Il2CppType ComparerBaseU5BU5D_t5270_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7193_ICollection_1_CopyTo_m37337_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBaseU5BU5D_t5270_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37337_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37337_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7193_ICollection_1_CopyTo_m37337_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37337_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBase_t171_0_0_0;
static ParameterInfo ICollection_1_t7193_ICollection_1_Remove_m37338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBase_t171_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37338_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ComparerBase>::Remove(T)
MethodInfo ICollection_1_Remove_m37338_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7193_ICollection_1_Remove_m37338_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37338_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7193_MethodInfos[] =
{
	&ICollection_1_get_Count_m37332_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37333_MethodInfo,
	&ICollection_1_Add_m37334_MethodInfo,
	&ICollection_1_Clear_m37335_MethodInfo,
	&ICollection_1_Contains_m37336_MethodInfo,
	&ICollection_1_CopyTo_m37337_MethodInfo,
	&ICollection_1_Remove_m37338_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7195_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7193_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7195_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7193_0_0_0;
extern Il2CppType ICollection_1_t7193_1_0_0;
struct ICollection_1_t7193;
extern Il2CppGenericClass ICollection_1_t7193_GenericClass;
TypeInfo ICollection_1_t7193_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7193_MethodInfos/* methods */
	, ICollection_1_t7193_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7193_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7193_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7193_0_0_0/* byval_arg */
	, &ICollection_1_t7193_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7193_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBase>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBase>
extern Il2CppType IEnumerator_1_t5645_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37339_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ComparerBase>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37339_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7195_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5645_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37339_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7195_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37339_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7195_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7195_0_0_0;
extern Il2CppType IEnumerable_1_t7195_1_0_0;
struct IEnumerable_1_t7195;
extern Il2CppGenericClass IEnumerable_1_t7195_GenericClass;
TypeInfo IEnumerable_1_t7195_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7195_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7195_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7195_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7195_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7195_0_0_0/* byval_arg */
	, &IEnumerable_1_t7195_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7195_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t5645_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBase>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBase>
extern MethodInfo IEnumerator_1_get_Current_m37340_MethodInfo;
static PropertyInfo IEnumerator_1_t5645____Current_PropertyInfo = 
{
	&IEnumerator_1_t5645_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5645_PropertyInfos[] =
{
	&IEnumerator_1_t5645____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComparerBase_t171_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37340_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.ComparerBase>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37340_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5645_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBase_t171_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37340_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5645_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37340_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5645_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5645_0_0_0;
extern Il2CppType IEnumerator_1_t5645_1_0_0;
struct IEnumerator_1_t5645;
extern Il2CppGenericClass IEnumerator_1_t5645_GenericClass;
TypeInfo IEnumerator_1_t5645_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5645_MethodInfos/* methods */
	, IEnumerator_1_t5645_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5645_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5645_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5645_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5645_0_0_0/* byval_arg */
	, &IEnumerator_1_t5645_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5645_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.ComparerBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_73.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3007_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.ComparerBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_73MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m14724_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComparerBase_t171_m27944_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.ComparerBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.ComparerBase>(System.Int32)
#define Array_InternalArray__get_Item_TisComparerBase_t171_m27944(__this, p0, method) (ComparerBase_t171 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.ComparerBase>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3007____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3007, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t3007____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3007, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3007_FieldInfos[] =
{
	&InternalEnumerator_1_t3007____array_0_FieldInfo,
	&InternalEnumerator_1_t3007____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14721_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3007____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3007_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3007____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3007_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14724_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3007_PropertyInfos[] =
{
	&InternalEnumerator_1_t3007____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3007____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3007_InternalEnumerator_1__ctor_m14720_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14720_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14720_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t3007_InternalEnumerator_1__ctor_m14720_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14720_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14721_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14721_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14721_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14722_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14722_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14722_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14723_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14723_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14723_GenericMethod/* genericMethod */

};
extern Il2CppType ComparerBase_t171_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14724_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.ComparerBase>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14724_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBase_t171_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14724_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3007_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14720_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14721_MethodInfo,
	&InternalEnumerator_1_Dispose_m14722_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14723_MethodInfo,
	&InternalEnumerator_1_get_Current_m14724_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14723_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14722_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3007_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14721_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14723_MethodInfo,
	&InternalEnumerator_1_Dispose_m14722_MethodInfo,
	&InternalEnumerator_1_get_Current_m14724_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3007_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5645_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3007_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5645_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComparerBase_t171_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3007_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14724_MethodInfo/* Method Usage */,
	&ComparerBase_t171_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComparerBase_t171_m27944_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3007_0_0_0;
extern Il2CppType InternalEnumerator_1_t3007_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3007_GenericClass;
TypeInfo InternalEnumerator_1_t3007_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3007_MethodInfos/* methods */
	, InternalEnumerator_1_t3007_PropertyInfos/* properties */
	, InternalEnumerator_1_t3007_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3007_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3007_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3007_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3007_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3007_1_0_0/* this_arg */
	, InternalEnumerator_1_t3007_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3007_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3007_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3007)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t7194_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityTest.ComparerBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityTest.ComparerBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBase>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityTest.ComparerBase>
extern MethodInfo IList_1_get_Item_m37341_MethodInfo;
extern MethodInfo IList_1_set_Item_m37342_MethodInfo;
static PropertyInfo IList_1_t7194____Item_PropertyInfo = 
{
	&IList_1_t7194_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m37341_MethodInfo/* get */
	, &IList_1_set_Item_m37342_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t7194_PropertyInfos[] =
{
	&IList_1_t7194____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComparerBase_t171_0_0_0;
static ParameterInfo IList_1_t7194_IList_1_IndexOf_m37343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComparerBase_t171_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m37343_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityTest.ComparerBase>::IndexOf(T)
MethodInfo IList_1_IndexOf_m37343_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t7194_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7194_IList_1_IndexOf_m37343_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m37343_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComparerBase_t171_0_0_0;
static ParameterInfo IList_1_t7194_IList_1_Insert_m37344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComparerBase_t171_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m37344_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBase>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m37344_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t7194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7194_IList_1_Insert_m37344_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m37344_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7194_IList_1_RemoveAt_m37345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m37345_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBase>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m37345_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t7194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t7194_IList_1_RemoveAt_m37345_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m37345_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t7194_IList_1_get_Item_m37341_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ComparerBase_t171_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m37341_GenericMethod;
// T System.Collections.Generic.IList`1<UnityTest.ComparerBase>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m37341_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t7194_il2cpp_TypeInfo/* declaring_type */
	, &ComparerBase_t171_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t7194_IList_1_get_Item_m37341_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m37341_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComparerBase_t171_0_0_0;
static ParameterInfo IList_1_t7194_IList_1_set_Item_m37342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComparerBase_t171_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m37342_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityTest.ComparerBase>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m37342_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t7194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t7194_IList_1_set_Item_m37342_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m37342_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t7194_MethodInfos[] =
{
	&IList_1_IndexOf_m37343_MethodInfo,
	&IList_1_Insert_m37344_MethodInfo,
	&IList_1_RemoveAt_m37345_MethodInfo,
	&IList_1_get_Item_m37341_MethodInfo,
	&IList_1_set_Item_m37342_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t7194_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t7193_il2cpp_TypeInfo,
	&IEnumerable_1_t7195_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t7194_0_0_0;
extern Il2CppType IList_1_t7194_1_0_0;
struct IList_1_t7194;
extern Il2CppGenericClass IList_1_t7194_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t7194_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t7194_MethodInfos/* methods */
	, IList_1_t7194_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t7194_il2cpp_TypeInfo/* element_class */
	, IList_1_t7194_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t7194_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t7194_0_0_0/* byval_arg */
	, &IList_1_t7194_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t7194_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.BoolComparer>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3008_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityTest.BoolComparer>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_19MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_15.h"
extern TypeInfo InvokableCall_1_t3009_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_15MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m14727_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m14729_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.BoolComparer>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.BoolComparer>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityTest.BoolComparer>
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t3008____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t3008_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3008, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3008_FieldInfos[] =
{
	&CachedInvokableCall_1_t3008____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3008_CachedInvokableCall_1__ctor_m14725_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m14725_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.BoolComparer>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m14725_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m12827_gshared/* method */
	, &CachedInvokableCall_1_t3008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3008_CachedInvokableCall_1__ctor_m14725_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m14725_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3008_CachedInvokableCall_1_Invoke_m14726_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m14726_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityTest.BoolComparer>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m14726_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m12829_gshared/* method */
	, &CachedInvokableCall_1_t3008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3008_CachedInvokableCall_1_Invoke_m14726_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m14726_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3008_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m14725_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14726_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m14726_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m14730_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3008_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&CachedInvokableCall_1_Invoke_m14726_MethodInfo,
	&InvokableCall_1_Find_m14730_MethodInfo,
};
extern Il2CppType UnityAction_1_t3010_0_0_0;
extern TypeInfo UnityAction_1_t3010_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisBoolComparer_t164_m27954_MethodInfo;
extern TypeInfo BoolComparer_t164_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m14732_MethodInfo;
extern TypeInfo BoolComparer_t164_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3008_RGCTXData[8] = 
{
	&UnityAction_1_t3010_0_0_0/* Type Usage */,
	&UnityAction_1_t3010_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBoolComparer_t164_m27954_MethodInfo/* Method Usage */,
	&BoolComparer_t164_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14732_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m14727_MethodInfo/* Method Usage */,
	&BoolComparer_t164_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m14729_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3008_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3008_1_0_0;
struct CachedInvokableCall_1_t3008;
extern Il2CppGenericClass CachedInvokableCall_1_t3008_GenericClass;
TypeInfo CachedInvokableCall_1_t3008_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3008_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3008_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3008_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3008_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3008_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3008_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3008_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3008_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3008_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3008)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_22.h"
extern TypeInfo UnityAction_1_t3010_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_22MethodDeclarations.h"
struct BaseInvokableCall_t981;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.BoolComparer>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityTest.BoolComparer>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBoolComparer_t164_m27954(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m27048_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>
extern Il2CppType UnityAction_1_t3010_0_0_1;
FieldInfo InvokableCall_1_t3009____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3010_0_0_1/* type */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3009, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3009_FieldInfos[] =
{
	&InvokableCall_1_t3009____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t3009_InvokableCall_1__ctor_m14727_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14727_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m14727_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12830_gshared/* method */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3009_InvokableCall_1__ctor_m14727_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m14727_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3010_0_0_0;
static ParameterInfo InvokableCall_1_t3009_InvokableCall_1__ctor_m14728_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3010_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m14728_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m14728_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m12831_gshared/* method */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t3009_InvokableCall_1__ctor_m14728_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m14728_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t3009_InvokableCall_1_Invoke_m14729_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m14729_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m14729_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m12832_gshared/* method */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_1_t3009_InvokableCall_1_Invoke_m14729_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m14729_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t3009_InvokableCall_1_Find_m14730_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m14730_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityTest.BoolComparer>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m14730_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m12833_gshared/* method */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3009_InvokableCall_1_Find_m14730_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m14730_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3009_MethodInfos[] =
{
	&InvokableCall_1__ctor_m14727_MethodInfo,
	&InvokableCall_1__ctor_m14728_MethodInfo,
	&InvokableCall_1_Invoke_m14729_MethodInfo,
	&InvokableCall_1_Find_m14730_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3009_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_1_Invoke_m14729_MethodInfo,
	&InvokableCall_1_Find_m14730_MethodInfo,
};
extern TypeInfo UnityAction_1_t3010_il2cpp_TypeInfo;
extern TypeInfo BoolComparer_t164_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3009_RGCTXData[5] = 
{
	&UnityAction_1_t3010_0_0_0/* Type Usage */,
	&UnityAction_1_t3010_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBoolComparer_t164_m27954_MethodInfo/* Method Usage */,
	&BoolComparer_t164_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m14732_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3009_0_0_0;
extern Il2CppType InvokableCall_1_t3009_1_0_0;
struct InvokableCall_1_t3009;
extern Il2CppGenericClass InvokableCall_1_t3009_GenericClass;
TypeInfo InvokableCall_1_t3009_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3009_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3009_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3009_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3009_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3009_0_0_0/* byval_arg */
	, &InvokableCall_1_t3009_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3009_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3009_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3009)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t3010_UnityAction_1__ctor_m14731_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m14731_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m14731_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m12834_gshared/* method */
	, &UnityAction_1_t3010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_1_t3010_UnityAction_1__ctor_m14731_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m14731_GenericMethod/* genericMethod */

};
extern Il2CppType BoolComparer_t164_0_0_0;
static ParameterInfo UnityAction_1_t3010_UnityAction_1_Invoke_m14732_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m14732_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m14732_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m12835_gshared/* method */
	, &UnityAction_1_t3010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t3010_UnityAction_1_Invoke_m14732_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m14732_GenericMethod/* genericMethod */

};
extern Il2CppType BoolComparer_t164_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3010_UnityAction_1_BeginInvoke_m14733_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &BoolComparer_t164_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m14733_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m14733_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m12836_gshared/* method */
	, &UnityAction_1_t3010_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3010_UnityAction_1_BeginInvoke_m14733_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m14733_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t3010_UnityAction_1_EndInvoke_m14734_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m14734_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityTest.BoolComparer>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m14734_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m12837_gshared/* method */
	, &UnityAction_1_t3010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_1_t3010_UnityAction_1_EndInvoke_m14734_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m14734_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3010_MethodInfos[] =
{
	&UnityAction_1__ctor_m14731_MethodInfo,
	&UnityAction_1_Invoke_m14732_MethodInfo,
	&UnityAction_1_BeginInvoke_m14733_MethodInfo,
	&UnityAction_1_EndInvoke_m14734_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m14733_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m14734_MethodInfo;
static MethodInfo* UnityAction_1_t3010_VTable[] =
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
	&UnityAction_1_Invoke_m14732_MethodInfo,
	&UnityAction_1_BeginInvoke_m14733_MethodInfo,
	&UnityAction_1_EndInvoke_m14734_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3010_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3010_1_0_0;
struct UnityAction_1_t3010;
extern Il2CppGenericClass UnityAction_1_t3010_GenericClass;
TypeInfo UnityAction_1_t3010_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3010_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3010_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3010_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3010_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3010_0_0_0/* byval_arg */
	, &UnityAction_1_t3010_1_0_0/* this_arg */
	, UnityAction_1_t3010_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3010_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3010)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5647_il2cpp_TypeInfo;

// UnityTest.ColliderComparer
#include "AssemblyU2DCSharp_UnityTest_ColliderComparer.h"


// T System.Collections.Generic.IEnumerator`1<UnityTest.ColliderComparer>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityTest.ColliderComparer>
extern MethodInfo IEnumerator_1_get_Current_m37346_MethodInfo;
static PropertyInfo IEnumerator_1_t5647____Current_PropertyInfo = 
{
	&IEnumerator_1_t5647_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m37346_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5647_PropertyInfos[] =
{
	&IEnumerator_1_t5647____Current_PropertyInfo,
	NULL
};
extern Il2CppType ColliderComparer_t167_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m37346_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityTest.ColliderComparer>::get_Current()
MethodInfo IEnumerator_1_get_Current_m37346_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5647_il2cpp_TypeInfo/* declaring_type */
	, &ColliderComparer_t167_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m37346_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5647_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m37346_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5647_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5647_0_0_0;
extern Il2CppType IEnumerator_1_t5647_1_0_0;
struct IEnumerator_1_t5647;
extern Il2CppGenericClass IEnumerator_1_t5647_GenericClass;
TypeInfo IEnumerator_1_t5647_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5647_MethodInfos/* methods */
	, IEnumerator_1_t5647_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5647_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5647_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5647_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5647_0_0_0/* byval_arg */
	, &IEnumerator_1_t5647_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5647_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3011_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74MethodDeclarations.h"

extern TypeInfo ColliderComparer_t167_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m14739_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisColliderComparer_t167_m27956_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityTest.ColliderComparer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityTest.ColliderComparer>(System.Int32)
#define Array_InternalArray__get_Item_TisColliderComparer_t167_m27956(__this, p0, method) (ColliderComparer_t167 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3011____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3011, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t3011____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3011, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3011_FieldInfos[] =
{
	&InternalEnumerator_1_t3011____array_0_FieldInfo,
	&InternalEnumerator_1_t3011____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14736_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3011____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3011_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14736_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3011____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3011_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m14739_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3011_PropertyInfos[] =
{
	&InternalEnumerator_1_t3011____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3011____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3011_InternalEnumerator_1__ctor_m14735_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m14735_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m14735_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t3011_InternalEnumerator_1__ctor_m14735_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m14735_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14736_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14736_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14736_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m14737_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m14737_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m14737_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m14738_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m14738_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m14738_GenericMethod/* genericMethod */

};
extern Il2CppType ColliderComparer_t167_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m14739_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityTest.ColliderComparer>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m14739_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* declaring_type */
	, &ColliderComparer_t167_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m14739_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3011_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m14735_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14736_MethodInfo,
	&InternalEnumerator_1_Dispose_m14737_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14738_MethodInfo,
	&InternalEnumerator_1_get_Current_m14739_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m14738_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m14737_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3011_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14736_MethodInfo,
	&InternalEnumerator_1_MoveNext_m14738_MethodInfo,
	&InternalEnumerator_1_Dispose_m14737_MethodInfo,
	&InternalEnumerator_1_get_Current_m14739_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3011_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t5647_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3011_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5647_il2cpp_TypeInfo, 7},
};
extern TypeInfo ColliderComparer_t167_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3011_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m14739_MethodInfo/* Method Usage */,
	&ColliderComparer_t167_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisColliderComparer_t167_m27956_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3011_0_0_0;
extern Il2CppType InternalEnumerator_1_t3011_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3011_GenericClass;
TypeInfo InternalEnumerator_1_t3011_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3011_MethodInfos/* methods */
	, InternalEnumerator_1_t3011_PropertyInfos/* properties */
	, InternalEnumerator_1_t3011_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3011_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3011_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3011_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3011_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3011_1_0_0/* this_arg */
	, InternalEnumerator_1_t3011_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3011_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3011_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3011)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t7196_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>
extern MethodInfo ICollection_1_get_Count_m37347_MethodInfo;
static PropertyInfo ICollection_1_t7196____Count_PropertyInfo = 
{
	&ICollection_1_t7196_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m37347_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m37348_MethodInfo;
static PropertyInfo ICollection_1_t7196____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t7196_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m37348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t7196_PropertyInfos[] =
{
	&ICollection_1_t7196____Count_PropertyInfo,
	&ICollection_1_t7196____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m37347_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::get_Count()
MethodInfo ICollection_1_get_Count_m37347_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m37347_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m37348_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m37348_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m37348_GenericMethod/* genericMethod */

};
extern Il2CppType ColliderComparer_t167_0_0_0;
extern Il2CppType ColliderComparer_t167_0_0_0;
static ParameterInfo ICollection_1_t7196_ICollection_1_Add_m37349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColliderComparer_t167_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m37349_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Add(T)
MethodInfo ICollection_1_Add_m37349_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t7196_ICollection_1_Add_m37349_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m37349_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m37350_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Clear()
MethodInfo ICollection_1_Clear_m37350_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m37350_GenericMethod/* genericMethod */

};
extern Il2CppType ColliderComparer_t167_0_0_0;
static ParameterInfo ICollection_1_t7196_ICollection_1_Contains_m37351_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColliderComparer_t167_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m37351_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Contains(T)
MethodInfo ICollection_1_Contains_m37351_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7196_ICollection_1_Contains_m37351_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m37351_GenericMethod/* genericMethod */

};
extern Il2CppType ColliderComparerU5BU5D_t5271_0_0_0;
extern Il2CppType ColliderComparerU5BU5D_t5271_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t7196_ICollection_1_CopyTo_m37352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ColliderComparerU5BU5D_t5271_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m37352_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m37352_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t7196_ICollection_1_CopyTo_m37352_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m37352_GenericMethod/* genericMethod */

};
extern Il2CppType ColliderComparer_t167_0_0_0;
static ParameterInfo ICollection_1_t7196_ICollection_1_Remove_m37353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ColliderComparer_t167_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m37353_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityTest.ColliderComparer>::Remove(T)
MethodInfo ICollection_1_Remove_m37353_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t7196_ICollection_1_Remove_m37353_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m37353_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t7196_MethodInfos[] =
{
	&ICollection_1_get_Count_m37347_MethodInfo,
	&ICollection_1_get_IsReadOnly_m37348_MethodInfo,
	&ICollection_1_Add_m37349_MethodInfo,
	&ICollection_1_Clear_m37350_MethodInfo,
	&ICollection_1_Contains_m37351_MethodInfo,
	&ICollection_1_CopyTo_m37352_MethodInfo,
	&ICollection_1_Remove_m37353_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t7198_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t7196_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t7198_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t7196_0_0_0;
extern Il2CppType ICollection_1_t7196_1_0_0;
struct ICollection_1_t7196;
extern Il2CppGenericClass ICollection_1_t7196_GenericClass;
TypeInfo ICollection_1_t7196_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t7196_MethodInfos/* methods */
	, ICollection_1_t7196_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t7196_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t7196_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t7196_0_0_0/* byval_arg */
	, &ICollection_1_t7196_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t7196_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ColliderComparer>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityTest.ColliderComparer>
extern Il2CppType IEnumerator_1_t5647_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m37354_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityTest.ColliderComparer>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m37354_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t7198_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5647_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m37354_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t7198_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m37354_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t7198_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t7198_0_0_0;
extern Il2CppType IEnumerable_1_t7198_1_0_0;
struct IEnumerable_1_t7198;
extern Il2CppGenericClass IEnumerable_1_t7198_GenericClass;
TypeInfo IEnumerable_1_t7198_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t7198_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t7198_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t7198_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t7198_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t7198_0_0_0/* byval_arg */
	, &IEnumerable_1_t7198_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t7198_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
