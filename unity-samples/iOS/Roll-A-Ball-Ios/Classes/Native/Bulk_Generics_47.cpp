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
extern TypeInfo IList_1_t8747_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo IList_1_get_Item_m45342_MethodInfo;
extern MethodInfo IList_1_set_Item_m45343_MethodInfo;
static PropertyInfo IList_1_t8747____Item_PropertyInfo = 
{
	&IList_1_t8747_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45342_MethodInfo/* get */
	, &IList_1_set_Item_m45343_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8747_PropertyInfos[] =
{
	&IList_1_t8747____Item_PropertyInfo,
	NULL
};
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
static ParameterInfo IList_1_t8747_IList_1_IndexOf_m45344_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ParameterBuilder_t2658_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45344_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45344_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8747_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8747_IList_1_IndexOf_m45344_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45344_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
static ParameterInfo IList_1_t8747_IList_1_Insert_m45345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_ParameterBuilder_t2658_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45345_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45345_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8747_IList_1_Insert_m45345_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45345_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8747_IList_1_RemoveAt_m45346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45346_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45346_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8747_IList_1_RemoveAt_m45346_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45346_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8747_IList_1_get_Item_m45342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45342_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45342_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8747_il2cpp_TypeInfo/* declaring_type */
	, &_ParameterBuilder_t2658_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8747_IList_1_get_Item_m45342_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45342_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
static ParameterInfo IList_1_t8747_IList_1_set_Item_m45343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_ParameterBuilder_t2658_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45343_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ParameterBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45343_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8747_IList_1_set_Item_m45343_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45343_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8747_MethodInfos[] =
{
	&IList_1_IndexOf_m45344_MethodInfo,
	&IList_1_Insert_m45345_MethodInfo,
	&IList_1_RemoveAt_m45346_MethodInfo,
	&IList_1_get_Item_m45342_MethodInfo,
	&IList_1_set_Item_m45343_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t8746_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8748_il2cpp_TypeInfo;
static TypeInfo* IList_1_t8747_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8746_il2cpp_TypeInfo,
	&IEnumerable_1_t8748_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8747_0_0_0;
extern Il2CppType IList_1_t8747_1_0_0;
struct IList_1_t8747;
extern Il2CppGenericClass IList_1_t8747_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8747_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8747_MethodInfos/* methods */
	, IList_1_t8747_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8747_il2cpp_TypeInfo/* element_class */
	, IList_1_t8747_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8747_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8747_0_0_0/* byval_arg */
	, &IList_1_t8747_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8747_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6771_il2cpp_TypeInfo;

// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45347_MethodInfo;
static PropertyInfo IEnumerator_1_t6771____Current_PropertyInfo = 
{
	&IEnumerator_1_t6771_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45347_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6771_PropertyInfos[] =
{
	&IEnumerator_1_t6771____Current_PropertyInfo,
	NULL
};
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45347_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45347_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6771_il2cpp_TypeInfo/* declaring_type */
	, &GenericTypeParameterBuilder_t1965_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45347_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6771_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45347_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t6771_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6771_0_0_0;
extern Il2CppType IEnumerator_1_t6771_1_0_0;
struct IEnumerator_1_t6771;
extern Il2CppGenericClass IEnumerator_1_t6771_GenericClass;
TypeInfo IEnumerator_1_t6771_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6771_MethodInfos/* methods */
	, IEnumerator_1_t6771_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6771_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6771_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6771_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6771_0_0_0/* byval_arg */
	, &IEnumerator_1_t6771_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6771_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_622.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4786_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_622MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo GenericTypeParameterBuilder_t1965_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26163_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGenericTypeParameterBuilder_t1965_m34925_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.GenericTypeParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisGenericTypeParameterBuilder_t1965_m34925(__this, p0, method) (GenericTypeParameterBuilder_t1965 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4786____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4786, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4786____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4786, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4786_FieldInfos[] =
{
	&InternalEnumerator_1_t4786____array_0_FieldInfo,
	&InternalEnumerator_1_t4786____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26160_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4786____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4786_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26160_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4786____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4786_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26163_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4786_PropertyInfos[] =
{
	&InternalEnumerator_1_t4786____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4786____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4786_InternalEnumerator_1__ctor_m26159_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26159_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26159_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4786_InternalEnumerator_1__ctor_m26159_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26159_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26160_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26160_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26160_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26161_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26161_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26161_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26162_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26162_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26162_GenericMethod/* genericMethod */

};
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26163_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26163_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* declaring_type */
	, &GenericTypeParameterBuilder_t1965_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26163_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4786_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26159_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26160_MethodInfo,
	&InternalEnumerator_1_Dispose_m26161_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26162_MethodInfo,
	&InternalEnumerator_1_get_Current_m26163_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26162_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26161_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4786_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26160_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26162_MethodInfo,
	&InternalEnumerator_1_Dispose_m26161_MethodInfo,
	&InternalEnumerator_1_get_Current_m26163_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4786_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6771_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4786_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6771_il2cpp_TypeInfo, 7},
};
extern TypeInfo GenericTypeParameterBuilder_t1965_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4786_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26163_MethodInfo/* Method Usage */,
	&GenericTypeParameterBuilder_t1965_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisGenericTypeParameterBuilder_t1965_m34925_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4786_0_0_0;
extern Il2CppType InternalEnumerator_1_t4786_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4786_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4786_MethodInfos/* methods */
	, InternalEnumerator_1_t4786_PropertyInfos/* properties */
	, InternalEnumerator_1_t4786_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4786_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4786_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4786_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4786_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4786_1_0_0/* this_arg */
	, InternalEnumerator_1_t4786_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4786_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4786_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4786)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8749_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo ICollection_1_get_Count_m45348_MethodInfo;
static PropertyInfo ICollection_1_t8749____Count_PropertyInfo = 
{
	&ICollection_1_t8749_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45349_MethodInfo;
static PropertyInfo ICollection_1_t8749____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8749_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45349_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8749_PropertyInfos[] =
{
	&ICollection_1_t8749____Count_PropertyInfo,
	&ICollection_1_t8749____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45348_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45348_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45348_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45349_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45349_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45349_GenericMethod/* genericMethod */

};
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
static ParameterInfo ICollection_1_t8749_ICollection_1_Add_m45350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GenericTypeParameterBuilder_t1965_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45350_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45350_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8749_ICollection_1_Add_m45350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45350_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45351_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45351_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45351_GenericMethod/* genericMethod */

};
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
static ParameterInfo ICollection_1_t8749_ICollection_1_Contains_m45352_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GenericTypeParameterBuilder_t1965_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45352_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45352_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8749_ICollection_1_Contains_m45352_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45352_GenericMethod/* genericMethod */

};
extern Il2CppType GenericTypeParameterBuilderU5BU5D_t1966_0_0_0;
extern Il2CppType GenericTypeParameterBuilderU5BU5D_t1966_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8749_ICollection_1_CopyTo_m45353_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GenericTypeParameterBuilderU5BU5D_t1966_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45353_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45353_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8749_ICollection_1_CopyTo_m45353_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45353_GenericMethod/* genericMethod */

};
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
static ParameterInfo ICollection_1_t8749_ICollection_1_Remove_m45354_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GenericTypeParameterBuilder_t1965_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45354_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45354_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8749_ICollection_1_Remove_m45354_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45354_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8749_MethodInfos[] =
{
	&ICollection_1_get_Count_m45348_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45349_MethodInfo,
	&ICollection_1_Add_m45350_MethodInfo,
	&ICollection_1_Clear_m45351_MethodInfo,
	&ICollection_1_Contains_m45352_MethodInfo,
	&ICollection_1_CopyTo_m45353_MethodInfo,
	&ICollection_1_Remove_m45354_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8751_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8749_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8751_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8749_0_0_0;
extern Il2CppType ICollection_1_t8749_1_0_0;
struct ICollection_1_t8749;
extern Il2CppGenericClass ICollection_1_t8749_GenericClass;
TypeInfo ICollection_1_t8749_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8749_MethodInfos/* methods */
	, ICollection_1_t8749_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8749_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8749_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8749_0_0_0/* byval_arg */
	, &ICollection_1_t8749_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8749_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.GenericTypeParameterBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern Il2CppType IEnumerator_1_t6771_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45355_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.GenericTypeParameterBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45355_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8751_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6771_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45355_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8751_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45355_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8751_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8751_0_0_0;
extern Il2CppType IEnumerable_1_t8751_1_0_0;
struct IEnumerable_1_t8751;
extern Il2CppGenericClass IEnumerable_1_t8751_GenericClass;
TypeInfo IEnumerable_1_t8751_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8751_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8751_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8751_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8751_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8751_0_0_0/* byval_arg */
	, &IEnumerable_1_t8751_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8751_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8750_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>
extern MethodInfo IList_1_get_Item_m45356_MethodInfo;
extern MethodInfo IList_1_set_Item_m45357_MethodInfo;
static PropertyInfo IList_1_t8750____Item_PropertyInfo = 
{
	&IList_1_t8750_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45356_MethodInfo/* get */
	, &IList_1_set_Item_m45357_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8750_PropertyInfos[] =
{
	&IList_1_t8750____Item_PropertyInfo,
	NULL
};
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
static ParameterInfo IList_1_t8750_IList_1_IndexOf_m45358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GenericTypeParameterBuilder_t1965_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45358_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45358_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8750_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8750_IList_1_IndexOf_m45358_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45358_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
static ParameterInfo IList_1_t8750_IList_1_Insert_m45359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GenericTypeParameterBuilder_t1965_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45359_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45359_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8750_IList_1_Insert_m45359_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45359_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8750_IList_1_RemoveAt_m45360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45360_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45360_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8750_IList_1_RemoveAt_m45360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45360_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8750_IList_1_get_Item_m45356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45356_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45356_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8750_il2cpp_TypeInfo/* declaring_type */
	, &GenericTypeParameterBuilder_t1965_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8750_IList_1_get_Item_m45356_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45356_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType GenericTypeParameterBuilder_t1965_0_0_0;
static ParameterInfo IList_1_t8750_IList_1_set_Item_m45357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GenericTypeParameterBuilder_t1965_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45357_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.GenericTypeParameterBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45357_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8750_IList_1_set_Item_m45357_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45357_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8750_MethodInfos[] =
{
	&IList_1_IndexOf_m45358_MethodInfo,
	&IList_1_Insert_m45359_MethodInfo,
	&IList_1_RemoveAt_m45360_MethodInfo,
	&IList_1_get_Item_m45356_MethodInfo,
	&IList_1_set_Item_m45357_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8750_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8749_il2cpp_TypeInfo,
	&IEnumerable_1_t8751_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8750_0_0_0;
extern Il2CppType IList_1_t8750_1_0_0;
struct IList_1_t8750;
extern Il2CppGenericClass IList_1_t8750_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8750_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8750_MethodInfos/* methods */
	, IList_1_t8750_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8750_il2cpp_TypeInfo/* element_class */
	, IList_1_t8750_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8750_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8750_0_0_0/* byval_arg */
	, &IList_1_t8750_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8750_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6773_il2cpp_TypeInfo;

// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.TypeBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.TypeBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45361_MethodInfo;
static PropertyInfo IEnumerator_1_t6773____Current_PropertyInfo = 
{
	&IEnumerator_1_t6773_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6773_PropertyInfos[] =
{
	&IEnumerator_1_t6773____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeBuilder_t1957_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45361_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.TypeBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45361_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6773_il2cpp_TypeInfo/* declaring_type */
	, &TypeBuilder_t1957_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45361_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6773_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45361_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6773_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6773_0_0_0;
extern Il2CppType IEnumerator_1_t6773_1_0_0;
struct IEnumerator_1_t6773;
extern Il2CppGenericClass IEnumerator_1_t6773_GenericClass;
TypeInfo IEnumerator_1_t6773_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6773_MethodInfos/* methods */
	, IEnumerator_1_t6773_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6773_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6773_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6773_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6773_0_0_0/* byval_arg */
	, &IEnumerator_1_t6773_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6773_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_623.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4787_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_623MethodDeclarations.h"

extern TypeInfo TypeBuilder_t1957_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26168_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeBuilder_t1957_m34936_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.TypeBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.TypeBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeBuilder_t1957_m34936(__this, p0, method) (TypeBuilder_t1957 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4787____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4787, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4787____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4787, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4787_FieldInfos[] =
{
	&InternalEnumerator_1_t4787____array_0_FieldInfo,
	&InternalEnumerator_1_t4787____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26165_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4787____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4787_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26165_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4787____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4787_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26168_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4787_PropertyInfos[] =
{
	&InternalEnumerator_1_t4787____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4787____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4787_InternalEnumerator_1__ctor_m26164_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26164_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26164_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4787_InternalEnumerator_1__ctor_m26164_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26164_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26165_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26165_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26165_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26166_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26166_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26166_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26167_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26167_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26167_GenericMethod/* genericMethod */

};
extern Il2CppType TypeBuilder_t1957_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26168_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.TypeBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26168_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* declaring_type */
	, &TypeBuilder_t1957_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26168_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4787_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26164_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26165_MethodInfo,
	&InternalEnumerator_1_Dispose_m26166_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26167_MethodInfo,
	&InternalEnumerator_1_get_Current_m26168_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26167_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26166_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4787_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26165_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26167_MethodInfo,
	&InternalEnumerator_1_Dispose_m26166_MethodInfo,
	&InternalEnumerator_1_get_Current_m26168_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4787_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6773_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4787_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6773_il2cpp_TypeInfo, 7},
};
extern TypeInfo TypeBuilder_t1957_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4787_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26168_MethodInfo/* Method Usage */,
	&TypeBuilder_t1957_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisTypeBuilder_t1957_m34936_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4787_0_0_0;
extern Il2CppType InternalEnumerator_1_t4787_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4787_GenericClass;
TypeInfo InternalEnumerator_1_t4787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4787_MethodInfos/* methods */
	, InternalEnumerator_1_t4787_PropertyInfos/* properties */
	, InternalEnumerator_1_t4787_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4787_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4787_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4787_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4787_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4787_1_0_0/* this_arg */
	, InternalEnumerator_1_t4787_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4787_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4787_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4787)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8752_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>
extern MethodInfo ICollection_1_get_Count_m45362_MethodInfo;
static PropertyInfo ICollection_1_t8752____Count_PropertyInfo = 
{
	&ICollection_1_t8752_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45362_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45363_MethodInfo;
static PropertyInfo ICollection_1_t8752____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8752_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8752_PropertyInfos[] =
{
	&ICollection_1_t8752____Count_PropertyInfo,
	&ICollection_1_t8752____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45362_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45362_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45362_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45363_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45363_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45363_GenericMethod/* genericMethod */

};
extern Il2CppType TypeBuilder_t1957_0_0_0;
extern Il2CppType TypeBuilder_t1957_0_0_0;
static ParameterInfo ICollection_1_t8752_ICollection_1_Add_m45364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeBuilder_t1957_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45364_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45364_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8752_ICollection_1_Add_m45364_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45364_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45365_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45365_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45365_GenericMethod/* genericMethod */

};
extern Il2CppType TypeBuilder_t1957_0_0_0;
static ParameterInfo ICollection_1_t8752_ICollection_1_Contains_m45366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeBuilder_t1957_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45366_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45366_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8752_ICollection_1_Contains_m45366_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45366_GenericMethod/* genericMethod */

};
extern Il2CppType TypeBuilderU5BU5D_t1967_0_0_0;
extern Il2CppType TypeBuilderU5BU5D_t1967_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8752_ICollection_1_CopyTo_m45367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeBuilderU5BU5D_t1967_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45367_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45367_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8752_ICollection_1_CopyTo_m45367_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45367_GenericMethod/* genericMethod */

};
extern Il2CppType TypeBuilder_t1957_0_0_0;
static ParameterInfo ICollection_1_t8752_ICollection_1_Remove_m45368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeBuilder_t1957_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45368_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.TypeBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45368_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8752_ICollection_1_Remove_m45368_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45368_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8752_MethodInfos[] =
{
	&ICollection_1_get_Count_m45362_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45363_MethodInfo,
	&ICollection_1_Add_m45364_MethodInfo,
	&ICollection_1_Clear_m45365_MethodInfo,
	&ICollection_1_Contains_m45366_MethodInfo,
	&ICollection_1_CopyTo_m45367_MethodInfo,
	&ICollection_1_Remove_m45368_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8754_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8752_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8754_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8752_0_0_0;
extern Il2CppType ICollection_1_t8752_1_0_0;
struct ICollection_1_t8752;
extern Il2CppGenericClass ICollection_1_t8752_GenericClass;
TypeInfo ICollection_1_t8752_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8752_MethodInfos/* methods */
	, ICollection_1_t8752_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8752_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8752_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8752_0_0_0/* byval_arg */
	, &ICollection_1_t8752_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8752_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.TypeBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.TypeBuilder>
extern Il2CppType IEnumerator_1_t6773_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45369_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.TypeBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45369_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8754_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6773_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45369_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8754_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45369_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8754_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8754_0_0_0;
extern Il2CppType IEnumerable_1_t8754_1_0_0;
struct IEnumerable_1_t8754;
extern Il2CppGenericClass IEnumerable_1_t8754_GenericClass;
TypeInfo IEnumerable_1_t8754_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8754_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8754_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8754_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8754_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8754_0_0_0/* byval_arg */
	, &IEnumerable_1_t8754_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8754_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8753_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>
extern MethodInfo IList_1_get_Item_m45370_MethodInfo;
extern MethodInfo IList_1_set_Item_m45371_MethodInfo;
static PropertyInfo IList_1_t8753____Item_PropertyInfo = 
{
	&IList_1_t8753_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45370_MethodInfo/* get */
	, &IList_1_set_Item_m45371_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8753_PropertyInfos[] =
{
	&IList_1_t8753____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeBuilder_t1957_0_0_0;
static ParameterInfo IList_1_t8753_IList_1_IndexOf_m45372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeBuilder_t1957_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45372_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45372_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8753_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8753_IList_1_IndexOf_m45372_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45372_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TypeBuilder_t1957_0_0_0;
static ParameterInfo IList_1_t8753_IList_1_Insert_m45373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeBuilder_t1957_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45373_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45373_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8753_IList_1_Insert_m45373_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45373_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8753_IList_1_RemoveAt_m45374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45374_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45374_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8753_IList_1_RemoveAt_m45374_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45374_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8753_IList_1_get_Item_m45370_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType TypeBuilder_t1957_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45370_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45370_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8753_il2cpp_TypeInfo/* declaring_type */
	, &TypeBuilder_t1957_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8753_IList_1_get_Item_m45370_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45370_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TypeBuilder_t1957_0_0_0;
static ParameterInfo IList_1_t8753_IList_1_set_Item_m45371_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeBuilder_t1957_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45371_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.TypeBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45371_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8753_IList_1_set_Item_m45371_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45371_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8753_MethodInfos[] =
{
	&IList_1_IndexOf_m45372_MethodInfo,
	&IList_1_Insert_m45373_MethodInfo,
	&IList_1_RemoveAt_m45374_MethodInfo,
	&IList_1_get_Item_m45370_MethodInfo,
	&IList_1_set_Item_m45371_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8753_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8752_il2cpp_TypeInfo,
	&IEnumerable_1_t8754_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8753_0_0_0;
extern Il2CppType IList_1_t8753_1_0_0;
struct IList_1_t8753;
extern Il2CppGenericClass IList_1_t8753_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8753_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8753_MethodInfos/* methods */
	, IList_1_t8753_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8753_il2cpp_TypeInfo/* element_class */
	, IList_1_t8753_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8753_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8753_0_0_0/* byval_arg */
	, &IList_1_t8753_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8753_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8755_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>
extern MethodInfo ICollection_1_get_Count_m45375_MethodInfo;
static PropertyInfo ICollection_1_t8755____Count_PropertyInfo = 
{
	&ICollection_1_t8755_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45375_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45376_MethodInfo;
static PropertyInfo ICollection_1_t8755____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8755_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45376_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8755_PropertyInfos[] =
{
	&ICollection_1_t8755____Count_PropertyInfo,
	&ICollection_1_t8755____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45375_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45375_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45375_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45376_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45376_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45376_GenericMethod/* genericMethod */

};
extern Il2CppType _TypeBuilder_t2659_0_0_0;
extern Il2CppType _TypeBuilder_t2659_0_0_0;
static ParameterInfo ICollection_1_t8755_ICollection_1_Add_m45377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_TypeBuilder_t2659_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45377_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45377_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8755_ICollection_1_Add_m45377_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45377_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45378_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45378_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45378_GenericMethod/* genericMethod */

};
extern Il2CppType _TypeBuilder_t2659_0_0_0;
static ParameterInfo ICollection_1_t8755_ICollection_1_Contains_m45379_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_TypeBuilder_t2659_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45379_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45379_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8755_ICollection_1_Contains_m45379_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45379_GenericMethod/* genericMethod */

};
extern Il2CppType _TypeBuilderU5BU5D_t5056_0_0_0;
extern Il2CppType _TypeBuilderU5BU5D_t5056_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8755_ICollection_1_CopyTo_m45380_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_TypeBuilderU5BU5D_t5056_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45380_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45380_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8755_ICollection_1_CopyTo_m45380_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45380_GenericMethod/* genericMethod */

};
extern Il2CppType _TypeBuilder_t2659_0_0_0;
static ParameterInfo ICollection_1_t8755_ICollection_1_Remove_m45381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_TypeBuilder_t2659_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45381_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._TypeBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45381_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8755_ICollection_1_Remove_m45381_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45381_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8755_MethodInfos[] =
{
	&ICollection_1_get_Count_m45375_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45376_MethodInfo,
	&ICollection_1_Add_m45377_MethodInfo,
	&ICollection_1_Clear_m45378_MethodInfo,
	&ICollection_1_Contains_m45379_MethodInfo,
	&ICollection_1_CopyTo_m45380_MethodInfo,
	&ICollection_1_Remove_m45381_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8757_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8755_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8757_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8755_0_0_0;
extern Il2CppType ICollection_1_t8755_1_0_0;
struct ICollection_1_t8755;
extern Il2CppGenericClass ICollection_1_t8755_GenericClass;
TypeInfo ICollection_1_t8755_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8755_MethodInfos/* methods */
	, ICollection_1_t8755_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8755_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8755_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8755_0_0_0/* byval_arg */
	, &ICollection_1_t8755_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8755_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._TypeBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._TypeBuilder>
extern Il2CppType IEnumerator_1_t6775_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45382_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._TypeBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45382_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8757_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6775_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45382_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8757_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45382_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8757_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8757_0_0_0;
extern Il2CppType IEnumerable_1_t8757_1_0_0;
struct IEnumerable_1_t8757;
extern Il2CppGenericClass IEnumerable_1_t8757_GenericClass;
TypeInfo IEnumerable_1_t8757_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8757_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8757_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8757_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8757_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8757_0_0_0/* byval_arg */
	, &IEnumerable_1_t8757_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8757_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6775_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._TypeBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45383_MethodInfo;
static PropertyInfo IEnumerator_1_t6775____Current_PropertyInfo = 
{
	&IEnumerator_1_t6775_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45383_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6775_PropertyInfos[] =
{
	&IEnumerator_1_t6775____Current_PropertyInfo,
	NULL
};
extern Il2CppType _TypeBuilder_t2659_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45383_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45383_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6775_il2cpp_TypeInfo/* declaring_type */
	, &_TypeBuilder_t2659_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45383_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6775_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45383_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6775_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6775_0_0_0;
extern Il2CppType IEnumerator_1_t6775_1_0_0;
struct IEnumerator_1_t6775;
extern Il2CppGenericClass IEnumerator_1_t6775_GenericClass;
TypeInfo IEnumerator_1_t6775_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6775_MethodInfos/* methods */
	, IEnumerator_1_t6775_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6775_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6775_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6775_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6775_0_0_0/* byval_arg */
	, &IEnumerator_1_t6775_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6775_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_624.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4788_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_624MethodDeclarations.h"

extern TypeInfo _TypeBuilder_t2659_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26173_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_TypeBuilder_t2659_m34947_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._TypeBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._TypeBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_TypeBuilder_t2659_m34947(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4788____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4788, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4788____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4788, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4788_FieldInfos[] =
{
	&InternalEnumerator_1_t4788____array_0_FieldInfo,
	&InternalEnumerator_1_t4788____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26170_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4788____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4788_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26170_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4788____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4788_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26173_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4788_PropertyInfos[] =
{
	&InternalEnumerator_1_t4788____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4788____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4788_InternalEnumerator_1__ctor_m26169_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26169_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26169_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4788_InternalEnumerator_1__ctor_m26169_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26169_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26170_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26170_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26170_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26171_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26171_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26171_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26172_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26172_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26172_GenericMethod/* genericMethod */

};
extern Il2CppType _TypeBuilder_t2659_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26173_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._TypeBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26173_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* declaring_type */
	, &_TypeBuilder_t2659_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26173_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4788_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26169_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26170_MethodInfo,
	&InternalEnumerator_1_Dispose_m26171_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26172_MethodInfo,
	&InternalEnumerator_1_get_Current_m26173_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26172_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26171_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4788_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26170_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26172_MethodInfo,
	&InternalEnumerator_1_Dispose_m26171_MethodInfo,
	&InternalEnumerator_1_get_Current_m26173_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4788_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6775_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4788_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6775_il2cpp_TypeInfo, 7},
};
extern TypeInfo _TypeBuilder_t2659_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4788_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26173_MethodInfo/* Method Usage */,
	&_TypeBuilder_t2659_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_TypeBuilder_t2659_m34947_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4788_0_0_0;
extern Il2CppType InternalEnumerator_1_t4788_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4788_GenericClass;
TypeInfo InternalEnumerator_1_t4788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4788_MethodInfos/* methods */
	, InternalEnumerator_1_t4788_PropertyInfos/* properties */
	, InternalEnumerator_1_t4788_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4788_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4788_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4788_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4788_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4788_1_0_0/* this_arg */
	, InternalEnumerator_1_t4788_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4788_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4788_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4788)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8756_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>
extern MethodInfo IList_1_get_Item_m45384_MethodInfo;
extern MethodInfo IList_1_set_Item_m45385_MethodInfo;
static PropertyInfo IList_1_t8756____Item_PropertyInfo = 
{
	&IList_1_t8756_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45384_MethodInfo/* get */
	, &IList_1_set_Item_m45385_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8756_PropertyInfos[] =
{
	&IList_1_t8756____Item_PropertyInfo,
	NULL
};
extern Il2CppType _TypeBuilder_t2659_0_0_0;
static ParameterInfo IList_1_t8756_IList_1_IndexOf_m45386_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_TypeBuilder_t2659_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45386_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45386_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8756_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8756_IList_1_IndexOf_m45386_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45386_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _TypeBuilder_t2659_0_0_0;
static ParameterInfo IList_1_t8756_IList_1_Insert_m45387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_TypeBuilder_t2659_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45387_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45387_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8756_IList_1_Insert_m45387_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45387_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8756_IList_1_RemoveAt_m45388_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45388_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45388_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8756_IList_1_RemoveAt_m45388_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45388_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8756_IList_1_get_Item_m45384_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _TypeBuilder_t2659_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45384_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45384_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8756_il2cpp_TypeInfo/* declaring_type */
	, &_TypeBuilder_t2659_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8756_IList_1_get_Item_m45384_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45384_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _TypeBuilder_t2659_0_0_0;
static ParameterInfo IList_1_t8756_IList_1_set_Item_m45385_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_TypeBuilder_t2659_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45385_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._TypeBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45385_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8756_IList_1_set_Item_m45385_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45385_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8756_MethodInfos[] =
{
	&IList_1_IndexOf_m45386_MethodInfo,
	&IList_1_Insert_m45387_MethodInfo,
	&IList_1_RemoveAt_m45388_MethodInfo,
	&IList_1_get_Item_m45384_MethodInfo,
	&IList_1_set_Item_m45385_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8756_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8755_il2cpp_TypeInfo,
	&IEnumerable_1_t8757_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8756_0_0_0;
extern Il2CppType IList_1_t8756_1_0_0;
struct IList_1_t8756;
extern Il2CppGenericClass IList_1_t8756_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8756_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8756_MethodInfos/* methods */
	, IList_1_t8756_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8756_il2cpp_TypeInfo/* element_class */
	, IList_1_t8756_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8756_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8756_0_0_0/* byval_arg */
	, &IList_1_t8756_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8756_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6777_il2cpp_TypeInfo;

// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MethodBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45389_MethodInfo;
static PropertyInfo IEnumerator_1_t6777____Current_PropertyInfo = 
{
	&IEnumerator_1_t6777_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45389_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6777_PropertyInfos[] =
{
	&IEnumerator_1_t6777____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodBuilder_t1964_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45389_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.MethodBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45389_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6777_il2cpp_TypeInfo/* declaring_type */
	, &MethodBuilder_t1964_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45389_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6777_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45389_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6777_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6777_0_0_0;
extern Il2CppType IEnumerator_1_t6777_1_0_0;
struct IEnumerator_1_t6777;
extern Il2CppGenericClass IEnumerator_1_t6777_GenericClass;
TypeInfo IEnumerator_1_t6777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6777_MethodInfos/* methods */
	, IEnumerator_1_t6777_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6777_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6777_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6777_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6777_0_0_0/* byval_arg */
	, &IEnumerator_1_t6777_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6777_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_625.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4789_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_625MethodDeclarations.h"

extern TypeInfo MethodBuilder_t1964_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26178_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodBuilder_t1964_m34958_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.MethodBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodBuilder_t1964_m34958(__this, p0, method) (MethodBuilder_t1964 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4789____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4789, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4789____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4789, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4789_FieldInfos[] =
{
	&InternalEnumerator_1_t4789____array_0_FieldInfo,
	&InternalEnumerator_1_t4789____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26175_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4789____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4789_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26175_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4789____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4789_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26178_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4789_PropertyInfos[] =
{
	&InternalEnumerator_1_t4789____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4789____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4789_InternalEnumerator_1__ctor_m26174_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26174_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26174_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4789_InternalEnumerator_1__ctor_m26174_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26174_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26175_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26175_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26175_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26176_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26176_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26176_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26177_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26177_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26177_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBuilder_t1964_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26178_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.MethodBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26178_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* declaring_type */
	, &MethodBuilder_t1964_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26178_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4789_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26174_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26175_MethodInfo,
	&InternalEnumerator_1_Dispose_m26176_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26177_MethodInfo,
	&InternalEnumerator_1_get_Current_m26178_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26177_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26176_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4789_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26175_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26177_MethodInfo,
	&InternalEnumerator_1_Dispose_m26176_MethodInfo,
	&InternalEnumerator_1_get_Current_m26178_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4789_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6777_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4789_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6777_il2cpp_TypeInfo, 7},
};
extern TypeInfo MethodBuilder_t1964_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4789_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26178_MethodInfo/* Method Usage */,
	&MethodBuilder_t1964_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMethodBuilder_t1964_m34958_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4789_0_0_0;
extern Il2CppType InternalEnumerator_1_t4789_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4789_GenericClass;
TypeInfo InternalEnumerator_1_t4789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4789_MethodInfos/* methods */
	, InternalEnumerator_1_t4789_PropertyInfos/* properties */
	, InternalEnumerator_1_t4789_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4789_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4789_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4789_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4789_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4789_1_0_0/* this_arg */
	, InternalEnumerator_1_t4789_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4789_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4789_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4789)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo ICollection_1_get_Count_m45390_MethodInfo;
static PropertyInfo ICollection_1_t8758____Count_PropertyInfo = 
{
	&ICollection_1_t8758_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45390_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45391_MethodInfo;
static PropertyInfo ICollection_1_t8758____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8758_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45391_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8758_PropertyInfos[] =
{
	&ICollection_1_t8758____Count_PropertyInfo,
	&ICollection_1_t8758____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45390_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45390_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45390_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45391_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45391_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45391_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBuilder_t1964_0_0_0;
extern Il2CppType MethodBuilder_t1964_0_0_0;
static ParameterInfo ICollection_1_t8758_ICollection_1_Add_m45392_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBuilder_t1964_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45392_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45392_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8758_ICollection_1_Add_m45392_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45392_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45393_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45393_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45393_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBuilder_t1964_0_0_0;
static ParameterInfo ICollection_1_t8758_ICollection_1_Contains_m45394_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBuilder_t1964_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45394_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45394_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8758_ICollection_1_Contains_m45394_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45394_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBuilderU5BU5D_t1970_0_0_0;
extern Il2CppType MethodBuilderU5BU5D_t1970_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8758_ICollection_1_CopyTo_m45395_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodBuilderU5BU5D_t1970_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45395_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45395_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8758_ICollection_1_CopyTo_m45395_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45395_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBuilder_t1964_0_0_0;
static ParameterInfo ICollection_1_t8758_ICollection_1_Remove_m45396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBuilder_t1964_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45396_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.MethodBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45396_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8758_ICollection_1_Remove_m45396_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45396_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8758_MethodInfos[] =
{
	&ICollection_1_get_Count_m45390_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45391_MethodInfo,
	&ICollection_1_Add_m45392_MethodInfo,
	&ICollection_1_Clear_m45393_MethodInfo,
	&ICollection_1_Contains_m45394_MethodInfo,
	&ICollection_1_CopyTo_m45395_MethodInfo,
	&ICollection_1_Remove_m45396_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8760_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8758_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8760_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8758_0_0_0;
extern Il2CppType ICollection_1_t8758_1_0_0;
struct ICollection_1_t8758;
extern Il2CppGenericClass ICollection_1_t8758_GenericClass;
TypeInfo ICollection_1_t8758_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8758_MethodInfos/* methods */
	, ICollection_1_t8758_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8758_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8758_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8758_0_0_0/* byval_arg */
	, &ICollection_1_t8758_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8758_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MethodBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MethodBuilder>
extern Il2CppType IEnumerator_1_t6777_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45397_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.MethodBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45397_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8760_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6777_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45397_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8760_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45397_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8760_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8760_0_0_0;
extern Il2CppType IEnumerable_1_t8760_1_0_0;
struct IEnumerable_1_t8760;
extern Il2CppGenericClass IEnumerable_1_t8760_GenericClass;
TypeInfo IEnumerable_1_t8760_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8760_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8760_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8760_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8760_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8760_0_0_0/* byval_arg */
	, &IEnumerable_1_t8760_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8760_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8759_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>
extern MethodInfo IList_1_get_Item_m45398_MethodInfo;
extern MethodInfo IList_1_set_Item_m45399_MethodInfo;
static PropertyInfo IList_1_t8759____Item_PropertyInfo = 
{
	&IList_1_t8759_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45398_MethodInfo/* get */
	, &IList_1_set_Item_m45399_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8759_PropertyInfos[] =
{
	&IList_1_t8759____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodBuilder_t1964_0_0_0;
static ParameterInfo IList_1_t8759_IList_1_IndexOf_m45400_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBuilder_t1964_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45400_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45400_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8759_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8759_IList_1_IndexOf_m45400_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45400_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MethodBuilder_t1964_0_0_0;
static ParameterInfo IList_1_t8759_IList_1_Insert_m45401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodBuilder_t1964_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45401_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45401_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8759_IList_1_Insert_m45401_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45401_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8759_IList_1_RemoveAt_m45402_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45402_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45402_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8759_IList_1_RemoveAt_m45402_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45402_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8759_IList_1_get_Item_m45398_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MethodBuilder_t1964_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45398_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45398_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8759_il2cpp_TypeInfo/* declaring_type */
	, &MethodBuilder_t1964_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8759_IList_1_get_Item_m45398_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45398_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MethodBuilder_t1964_0_0_0;
static ParameterInfo IList_1_t8759_IList_1_set_Item_m45399_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodBuilder_t1964_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45399_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.MethodBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45399_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8759_IList_1_set_Item_m45399_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45399_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8759_MethodInfos[] =
{
	&IList_1_IndexOf_m45400_MethodInfo,
	&IList_1_Insert_m45401_MethodInfo,
	&IList_1_RemoveAt_m45402_MethodInfo,
	&IList_1_get_Item_m45398_MethodInfo,
	&IList_1_set_Item_m45399_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8759_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8758_il2cpp_TypeInfo,
	&IEnumerable_1_t8760_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8759_0_0_0;
extern Il2CppType IList_1_t8759_1_0_0;
struct IList_1_t8759;
extern Il2CppGenericClass IList_1_t8759_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8759_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8759_MethodInfos/* methods */
	, IList_1_t8759_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8759_il2cpp_TypeInfo/* element_class */
	, IList_1_t8759_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8759_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8759_0_0_0/* byval_arg */
	, &IList_1_t8759_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8759_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8761_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo ICollection_1_get_Count_m45403_MethodInfo;
static PropertyInfo ICollection_1_t8761____Count_PropertyInfo = 
{
	&ICollection_1_t8761_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45403_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45404_MethodInfo;
static PropertyInfo ICollection_1_t8761____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8761_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45404_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8761_PropertyInfos[] =
{
	&ICollection_1_t8761____Count_PropertyInfo,
	&ICollection_1_t8761____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45403_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45403_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45403_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45404_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45404_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45404_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBuilder_t2654_0_0_0;
extern Il2CppType _MethodBuilder_t2654_0_0_0;
static ParameterInfo ICollection_1_t8761_ICollection_1_Add_m45405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBuilder_t2654_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45405_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45405_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8761_ICollection_1_Add_m45405_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45405_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45406_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45406_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45406_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBuilder_t2654_0_0_0;
static ParameterInfo ICollection_1_t8761_ICollection_1_Contains_m45407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBuilder_t2654_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45407_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45407_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8761_ICollection_1_Contains_m45407_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45407_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBuilderU5BU5D_t5057_0_0_0;
extern Il2CppType _MethodBuilderU5BU5D_t5057_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8761_ICollection_1_CopyTo_m45408_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBuilderU5BU5D_t5057_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45408_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45408_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8761_ICollection_1_CopyTo_m45408_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45408_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBuilder_t2654_0_0_0;
static ParameterInfo ICollection_1_t8761_ICollection_1_Remove_m45409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBuilder_t2654_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45409_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45409_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8761_ICollection_1_Remove_m45409_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45409_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8761_MethodInfos[] =
{
	&ICollection_1_get_Count_m45403_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45404_MethodInfo,
	&ICollection_1_Add_m45405_MethodInfo,
	&ICollection_1_Clear_m45406_MethodInfo,
	&ICollection_1_Contains_m45407_MethodInfo,
	&ICollection_1_CopyTo_m45408_MethodInfo,
	&ICollection_1_Remove_m45409_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8763_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8761_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8763_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8761_0_0_0;
extern Il2CppType ICollection_1_t8761_1_0_0;
struct ICollection_1_t8761;
extern Il2CppGenericClass ICollection_1_t8761_GenericClass;
TypeInfo ICollection_1_t8761_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8761_MethodInfos/* methods */
	, ICollection_1_t8761_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8761_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8761_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8761_0_0_0/* byval_arg */
	, &ICollection_1_t8761_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8761_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBuilder>
extern Il2CppType IEnumerator_1_t6779_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45410_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45410_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8763_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6779_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45410_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8763_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45410_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8763_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8763_0_0_0;
extern Il2CppType IEnumerable_1_t8763_1_0_0;
struct IEnumerable_1_t8763;
extern Il2CppGenericClass IEnumerable_1_t8763_GenericClass;
TypeInfo IEnumerable_1_t8763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8763_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8763_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8763_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8763_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8763_0_0_0/* byval_arg */
	, &IEnumerable_1_t8763_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8763_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6779_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45411_MethodInfo;
static PropertyInfo IEnumerator_1_t6779____Current_PropertyInfo = 
{
	&IEnumerator_1_t6779_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45411_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6779_PropertyInfos[] =
{
	&IEnumerator_1_t6779____Current_PropertyInfo,
	NULL
};
extern Il2CppType _MethodBuilder_t2654_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45411_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45411_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6779_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBuilder_t2654_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45411_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6779_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45411_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6779_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6779_0_0_0;
extern Il2CppType IEnumerator_1_t6779_1_0_0;
struct IEnumerator_1_t6779;
extern Il2CppGenericClass IEnumerator_1_t6779_GenericClass;
TypeInfo IEnumerator_1_t6779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6779_MethodInfos/* methods */
	, IEnumerator_1_t6779_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6779_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6779_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6779_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6779_0_0_0/* byval_arg */
	, &IEnumerator_1_t6779_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6779_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_626.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4790_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_626MethodDeclarations.h"

extern TypeInfo _MethodBuilder_t2654_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26183_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_MethodBuilder_t2654_m34969_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodBuilder_t2654_m34969(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4790____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4790, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4790____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4790, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4790_FieldInfos[] =
{
	&InternalEnumerator_1_t4790____array_0_FieldInfo,
	&InternalEnumerator_1_t4790____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26180_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4790____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4790_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26180_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4790____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4790_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26183_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4790_PropertyInfos[] =
{
	&InternalEnumerator_1_t4790____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4790____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4790_InternalEnumerator_1__ctor_m26179_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26179_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26179_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4790_InternalEnumerator_1__ctor_m26179_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26179_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26180_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26180_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26180_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26181_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26181_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26181_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26182_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26182_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26182_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBuilder_t2654_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26183_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26183_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBuilder_t2654_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26183_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4790_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26179_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26180_MethodInfo,
	&InternalEnumerator_1_Dispose_m26181_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26182_MethodInfo,
	&InternalEnumerator_1_get_Current_m26183_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26182_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26181_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4790_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26180_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26182_MethodInfo,
	&InternalEnumerator_1_Dispose_m26181_MethodInfo,
	&InternalEnumerator_1_get_Current_m26183_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4790_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6779_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4790_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6779_il2cpp_TypeInfo, 7},
};
extern TypeInfo _MethodBuilder_t2654_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4790_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26183_MethodInfo/* Method Usage */,
	&_MethodBuilder_t2654_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_MethodBuilder_t2654_m34969_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4790_0_0_0;
extern Il2CppType InternalEnumerator_1_t4790_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4790_GenericClass;
TypeInfo InternalEnumerator_1_t4790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4790_MethodInfos/* methods */
	, InternalEnumerator_1_t4790_PropertyInfos/* properties */
	, InternalEnumerator_1_t4790_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4790_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4790_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4790_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4790_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4790_1_0_0/* this_arg */
	, InternalEnumerator_1_t4790_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4790_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4790_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4790)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8762_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>
extern MethodInfo IList_1_get_Item_m45412_MethodInfo;
extern MethodInfo IList_1_set_Item_m45413_MethodInfo;
static PropertyInfo IList_1_t8762____Item_PropertyInfo = 
{
	&IList_1_t8762_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45412_MethodInfo/* get */
	, &IList_1_set_Item_m45413_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8762_PropertyInfos[] =
{
	&IList_1_t8762____Item_PropertyInfo,
	NULL
};
extern Il2CppType _MethodBuilder_t2654_0_0_0;
static ParameterInfo IList_1_t8762_IList_1_IndexOf_m45414_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBuilder_t2654_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45414_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45414_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8762_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8762_IList_1_IndexOf_m45414_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45414_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _MethodBuilder_t2654_0_0_0;
static ParameterInfo IList_1_t8762_IList_1_Insert_m45415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_MethodBuilder_t2654_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45415_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45415_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8762_IList_1_Insert_m45415_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45415_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8762_IList_1_RemoveAt_m45416_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45416_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45416_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8762_IList_1_RemoveAt_m45416_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45416_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8762_IList_1_get_Item_m45412_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _MethodBuilder_t2654_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45412_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45412_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8762_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBuilder_t2654_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8762_IList_1_get_Item_m45412_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45412_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _MethodBuilder_t2654_0_0_0;
static ParameterInfo IList_1_t8762_IList_1_set_Item_m45413_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_MethodBuilder_t2654_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45413_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45413_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8762_IList_1_set_Item_m45413_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45413_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8762_MethodInfos[] =
{
	&IList_1_IndexOf_m45414_MethodInfo,
	&IList_1_Insert_m45415_MethodInfo,
	&IList_1_RemoveAt_m45416_MethodInfo,
	&IList_1_get_Item_m45412_MethodInfo,
	&IList_1_set_Item_m45413_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8762_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8761_il2cpp_TypeInfo,
	&IEnumerable_1_t8763_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8762_0_0_0;
extern Il2CppType IList_1_t8762_1_0_0;
struct IList_1_t8762;
extern Il2CppGenericClass IList_1_t8762_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8762_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8762_MethodInfos/* methods */
	, IList_1_t8762_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8762_il2cpp_TypeInfo/* element_class */
	, IList_1_t8762_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8762_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8762_0_0_0/* byval_arg */
	, &IList_1_t8762_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8762_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6781_il2cpp_TypeInfo;

// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45417_MethodInfo;
static PropertyInfo IEnumerator_1_t6781____Current_PropertyInfo = 
{
	&IEnumerator_1_t6781_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45417_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6781_PropertyInfos[] =
{
	&IEnumerator_1_t6781____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45417_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45417_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6781_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorBuilder_t1959_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45417_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6781_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45417_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6781_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6781_0_0_0;
extern Il2CppType IEnumerator_1_t6781_1_0_0;
struct IEnumerator_1_t6781;
extern Il2CppGenericClass IEnumerator_1_t6781_GenericClass;
TypeInfo IEnumerator_1_t6781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6781_MethodInfos/* methods */
	, IEnumerator_1_t6781_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6781_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6781_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6781_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6781_0_0_0/* byval_arg */
	, &IEnumerator_1_t6781_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6781_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_627.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4791_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_627MethodDeclarations.h"

extern TypeInfo ConstructorBuilder_t1959_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26188_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConstructorBuilder_t1959_m34980_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ConstructorBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorBuilder_t1959_m34980(__this, p0, method) (ConstructorBuilder_t1959 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4791____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4791, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4791____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4791, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4791_FieldInfos[] =
{
	&InternalEnumerator_1_t4791____array_0_FieldInfo,
	&InternalEnumerator_1_t4791____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26185_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4791____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4791_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26185_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4791____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4791_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26188_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4791_PropertyInfos[] =
{
	&InternalEnumerator_1_t4791____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4791____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4791_InternalEnumerator_1__ctor_m26184_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26184_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26184_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4791_InternalEnumerator_1__ctor_m26184_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26184_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26185_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26185_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26185_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26186_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26186_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26186_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26187_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26187_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26187_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26188_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ConstructorBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26188_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorBuilder_t1959_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26188_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4791_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26184_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26185_MethodInfo,
	&InternalEnumerator_1_Dispose_m26186_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26187_MethodInfo,
	&InternalEnumerator_1_get_Current_m26188_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26187_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26186_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4791_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26185_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26187_MethodInfo,
	&InternalEnumerator_1_Dispose_m26186_MethodInfo,
	&InternalEnumerator_1_get_Current_m26188_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4791_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6781_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4791_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6781_il2cpp_TypeInfo, 7},
};
extern TypeInfo ConstructorBuilder_t1959_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4791_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26188_MethodInfo/* Method Usage */,
	&ConstructorBuilder_t1959_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisConstructorBuilder_t1959_m34980_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4791_0_0_0;
extern Il2CppType InternalEnumerator_1_t4791_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4791_GenericClass;
TypeInfo InternalEnumerator_1_t4791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4791_MethodInfos/* methods */
	, InternalEnumerator_1_t4791_PropertyInfos/* properties */
	, InternalEnumerator_1_t4791_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4791_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4791_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4791_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4791_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4791_1_0_0/* this_arg */
	, InternalEnumerator_1_t4791_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4791_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4791_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4791)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8764_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo ICollection_1_get_Count_m45418_MethodInfo;
static PropertyInfo ICollection_1_t8764____Count_PropertyInfo = 
{
	&ICollection_1_t8764_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45418_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45419_MethodInfo;
static PropertyInfo ICollection_1_t8764____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8764_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45419_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8764_PropertyInfos[] =
{
	&ICollection_1_t8764____Count_PropertyInfo,
	&ICollection_1_t8764____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45418_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45418_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45418_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45419_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45419_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45419_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
static ParameterInfo ICollection_1_t8764_ICollection_1_Add_m45420_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorBuilder_t1959_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45420_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45420_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8764_ICollection_1_Add_m45420_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45420_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45421_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45421_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45421_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
static ParameterInfo ICollection_1_t8764_ICollection_1_Contains_m45422_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorBuilder_t1959_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45422_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45422_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8764_ICollection_1_Contains_m45422_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45422_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorBuilderU5BU5D_t1971_0_0_0;
extern Il2CppType ConstructorBuilderU5BU5D_t1971_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8764_ICollection_1_CopyTo_m45423_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorBuilderU5BU5D_t1971_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45423_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45423_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8764_ICollection_1_CopyTo_m45423_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45423_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
static ParameterInfo ICollection_1_t8764_ICollection_1_Remove_m45424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorBuilder_t1959_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45424_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ConstructorBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45424_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8764_ICollection_1_Remove_m45424_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45424_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8764_MethodInfos[] =
{
	&ICollection_1_get_Count_m45418_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45419_MethodInfo,
	&ICollection_1_Add_m45420_MethodInfo,
	&ICollection_1_Clear_m45421_MethodInfo,
	&ICollection_1_Contains_m45422_MethodInfo,
	&ICollection_1_CopyTo_m45423_MethodInfo,
	&ICollection_1_Remove_m45424_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8766_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8764_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8766_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8764_0_0_0;
extern Il2CppType ICollection_1_t8764_1_0_0;
struct ICollection_1_t8764;
extern Il2CppGenericClass ICollection_1_t8764_GenericClass;
TypeInfo ICollection_1_t8764_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8764_MethodInfos/* methods */
	, ICollection_1_t8764_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8764_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8764_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8764_0_0_0/* byval_arg */
	, &ICollection_1_t8764_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8764_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ConstructorBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ConstructorBuilder>
extern Il2CppType IEnumerator_1_t6781_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45425_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ConstructorBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45425_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8766_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6781_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45425_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8766_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45425_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8766_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8766_0_0_0;
extern Il2CppType IEnumerable_1_t8766_1_0_0;
struct IEnumerable_1_t8766;
extern Il2CppGenericClass IEnumerable_1_t8766_GenericClass;
TypeInfo IEnumerable_1_t8766_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8766_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8766_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8766_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8766_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8766_0_0_0/* byval_arg */
	, &IEnumerable_1_t8766_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8766_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8765_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>
extern MethodInfo IList_1_get_Item_m45426_MethodInfo;
extern MethodInfo IList_1_set_Item_m45427_MethodInfo;
static PropertyInfo IList_1_t8765____Item_PropertyInfo = 
{
	&IList_1_t8765_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45426_MethodInfo/* get */
	, &IList_1_set_Item_m45427_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8765_PropertyInfos[] =
{
	&IList_1_t8765____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
static ParameterInfo IList_1_t8765_IList_1_IndexOf_m45428_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorBuilder_t1959_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45428_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45428_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8765_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8765_IList_1_IndexOf_m45428_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45428_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
static ParameterInfo IList_1_t8765_IList_1_Insert_m45429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorBuilder_t1959_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45429_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45429_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8765_IList_1_Insert_m45429_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45429_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8765_IList_1_RemoveAt_m45430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45430_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45430_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8765_IList_1_RemoveAt_m45430_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45430_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8765_IList_1_get_Item_m45426_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45426_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45426_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8765_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorBuilder_t1959_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8765_IList_1_get_Item_m45426_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45426_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ConstructorBuilder_t1959_0_0_0;
static ParameterInfo IList_1_t8765_IList_1_set_Item_m45427_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorBuilder_t1959_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45427_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ConstructorBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45427_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8765_IList_1_set_Item_m45427_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45427_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8765_MethodInfos[] =
{
	&IList_1_IndexOf_m45428_MethodInfo,
	&IList_1_Insert_m45429_MethodInfo,
	&IList_1_RemoveAt_m45430_MethodInfo,
	&IList_1_get_Item_m45426_MethodInfo,
	&IList_1_set_Item_m45427_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8765_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8764_il2cpp_TypeInfo,
	&IEnumerable_1_t8766_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8765_0_0_0;
extern Il2CppType IList_1_t8765_1_0_0;
struct IList_1_t8765;
extern Il2CppGenericClass IList_1_t8765_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8765_MethodInfos/* methods */
	, IList_1_t8765_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8765_il2cpp_TypeInfo/* element_class */
	, IList_1_t8765_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8765_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8765_0_0_0/* byval_arg */
	, &IList_1_t8765_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8767_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo ICollection_1_get_Count_m45431_MethodInfo;
static PropertyInfo ICollection_1_t8767____Count_PropertyInfo = 
{
	&ICollection_1_t8767_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45431_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45432_MethodInfo;
static PropertyInfo ICollection_1_t8767____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8767_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45432_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8767_PropertyInfos[] =
{
	&ICollection_1_t8767____Count_PropertyInfo,
	&ICollection_1_t8767____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45431_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45431_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45431_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45432_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45432_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45432_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
static ParameterInfo ICollection_1_t8767_ICollection_1_Add_m45433_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorBuilder_t2648_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45433_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45433_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8767_ICollection_1_Add_m45433_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45433_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45434_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45434_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45434_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
static ParameterInfo ICollection_1_t8767_ICollection_1_Contains_m45435_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorBuilder_t2648_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45435_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45435_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8767_ICollection_1_Contains_m45435_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45435_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorBuilderU5BU5D_t5058_0_0_0;
extern Il2CppType _ConstructorBuilderU5BU5D_t5058_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8767_ICollection_1_CopyTo_m45436_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorBuilderU5BU5D_t5058_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45436_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45436_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8767_ICollection_1_CopyTo_m45436_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45436_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
static ParameterInfo ICollection_1_t8767_ICollection_1_Remove_m45437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorBuilder_t2648_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45437_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45437_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8767_ICollection_1_Remove_m45437_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45437_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8767_MethodInfos[] =
{
	&ICollection_1_get_Count_m45431_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45432_MethodInfo,
	&ICollection_1_Add_m45433_MethodInfo,
	&ICollection_1_Clear_m45434_MethodInfo,
	&ICollection_1_Contains_m45435_MethodInfo,
	&ICollection_1_CopyTo_m45436_MethodInfo,
	&ICollection_1_Remove_m45437_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8769_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8767_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8769_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8767_0_0_0;
extern Il2CppType ICollection_1_t8767_1_0_0;
struct ICollection_1_t8767;
extern Il2CppGenericClass ICollection_1_t8767_GenericClass;
TypeInfo ICollection_1_t8767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8767_MethodInfos/* methods */
	, ICollection_1_t8767_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8767_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8767_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8767_0_0_0/* byval_arg */
	, &ICollection_1_t8767_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8767_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorBuilder>
extern Il2CppType IEnumerator_1_t6783_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45438_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45438_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8769_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6783_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45438_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8769_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45438_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8769_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8769_0_0_0;
extern Il2CppType IEnumerable_1_t8769_1_0_0;
struct IEnumerable_1_t8769;
extern Il2CppGenericClass IEnumerable_1_t8769_GenericClass;
TypeInfo IEnumerable_1_t8769_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8769_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8769_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8769_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8769_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8769_0_0_0/* byval_arg */
	, &IEnumerable_1_t8769_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8769_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6783_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45439_MethodInfo;
static PropertyInfo IEnumerator_1_t6783____Current_PropertyInfo = 
{
	&IEnumerator_1_t6783_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45439_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6783_PropertyInfos[] =
{
	&IEnumerator_1_t6783____Current_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45439_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45439_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6783_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorBuilder_t2648_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45439_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6783_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45439_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6783_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6783_0_0_0;
extern Il2CppType IEnumerator_1_t6783_1_0_0;
struct IEnumerator_1_t6783;
extern Il2CppGenericClass IEnumerator_1_t6783_GenericClass;
TypeInfo IEnumerator_1_t6783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6783_MethodInfos/* methods */
	, IEnumerator_1_t6783_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6783_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6783_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6783_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6783_0_0_0/* byval_arg */
	, &IEnumerator_1_t6783_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6783_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_628.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4792_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_628MethodDeclarations.h"

extern TypeInfo _ConstructorBuilder_t2648_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26193_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_ConstructorBuilder_t2648_m34991_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ConstructorBuilder_t2648_m34991(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4792____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4792, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4792____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4792, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4792_FieldInfos[] =
{
	&InternalEnumerator_1_t4792____array_0_FieldInfo,
	&InternalEnumerator_1_t4792____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26190_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4792____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4792_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26190_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4792____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4792_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4792_PropertyInfos[] =
{
	&InternalEnumerator_1_t4792____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4792____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4792_InternalEnumerator_1__ctor_m26189_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26189_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26189_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4792_InternalEnumerator_1__ctor_m26189_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26189_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26190_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26190_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26190_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26191_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26191_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26191_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26192_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26192_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26192_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26193_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26193_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorBuilder_t2648_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26193_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4792_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26189_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26190_MethodInfo,
	&InternalEnumerator_1_Dispose_m26191_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26192_MethodInfo,
	&InternalEnumerator_1_get_Current_m26193_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26192_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26191_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4792_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26190_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26192_MethodInfo,
	&InternalEnumerator_1_Dispose_m26191_MethodInfo,
	&InternalEnumerator_1_get_Current_m26193_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4792_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6783_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4792_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6783_il2cpp_TypeInfo, 7},
};
extern TypeInfo _ConstructorBuilder_t2648_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4792_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26193_MethodInfo/* Method Usage */,
	&_ConstructorBuilder_t2648_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_ConstructorBuilder_t2648_m34991_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4792_0_0_0;
extern Il2CppType InternalEnumerator_1_t4792_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4792_GenericClass;
TypeInfo InternalEnumerator_1_t4792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4792_MethodInfos/* methods */
	, InternalEnumerator_1_t4792_PropertyInfos/* properties */
	, InternalEnumerator_1_t4792_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4792_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4792_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4792_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4792_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4792_1_0_0/* this_arg */
	, InternalEnumerator_1_t4792_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4792_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4792_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4792)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8768_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>
extern MethodInfo IList_1_get_Item_m45440_MethodInfo;
extern MethodInfo IList_1_set_Item_m45441_MethodInfo;
static PropertyInfo IList_1_t8768____Item_PropertyInfo = 
{
	&IList_1_t8768_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45440_MethodInfo/* get */
	, &IList_1_set_Item_m45441_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8768_PropertyInfos[] =
{
	&IList_1_t8768____Item_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
static ParameterInfo IList_1_t8768_IList_1_IndexOf_m45442_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorBuilder_t2648_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45442_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45442_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8768_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8768_IList_1_IndexOf_m45442_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45442_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
static ParameterInfo IList_1_t8768_IList_1_Insert_m45443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorBuilder_t2648_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45443_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45443_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8768_IList_1_Insert_m45443_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45443_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8768_IList_1_RemoveAt_m45444_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45444_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45444_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8768_IList_1_RemoveAt_m45444_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45444_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8768_IList_1_get_Item_m45440_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45440_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45440_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8768_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorBuilder_t2648_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8768_IList_1_get_Item_m45440_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45440_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ConstructorBuilder_t2648_0_0_0;
static ParameterInfo IList_1_t8768_IList_1_set_Item_m45441_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorBuilder_t2648_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45441_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45441_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8768_IList_1_set_Item_m45441_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45441_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8768_MethodInfos[] =
{
	&IList_1_IndexOf_m45442_MethodInfo,
	&IList_1_Insert_m45443_MethodInfo,
	&IList_1_RemoveAt_m45444_MethodInfo,
	&IList_1_get_Item_m45440_MethodInfo,
	&IList_1_set_Item_m45441_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8768_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8767_il2cpp_TypeInfo,
	&IEnumerable_1_t8769_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8768_0_0_0;
extern Il2CppType IList_1_t8768_1_0_0;
struct IList_1_t8768;
extern Il2CppGenericClass IList_1_t8768_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8768_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8768_MethodInfos/* methods */
	, IList_1_t8768_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8768_il2cpp_TypeInfo/* element_class */
	, IList_1_t8768_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8768_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8768_0_0_0/* byval_arg */
	, &IList_1_t8768_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8768_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6785_il2cpp_TypeInfo;

// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.FieldBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45445_MethodInfo;
static PropertyInfo IEnumerator_1_t6785____Current_PropertyInfo = 
{
	&IEnumerator_1_t6785_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45445_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6785_PropertyInfos[] =
{
	&IEnumerator_1_t6785____Current_PropertyInfo,
	NULL
};
extern Il2CppType FieldBuilder_t1963_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45445_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.FieldBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45445_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6785_il2cpp_TypeInfo/* declaring_type */
	, &FieldBuilder_t1963_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45445_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6785_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45445_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6785_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6785_0_0_0;
extern Il2CppType IEnumerator_1_t6785_1_0_0;
struct IEnumerator_1_t6785;
extern Il2CppGenericClass IEnumerator_1_t6785_GenericClass;
TypeInfo IEnumerator_1_t6785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6785_MethodInfos/* methods */
	, IEnumerator_1_t6785_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6785_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6785_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6785_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6785_0_0_0/* byval_arg */
	, &IEnumerator_1_t6785_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6785_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_629.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4793_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_629MethodDeclarations.h"

extern TypeInfo FieldBuilder_t1963_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26198_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldBuilder_t1963_m35002_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.FieldBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisFieldBuilder_t1963_m35002(__this, p0, method) (FieldBuilder_t1963 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4793____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4793, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4793____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4793, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4793_FieldInfos[] =
{
	&InternalEnumerator_1_t4793____array_0_FieldInfo,
	&InternalEnumerator_1_t4793____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26195_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4793____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4793_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26195_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4793____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4793_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26198_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4793_PropertyInfos[] =
{
	&InternalEnumerator_1_t4793____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4793____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4793_InternalEnumerator_1__ctor_m26194_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26194_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26194_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4793_InternalEnumerator_1__ctor_m26194_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26194_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26195_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26195_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26195_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26196_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26196_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26196_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26197_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26197_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26197_GenericMethod/* genericMethod */

};
extern Il2CppType FieldBuilder_t1963_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26198_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.FieldBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26198_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* declaring_type */
	, &FieldBuilder_t1963_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26198_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4793_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26194_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26195_MethodInfo,
	&InternalEnumerator_1_Dispose_m26196_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26197_MethodInfo,
	&InternalEnumerator_1_get_Current_m26198_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26197_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26196_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4793_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26195_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26197_MethodInfo,
	&InternalEnumerator_1_Dispose_m26196_MethodInfo,
	&InternalEnumerator_1_get_Current_m26198_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4793_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6785_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4793_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6785_il2cpp_TypeInfo, 7},
};
extern TypeInfo FieldBuilder_t1963_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4793_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26198_MethodInfo/* Method Usage */,
	&FieldBuilder_t1963_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFieldBuilder_t1963_m35002_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4793_0_0_0;
extern Il2CppType InternalEnumerator_1_t4793_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4793_GenericClass;
TypeInfo InternalEnumerator_1_t4793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4793_MethodInfos/* methods */
	, InternalEnumerator_1_t4793_PropertyInfos/* properties */
	, InternalEnumerator_1_t4793_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4793_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4793_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4793_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4793_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4793_1_0_0/* this_arg */
	, InternalEnumerator_1_t4793_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4793_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4793_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4793)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8770_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo ICollection_1_get_Count_m45446_MethodInfo;
static PropertyInfo ICollection_1_t8770____Count_PropertyInfo = 
{
	&ICollection_1_t8770_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45446_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45447_MethodInfo;
static PropertyInfo ICollection_1_t8770____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8770_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45447_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8770_PropertyInfos[] =
{
	&ICollection_1_t8770____Count_PropertyInfo,
	&ICollection_1_t8770____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45446_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45446_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45446_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45447_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45447_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45447_GenericMethod/* genericMethod */

};
extern Il2CppType FieldBuilder_t1963_0_0_0;
extern Il2CppType FieldBuilder_t1963_0_0_0;
static ParameterInfo ICollection_1_t8770_ICollection_1_Add_m45448_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldBuilder_t1963_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45448_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45448_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8770_ICollection_1_Add_m45448_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45448_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45449_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45449_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45449_GenericMethod/* genericMethod */

};
extern Il2CppType FieldBuilder_t1963_0_0_0;
static ParameterInfo ICollection_1_t8770_ICollection_1_Contains_m45450_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldBuilder_t1963_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45450_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45450_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8770_ICollection_1_Contains_m45450_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45450_GenericMethod/* genericMethod */

};
extern Il2CppType FieldBuilderU5BU5D_t1972_0_0_0;
extern Il2CppType FieldBuilderU5BU5D_t1972_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8770_ICollection_1_CopyTo_m45451_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FieldBuilderU5BU5D_t1972_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45451_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45451_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8770_ICollection_1_CopyTo_m45451_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45451_GenericMethod/* genericMethod */

};
extern Il2CppType FieldBuilder_t1963_0_0_0;
static ParameterInfo ICollection_1_t8770_ICollection_1_Remove_m45452_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldBuilder_t1963_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45452_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.FieldBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45452_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8770_ICollection_1_Remove_m45452_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45452_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8770_MethodInfos[] =
{
	&ICollection_1_get_Count_m45446_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45447_MethodInfo,
	&ICollection_1_Add_m45448_MethodInfo,
	&ICollection_1_Clear_m45449_MethodInfo,
	&ICollection_1_Contains_m45450_MethodInfo,
	&ICollection_1_CopyTo_m45451_MethodInfo,
	&ICollection_1_Remove_m45452_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8772_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8770_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8772_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8770_0_0_0;
extern Il2CppType ICollection_1_t8770_1_0_0;
struct ICollection_1_t8770;
extern Il2CppGenericClass ICollection_1_t8770_GenericClass;
TypeInfo ICollection_1_t8770_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8770_MethodInfos/* methods */
	, ICollection_1_t8770_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8770_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8770_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8770_0_0_0/* byval_arg */
	, &ICollection_1_t8770_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8770_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.FieldBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.FieldBuilder>
extern Il2CppType IEnumerator_1_t6785_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45453_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.FieldBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45453_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8772_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6785_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45453_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8772_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45453_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8772_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8772_0_0_0;
extern Il2CppType IEnumerable_1_t8772_1_0_0;
struct IEnumerable_1_t8772;
extern Il2CppGenericClass IEnumerable_1_t8772_GenericClass;
TypeInfo IEnumerable_1_t8772_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8772_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8772_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8772_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8772_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8772_0_0_0/* byval_arg */
	, &IEnumerable_1_t8772_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8772_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8771_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>
extern MethodInfo IList_1_get_Item_m45454_MethodInfo;
extern MethodInfo IList_1_set_Item_m45455_MethodInfo;
static PropertyInfo IList_1_t8771____Item_PropertyInfo = 
{
	&IList_1_t8771_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45454_MethodInfo/* get */
	, &IList_1_set_Item_m45455_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8771_PropertyInfos[] =
{
	&IList_1_t8771____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldBuilder_t1963_0_0_0;
static ParameterInfo IList_1_t8771_IList_1_IndexOf_m45456_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldBuilder_t1963_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45456_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45456_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8771_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8771_IList_1_IndexOf_m45456_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45456_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldBuilder_t1963_0_0_0;
static ParameterInfo IList_1_t8771_IList_1_Insert_m45457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldBuilder_t1963_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45457_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45457_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8771_IList_1_Insert_m45457_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45457_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8771_IList_1_RemoveAt_m45458_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45458_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45458_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8771_IList_1_RemoveAt_m45458_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45458_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8771_IList_1_get_Item_m45454_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FieldBuilder_t1963_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45454_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45454_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8771_il2cpp_TypeInfo/* declaring_type */
	, &FieldBuilder_t1963_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8771_IList_1_get_Item_m45454_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45454_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldBuilder_t1963_0_0_0;
static ParameterInfo IList_1_t8771_IList_1_set_Item_m45455_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldBuilder_t1963_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45455_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.FieldBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45455_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8771_IList_1_set_Item_m45455_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45455_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8771_MethodInfos[] =
{
	&IList_1_IndexOf_m45456_MethodInfo,
	&IList_1_Insert_m45457_MethodInfo,
	&IList_1_RemoveAt_m45458_MethodInfo,
	&IList_1_get_Item_m45454_MethodInfo,
	&IList_1_set_Item_m45455_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8771_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8770_il2cpp_TypeInfo,
	&IEnumerable_1_t8772_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8771_0_0_0;
extern Il2CppType IList_1_t8771_1_0_0;
struct IList_1_t8771;
extern Il2CppGenericClass IList_1_t8771_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8771_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8771_MethodInfos/* methods */
	, IList_1_t8771_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8771_il2cpp_TypeInfo/* element_class */
	, IList_1_t8771_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8771_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8771_0_0_0/* byval_arg */
	, &IList_1_t8771_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8771_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8773_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo ICollection_1_get_Count_m45459_MethodInfo;
static PropertyInfo ICollection_1_t8773____Count_PropertyInfo = 
{
	&ICollection_1_t8773_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45459_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45460_MethodInfo;
static PropertyInfo ICollection_1_t8773____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8773_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45460_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8773_PropertyInfos[] =
{
	&ICollection_1_t8773____Count_PropertyInfo,
	&ICollection_1_t8773____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45459_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45459_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45459_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45460_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45460_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45460_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldBuilder_t2652_0_0_0;
extern Il2CppType _FieldBuilder_t2652_0_0_0;
static ParameterInfo ICollection_1_t8773_ICollection_1_Add_m45461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldBuilder_t2652_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45461_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45461_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8773_ICollection_1_Add_m45461_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45461_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45462_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45462_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45462_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldBuilder_t2652_0_0_0;
static ParameterInfo ICollection_1_t8773_ICollection_1_Contains_m45463_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldBuilder_t2652_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45463_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45463_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8773_ICollection_1_Contains_m45463_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45463_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldBuilderU5BU5D_t5059_0_0_0;
extern Il2CppType _FieldBuilderU5BU5D_t5059_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8773_ICollection_1_CopyTo_m45464_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_FieldBuilderU5BU5D_t5059_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45464_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45464_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8773_ICollection_1_CopyTo_m45464_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45464_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldBuilder_t2652_0_0_0;
static ParameterInfo ICollection_1_t8773_ICollection_1_Remove_m45465_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldBuilder_t2652_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45465_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._FieldBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45465_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8773_ICollection_1_Remove_m45465_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45465_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8773_MethodInfos[] =
{
	&ICollection_1_get_Count_m45459_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45460_MethodInfo,
	&ICollection_1_Add_m45461_MethodInfo,
	&ICollection_1_Clear_m45462_MethodInfo,
	&ICollection_1_Contains_m45463_MethodInfo,
	&ICollection_1_CopyTo_m45464_MethodInfo,
	&ICollection_1_Remove_m45465_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8775_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8773_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8775_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8773_0_0_0;
extern Il2CppType ICollection_1_t8773_1_0_0;
struct ICollection_1_t8773;
extern Il2CppGenericClass ICollection_1_t8773_GenericClass;
TypeInfo ICollection_1_t8773_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8773_MethodInfos/* methods */
	, ICollection_1_t8773_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8773_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8773_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8773_0_0_0/* byval_arg */
	, &ICollection_1_t8773_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8773_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldBuilder>
extern Il2CppType IEnumerator_1_t6787_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45466_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._FieldBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45466_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8775_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6787_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45466_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8775_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45466_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8775_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8775_0_0_0;
extern Il2CppType IEnumerable_1_t8775_1_0_0;
struct IEnumerable_1_t8775;
extern Il2CppGenericClass IEnumerable_1_t8775_GenericClass;
TypeInfo IEnumerable_1_t8775_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8775_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8775_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8775_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8775_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8775_0_0_0/* byval_arg */
	, &IEnumerable_1_t8775_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8775_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6787_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45467_MethodInfo;
static PropertyInfo IEnumerator_1_t6787____Current_PropertyInfo = 
{
	&IEnumerator_1_t6787_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45467_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6787_PropertyInfos[] =
{
	&IEnumerator_1_t6787____Current_PropertyInfo,
	NULL
};
extern Il2CppType _FieldBuilder_t2652_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45467_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45467_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6787_il2cpp_TypeInfo/* declaring_type */
	, &_FieldBuilder_t2652_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45467_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6787_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45467_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6787_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6787_0_0_0;
extern Il2CppType IEnumerator_1_t6787_1_0_0;
struct IEnumerator_1_t6787;
extern Il2CppGenericClass IEnumerator_1_t6787_GenericClass;
TypeInfo IEnumerator_1_t6787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6787_MethodInfos/* methods */
	, IEnumerator_1_t6787_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6787_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6787_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6787_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6787_0_0_0/* byval_arg */
	, &IEnumerator_1_t6787_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6787_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_630.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4794_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_630MethodDeclarations.h"

extern TypeInfo _FieldBuilder_t2652_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26203_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_FieldBuilder_t2652_m35013_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._FieldBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_FieldBuilder_t2652_m35013(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4794____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4794, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4794____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4794, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4794_FieldInfos[] =
{
	&InternalEnumerator_1_t4794____array_0_FieldInfo,
	&InternalEnumerator_1_t4794____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26200_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4794____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4794_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26200_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4794____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4794_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26203_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4794_PropertyInfos[] =
{
	&InternalEnumerator_1_t4794____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4794____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4794_InternalEnumerator_1__ctor_m26199_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26199_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26199_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4794_InternalEnumerator_1__ctor_m26199_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26199_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26200_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26200_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26200_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26201_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26201_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26201_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26202_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26202_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26202_GenericMethod/* genericMethod */

};
extern Il2CppType _FieldBuilder_t2652_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26203_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._FieldBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26203_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* declaring_type */
	, &_FieldBuilder_t2652_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26203_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4794_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26199_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26200_MethodInfo,
	&InternalEnumerator_1_Dispose_m26201_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26202_MethodInfo,
	&InternalEnumerator_1_get_Current_m26203_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26202_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26201_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4794_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26200_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26202_MethodInfo,
	&InternalEnumerator_1_Dispose_m26201_MethodInfo,
	&InternalEnumerator_1_get_Current_m26203_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4794_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6787_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4794_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6787_il2cpp_TypeInfo, 7},
};
extern TypeInfo _FieldBuilder_t2652_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4794_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26203_MethodInfo/* Method Usage */,
	&_FieldBuilder_t2652_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_FieldBuilder_t2652_m35013_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4794_0_0_0;
extern Il2CppType InternalEnumerator_1_t4794_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4794_GenericClass;
TypeInfo InternalEnumerator_1_t4794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4794_MethodInfos/* methods */
	, InternalEnumerator_1_t4794_PropertyInfos/* properties */
	, InternalEnumerator_1_t4794_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4794_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4794_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4794_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4794_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4794_1_0_0/* this_arg */
	, InternalEnumerator_1_t4794_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4794_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4794_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4794)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8774_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>
extern MethodInfo IList_1_get_Item_m45468_MethodInfo;
extern MethodInfo IList_1_set_Item_m45469_MethodInfo;
static PropertyInfo IList_1_t8774____Item_PropertyInfo = 
{
	&IList_1_t8774_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45468_MethodInfo/* get */
	, &IList_1_set_Item_m45469_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8774_PropertyInfos[] =
{
	&IList_1_t8774____Item_PropertyInfo,
	NULL
};
extern Il2CppType _FieldBuilder_t2652_0_0_0;
static ParameterInfo IList_1_t8774_IList_1_IndexOf_m45470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_FieldBuilder_t2652_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45470_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45470_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8774_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8774_IList_1_IndexOf_m45470_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45470_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _FieldBuilder_t2652_0_0_0;
static ParameterInfo IList_1_t8774_IList_1_Insert_m45471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_FieldBuilder_t2652_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45471_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45471_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8774_IList_1_Insert_m45471_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45471_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8774_IList_1_RemoveAt_m45472_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45472_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45472_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8774_IList_1_RemoveAt_m45472_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45472_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8774_IList_1_get_Item_m45468_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _FieldBuilder_t2652_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45468_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45468_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8774_il2cpp_TypeInfo/* declaring_type */
	, &_FieldBuilder_t2652_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8774_IList_1_get_Item_m45468_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45468_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _FieldBuilder_t2652_0_0_0;
static ParameterInfo IList_1_t8774_IList_1_set_Item_m45469_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_FieldBuilder_t2652_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45469_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._FieldBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45469_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8774_IList_1_set_Item_m45469_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45469_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8774_MethodInfos[] =
{
	&IList_1_IndexOf_m45470_MethodInfo,
	&IList_1_Insert_m45471_MethodInfo,
	&IList_1_RemoveAt_m45472_MethodInfo,
	&IList_1_get_Item_m45468_MethodInfo,
	&IList_1_set_Item_m45469_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8774_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8773_il2cpp_TypeInfo,
	&IEnumerable_1_t8775_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8774_0_0_0;
extern Il2CppType IList_1_t8774_1_0_0;
struct IList_1_t8774;
extern Il2CppGenericClass IList_1_t8774_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8774_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8774_MethodInfos/* methods */
	, IList_1_t8774_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8774_il2cpp_TypeInfo/* element_class */
	, IList_1_t8774_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8774_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8774_0_0_0/* byval_arg */
	, &IList_1_t8774_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8774_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6789_il2cpp_TypeInfo;

// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45473_MethodInfo;
static PropertyInfo IEnumerator_1_t6789____Current_PropertyInfo = 
{
	&IEnumerator_1_t6789_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45473_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6789_PropertyInfos[] =
{
	&IEnumerator_1_t6789____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45473_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45473_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6789_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCompanyAttribute_t798_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45473_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6789_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45473_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6789_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6789_0_0_0;
extern Il2CppType IEnumerator_1_t6789_1_0_0;
struct IEnumerator_1_t6789;
extern Il2CppGenericClass IEnumerator_1_t6789_GenericClass;
TypeInfo IEnumerator_1_t6789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6789_MethodInfos/* methods */
	, IEnumerator_1_t6789_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6789_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6789_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6789_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6789_0_0_0/* byval_arg */
	, &IEnumerator_1_t6789_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6789_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_631.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4795_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_631MethodDeclarations.h"

extern TypeInfo AssemblyCompanyAttribute_t798_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26208_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyCompanyAttribute_t798_m35024_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyCompanyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyCompanyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyCompanyAttribute_t798_m35024(__this, p0, method) (AssemblyCompanyAttribute_t798 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4795____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4795, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4795____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4795, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4795_FieldInfos[] =
{
	&InternalEnumerator_1_t4795____array_0_FieldInfo,
	&InternalEnumerator_1_t4795____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26205_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4795____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4795_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26205_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4795____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4795_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4795_PropertyInfos[] =
{
	&InternalEnumerator_1_t4795____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4795____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4795_InternalEnumerator_1__ctor_m26204_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26204_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26204_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4795_InternalEnumerator_1__ctor_m26204_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26204_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26205_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26205_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26205_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26206_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26206_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26206_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26207_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26207_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26207_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26208_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyCompanyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26208_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCompanyAttribute_t798_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26208_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4795_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26204_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26205_MethodInfo,
	&InternalEnumerator_1_Dispose_m26206_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26207_MethodInfo,
	&InternalEnumerator_1_get_Current_m26208_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26207_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26206_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4795_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26205_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26207_MethodInfo,
	&InternalEnumerator_1_Dispose_m26206_MethodInfo,
	&InternalEnumerator_1_get_Current_m26208_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4795_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6789_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4795_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6789_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyCompanyAttribute_t798_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4795_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26208_MethodInfo/* Method Usage */,
	&AssemblyCompanyAttribute_t798_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyCompanyAttribute_t798_m35024_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4795_0_0_0;
extern Il2CppType InternalEnumerator_1_t4795_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4795_GenericClass;
TypeInfo InternalEnumerator_1_t4795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4795_MethodInfos/* methods */
	, InternalEnumerator_1_t4795_PropertyInfos/* properties */
	, InternalEnumerator_1_t4795_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4795_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4795_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4795_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4795_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4795_1_0_0/* this_arg */
	, InternalEnumerator_1_t4795_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4795_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4795_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4795)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8776_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo ICollection_1_get_Count_m45474_MethodInfo;
static PropertyInfo ICollection_1_t8776____Count_PropertyInfo = 
{
	&ICollection_1_t8776_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45474_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45475_MethodInfo;
static PropertyInfo ICollection_1_t8776____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8776_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45475_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8776_PropertyInfos[] =
{
	&ICollection_1_t8776____Count_PropertyInfo,
	&ICollection_1_t8776____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45474_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45474_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45474_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45475_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45475_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45475_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
static ParameterInfo ICollection_1_t8776_ICollection_1_Add_m45476_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCompanyAttribute_t798_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45476_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45476_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8776_ICollection_1_Add_m45476_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45476_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45477_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45477_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45477_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
static ParameterInfo ICollection_1_t8776_ICollection_1_Contains_m45478_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCompanyAttribute_t798_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45478_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45478_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8776_ICollection_1_Contains_m45478_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45478_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCompanyAttributeU5BU5D_t5060_0_0_0;
extern Il2CppType AssemblyCompanyAttributeU5BU5D_t5060_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8776_ICollection_1_CopyTo_m45479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCompanyAttributeU5BU5D_t5060_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45479_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45479_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8776_ICollection_1_CopyTo_m45479_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45479_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
static ParameterInfo ICollection_1_t8776_ICollection_1_Remove_m45480_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCompanyAttribute_t798_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45480_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCompanyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45480_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8776_ICollection_1_Remove_m45480_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45480_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8776_MethodInfos[] =
{
	&ICollection_1_get_Count_m45474_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45475_MethodInfo,
	&ICollection_1_Add_m45476_MethodInfo,
	&ICollection_1_Clear_m45477_MethodInfo,
	&ICollection_1_Contains_m45478_MethodInfo,
	&ICollection_1_CopyTo_m45479_MethodInfo,
	&ICollection_1_Remove_m45480_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8778_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8776_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8778_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8776_0_0_0;
extern Il2CppType ICollection_1_t8776_1_0_0;
struct ICollection_1_t8776;
extern Il2CppGenericClass ICollection_1_t8776_GenericClass;
TypeInfo ICollection_1_t8776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8776_MethodInfos/* methods */
	, ICollection_1_t8776_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8776_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8776_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8776_0_0_0/* byval_arg */
	, &ICollection_1_t8776_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8776_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCompanyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCompanyAttribute>
extern Il2CppType IEnumerator_1_t6789_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45481_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCompanyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45481_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8778_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6789_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45481_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8778_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45481_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8778_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8778_0_0_0;
extern Il2CppType IEnumerable_1_t8778_1_0_0;
struct IEnumerable_1_t8778;
extern Il2CppGenericClass IEnumerable_1_t8778_GenericClass;
TypeInfo IEnumerable_1_t8778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8778_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8778_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8778_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8778_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8778_0_0_0/* byval_arg */
	, &IEnumerable_1_t8778_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8778_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8777_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>
extern MethodInfo IList_1_get_Item_m45482_MethodInfo;
extern MethodInfo IList_1_set_Item_m45483_MethodInfo;
static PropertyInfo IList_1_t8777____Item_PropertyInfo = 
{
	&IList_1_t8777_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45482_MethodInfo/* get */
	, &IList_1_set_Item_m45483_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8777_PropertyInfos[] =
{
	&IList_1_t8777____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
static ParameterInfo IList_1_t8777_IList_1_IndexOf_m45484_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCompanyAttribute_t798_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45484_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45484_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8777_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8777_IList_1_IndexOf_m45484_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45484_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
static ParameterInfo IList_1_t8777_IList_1_Insert_m45485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyCompanyAttribute_t798_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45485_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45485_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8777_IList_1_Insert_m45485_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45485_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8777_IList_1_RemoveAt_m45486_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45486_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45486_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8777_IList_1_RemoveAt_m45486_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45486_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8777_IList_1_get_Item_m45482_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45482_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45482_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8777_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCompanyAttribute_t798_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8777_IList_1_get_Item_m45482_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45482_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyCompanyAttribute_t798_0_0_0;
static ParameterInfo IList_1_t8777_IList_1_set_Item_m45483_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyCompanyAttribute_t798_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45483_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCompanyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45483_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8777_IList_1_set_Item_m45483_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45483_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8777_MethodInfos[] =
{
	&IList_1_IndexOf_m45484_MethodInfo,
	&IList_1_Insert_m45485_MethodInfo,
	&IList_1_RemoveAt_m45486_MethodInfo,
	&IList_1_get_Item_m45482_MethodInfo,
	&IList_1_set_Item_m45483_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8777_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8776_il2cpp_TypeInfo,
	&IEnumerable_1_t8778_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8777_0_0_0;
extern Il2CppType IList_1_t8777_1_0_0;
struct IList_1_t8777;
extern Il2CppGenericClass IList_1_t8777_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8777_MethodInfos/* methods */
	, IList_1_t8777_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8777_il2cpp_TypeInfo/* element_class */
	, IList_1_t8777_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8777_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8777_0_0_0/* byval_arg */
	, &IList_1_t8777_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8777_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6791_il2cpp_TypeInfo;

// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45487_MethodInfo;
static PropertyInfo IEnumerator_1_t6791____Current_PropertyInfo = 
{
	&IEnumerator_1_t6791_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45487_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6791_PropertyInfos[] =
{
	&IEnumerator_1_t6791____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45487_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45487_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6791_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyConfigurationAttribute_t797_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45487_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6791_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45487_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6791_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6791_0_0_0;
extern Il2CppType IEnumerator_1_t6791_1_0_0;
struct IEnumerator_1_t6791;
extern Il2CppGenericClass IEnumerator_1_t6791_GenericClass;
TypeInfo IEnumerator_1_t6791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6791_MethodInfos/* methods */
	, IEnumerator_1_t6791_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6791_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6791_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6791_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6791_0_0_0/* byval_arg */
	, &IEnumerator_1_t6791_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6791_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_632.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4796_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_632MethodDeclarations.h"

extern TypeInfo AssemblyConfigurationAttribute_t797_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26213_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyConfigurationAttribute_t797_m35035_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyConfigurationAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyConfigurationAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyConfigurationAttribute_t797_m35035(__this, p0, method) (AssemblyConfigurationAttribute_t797 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4796____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4796, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4796____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4796, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4796_FieldInfos[] =
{
	&InternalEnumerator_1_t4796____array_0_FieldInfo,
	&InternalEnumerator_1_t4796____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26210_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4796____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4796_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26210_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4796____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4796_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4796_PropertyInfos[] =
{
	&InternalEnumerator_1_t4796____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4796____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4796_InternalEnumerator_1__ctor_m26209_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26209_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26209_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4796_InternalEnumerator_1__ctor_m26209_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26209_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26210_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26210_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26210_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26211_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26211_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26211_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26212_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26212_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26212_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26213_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyConfigurationAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26213_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyConfigurationAttribute_t797_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26213_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4796_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26209_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26210_MethodInfo,
	&InternalEnumerator_1_Dispose_m26211_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26212_MethodInfo,
	&InternalEnumerator_1_get_Current_m26213_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26212_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26211_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4796_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26210_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26212_MethodInfo,
	&InternalEnumerator_1_Dispose_m26211_MethodInfo,
	&InternalEnumerator_1_get_Current_m26213_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4796_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6791_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4796_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6791_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyConfigurationAttribute_t797_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4796_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26213_MethodInfo/* Method Usage */,
	&AssemblyConfigurationAttribute_t797_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyConfigurationAttribute_t797_m35035_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4796_0_0_0;
extern Il2CppType InternalEnumerator_1_t4796_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4796_GenericClass;
TypeInfo InternalEnumerator_1_t4796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4796_MethodInfos/* methods */
	, InternalEnumerator_1_t4796_PropertyInfos/* properties */
	, InternalEnumerator_1_t4796_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4796_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4796_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4796_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4796_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4796_1_0_0/* this_arg */
	, InternalEnumerator_1_t4796_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4796_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4796_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4796)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8779_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>
extern MethodInfo ICollection_1_get_Count_m45488_MethodInfo;
static PropertyInfo ICollection_1_t8779____Count_PropertyInfo = 
{
	&ICollection_1_t8779_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45488_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45489_MethodInfo;
static PropertyInfo ICollection_1_t8779____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8779_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45489_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8779_PropertyInfos[] =
{
	&ICollection_1_t8779____Count_PropertyInfo,
	&ICollection_1_t8779____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45488_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45488_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45488_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45489_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45489_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45489_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
static ParameterInfo ICollection_1_t8779_ICollection_1_Add_m45490_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyConfigurationAttribute_t797_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45490_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45490_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8779_ICollection_1_Add_m45490_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45490_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45491_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45491_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45491_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
static ParameterInfo ICollection_1_t8779_ICollection_1_Contains_m45492_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyConfigurationAttribute_t797_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45492_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45492_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8779_ICollection_1_Contains_m45492_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45492_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyConfigurationAttributeU5BU5D_t5061_0_0_0;
extern Il2CppType AssemblyConfigurationAttributeU5BU5D_t5061_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8779_ICollection_1_CopyTo_m45493_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyConfigurationAttributeU5BU5D_t5061_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45493_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45493_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8779_ICollection_1_CopyTo_m45493_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45493_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
static ParameterInfo ICollection_1_t8779_ICollection_1_Remove_m45494_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyConfigurationAttribute_t797_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45494_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyConfigurationAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45494_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8779_ICollection_1_Remove_m45494_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45494_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8779_MethodInfos[] =
{
	&ICollection_1_get_Count_m45488_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45489_MethodInfo,
	&ICollection_1_Add_m45490_MethodInfo,
	&ICollection_1_Clear_m45491_MethodInfo,
	&ICollection_1_Contains_m45492_MethodInfo,
	&ICollection_1_CopyTo_m45493_MethodInfo,
	&ICollection_1_Remove_m45494_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8781_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8779_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8781_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8779_0_0_0;
extern Il2CppType ICollection_1_t8779_1_0_0;
struct ICollection_1_t8779;
extern Il2CppGenericClass ICollection_1_t8779_GenericClass;
TypeInfo ICollection_1_t8779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8779_MethodInfos/* methods */
	, ICollection_1_t8779_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8779_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8779_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8779_0_0_0/* byval_arg */
	, &ICollection_1_t8779_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8779_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyConfigurationAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyConfigurationAttribute>
extern Il2CppType IEnumerator_1_t6791_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45495_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyConfigurationAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45495_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8781_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6791_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45495_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8781_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45495_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8781_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8781_0_0_0;
extern Il2CppType IEnumerable_1_t8781_1_0_0;
struct IEnumerable_1_t8781;
extern Il2CppGenericClass IEnumerable_1_t8781_GenericClass;
TypeInfo IEnumerable_1_t8781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8781_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8781_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8781_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8781_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8781_0_0_0/* byval_arg */
	, &IEnumerable_1_t8781_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8781_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8780_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>
extern MethodInfo IList_1_get_Item_m45496_MethodInfo;
extern MethodInfo IList_1_set_Item_m45497_MethodInfo;
static PropertyInfo IList_1_t8780____Item_PropertyInfo = 
{
	&IList_1_t8780_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45496_MethodInfo/* get */
	, &IList_1_set_Item_m45497_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8780_PropertyInfos[] =
{
	&IList_1_t8780____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
static ParameterInfo IList_1_t8780_IList_1_IndexOf_m45498_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyConfigurationAttribute_t797_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45498_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45498_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8780_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8780_IList_1_IndexOf_m45498_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45498_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
static ParameterInfo IList_1_t8780_IList_1_Insert_m45499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyConfigurationAttribute_t797_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45499_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45499_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8780_IList_1_Insert_m45499_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45499_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8780_IList_1_RemoveAt_m45500_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45500_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45500_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8780_IList_1_RemoveAt_m45500_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45500_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8780_IList_1_get_Item_m45496_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45496_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45496_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8780_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyConfigurationAttribute_t797_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8780_IList_1_get_Item_m45496_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45496_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyConfigurationAttribute_t797_0_0_0;
static ParameterInfo IList_1_t8780_IList_1_set_Item_m45497_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyConfigurationAttribute_t797_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45497_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyConfigurationAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45497_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8780_IList_1_set_Item_m45497_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45497_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8780_MethodInfos[] =
{
	&IList_1_IndexOf_m45498_MethodInfo,
	&IList_1_Insert_m45499_MethodInfo,
	&IList_1_RemoveAt_m45500_MethodInfo,
	&IList_1_get_Item_m45496_MethodInfo,
	&IList_1_set_Item_m45497_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8780_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8779_il2cpp_TypeInfo,
	&IEnumerable_1_t8781_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8780_0_0_0;
extern Il2CppType IList_1_t8780_1_0_0;
struct IList_1_t8780;
extern Il2CppGenericClass IList_1_t8780_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8780_MethodInfos/* methods */
	, IList_1_t8780_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8780_il2cpp_TypeInfo/* element_class */
	, IList_1_t8780_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8780_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8780_0_0_0/* byval_arg */
	, &IList_1_t8780_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8780_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6793_il2cpp_TypeInfo;

// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45501_MethodInfo;
static PropertyInfo IEnumerator_1_t6793____Current_PropertyInfo = 
{
	&IEnumerator_1_t6793_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45501_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6793_PropertyInfos[] =
{
	&IEnumerator_1_t6793____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45501_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45501_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6793_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCopyrightAttribute_t800_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45501_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6793_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45501_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6793_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6793_0_0_0;
extern Il2CppType IEnumerator_1_t6793_1_0_0;
struct IEnumerator_1_t6793;
extern Il2CppGenericClass IEnumerator_1_t6793_GenericClass;
TypeInfo IEnumerator_1_t6793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6793_MethodInfos/* methods */
	, IEnumerator_1_t6793_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6793_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6793_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6793_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6793_0_0_0/* byval_arg */
	, &IEnumerator_1_t6793_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6793_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_633.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4797_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_633MethodDeclarations.h"

extern TypeInfo AssemblyCopyrightAttribute_t800_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26218_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyCopyrightAttribute_t800_m35046_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyCopyrightAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyCopyrightAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyCopyrightAttribute_t800_m35046(__this, p0, method) (AssemblyCopyrightAttribute_t800 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4797____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4797, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4797____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4797, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4797_FieldInfos[] =
{
	&InternalEnumerator_1_t4797____array_0_FieldInfo,
	&InternalEnumerator_1_t4797____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26215_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4797____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4797_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26215_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4797____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4797_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26218_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4797_PropertyInfos[] =
{
	&InternalEnumerator_1_t4797____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4797____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4797_InternalEnumerator_1__ctor_m26214_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26214_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26214_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4797_InternalEnumerator_1__ctor_m26214_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26214_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26215_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26215_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26215_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26216_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26216_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26216_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26217_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26217_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26217_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26218_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyCopyrightAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26218_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCopyrightAttribute_t800_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26218_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4797_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26214_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26215_MethodInfo,
	&InternalEnumerator_1_Dispose_m26216_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26217_MethodInfo,
	&InternalEnumerator_1_get_Current_m26218_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26217_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26216_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4797_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26215_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26217_MethodInfo,
	&InternalEnumerator_1_Dispose_m26216_MethodInfo,
	&InternalEnumerator_1_get_Current_m26218_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4797_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6793_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4797_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6793_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyCopyrightAttribute_t800_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4797_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26218_MethodInfo/* Method Usage */,
	&AssemblyCopyrightAttribute_t800_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyCopyrightAttribute_t800_m35046_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4797_0_0_0;
extern Il2CppType InternalEnumerator_1_t4797_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4797_GenericClass;
TypeInfo InternalEnumerator_1_t4797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4797_MethodInfos/* methods */
	, InternalEnumerator_1_t4797_PropertyInfos/* properties */
	, InternalEnumerator_1_t4797_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4797_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4797_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4797_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4797_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4797_1_0_0/* this_arg */
	, InternalEnumerator_1_t4797_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4797_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4797_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4797)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8782_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>
extern MethodInfo ICollection_1_get_Count_m45502_MethodInfo;
static PropertyInfo ICollection_1_t8782____Count_PropertyInfo = 
{
	&ICollection_1_t8782_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45502_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45503_MethodInfo;
static PropertyInfo ICollection_1_t8782____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8782_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45503_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8782_PropertyInfos[] =
{
	&ICollection_1_t8782____Count_PropertyInfo,
	&ICollection_1_t8782____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45502_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45502_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45502_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45503_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45503_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45503_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
static ParameterInfo ICollection_1_t8782_ICollection_1_Add_m45504_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCopyrightAttribute_t800_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45504_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45504_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8782_ICollection_1_Add_m45504_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45504_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45505_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45505_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45505_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
static ParameterInfo ICollection_1_t8782_ICollection_1_Contains_m45506_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCopyrightAttribute_t800_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45506_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45506_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8782_ICollection_1_Contains_m45506_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45506_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCopyrightAttributeU5BU5D_t5062_0_0_0;
extern Il2CppType AssemblyCopyrightAttributeU5BU5D_t5062_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8782_ICollection_1_CopyTo_m45507_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCopyrightAttributeU5BU5D_t5062_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45507_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45507_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8782_ICollection_1_CopyTo_m45507_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45507_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
static ParameterInfo ICollection_1_t8782_ICollection_1_Remove_m45508_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCopyrightAttribute_t800_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45508_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCopyrightAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45508_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8782_ICollection_1_Remove_m45508_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45508_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8782_MethodInfos[] =
{
	&ICollection_1_get_Count_m45502_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45503_MethodInfo,
	&ICollection_1_Add_m45504_MethodInfo,
	&ICollection_1_Clear_m45505_MethodInfo,
	&ICollection_1_Contains_m45506_MethodInfo,
	&ICollection_1_CopyTo_m45507_MethodInfo,
	&ICollection_1_Remove_m45508_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8784_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8782_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8784_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8782_0_0_0;
extern Il2CppType ICollection_1_t8782_1_0_0;
struct ICollection_1_t8782;
extern Il2CppGenericClass ICollection_1_t8782_GenericClass;
TypeInfo ICollection_1_t8782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8782_MethodInfos/* methods */
	, ICollection_1_t8782_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8782_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8782_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8782_0_0_0/* byval_arg */
	, &ICollection_1_t8782_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8782_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCopyrightAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCopyrightAttribute>
extern Il2CppType IEnumerator_1_t6793_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45509_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCopyrightAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45509_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8784_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6793_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45509_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8784_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45509_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8784_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8784_0_0_0;
extern Il2CppType IEnumerable_1_t8784_1_0_0;
struct IEnumerable_1_t8784;
extern Il2CppGenericClass IEnumerable_1_t8784_GenericClass;
TypeInfo IEnumerable_1_t8784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8784_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8784_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8784_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8784_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8784_0_0_0/* byval_arg */
	, &IEnumerable_1_t8784_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8784_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8783_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>
extern MethodInfo IList_1_get_Item_m45510_MethodInfo;
extern MethodInfo IList_1_set_Item_m45511_MethodInfo;
static PropertyInfo IList_1_t8783____Item_PropertyInfo = 
{
	&IList_1_t8783_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45510_MethodInfo/* get */
	, &IList_1_set_Item_m45511_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8783_PropertyInfos[] =
{
	&IList_1_t8783____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
static ParameterInfo IList_1_t8783_IList_1_IndexOf_m45512_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCopyrightAttribute_t800_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45512_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45512_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8783_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8783_IList_1_IndexOf_m45512_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45512_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
static ParameterInfo IList_1_t8783_IList_1_Insert_m45513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyCopyrightAttribute_t800_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45513_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45513_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8783_IList_1_Insert_m45513_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45513_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8783_IList_1_RemoveAt_m45514_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45514_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45514_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8783_IList_1_RemoveAt_m45514_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45514_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8783_IList_1_get_Item_m45510_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45510_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45510_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8783_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCopyrightAttribute_t800_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8783_IList_1_get_Item_m45510_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45510_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyCopyrightAttribute_t800_0_0_0;
static ParameterInfo IList_1_t8783_IList_1_set_Item_m45511_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyCopyrightAttribute_t800_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45511_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCopyrightAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45511_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8783_IList_1_set_Item_m45511_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45511_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8783_MethodInfos[] =
{
	&IList_1_IndexOf_m45512_MethodInfo,
	&IList_1_Insert_m45513_MethodInfo,
	&IList_1_RemoveAt_m45514_MethodInfo,
	&IList_1_get_Item_m45510_MethodInfo,
	&IList_1_set_Item_m45511_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8783_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8782_il2cpp_TypeInfo,
	&IEnumerable_1_t8784_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8783_0_0_0;
extern Il2CppType IList_1_t8783_1_0_0;
struct IList_1_t8783;
extern Il2CppGenericClass IList_1_t8783_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8783_MethodInfos/* methods */
	, IList_1_t8783_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8783_il2cpp_TypeInfo/* element_class */
	, IList_1_t8783_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8783_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8783_0_0_0/* byval_arg */
	, &IList_1_t8783_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8783_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6795_il2cpp_TypeInfo;

// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45515_MethodInfo;
static PropertyInfo IEnumerator_1_t6795____Current_PropertyInfo = 
{
	&IEnumerator_1_t6795_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45515_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6795_PropertyInfos[] =
{
	&IEnumerator_1_t6795____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45515_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45515_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6795_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDefaultAliasAttribute_t1366_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45515_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6795_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45515_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6795_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6795_0_0_0;
extern Il2CppType IEnumerator_1_t6795_1_0_0;
struct IEnumerator_1_t6795;
extern Il2CppGenericClass IEnumerator_1_t6795_GenericClass;
TypeInfo IEnumerator_1_t6795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6795_MethodInfos/* methods */
	, IEnumerator_1_t6795_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6795_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6795_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6795_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6795_0_0_0/* byval_arg */
	, &IEnumerator_1_t6795_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6795_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_634.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4798_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_634MethodDeclarations.h"

extern TypeInfo AssemblyDefaultAliasAttribute_t1366_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26223_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyDefaultAliasAttribute_t1366_m35057_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDefaultAliasAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDefaultAliasAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyDefaultAliasAttribute_t1366_m35057(__this, p0, method) (AssemblyDefaultAliasAttribute_t1366 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4798____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4798, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4798____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4798, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4798_FieldInfos[] =
{
	&InternalEnumerator_1_t4798____array_0_FieldInfo,
	&InternalEnumerator_1_t4798____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26220_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4798____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4798_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26220_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4798____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4798_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26223_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4798_PropertyInfos[] =
{
	&InternalEnumerator_1_t4798____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4798____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4798_InternalEnumerator_1__ctor_m26219_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26219_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26219_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4798_InternalEnumerator_1__ctor_m26219_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26219_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26220_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26220_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26220_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26221_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26221_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26221_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26222_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26222_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26222_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26223_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26223_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDefaultAliasAttribute_t1366_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26223_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4798_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26219_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26220_MethodInfo,
	&InternalEnumerator_1_Dispose_m26221_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26222_MethodInfo,
	&InternalEnumerator_1_get_Current_m26223_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26222_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26221_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4798_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26220_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26222_MethodInfo,
	&InternalEnumerator_1_Dispose_m26221_MethodInfo,
	&InternalEnumerator_1_get_Current_m26223_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4798_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6795_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4798_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6795_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyDefaultAliasAttribute_t1366_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4798_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26223_MethodInfo/* Method Usage */,
	&AssemblyDefaultAliasAttribute_t1366_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyDefaultAliasAttribute_t1366_m35057_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4798_0_0_0;
extern Il2CppType InternalEnumerator_1_t4798_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4798_GenericClass;
TypeInfo InternalEnumerator_1_t4798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4798_MethodInfos/* methods */
	, InternalEnumerator_1_t4798_PropertyInfos/* properties */
	, InternalEnumerator_1_t4798_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4798_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4798_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4798_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4798_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4798_1_0_0/* this_arg */
	, InternalEnumerator_1_t4798_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4798_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4798_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4798)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8785_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern MethodInfo ICollection_1_get_Count_m45516_MethodInfo;
static PropertyInfo ICollection_1_t8785____Count_PropertyInfo = 
{
	&ICollection_1_t8785_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45516_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45517_MethodInfo;
static PropertyInfo ICollection_1_t8785____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8785_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45517_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8785_PropertyInfos[] =
{
	&ICollection_1_t8785____Count_PropertyInfo,
	&ICollection_1_t8785____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45516_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45516_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45516_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45517_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45517_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45517_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
static ParameterInfo ICollection_1_t8785_ICollection_1_Add_m45518_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t1366_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45518_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45518_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8785_ICollection_1_Add_m45518_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45518_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45519_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45519_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45519_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
static ParameterInfo ICollection_1_t8785_ICollection_1_Contains_m45520_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t1366_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45520_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45520_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8785_ICollection_1_Contains_m45520_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45520_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDefaultAliasAttributeU5BU5D_t5063_0_0_0;
extern Il2CppType AssemblyDefaultAliasAttributeU5BU5D_t5063_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8785_ICollection_1_CopyTo_m45521_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttributeU5BU5D_t5063_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45521_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45521_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8785_ICollection_1_CopyTo_m45521_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45521_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
static ParameterInfo ICollection_1_t8785_ICollection_1_Remove_m45522_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t1366_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45522_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDefaultAliasAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45522_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8785_ICollection_1_Remove_m45522_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45522_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8785_MethodInfos[] =
{
	&ICollection_1_get_Count_m45516_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45517_MethodInfo,
	&ICollection_1_Add_m45518_MethodInfo,
	&ICollection_1_Clear_m45519_MethodInfo,
	&ICollection_1_Contains_m45520_MethodInfo,
	&ICollection_1_CopyTo_m45521_MethodInfo,
	&ICollection_1_Remove_m45522_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8787_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8785_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8787_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8785_0_0_0;
extern Il2CppType ICollection_1_t8785_1_0_0;
struct ICollection_1_t8785;
extern Il2CppGenericClass ICollection_1_t8785_GenericClass;
TypeInfo ICollection_1_t8785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8785_MethodInfos/* methods */
	, ICollection_1_t8785_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8785_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8785_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8785_0_0_0/* byval_arg */
	, &ICollection_1_t8785_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8785_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDefaultAliasAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern Il2CppType IEnumerator_1_t6795_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45523_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDefaultAliasAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45523_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8787_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6795_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45523_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8787_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45523_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8787_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8787_0_0_0;
extern Il2CppType IEnumerable_1_t8787_1_0_0;
struct IEnumerable_1_t8787;
extern Il2CppGenericClass IEnumerable_1_t8787_GenericClass;
TypeInfo IEnumerable_1_t8787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8787_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8787_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8787_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8787_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8787_0_0_0/* byval_arg */
	, &IEnumerable_1_t8787_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8787_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8786_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern MethodInfo IList_1_get_Item_m45524_MethodInfo;
extern MethodInfo IList_1_set_Item_m45525_MethodInfo;
static PropertyInfo IList_1_t8786____Item_PropertyInfo = 
{
	&IList_1_t8786_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45524_MethodInfo/* get */
	, &IList_1_set_Item_m45525_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8786_PropertyInfos[] =
{
	&IList_1_t8786____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
static ParameterInfo IList_1_t8786_IList_1_IndexOf_m45526_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t1366_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45526_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45526_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8786_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8786_IList_1_IndexOf_m45526_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45526_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
static ParameterInfo IList_1_t8786_IList_1_Insert_m45527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t1366_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45527_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45527_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8786_IList_1_Insert_m45527_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45527_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8786_IList_1_RemoveAt_m45528_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45528_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45528_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8786_IList_1_RemoveAt_m45528_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45528_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8786_IList_1_get_Item_m45524_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45524_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45524_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8786_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDefaultAliasAttribute_t1366_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8786_IList_1_get_Item_m45524_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45524_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyDefaultAliasAttribute_t1366_0_0_0;
static ParameterInfo IList_1_t8786_IList_1_set_Item_m45525_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t1366_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45525_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45525_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8786_IList_1_set_Item_m45525_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45525_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8786_MethodInfos[] =
{
	&IList_1_IndexOf_m45526_MethodInfo,
	&IList_1_Insert_m45527_MethodInfo,
	&IList_1_RemoveAt_m45528_MethodInfo,
	&IList_1_get_Item_m45524_MethodInfo,
	&IList_1_set_Item_m45525_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8786_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8785_il2cpp_TypeInfo,
	&IEnumerable_1_t8787_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8786_0_0_0;
extern Il2CppType IList_1_t8786_1_0_0;
struct IList_1_t8786;
extern Il2CppGenericClass IList_1_t8786_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8786_MethodInfos/* methods */
	, IList_1_t8786_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8786_il2cpp_TypeInfo/* element_class */
	, IList_1_t8786_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8786_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8786_0_0_0/* byval_arg */
	, &IList_1_t8786_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8786_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6797_il2cpp_TypeInfo;

// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45529_MethodInfo;
static PropertyInfo IEnumerator_1_t6797____Current_PropertyInfo = 
{
	&IEnumerator_1_t6797_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45529_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6797_PropertyInfos[] =
{
	&IEnumerator_1_t6797____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45529_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45529_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6797_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDelaySignAttribute_t1178_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45529_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6797_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45529_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6797_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6797_0_0_0;
extern Il2CppType IEnumerator_1_t6797_1_0_0;
struct IEnumerator_1_t6797;
extern Il2CppGenericClass IEnumerator_1_t6797_GenericClass;
TypeInfo IEnumerator_1_t6797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6797_MethodInfos/* methods */
	, IEnumerator_1_t6797_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6797_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6797_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6797_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6797_0_0_0/* byval_arg */
	, &IEnumerator_1_t6797_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6797_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_635.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4799_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_635MethodDeclarations.h"

extern TypeInfo AssemblyDelaySignAttribute_t1178_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26228_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyDelaySignAttribute_t1178_m35068_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDelaySignAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDelaySignAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyDelaySignAttribute_t1178_m35068(__this, p0, method) (AssemblyDelaySignAttribute_t1178 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4799____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4799, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4799____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4799, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4799_FieldInfos[] =
{
	&InternalEnumerator_1_t4799____array_0_FieldInfo,
	&InternalEnumerator_1_t4799____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26225_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4799____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4799_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26225_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4799____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4799_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4799_PropertyInfos[] =
{
	&InternalEnumerator_1_t4799____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4799____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4799_InternalEnumerator_1__ctor_m26224_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26224_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26224_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4799_InternalEnumerator_1__ctor_m26224_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26224_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26225_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26225_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26225_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26226_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26226_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26226_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26227_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26227_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26227_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26228_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26228_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDelaySignAttribute_t1178_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26228_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4799_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26224_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26225_MethodInfo,
	&InternalEnumerator_1_Dispose_m26226_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26227_MethodInfo,
	&InternalEnumerator_1_get_Current_m26228_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26227_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26226_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4799_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26225_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26227_MethodInfo,
	&InternalEnumerator_1_Dispose_m26226_MethodInfo,
	&InternalEnumerator_1_get_Current_m26228_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4799_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6797_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4799_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6797_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyDelaySignAttribute_t1178_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4799_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26228_MethodInfo/* Method Usage */,
	&AssemblyDelaySignAttribute_t1178_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyDelaySignAttribute_t1178_m35068_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4799_0_0_0;
extern Il2CppType InternalEnumerator_1_t4799_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4799_GenericClass;
TypeInfo InternalEnumerator_1_t4799_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4799_MethodInfos/* methods */
	, InternalEnumerator_1_t4799_PropertyInfos/* properties */
	, InternalEnumerator_1_t4799_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4799_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4799_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4799_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4799_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4799_1_0_0/* this_arg */
	, InternalEnumerator_1_t4799_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4799_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4799_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4799)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8788_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>
extern MethodInfo ICollection_1_get_Count_m45530_MethodInfo;
static PropertyInfo ICollection_1_t8788____Count_PropertyInfo = 
{
	&ICollection_1_t8788_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45530_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45531_MethodInfo;
static PropertyInfo ICollection_1_t8788____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8788_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45531_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8788_PropertyInfos[] =
{
	&ICollection_1_t8788____Count_PropertyInfo,
	&ICollection_1_t8788____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45530_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45530_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45530_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45531_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45531_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45531_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
static ParameterInfo ICollection_1_t8788_ICollection_1_Add_m45532_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t1178_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45532_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45532_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8788_ICollection_1_Add_m45532_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45532_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45533_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45533_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45533_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
static ParameterInfo ICollection_1_t8788_ICollection_1_Contains_m45534_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t1178_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45534_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45534_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8788_ICollection_1_Contains_m45534_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45534_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttributeU5BU5D_t5064_0_0_0;
extern Il2CppType AssemblyDelaySignAttributeU5BU5D_t5064_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8788_ICollection_1_CopyTo_m45535_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttributeU5BU5D_t5064_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45535_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45535_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8788_ICollection_1_CopyTo_m45535_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45535_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
static ParameterInfo ICollection_1_t8788_ICollection_1_Remove_m45536_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t1178_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45536_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45536_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8788_ICollection_1_Remove_m45536_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45536_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8788_MethodInfos[] =
{
	&ICollection_1_get_Count_m45530_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45531_MethodInfo,
	&ICollection_1_Add_m45532_MethodInfo,
	&ICollection_1_Clear_m45533_MethodInfo,
	&ICollection_1_Contains_m45534_MethodInfo,
	&ICollection_1_CopyTo_m45535_MethodInfo,
	&ICollection_1_Remove_m45536_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8790_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8788_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8790_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8788_0_0_0;
extern Il2CppType ICollection_1_t8788_1_0_0;
struct ICollection_1_t8788;
extern Il2CppGenericClass ICollection_1_t8788_GenericClass;
TypeInfo ICollection_1_t8788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8788_MethodInfos/* methods */
	, ICollection_1_t8788_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8788_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8788_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8788_0_0_0/* byval_arg */
	, &ICollection_1_t8788_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8788_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDelaySignAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDelaySignAttribute>
extern Il2CppType IEnumerator_1_t6797_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45537_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDelaySignAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45537_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8790_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6797_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45537_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8790_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45537_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8790_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8790_0_0_0;
extern Il2CppType IEnumerable_1_t8790_1_0_0;
struct IEnumerable_1_t8790;
extern Il2CppGenericClass IEnumerable_1_t8790_GenericClass;
TypeInfo IEnumerable_1_t8790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8790_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8790_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8790_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8790_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8790_0_0_0/* byval_arg */
	, &IEnumerable_1_t8790_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8790_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8789_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>
extern MethodInfo IList_1_get_Item_m45538_MethodInfo;
extern MethodInfo IList_1_set_Item_m45539_MethodInfo;
static PropertyInfo IList_1_t8789____Item_PropertyInfo = 
{
	&IList_1_t8789_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45538_MethodInfo/* get */
	, &IList_1_set_Item_m45539_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8789_PropertyInfos[] =
{
	&IList_1_t8789____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
static ParameterInfo IList_1_t8789_IList_1_IndexOf_m45540_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t1178_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45540_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45540_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8789_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8789_IList_1_IndexOf_m45540_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45540_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
static ParameterInfo IList_1_t8789_IList_1_Insert_m45541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t1178_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45541_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45541_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8789_IList_1_Insert_m45541_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45541_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8789_IList_1_RemoveAt_m45542_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45542_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45542_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8789_IList_1_RemoveAt_m45542_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45542_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8789_IList_1_get_Item_m45538_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45538_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45538_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8789_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDelaySignAttribute_t1178_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8789_IList_1_get_Item_m45538_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45538_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyDelaySignAttribute_t1178_0_0_0;
static ParameterInfo IList_1_t8789_IList_1_set_Item_m45539_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t1178_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45539_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45539_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8789_IList_1_set_Item_m45539_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45539_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8789_MethodInfos[] =
{
	&IList_1_IndexOf_m45540_MethodInfo,
	&IList_1_Insert_m45541_MethodInfo,
	&IList_1_RemoveAt_m45542_MethodInfo,
	&IList_1_get_Item_m45538_MethodInfo,
	&IList_1_set_Item_m45539_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8789_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8788_il2cpp_TypeInfo,
	&IEnumerable_1_t8790_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8789_0_0_0;
extern Il2CppType IList_1_t8789_1_0_0;
struct IList_1_t8789;
extern Il2CppGenericClass IList_1_t8789_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8789_MethodInfos/* methods */
	, IList_1_t8789_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8789_il2cpp_TypeInfo/* element_class */
	, IList_1_t8789_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8789_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8789_0_0_0/* byval_arg */
	, &IList_1_t8789_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8789_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6799_il2cpp_TypeInfo;

// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45543_MethodInfo;
static PropertyInfo IEnumerator_1_t6799____Current_PropertyInfo = 
{
	&IEnumerator_1_t6799_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45543_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6799_PropertyInfos[] =
{
	&IEnumerator_1_t6799____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45543_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45543_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6799_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDescriptionAttribute_t796_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45543_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6799_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45543_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6799_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6799_0_0_0;
extern Il2CppType IEnumerator_1_t6799_1_0_0;
struct IEnumerator_1_t6799;
extern Il2CppGenericClass IEnumerator_1_t6799_GenericClass;
TypeInfo IEnumerator_1_t6799_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6799_MethodInfos/* methods */
	, IEnumerator_1_t6799_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6799_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6799_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6799_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6799_0_0_0/* byval_arg */
	, &IEnumerator_1_t6799_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6799_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_636.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4800_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_636MethodDeclarations.h"

extern TypeInfo AssemblyDescriptionAttribute_t796_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26233_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyDescriptionAttribute_t796_m35079_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDescriptionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDescriptionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyDescriptionAttribute_t796_m35079(__this, p0, method) (AssemblyDescriptionAttribute_t796 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4800____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4800, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4800____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4800, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4800_FieldInfos[] =
{
	&InternalEnumerator_1_t4800____array_0_FieldInfo,
	&InternalEnumerator_1_t4800____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26230_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4800____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4800_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26230_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4800____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4800_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26233_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4800_PropertyInfos[] =
{
	&InternalEnumerator_1_t4800____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4800____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4800_InternalEnumerator_1__ctor_m26229_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26229_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26229_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4800_InternalEnumerator_1__ctor_m26229_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26229_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26230_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26230_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26230_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26231_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26231_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26231_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26232_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26232_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26232_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26233_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26233_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDescriptionAttribute_t796_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26233_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4800_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26229_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26230_MethodInfo,
	&InternalEnumerator_1_Dispose_m26231_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26232_MethodInfo,
	&InternalEnumerator_1_get_Current_m26233_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26232_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26231_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4800_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26230_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26232_MethodInfo,
	&InternalEnumerator_1_Dispose_m26231_MethodInfo,
	&InternalEnumerator_1_get_Current_m26233_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4800_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6799_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4800_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6799_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyDescriptionAttribute_t796_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4800_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26233_MethodInfo/* Method Usage */,
	&AssemblyDescriptionAttribute_t796_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyDescriptionAttribute_t796_m35079_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4800_0_0_0;
extern Il2CppType InternalEnumerator_1_t4800_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4800_GenericClass;
TypeInfo InternalEnumerator_1_t4800_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4800_MethodInfos/* methods */
	, InternalEnumerator_1_t4800_PropertyInfos/* properties */
	, InternalEnumerator_1_t4800_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4800_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4800_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4800_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4800_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4800_1_0_0/* this_arg */
	, InternalEnumerator_1_t4800_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4800_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4800_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4800)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8791_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>
extern MethodInfo ICollection_1_get_Count_m45544_MethodInfo;
static PropertyInfo ICollection_1_t8791____Count_PropertyInfo = 
{
	&ICollection_1_t8791_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45544_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45545_MethodInfo;
static PropertyInfo ICollection_1_t8791____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8791_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45545_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8791_PropertyInfos[] =
{
	&ICollection_1_t8791____Count_PropertyInfo,
	&ICollection_1_t8791____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45544_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45544_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45544_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45545_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45545_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45545_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
static ParameterInfo ICollection_1_t8791_ICollection_1_Add_m45546_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t796_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45546_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45546_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8791_ICollection_1_Add_m45546_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45546_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45547_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45547_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45547_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
static ParameterInfo ICollection_1_t8791_ICollection_1_Contains_m45548_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t796_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45548_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45548_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8791_ICollection_1_Contains_m45548_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45548_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttributeU5BU5D_t5065_0_0_0;
extern Il2CppType AssemblyDescriptionAttributeU5BU5D_t5065_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8791_ICollection_1_CopyTo_m45549_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttributeU5BU5D_t5065_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45549_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45549_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8791_ICollection_1_CopyTo_m45549_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45549_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
static ParameterInfo ICollection_1_t8791_ICollection_1_Remove_m45550_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t796_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45550_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45550_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8791_ICollection_1_Remove_m45550_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45550_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8791_MethodInfos[] =
{
	&ICollection_1_get_Count_m45544_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45545_MethodInfo,
	&ICollection_1_Add_m45546_MethodInfo,
	&ICollection_1_Clear_m45547_MethodInfo,
	&ICollection_1_Contains_m45548_MethodInfo,
	&ICollection_1_CopyTo_m45549_MethodInfo,
	&ICollection_1_Remove_m45550_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8793_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8791_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8793_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8791_0_0_0;
extern Il2CppType ICollection_1_t8791_1_0_0;
struct ICollection_1_t8791;
extern Il2CppGenericClass ICollection_1_t8791_GenericClass;
TypeInfo ICollection_1_t8791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8791_MethodInfos/* methods */
	, ICollection_1_t8791_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8791_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8791_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8791_0_0_0/* byval_arg */
	, &ICollection_1_t8791_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8791_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDescriptionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDescriptionAttribute>
extern Il2CppType IEnumerator_1_t6799_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45551_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDescriptionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45551_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8793_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6799_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45551_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8793_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45551_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8793_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8793_0_0_0;
extern Il2CppType IEnumerable_1_t8793_1_0_0;
struct IEnumerable_1_t8793;
extern Il2CppGenericClass IEnumerable_1_t8793_GenericClass;
TypeInfo IEnumerable_1_t8793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8793_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8793_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8793_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8793_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8793_0_0_0/* byval_arg */
	, &IEnumerable_1_t8793_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8793_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8792_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>
extern MethodInfo IList_1_get_Item_m45552_MethodInfo;
extern MethodInfo IList_1_set_Item_m45553_MethodInfo;
static PropertyInfo IList_1_t8792____Item_PropertyInfo = 
{
	&IList_1_t8792_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45552_MethodInfo/* get */
	, &IList_1_set_Item_m45553_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8792_PropertyInfos[] =
{
	&IList_1_t8792____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
static ParameterInfo IList_1_t8792_IList_1_IndexOf_m45554_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t796_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45554_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45554_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8792_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8792_IList_1_IndexOf_m45554_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45554_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
static ParameterInfo IList_1_t8792_IList_1_Insert_m45555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t796_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45555_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45555_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8792_IList_1_Insert_m45555_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45555_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8792_IList_1_RemoveAt_m45556_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45556_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45556_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8792_IList_1_RemoveAt_m45556_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45556_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8792_IList_1_get_Item_m45552_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45552_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45552_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8792_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDescriptionAttribute_t796_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8792_IList_1_get_Item_m45552_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45552_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyDescriptionAttribute_t796_0_0_0;
static ParameterInfo IList_1_t8792_IList_1_set_Item_m45553_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t796_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45553_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45553_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8792_IList_1_set_Item_m45553_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45553_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8792_MethodInfos[] =
{
	&IList_1_IndexOf_m45554_MethodInfo,
	&IList_1_Insert_m45555_MethodInfo,
	&IList_1_RemoveAt_m45556_MethodInfo,
	&IList_1_get_Item_m45552_MethodInfo,
	&IList_1_set_Item_m45553_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8792_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8791_il2cpp_TypeInfo,
	&IEnumerable_1_t8793_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8792_0_0_0;
extern Il2CppType IList_1_t8792_1_0_0;
struct IList_1_t8792;
extern Il2CppGenericClass IList_1_t8792_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8792_MethodInfos/* methods */
	, IList_1_t8792_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8792_il2cpp_TypeInfo/* element_class */
	, IList_1_t8792_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8792_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8792_0_0_0/* byval_arg */
	, &IList_1_t8792_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8792_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6801_il2cpp_TypeInfo;

// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45557_MethodInfo;
static PropertyInfo IEnumerator_1_t6801____Current_PropertyInfo = 
{
	&IEnumerator_1_t6801_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45557_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6801_PropertyInfos[] =
{
	&IEnumerator_1_t6801____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45557_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45557_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6801_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyFileVersionAttribute_t801_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45557_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6801_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45557_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6801_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6801_0_0_0;
extern Il2CppType IEnumerator_1_t6801_1_0_0;
struct IEnumerator_1_t6801;
extern Il2CppGenericClass IEnumerator_1_t6801_GenericClass;
TypeInfo IEnumerator_1_t6801_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6801_MethodInfos/* methods */
	, IEnumerator_1_t6801_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6801_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6801_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6801_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6801_0_0_0/* byval_arg */
	, &IEnumerator_1_t6801_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6801_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_637.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4801_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_637MethodDeclarations.h"

extern TypeInfo AssemblyFileVersionAttribute_t801_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26238_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyFileVersionAttribute_t801_m35090_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyFileVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyFileVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyFileVersionAttribute_t801_m35090(__this, p0, method) (AssemblyFileVersionAttribute_t801 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4801____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4801, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4801____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4801, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4801_FieldInfos[] =
{
	&InternalEnumerator_1_t4801____array_0_FieldInfo,
	&InternalEnumerator_1_t4801____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26235_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4801____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4801_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26235_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4801____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4801_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26238_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4801_PropertyInfos[] =
{
	&InternalEnumerator_1_t4801____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4801____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4801_InternalEnumerator_1__ctor_m26234_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26234_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26234_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4801_InternalEnumerator_1__ctor_m26234_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26234_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26235_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26235_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26235_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26236_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26236_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26236_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26237_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26237_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26237_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26238_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26238_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyFileVersionAttribute_t801_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26238_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4801_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26234_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26235_MethodInfo,
	&InternalEnumerator_1_Dispose_m26236_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26237_MethodInfo,
	&InternalEnumerator_1_get_Current_m26238_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26237_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26236_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4801_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26235_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26237_MethodInfo,
	&InternalEnumerator_1_Dispose_m26236_MethodInfo,
	&InternalEnumerator_1_get_Current_m26238_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4801_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6801_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4801_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6801_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyFileVersionAttribute_t801_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4801_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26238_MethodInfo/* Method Usage */,
	&AssemblyFileVersionAttribute_t801_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyFileVersionAttribute_t801_m35090_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4801_0_0_0;
extern Il2CppType InternalEnumerator_1_t4801_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4801_GenericClass;
TypeInfo InternalEnumerator_1_t4801_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4801_MethodInfos/* methods */
	, InternalEnumerator_1_t4801_PropertyInfos/* properties */
	, InternalEnumerator_1_t4801_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4801_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4801_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4801_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4801_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4801_1_0_0/* this_arg */
	, InternalEnumerator_1_t4801_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4801_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4801_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4801)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8794_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m45558_MethodInfo;
static PropertyInfo ICollection_1_t8794____Count_PropertyInfo = 
{
	&ICollection_1_t8794_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45558_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45559_MethodInfo;
static PropertyInfo ICollection_1_t8794____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8794_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45559_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8794_PropertyInfos[] =
{
	&ICollection_1_t8794____Count_PropertyInfo,
	&ICollection_1_t8794____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45558_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45558_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45558_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45559_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45559_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45559_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
static ParameterInfo ICollection_1_t8794_ICollection_1_Add_m45560_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t801_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45560_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45560_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8794_ICollection_1_Add_m45560_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45560_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45561_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45561_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45561_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
static ParameterInfo ICollection_1_t8794_ICollection_1_Contains_m45562_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t801_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45562_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45562_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8794_ICollection_1_Contains_m45562_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45562_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttributeU5BU5D_t5066_0_0_0;
extern Il2CppType AssemblyFileVersionAttributeU5BU5D_t5066_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8794_ICollection_1_CopyTo_m45563_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttributeU5BU5D_t5066_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45563_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45563_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8794_ICollection_1_CopyTo_m45563_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45563_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
static ParameterInfo ICollection_1_t8794_ICollection_1_Remove_m45564_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t801_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45564_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45564_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8794_ICollection_1_Remove_m45564_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45564_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8794_MethodInfos[] =
{
	&ICollection_1_get_Count_m45558_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45559_MethodInfo,
	&ICollection_1_Add_m45560_MethodInfo,
	&ICollection_1_Clear_m45561_MethodInfo,
	&ICollection_1_Contains_m45562_MethodInfo,
	&ICollection_1_CopyTo_m45563_MethodInfo,
	&ICollection_1_Remove_m45564_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8796_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8794_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8796_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8794_0_0_0;
extern Il2CppType ICollection_1_t8794_1_0_0;
struct ICollection_1_t8794;
extern Il2CppGenericClass ICollection_1_t8794_GenericClass;
TypeInfo ICollection_1_t8794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8794_MethodInfos/* methods */
	, ICollection_1_t8794_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8794_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8794_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8794_0_0_0/* byval_arg */
	, &ICollection_1_t8794_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8794_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyFileVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyFileVersionAttribute>
extern Il2CppType IEnumerator_1_t6801_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45565_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyFileVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45565_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8796_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6801_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45565_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8796_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45565_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8796_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8796_0_0_0;
extern Il2CppType IEnumerable_1_t8796_1_0_0;
struct IEnumerable_1_t8796;
extern Il2CppGenericClass IEnumerable_1_t8796_GenericClass;
TypeInfo IEnumerable_1_t8796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8796_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8796_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8796_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8796_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8796_0_0_0/* byval_arg */
	, &IEnumerable_1_t8796_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8796_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8795_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>
extern MethodInfo IList_1_get_Item_m45566_MethodInfo;
extern MethodInfo IList_1_set_Item_m45567_MethodInfo;
static PropertyInfo IList_1_t8795____Item_PropertyInfo = 
{
	&IList_1_t8795_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45566_MethodInfo/* get */
	, &IList_1_set_Item_m45567_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8795_PropertyInfos[] =
{
	&IList_1_t8795____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
static ParameterInfo IList_1_t8795_IList_1_IndexOf_m45568_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t801_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45568_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45568_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8795_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8795_IList_1_IndexOf_m45568_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45568_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
static ParameterInfo IList_1_t8795_IList_1_Insert_m45569_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t801_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45569_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45569_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8795_IList_1_Insert_m45569_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45569_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8795_IList_1_RemoveAt_m45570_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45570_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45570_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8795_IList_1_RemoveAt_m45570_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45570_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8795_IList_1_get_Item_m45566_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45566_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45566_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8795_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyFileVersionAttribute_t801_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8795_IList_1_get_Item_m45566_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45566_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyFileVersionAttribute_t801_0_0_0;
static ParameterInfo IList_1_t8795_IList_1_set_Item_m45567_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t801_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45567_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45567_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8795_IList_1_set_Item_m45567_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45567_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8795_MethodInfos[] =
{
	&IList_1_IndexOf_m45568_MethodInfo,
	&IList_1_Insert_m45569_MethodInfo,
	&IList_1_RemoveAt_m45570_MethodInfo,
	&IList_1_get_Item_m45566_MethodInfo,
	&IList_1_set_Item_m45567_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8795_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8794_il2cpp_TypeInfo,
	&IEnumerable_1_t8796_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8795_0_0_0;
extern Il2CppType IList_1_t8795_1_0_0;
struct IList_1_t8795;
extern Il2CppGenericClass IList_1_t8795_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8795_MethodInfos/* methods */
	, IList_1_t8795_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8795_il2cpp_TypeInfo/* element_class */
	, IList_1_t8795_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8795_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8795_0_0_0/* byval_arg */
	, &IList_1_t8795_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8795_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6803_il2cpp_TypeInfo;

// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttri.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45571_MethodInfo;
static PropertyInfo IEnumerator_1_t6803____Current_PropertyInfo = 
{
	&IEnumerator_1_t6803_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45571_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6803_PropertyInfos[] =
{
	&IEnumerator_1_t6803____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45571_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45571_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6803_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyInformationalVersionAttribute_t1364_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45571_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6803_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45571_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6803_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6803_0_0_0;
extern Il2CppType IEnumerator_1_t6803_1_0_0;
struct IEnumerator_1_t6803;
extern Il2CppGenericClass IEnumerator_1_t6803_GenericClass;
TypeInfo IEnumerator_1_t6803_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6803_MethodInfos/* methods */
	, IEnumerator_1_t6803_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6803_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6803_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6803_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6803_0_0_0/* byval_arg */
	, &IEnumerator_1_t6803_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6803_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_638.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4802_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_638MethodDeclarations.h"

extern TypeInfo AssemblyInformationalVersionAttribute_t1364_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26243_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyInformationalVersionAttribute_t1364_m35101_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyInformationalVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyInformationalVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyInformationalVersionAttribute_t1364_m35101(__this, p0, method) (AssemblyInformationalVersionAttribute_t1364 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4802____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4802, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4802____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4802, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4802_FieldInfos[] =
{
	&InternalEnumerator_1_t4802____array_0_FieldInfo,
	&InternalEnumerator_1_t4802____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26240_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4802____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4802_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26240_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4802____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4802_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26243_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4802_PropertyInfos[] =
{
	&InternalEnumerator_1_t4802____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4802____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4802_InternalEnumerator_1__ctor_m26239_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26239_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26239_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4802_InternalEnumerator_1__ctor_m26239_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26239_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26240_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26240_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26240_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26241_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26241_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26241_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26242_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26242_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26242_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26243_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26243_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyInformationalVersionAttribute_t1364_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26243_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4802_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26239_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26240_MethodInfo,
	&InternalEnumerator_1_Dispose_m26241_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26242_MethodInfo,
	&InternalEnumerator_1_get_Current_m26243_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26242_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26241_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4802_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26240_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26242_MethodInfo,
	&InternalEnumerator_1_Dispose_m26241_MethodInfo,
	&InternalEnumerator_1_get_Current_m26243_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4802_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6803_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4802_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6803_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyInformationalVersionAttribute_t1364_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4802_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26243_MethodInfo/* Method Usage */,
	&AssemblyInformationalVersionAttribute_t1364_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyInformationalVersionAttribute_t1364_m35101_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4802_0_0_0;
extern Il2CppType InternalEnumerator_1_t4802_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4802_GenericClass;
TypeInfo InternalEnumerator_1_t4802_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4802_MethodInfos/* methods */
	, InternalEnumerator_1_t4802_PropertyInfos/* properties */
	, InternalEnumerator_1_t4802_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4802_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4802_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4802_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4802_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4802_1_0_0/* this_arg */
	, InternalEnumerator_1_t4802_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4802_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4802_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4802)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8797_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m45572_MethodInfo;
static PropertyInfo ICollection_1_t8797____Count_PropertyInfo = 
{
	&ICollection_1_t8797_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45572_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45573_MethodInfo;
static PropertyInfo ICollection_1_t8797____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8797_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45573_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8797_PropertyInfos[] =
{
	&ICollection_1_t8797____Count_PropertyInfo,
	&ICollection_1_t8797____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45572_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45572_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45572_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45573_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45573_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45573_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
static ParameterInfo ICollection_1_t8797_ICollection_1_Add_m45574_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t1364_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45574_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45574_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8797_ICollection_1_Add_m45574_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45574_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45575_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45575_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45575_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
static ParameterInfo ICollection_1_t8797_ICollection_1_Contains_m45576_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t1364_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45576_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45576_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8797_ICollection_1_Contains_m45576_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45576_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttributeU5BU5D_t5067_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttributeU5BU5D_t5067_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8797_ICollection_1_CopyTo_m45577_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttributeU5BU5D_t5067_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45577_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45577_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8797_ICollection_1_CopyTo_m45577_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45577_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
static ParameterInfo ICollection_1_t8797_ICollection_1_Remove_m45578_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t1364_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45578_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45578_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8797_ICollection_1_Remove_m45578_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45578_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8797_MethodInfos[] =
{
	&ICollection_1_get_Count_m45572_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45573_MethodInfo,
	&ICollection_1_Add_m45574_MethodInfo,
	&ICollection_1_Clear_m45575_MethodInfo,
	&ICollection_1_Contains_m45576_MethodInfo,
	&ICollection_1_CopyTo_m45577_MethodInfo,
	&ICollection_1_Remove_m45578_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8799_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8797_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8799_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8797_0_0_0;
extern Il2CppType ICollection_1_t8797_1_0_0;
struct ICollection_1_t8797;
extern Il2CppGenericClass ICollection_1_t8797_GenericClass;
TypeInfo ICollection_1_t8797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8797_MethodInfos/* methods */
	, ICollection_1_t8797_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8797_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8797_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8797_0_0_0/* byval_arg */
	, &ICollection_1_t8797_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8797_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyInformationalVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern Il2CppType IEnumerator_1_t6803_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45579_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyInformationalVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45579_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8799_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6803_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45579_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8799_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45579_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8799_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8799_0_0_0;
extern Il2CppType IEnumerable_1_t8799_1_0_0;
struct IEnumerable_1_t8799;
extern Il2CppGenericClass IEnumerable_1_t8799_GenericClass;
TypeInfo IEnumerable_1_t8799_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8799_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8799_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8799_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8799_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8799_0_0_0/* byval_arg */
	, &IEnumerable_1_t8799_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8799_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8798_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern MethodInfo IList_1_get_Item_m45580_MethodInfo;
extern MethodInfo IList_1_set_Item_m45581_MethodInfo;
static PropertyInfo IList_1_t8798____Item_PropertyInfo = 
{
	&IList_1_t8798_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45580_MethodInfo/* get */
	, &IList_1_set_Item_m45581_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8798_PropertyInfos[] =
{
	&IList_1_t8798____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
static ParameterInfo IList_1_t8798_IList_1_IndexOf_m45582_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t1364_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45582_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45582_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8798_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8798_IList_1_IndexOf_m45582_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45582_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
static ParameterInfo IList_1_t8798_IList_1_Insert_m45583_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t1364_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45583_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45583_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8798_IList_1_Insert_m45583_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45583_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8798_IList_1_RemoveAt_m45584_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45584_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45584_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8798_IList_1_RemoveAt_m45584_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45584_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8798_IList_1_get_Item_m45580_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45580_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45580_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8798_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyInformationalVersionAttribute_t1364_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8798_IList_1_get_Item_m45580_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45580_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttribute_t1364_0_0_0;
static ParameterInfo IList_1_t8798_IList_1_set_Item_m45581_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t1364_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45581_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45581_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8798_IList_1_set_Item_m45581_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45581_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8798_MethodInfos[] =
{
	&IList_1_IndexOf_m45582_MethodInfo,
	&IList_1_Insert_m45583_MethodInfo,
	&IList_1_RemoveAt_m45584_MethodInfo,
	&IList_1_get_Item_m45580_MethodInfo,
	&IList_1_set_Item_m45581_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8798_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8797_il2cpp_TypeInfo,
	&IEnumerable_1_t8799_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8798_0_0_0;
extern Il2CppType IList_1_t8798_1_0_0;
struct IList_1_t8798;
extern Il2CppGenericClass IList_1_t8798_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8798_MethodInfos/* methods */
	, IList_1_t8798_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8798_il2cpp_TypeInfo/* element_class */
	, IList_1_t8798_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8798_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8798_0_0_0/* byval_arg */
	, &IList_1_t8798_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8798_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6805_il2cpp_TypeInfo;

// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45585_MethodInfo;
static PropertyInfo IEnumerator_1_t6805____Current_PropertyInfo = 
{
	&IEnumerator_1_t6805_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45585_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6805_PropertyInfos[] =
{
	&IEnumerator_1_t6805____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45585_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45585_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6805_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyFileAttribute_t1177_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45585_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6805_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45585_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6805_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6805_0_0_0;
extern Il2CppType IEnumerator_1_t6805_1_0_0;
struct IEnumerator_1_t6805;
extern Il2CppGenericClass IEnumerator_1_t6805_GenericClass;
TypeInfo IEnumerator_1_t6805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6805_MethodInfos/* methods */
	, IEnumerator_1_t6805_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6805_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6805_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6805_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6805_0_0_0/* byval_arg */
	, &IEnumerator_1_t6805_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6805_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_639.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4803_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_639MethodDeclarations.h"

extern TypeInfo AssemblyKeyFileAttribute_t1177_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26248_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyKeyFileAttribute_t1177_m35112_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyKeyFileAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyKeyFileAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyKeyFileAttribute_t1177_m35112(__this, p0, method) (AssemblyKeyFileAttribute_t1177 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4803____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4803, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4803____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4803, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4803_FieldInfos[] =
{
	&InternalEnumerator_1_t4803____array_0_FieldInfo,
	&InternalEnumerator_1_t4803____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26245_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4803____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4803_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26245_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4803____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4803_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26248_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4803_PropertyInfos[] =
{
	&InternalEnumerator_1_t4803____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4803____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4803_InternalEnumerator_1__ctor_m26244_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26244_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26244_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4803_InternalEnumerator_1__ctor_m26244_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26244_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26245_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26245_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26245_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26246_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26246_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26246_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26247_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26247_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26247_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26248_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26248_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyFileAttribute_t1177_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26248_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4803_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26244_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26245_MethodInfo,
	&InternalEnumerator_1_Dispose_m26246_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26247_MethodInfo,
	&InternalEnumerator_1_get_Current_m26248_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26247_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26246_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4803_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26245_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26247_MethodInfo,
	&InternalEnumerator_1_Dispose_m26246_MethodInfo,
	&InternalEnumerator_1_get_Current_m26248_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4803_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6805_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4803_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6805_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyKeyFileAttribute_t1177_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4803_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26248_MethodInfo/* Method Usage */,
	&AssemblyKeyFileAttribute_t1177_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyKeyFileAttribute_t1177_m35112_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4803_0_0_0;
extern Il2CppType InternalEnumerator_1_t4803_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4803_GenericClass;
TypeInfo InternalEnumerator_1_t4803_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4803_MethodInfos/* methods */
	, InternalEnumerator_1_t4803_PropertyInfos/* properties */
	, InternalEnumerator_1_t4803_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4803_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4803_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4803_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4803_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4803_1_0_0/* this_arg */
	, InternalEnumerator_1_t4803_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4803_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4803_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4803)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8800_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>
extern MethodInfo ICollection_1_get_Count_m45586_MethodInfo;
static PropertyInfo ICollection_1_t8800____Count_PropertyInfo = 
{
	&ICollection_1_t8800_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45586_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45587_MethodInfo;
static PropertyInfo ICollection_1_t8800____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8800_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45587_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8800_PropertyInfos[] =
{
	&ICollection_1_t8800____Count_PropertyInfo,
	&ICollection_1_t8800____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45586_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45586_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45586_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45587_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45587_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45587_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
static ParameterInfo ICollection_1_t8800_ICollection_1_Add_m45588_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t1177_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45588_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45588_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8800_ICollection_1_Add_m45588_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45588_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45589_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45589_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45589_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
static ParameterInfo ICollection_1_t8800_ICollection_1_Contains_m45590_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t1177_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45590_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45590_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8800_ICollection_1_Contains_m45590_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45590_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttributeU5BU5D_t5068_0_0_0;
extern Il2CppType AssemblyKeyFileAttributeU5BU5D_t5068_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8800_ICollection_1_CopyTo_m45591_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttributeU5BU5D_t5068_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45591_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45591_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8800_ICollection_1_CopyTo_m45591_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45591_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
static ParameterInfo ICollection_1_t8800_ICollection_1_Remove_m45592_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t1177_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45592_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45592_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8800_ICollection_1_Remove_m45592_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45592_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8800_MethodInfos[] =
{
	&ICollection_1_get_Count_m45586_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45587_MethodInfo,
	&ICollection_1_Add_m45588_MethodInfo,
	&ICollection_1_Clear_m45589_MethodInfo,
	&ICollection_1_Contains_m45590_MethodInfo,
	&ICollection_1_CopyTo_m45591_MethodInfo,
	&ICollection_1_Remove_m45592_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8802_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8800_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8802_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8800_0_0_0;
extern Il2CppType ICollection_1_t8800_1_0_0;
struct ICollection_1_t8800;
extern Il2CppGenericClass ICollection_1_t8800_GenericClass;
TypeInfo ICollection_1_t8800_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8800_MethodInfos/* methods */
	, ICollection_1_t8800_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8800_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8800_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8800_0_0_0/* byval_arg */
	, &ICollection_1_t8800_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8800_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyFileAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyFileAttribute>
extern Il2CppType IEnumerator_1_t6805_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45593_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyFileAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45593_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8802_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6805_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45593_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8802_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45593_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8802_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8802_0_0_0;
extern Il2CppType IEnumerable_1_t8802_1_0_0;
struct IEnumerable_1_t8802;
extern Il2CppGenericClass IEnumerable_1_t8802_GenericClass;
TypeInfo IEnumerable_1_t8802_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8802_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8802_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8802_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8802_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8802_0_0_0/* byval_arg */
	, &IEnumerable_1_t8802_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8802_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8801_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>
extern MethodInfo IList_1_get_Item_m45594_MethodInfo;
extern MethodInfo IList_1_set_Item_m45595_MethodInfo;
static PropertyInfo IList_1_t8801____Item_PropertyInfo = 
{
	&IList_1_t8801_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45594_MethodInfo/* get */
	, &IList_1_set_Item_m45595_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8801_PropertyInfos[] =
{
	&IList_1_t8801____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
static ParameterInfo IList_1_t8801_IList_1_IndexOf_m45596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t1177_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45596_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45596_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8801_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8801_IList_1_IndexOf_m45596_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45596_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
static ParameterInfo IList_1_t8801_IList_1_Insert_m45597_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t1177_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45597_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45597_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8801_IList_1_Insert_m45597_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45597_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8801_IList_1_RemoveAt_m45598_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45598_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45598_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8801_IList_1_RemoveAt_m45598_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45598_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8801_IList_1_get_Item_m45594_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45594_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45594_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8801_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyFileAttribute_t1177_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8801_IList_1_get_Item_m45594_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45594_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyKeyFileAttribute_t1177_0_0_0;
static ParameterInfo IList_1_t8801_IList_1_set_Item_m45595_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t1177_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45595_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45595_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8801_IList_1_set_Item_m45595_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45595_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8801_MethodInfos[] =
{
	&IList_1_IndexOf_m45596_MethodInfo,
	&IList_1_Insert_m45597_MethodInfo,
	&IList_1_RemoveAt_m45598_MethodInfo,
	&IList_1_get_Item_m45594_MethodInfo,
	&IList_1_set_Item_m45595_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8801_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8800_il2cpp_TypeInfo,
	&IEnumerable_1_t8802_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8801_0_0_0;
extern Il2CppType IList_1_t8801_1_0_0;
struct IList_1_t8801;
extern Il2CppGenericClass IList_1_t8801_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8801_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8801_MethodInfos/* methods */
	, IList_1_t8801_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8801_il2cpp_TypeInfo/* element_class */
	, IList_1_t8801_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8801_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8801_0_0_0/* byval_arg */
	, &IList_1_t8801_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8801_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6807_il2cpp_TypeInfo;

// System.Reflection.AssemblyKeyNameAttribute
#include "mscorlib_System_Reflection_AssemblyKeyNameAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45599_MethodInfo;
static PropertyInfo IEnumerator_1_t6807____Current_PropertyInfo = 
{
	&IEnumerator_1_t6807_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45599_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6807_PropertyInfos[] =
{
	&IEnumerator_1_t6807____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45599_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45599_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6807_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyNameAttribute_t1176_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45599_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6807_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45599_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6807_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6807_0_0_0;
extern Il2CppType IEnumerator_1_t6807_1_0_0;
struct IEnumerator_1_t6807;
extern Il2CppGenericClass IEnumerator_1_t6807_GenericClass;
TypeInfo IEnumerator_1_t6807_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6807_MethodInfos/* methods */
	, IEnumerator_1_t6807_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6807_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6807_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6807_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6807_0_0_0/* byval_arg */
	, &IEnumerator_1_t6807_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6807_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_640.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4804_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_640MethodDeclarations.h"

extern TypeInfo AssemblyKeyNameAttribute_t1176_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26253_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyKeyNameAttribute_t1176_m35123_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyKeyNameAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyKeyNameAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyKeyNameAttribute_t1176_m35123(__this, p0, method) (AssemblyKeyNameAttribute_t1176 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4804____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4804, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4804____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4804, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4804_FieldInfos[] =
{
	&InternalEnumerator_1_t4804____array_0_FieldInfo,
	&InternalEnumerator_1_t4804____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26250_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4804____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4804_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26250_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4804____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4804_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26253_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4804_PropertyInfos[] =
{
	&InternalEnumerator_1_t4804____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4804____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4804_InternalEnumerator_1__ctor_m26249_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26249_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26249_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4804_InternalEnumerator_1__ctor_m26249_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26249_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26250_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26250_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26250_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26251_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26251_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26251_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26252_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26252_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26252_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26253_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyNameAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26253_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyNameAttribute_t1176_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26253_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4804_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26249_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26250_MethodInfo,
	&InternalEnumerator_1_Dispose_m26251_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26252_MethodInfo,
	&InternalEnumerator_1_get_Current_m26253_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26252_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26251_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4804_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26250_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26252_MethodInfo,
	&InternalEnumerator_1_Dispose_m26251_MethodInfo,
	&InternalEnumerator_1_get_Current_m26253_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4804_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6807_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4804_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6807_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyKeyNameAttribute_t1176_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4804_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26253_MethodInfo/* Method Usage */,
	&AssemblyKeyNameAttribute_t1176_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyKeyNameAttribute_t1176_m35123_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4804_0_0_0;
extern Il2CppType InternalEnumerator_1_t4804_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4804_GenericClass;
TypeInfo InternalEnumerator_1_t4804_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4804_MethodInfos/* methods */
	, InternalEnumerator_1_t4804_PropertyInfos/* properties */
	, InternalEnumerator_1_t4804_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4804_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4804_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4804_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4804_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4804_1_0_0/* this_arg */
	, InternalEnumerator_1_t4804_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4804_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4804_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4804)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8803_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>
extern MethodInfo ICollection_1_get_Count_m45600_MethodInfo;
static PropertyInfo ICollection_1_t8803____Count_PropertyInfo = 
{
	&ICollection_1_t8803_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45600_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45601_MethodInfo;
static PropertyInfo ICollection_1_t8803____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8803_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45601_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8803_PropertyInfos[] =
{
	&ICollection_1_t8803____Count_PropertyInfo,
	&ICollection_1_t8803____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45600_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45600_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45600_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45601_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45601_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45601_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
static ParameterInfo ICollection_1_t8803_ICollection_1_Add_m45602_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyNameAttribute_t1176_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45602_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45602_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8803_ICollection_1_Add_m45602_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45602_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45603_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45603_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45603_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
static ParameterInfo ICollection_1_t8803_ICollection_1_Contains_m45604_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyNameAttribute_t1176_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45604_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45604_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8803_ICollection_1_Contains_m45604_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45604_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyNameAttributeU5BU5D_t5069_0_0_0;
extern Il2CppType AssemblyKeyNameAttributeU5BU5D_t5069_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8803_ICollection_1_CopyTo_m45605_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyNameAttributeU5BU5D_t5069_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45605_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45605_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8803_ICollection_1_CopyTo_m45605_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45605_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
static ParameterInfo ICollection_1_t8803_ICollection_1_Remove_m45606_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyNameAttribute_t1176_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45606_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyNameAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45606_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8803_ICollection_1_Remove_m45606_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45606_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8803_MethodInfos[] =
{
	&ICollection_1_get_Count_m45600_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45601_MethodInfo,
	&ICollection_1_Add_m45602_MethodInfo,
	&ICollection_1_Clear_m45603_MethodInfo,
	&ICollection_1_Contains_m45604_MethodInfo,
	&ICollection_1_CopyTo_m45605_MethodInfo,
	&ICollection_1_Remove_m45606_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8805_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8803_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8805_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8803_0_0_0;
extern Il2CppType ICollection_1_t8803_1_0_0;
struct ICollection_1_t8803;
extern Il2CppGenericClass ICollection_1_t8803_GenericClass;
TypeInfo ICollection_1_t8803_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8803_MethodInfos/* methods */
	, ICollection_1_t8803_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8803_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8803_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8803_0_0_0/* byval_arg */
	, &ICollection_1_t8803_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8803_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyNameAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyNameAttribute>
extern Il2CppType IEnumerator_1_t6807_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45607_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyNameAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45607_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8805_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6807_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45607_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8805_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45607_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8805_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8805_0_0_0;
extern Il2CppType IEnumerable_1_t8805_1_0_0;
struct IEnumerable_1_t8805;
extern Il2CppGenericClass IEnumerable_1_t8805_GenericClass;
TypeInfo IEnumerable_1_t8805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8805_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8805_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8805_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8805_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8805_0_0_0/* byval_arg */
	, &IEnumerable_1_t8805_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8805_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8804_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>
extern MethodInfo IList_1_get_Item_m45608_MethodInfo;
extern MethodInfo IList_1_set_Item_m45609_MethodInfo;
static PropertyInfo IList_1_t8804____Item_PropertyInfo = 
{
	&IList_1_t8804_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45608_MethodInfo/* get */
	, &IList_1_set_Item_m45609_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8804_PropertyInfos[] =
{
	&IList_1_t8804____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
static ParameterInfo IList_1_t8804_IList_1_IndexOf_m45610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyNameAttribute_t1176_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45610_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45610_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8804_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8804_IList_1_IndexOf_m45610_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45610_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
static ParameterInfo IList_1_t8804_IList_1_Insert_m45611_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyNameAttribute_t1176_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45611_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45611_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8804_IList_1_Insert_m45611_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45611_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8804_IList_1_RemoveAt_m45612_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45612_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45612_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8804_IList_1_RemoveAt_m45612_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45612_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8804_IList_1_get_Item_m45608_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45608_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45608_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8804_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyNameAttribute_t1176_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8804_IList_1_get_Item_m45608_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45608_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyKeyNameAttribute_t1176_0_0_0;
static ParameterInfo IList_1_t8804_IList_1_set_Item_m45609_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyNameAttribute_t1176_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45609_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyNameAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45609_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8804_IList_1_set_Item_m45609_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45609_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8804_MethodInfos[] =
{
	&IList_1_IndexOf_m45610_MethodInfo,
	&IList_1_Insert_m45611_MethodInfo,
	&IList_1_RemoveAt_m45612_MethodInfo,
	&IList_1_get_Item_m45608_MethodInfo,
	&IList_1_set_Item_m45609_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8804_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8803_il2cpp_TypeInfo,
	&IEnumerable_1_t8805_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8804_0_0_0;
extern Il2CppType IList_1_t8804_1_0_0;
struct IList_1_t8804;
extern Il2CppGenericClass IList_1_t8804_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8804_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8804_MethodInfos/* methods */
	, IList_1_t8804_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8804_il2cpp_TypeInfo/* element_class */
	, IList_1_t8804_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8804_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8804_0_0_0/* byval_arg */
	, &IList_1_t8804_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8804_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6809_il2cpp_TypeInfo;

// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyNameFlags>
extern MethodInfo IEnumerator_1_get_Current_m45613_MethodInfo;
static PropertyInfo IEnumerator_1_t6809____Current_PropertyInfo = 
{
	&IEnumerator_1_t6809_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45613_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6809_PropertyInfos[] =
{
	&IEnumerator_1_t6809____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
extern void* RuntimeInvoker_AssemblyNameFlags_t1978 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45613_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45613_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6809_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyNameFlags_t1978_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyNameFlags_t1978/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45613_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6809_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45613_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6809_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6809_0_0_0;
extern Il2CppType IEnumerator_1_t6809_1_0_0;
struct IEnumerator_1_t6809;
extern Il2CppGenericClass IEnumerator_1_t6809_GenericClass;
TypeInfo IEnumerator_1_t6809_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6809_MethodInfos/* methods */
	, IEnumerator_1_t6809_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6809_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6809_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6809_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6809_0_0_0/* byval_arg */
	, &IEnumerator_1_t6809_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6809_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_641.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4805_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_641MethodDeclarations.h"

extern TypeInfo AssemblyNameFlags_t1978_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26258_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyNameFlags_t1978_m35134_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyNameFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyNameFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAssemblyNameFlags_t1978_m35134 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26254_MethodInfo;
 void InternalEnumerator_1__ctor_m26254 (InternalEnumerator_1_t4805 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255 (InternalEnumerator_1_t4805 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26258(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26258_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AssemblyNameFlags_t1978_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26256_MethodInfo;
 void InternalEnumerator_1_Dispose_m26256 (InternalEnumerator_1_t4805 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26257_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26257 (InternalEnumerator_1_t4805 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26258 (InternalEnumerator_1_t4805 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAssemblyNameFlags_t1978_m35134(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAssemblyNameFlags_t1978_m35134_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4805____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4805, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4805____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4805, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4805_FieldInfos[] =
{
	&InternalEnumerator_1_t4805____array_0_FieldInfo,
	&InternalEnumerator_1_t4805____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4805____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4805_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4805____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4805_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26258_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4805_PropertyInfos[] =
{
	&InternalEnumerator_1_t4805____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4805____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4805_InternalEnumerator_1__ctor_m26254_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26254_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26254_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26254/* method */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4805_InternalEnumerator_1__ctor_m26254_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26254_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255/* method */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26256_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26256_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26256/* method */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26256_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26257_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26257_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26257/* method */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26257_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
extern void* RuntimeInvoker_AssemblyNameFlags_t1978 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26258_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26258_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26258/* method */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyNameFlags_t1978_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyNameFlags_t1978/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26258_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4805_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26254_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255_MethodInfo,
	&InternalEnumerator_1_Dispose_m26256_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26257_MethodInfo,
	&InternalEnumerator_1_get_Current_m26258_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4805_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26255_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26257_MethodInfo,
	&InternalEnumerator_1_Dispose_m26256_MethodInfo,
	&InternalEnumerator_1_get_Current_m26258_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4805_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6809_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4805_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6809_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4805_0_0_0;
extern Il2CppType InternalEnumerator_1_t4805_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4805_GenericClass;
TypeInfo InternalEnumerator_1_t4805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4805_MethodInfos/* methods */
	, InternalEnumerator_1_t4805_PropertyInfos/* properties */
	, InternalEnumerator_1_t4805_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4805_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4805_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4805_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4805_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4805_1_0_0/* this_arg */
	, InternalEnumerator_1_t4805_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4805_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4805)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8806_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>
extern MethodInfo ICollection_1_get_Count_m45614_MethodInfo;
static PropertyInfo ICollection_1_t8806____Count_PropertyInfo = 
{
	&ICollection_1_t8806_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45614_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45615_MethodInfo;
static PropertyInfo ICollection_1_t8806____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8806_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45615_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8806_PropertyInfos[] =
{
	&ICollection_1_t8806____Count_PropertyInfo,
	&ICollection_1_t8806____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45614_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m45614_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45614_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45615_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45615_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45615_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
static ParameterInfo ICollection_1_t8806_ICollection_1_Add_m45616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1978_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45616_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Add(T)
MethodInfo ICollection_1_Add_m45616_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8806_ICollection_1_Add_m45616_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45616_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45617_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Clear()
MethodInfo ICollection_1_Clear_m45617_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45617_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
static ParameterInfo ICollection_1_t8806_ICollection_1_Contains_m45618_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1978_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45618_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m45618_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8806_ICollection_1_Contains_m45618_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45618_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlagsU5BU5D_t5070_0_0_0;
extern Il2CppType AssemblyNameFlagsU5BU5D_t5070_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8806_ICollection_1_CopyTo_m45619_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlagsU5BU5D_t5070_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45619_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45619_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8806_ICollection_1_CopyTo_m45619_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45619_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
static ParameterInfo ICollection_1_t8806_ICollection_1_Remove_m45620_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1978_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45620_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m45620_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8806_ICollection_1_Remove_m45620_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45620_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8806_MethodInfos[] =
{
	&ICollection_1_get_Count_m45614_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45615_MethodInfo,
	&ICollection_1_Add_m45616_MethodInfo,
	&ICollection_1_Clear_m45617_MethodInfo,
	&ICollection_1_Contains_m45618_MethodInfo,
	&ICollection_1_CopyTo_m45619_MethodInfo,
	&ICollection_1_Remove_m45620_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8808_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8806_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8808_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8806_0_0_0;
extern Il2CppType ICollection_1_t8806_1_0_0;
struct ICollection_1_t8806;
extern Il2CppGenericClass ICollection_1_t8806_GenericClass;
TypeInfo ICollection_1_t8806_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8806_MethodInfos/* methods */
	, ICollection_1_t8806_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8806_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8806_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8806_0_0_0/* byval_arg */
	, &ICollection_1_t8806_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8806_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyNameFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyNameFlags>
extern Il2CppType IEnumerator_1_t6809_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45621_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyNameFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45621_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8808_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6809_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45621_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8808_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45621_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8808_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8808_0_0_0;
extern Il2CppType IEnumerable_1_t8808_1_0_0;
struct IEnumerable_1_t8808;
extern Il2CppGenericClass IEnumerable_1_t8808_GenericClass;
TypeInfo IEnumerable_1_t8808_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8808_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8808_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8808_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8808_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8808_0_0_0/* byval_arg */
	, &IEnumerable_1_t8808_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8808_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
