#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_735.h"
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
extern TypeInfo InternalEnumerator_1_t4902_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_735MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"
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
extern TypeInfo SpecialFolder_t2259_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1534_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26697_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6562_MethodInfo;
extern MethodInfo Array_get_Length_m1819_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpecialFolder_t2259_m35962_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSpecialFolder_t2259_m35962 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26693_MethodInfo;
 void InternalEnumerator_1__ctor_m26693 (InternalEnumerator_1_t4902 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694 (InternalEnumerator_1_t4902 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26697(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26697_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SpecialFolder_t2259_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26695_MethodInfo;
 void InternalEnumerator_1_Dispose_m26695 (InternalEnumerator_1_t4902 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26696_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26696 (InternalEnumerator_1_t4902 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26697 (InternalEnumerator_1_t4902 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSpecialFolder_t2259_m35962(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSpecialFolder_t2259_m35962_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4902____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4902, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4902____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4902, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4902_FieldInfos[] =
{
	&InternalEnumerator_1_t4902____array_0_FieldInfo,
	&InternalEnumerator_1_t4902____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4902____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4902_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4902____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4902_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26697_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4902_PropertyInfos[] =
{
	&InternalEnumerator_1_t4902____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4902____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4902_InternalEnumerator_1__ctor_m26693_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26693_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26693_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26693/* method */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4902_InternalEnumerator_1__ctor_m26693_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26693_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694/* method */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26695_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26695_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26695/* method */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26695_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26696_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26696_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26696/* method */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26696_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t2259_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t2259 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26697_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26697_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26697/* method */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t2259_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t2259/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26697_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4902_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26693_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694_MethodInfo,
	&InternalEnumerator_1_Dispose_m26695_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26696_MethodInfo,
	&InternalEnumerator_1_get_Current_m26697_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3280_MethodInfo;
extern MethodInfo Object_Finalize_m416_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3281_MethodInfo;
extern MethodInfo ValueType_ToString_m3369_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4902_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26694_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26696_MethodInfo,
	&InternalEnumerator_1_Dispose_m26695_MethodInfo,
	&InternalEnumerator_1_get_Current_m26697_MethodInfo,
};
extern TypeInfo IEnumerator_t21_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t69_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6977_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t4902_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6977_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4902_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6977_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4902_0_0_0;
extern Il2CppType InternalEnumerator_1_t4902_1_0_0;
extern TypeInfo ValueType_t700_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4902_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4902_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4902_MethodInfos/* methods */
	, InternalEnumerator_1_t4902_PropertyInfos/* properties */
	, InternalEnumerator_1_t4902_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4902_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4902_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4902_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4902_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4902_1_0_0/* this_arg */
	, InternalEnumerator_1_t4902_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4902_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4902)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9072_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo ICollection_1_get_Count_m46750_MethodInfo;
static PropertyInfo ICollection_1_t9072____Count_PropertyInfo = 
{
	&ICollection_1_t9072_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46751_MethodInfo;
static PropertyInfo ICollection_1_t9072____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9072_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46751_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9072_PropertyInfos[] =
{
	&ICollection_1_t9072____Count_PropertyInfo,
	&ICollection_1_t9072____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46750_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
MethodInfo ICollection_1_get_Count_m46750_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46750_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46751_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46751_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46751_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t2259_0_0_0;
extern Il2CppType SpecialFolder_t2259_0_0_0;
static ParameterInfo ICollection_1_t9072_ICollection_1_Add_m46752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t2259_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46752_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
MethodInfo ICollection_1_Add_m46752_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9072_ICollection_1_Add_m46752_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46752_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46753_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
MethodInfo ICollection_1_Clear_m46753_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46753_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t2259_0_0_0;
static ParameterInfo ICollection_1_t9072_ICollection_1_Contains_m46754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t2259_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46754_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
MethodInfo ICollection_1_Contains_m46754_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9072_ICollection_1_Contains_m46754_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46754_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolderU5BU5D_t5136_0_0_0;
extern Il2CppType SpecialFolderU5BU5D_t5136_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9072_ICollection_1_CopyTo_m46755_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolderU5BU5D_t5136_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46755_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46755_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9072_ICollection_1_CopyTo_m46755_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46755_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t2259_0_0_0;
static ParameterInfo ICollection_1_t9072_ICollection_1_Remove_m46756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t2259_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46756_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
MethodInfo ICollection_1_Remove_m46756_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9072_ICollection_1_Remove_m46756_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46756_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9072_MethodInfos[] =
{
	&ICollection_1_get_Count_m46750_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46751_MethodInfo,
	&ICollection_1_Add_m46752_MethodInfo,
	&ICollection_1_Clear_m46753_MethodInfo,
	&ICollection_1_Contains_m46754_MethodInfo,
	&ICollection_1_CopyTo_m46755_MethodInfo,
	&ICollection_1_Remove_m46756_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t88_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t9074_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9072_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9074_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9072_0_0_0;
extern Il2CppType ICollection_1_t9072_1_0_0;
struct ICollection_1_t9072;
extern Il2CppGenericClass ICollection_1_t9072_GenericClass;
TypeInfo ICollection_1_t9072_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9072_MethodInfos/* methods */
	, ICollection_1_t9072_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9072_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9072_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9072_0_0_0/* byval_arg */
	, &ICollection_1_t9072_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9072_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern Il2CppType IEnumerator_1_t6977_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46757_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46757_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9074_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6977_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46757_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9074_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46757_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9074_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9074_0_0_0;
extern Il2CppType IEnumerable_1_t9074_1_0_0;
struct IEnumerable_1_t9074;
extern Il2CppGenericClass IEnumerable_1_t9074_GenericClass;
TypeInfo IEnumerable_1_t9074_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9074_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9074_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9074_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9074_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9074_0_0_0/* byval_arg */
	, &IEnumerable_1_t9074_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9074_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9073_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo IList_1_get_Item_m46758_MethodInfo;
extern MethodInfo IList_1_set_Item_m46759_MethodInfo;
static PropertyInfo IList_1_t9073____Item_PropertyInfo = 
{
	&IList_1_t9073_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46758_MethodInfo/* get */
	, &IList_1_set_Item_m46759_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9073_PropertyInfos[] =
{
	&IList_1_t9073____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpecialFolder_t2259_0_0_0;
static ParameterInfo IList_1_t9073_IList_1_IndexOf_m46760_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t2259_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46760_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46760_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9073_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9073_IList_1_IndexOf_m46760_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46760_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType SpecialFolder_t2259_0_0_0;
static ParameterInfo IList_1_t9073_IList_1_Insert_m46761_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t2259_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46761_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46761_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9073_IList_1_Insert_m46761_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46761_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9073_IList_1_RemoveAt_m46762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46762_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46762_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9073_IList_1_RemoveAt_m46762_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46762_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9073_IList_1_get_Item_m46758_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType SpecialFolder_t2259_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t2259_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46758_GenericMethod;
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46758_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9073_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t2259_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t2259_Int32_t63/* invoker_method */
	, IList_1_t9073_IList_1_get_Item_m46758_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46758_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType SpecialFolder_t2259_0_0_0;
static ParameterInfo IList_1_t9073_IList_1_set_Item_m46759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t2259_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46759_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46759_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9073_IList_1_set_Item_m46759_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46759_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9073_MethodInfos[] =
{
	&IList_1_IndexOf_m46760_MethodInfo,
	&IList_1_Insert_m46761_MethodInfo,
	&IList_1_RemoveAt_m46762_MethodInfo,
	&IList_1_get_Item_m46758_MethodInfo,
	&IList_1_set_Item_m46759_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9073_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9072_il2cpp_TypeInfo,
	&IEnumerable_1_t9074_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9073_0_0_0;
extern Il2CppType IList_1_t9073_1_0_0;
struct IList_1_t9073;
extern Il2CppGenericClass IList_1_t9073_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9073_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9073_MethodInfos/* methods */
	, IList_1_t9073_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9073_il2cpp_TypeInfo/* element_class */
	, IList_1_t9073_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9073_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9073_0_0_0/* byval_arg */
	, &IList_1_t9073_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9073_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t2714_il2cpp_TypeInfo;

// System.Guid
#include "mscorlib_System_Guid.h"


// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo IComparable_1_t2714_IComparable_1_CompareTo_m46763_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m46763_GenericMethod;
// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m46763_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2714_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103/* invoker_method */
	, IComparable_1_t2714_IComparable_1_CompareTo_m46763_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m46763_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2714_MethodInfos[] =
{
	&IComparable_1_CompareTo_m46763_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2714_0_0_0;
extern Il2CppType IComparable_1_t2714_1_0_0;
struct IComparable_1_t2714;
extern Il2CppGenericClass IComparable_1_t2714_GenericClass;
TypeInfo IComparable_1_t2714_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2714_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2714_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2714_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2714_0_0_0/* byval_arg */
	, &IComparable_1_t2714_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2714_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEquatable_1_t2715_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo IEquatable_1_t2715_IEquatable_1_Equals_m46764_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m46764_GenericMethod;
// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
MethodInfo IEquatable_1_Equals_m46764_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2715_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Guid_t103/* invoker_method */
	, IEquatable_1_t2715_IEquatable_1_Equals_m46764_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m46764_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2715_MethodInfos[] =
{
	&IEquatable_1_Equals_m46764_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2715_0_0_0;
extern Il2CppType IEquatable_1_t2715_1_0_0;
struct IEquatable_1_t2715;
extern Il2CppGenericClass IEquatable_1_t2715_GenericClass;
TypeInfo IEquatable_1_t2715_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2715_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2715_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2715_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2715_0_0_0/* byval_arg */
	, &IEquatable_1_t2715_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2715_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2712_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"

extern TypeInfo Guid_t103_il2cpp_TypeInfo;
extern TypeInfo Int32_t63_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_40MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m26699_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m46763_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m12677_MethodInfo;
 void GenericComparer_1__ctor_m12677 (GenericComparer_1_t2712 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m26699(__this, /*hidden argument*/&Comparer_1__ctor_m26699_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m26698_MethodInfo;
 int32_t GenericComparer_1_Compare_m26698 (GenericComparer_1_t2712 * __this, Guid_t103  ___x, Guid_t103  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t103  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t103  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t103  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t103  >::Invoke(&IComparable_1_CompareTo_m46763_MethodInfo, Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m12677_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
MethodInfo GenericComparer_1__ctor_m12677_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m12677/* method */
	, &GenericComparer_1_t2712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &GenericComparer_1__ctor_m12677_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo GenericComparer_1_t2712_GenericComparer_1_Compare_m26698_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m26698_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m26698_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m26698/* method */
	, &GenericComparer_1_t2712_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103/* invoker_method */
	, GenericComparer_1_t2712_GenericComparer_1_Compare_m26698_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m26698_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t2712_MethodInfos[] =
{
	&GenericComparer_1__ctor_m12677_MethodInfo,
	&GenericComparer_1_Compare_m26698_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m460_MethodInfo;
extern MethodInfo Object_GetHashCode_m461_MethodInfo;
extern MethodInfo Object_ToString_m435_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m26701_MethodInfo;
static MethodInfo* GenericComparer_1_t2712_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&GenericComparer_1_Compare_m26698_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26701_MethodInfo,
	&GenericComparer_1_Compare_m26698_MethodInfo,
};
extern TypeInfo IComparer_1_t9309_il2cpp_TypeInfo;
extern TypeInfo IComparer_t1565_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t2712_InterfacesOffsets[] = 
{
	{ &IComparer_1_t9309_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t2712_0_0_0;
extern Il2CppType GenericComparer_1_t2712_1_0_0;
extern TypeInfo Comparer_1_t4903_il2cpp_TypeInfo;
struct GenericComparer_1_t2712;
extern Il2CppGenericClass GenericComparer_1_t2712_GenericClass;
TypeInfo GenericComparer_1_t2712_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t2712_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t2712_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t2712_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t2712_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t2712_0_0_0/* byval_arg */
	, &GenericComparer_1_t2712_1_0_0/* this_arg */
	, GenericComparer_1_t2712_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t2712_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t2712)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_40.h"
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.GenericComparer`1
#include "mscorlib_System_Collections_Generic_GenericComparer_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_41.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t64_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t1850_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t146_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4904_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t116_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_41MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType GenericComparer_1_t1850_0_0_0;
extern MethodInfo Object__ctor_m448_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m441_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m1419_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5125_MethodInfo;
extern MethodInfo Activator_CreateInstance_m5003_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m26703_MethodInfo;
extern MethodInfo Comparer_1_Compare_m46765_MethodInfo;
extern MethodInfo ArgumentException__ctor_m11264_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
 void Comparer_1__ctor_m26699 (Comparer_1_t4903 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern MethodInfo Comparer_1__cctor_m26700_MethodInfo;
 void Comparer_1__cctor_m26700 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t4904 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4904 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t4904_il2cpp_TypeInfo));
	DefaultComparer__ctor_m26703(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m26703_MethodInfo);
	((Comparer_1_t4903_StaticFields*)InitializedTypeInfo(&Comparer_1_t4903_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m26701 (Comparer_1_t4903 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t103 , Guid_t103  >::Invoke(&Comparer_1_Compare_m46765_MethodInfo, __this, ((*(Guid_t103 *)((Guid_t103 *)UnBox (___x, InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo))))), ((*(Guid_t103 *)((Guid_t103 *)UnBox (___y, InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t116 * L_1 = (ArgumentException_t116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t116_il2cpp_TypeInfo));
		ArgumentException__ctor_m11264(L_1, /*hidden argument*/&ArgumentException__ctor_m11264_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern MethodInfo Comparer_1_get_Default_m26702_MethodInfo;
 Comparer_1_t4903 * Comparer_1_get_Default_m26702 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t4903_il2cpp_TypeInfo));
		return (((Comparer_1_t4903_StaticFields*)InitializedTypeInfo(&Comparer_1_t4903_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType Comparer_1_t4903_0_0_49;
FieldInfo Comparer_1_t4903_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t4903_0_0_49/* type */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t4903_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t4903_FieldInfos[] =
{
	&Comparer_1_t4903_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t4903____Default_PropertyInfo = 
{
	&Comparer_1_t4903_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m26702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t4903_PropertyInfos[] =
{
	&Comparer_1_t4903____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m26699_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
MethodInfo Comparer_1__ctor_m26699_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m26699/* method */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &Comparer_1__ctor_m26699_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m26700_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
MethodInfo Comparer_1__cctor_m26700_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m26700/* method */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m26700_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t4903_Comparer_1_System_Collections_IComparer_Compare_m26701_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m26701_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m26701_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m26701/* method */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t_Object_t/* invoker_method */
	, Comparer_1_t4903_Comparer_1_System_Collections_IComparer_Compare_m26701_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m26701_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo Comparer_1_t4903_Comparer_1_Compare_m46765_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m46765_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
MethodInfo Comparer_1_Compare_m46765_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103/* invoker_method */
	, Comparer_1_t4903_Comparer_1_Compare_m46765_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m46765_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t4903_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m26702_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
MethodInfo Comparer_1_get_Default_m26702_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m26702/* method */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t4903_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m26702_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t4903_MethodInfos[] =
{
	&Comparer_1__ctor_m26699_MethodInfo,
	&Comparer_1__cctor_m26700_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26701_MethodInfo,
	&Comparer_1_Compare_m46765_MethodInfo,
	&Comparer_1_get_Default_m26702_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t4903_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&Comparer_1_Compare_m46765_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26701_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t4903_InterfacesTypeInfos[] = 
{
	&IComparer_1_t9309_il2cpp_TypeInfo,
	&IComparer_t1565_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t4903_InterfacesOffsets[] = 
{
	{ &IComparer_1_t9309_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t4903_0_0_0;
extern Il2CppType Comparer_1_t4903_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t4903;
extern Il2CppGenericClass Comparer_1_t4903_GenericClass;
TypeInfo Comparer_1_t4903_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t4903_MethodInfos/* methods */
	, Comparer_1_t4903_PropertyInfos/* properties */
	, Comparer_1_t4903_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t4903_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t4903_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t4903_0_0_0/* byval_arg */
	, &Comparer_1_t4903_1_0_0/* this_arg */
	, Comparer_1_t4903_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t4903_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t4903)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t4903_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo IComparer_1_t9309_IComparer_1_Compare_m46766_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m46766_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
MethodInfo IComparer_1_Compare_m46766_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t9309_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103/* invoker_method */
	, IComparer_1_t9309_IComparer_1_Compare_m46766_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m46766_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t9309_MethodInfos[] =
{
	&IComparer_1_Compare_m46766_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t9309_0_0_0;
extern Il2CppType IComparer_1_t9309_1_0_0;
struct IComparer_1_t9309;
extern Il2CppGenericClass IComparer_1_t9309_GenericClass;
TypeInfo IComparer_1_t9309_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t9309_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t9309_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t9309_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t9309_0_0_0/* byval_arg */
	, &IComparer_1_t9309_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t9309_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

extern TypeInfo IComparable_t86_il2cpp_TypeInfo;
extern MethodInfo IComparable_CompareTo_m12071_MethodInfo;
extern MethodInfo ArgumentException__ctor_m586_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
 void DefaultComparer__ctor_m26703 (DefaultComparer_t4904 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m26699(__this, /*hidden argument*/&Comparer_1__ctor_m26699_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m26704_MethodInfo;
 int32_t DefaultComparer_Compare_m26704 (DefaultComparer_t4904 * __this, Guid_t103  ___x, Guid_t103  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t103  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t103  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t103  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Guid_t103  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t2714_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		Guid_t103  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2714_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t103  >::Invoke(&IComparable_1_CompareTo_m46763_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2714_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		Guid_t103  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t86_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Guid_t103  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_13);
		Guid_t103  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t86_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m12071_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t86_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t116 * L_18 = (ArgumentException_t116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t116_il2cpp_TypeInfo));
		ArgumentException__ctor_m586(L_18, (String_t*) &_stringLiteral1455, /*hidden argument*/&ArgumentException__ctor_m586_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m26703_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m26703_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m26703/* method */
	, &DefaultComparer_t4904_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &DefaultComparer__ctor_m26703_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo DefaultComparer_t4904_DefaultComparer_Compare_m26704_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m26704_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m26704_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m26704/* method */
	, &DefaultComparer_t4904_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103_Guid_t103/* invoker_method */
	, DefaultComparer_t4904_DefaultComparer_Compare_m26704_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m26704_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t4904_MethodInfos[] =
{
	&DefaultComparer__ctor_m26703_MethodInfo,
	&DefaultComparer_Compare_m26704_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t4904_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&DefaultComparer_Compare_m26704_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26701_MethodInfo,
	&DefaultComparer_Compare_m26704_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t4904_InterfacesOffsets[] = 
{
	{ &IComparer_1_t9309_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t4904_0_0_0;
extern Il2CppType DefaultComparer_t4904_1_0_0;
struct DefaultComparer_t4904;
extern Il2CppGenericClass DefaultComparer_t4904_GenericClass;
extern TypeInfo Comparer_1_t1849_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t4904_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t4904_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t4903_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t1849_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t4904_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t4904_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t4904_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t4904_0_0_0/* byval_arg */
	, &DefaultComparer_t4904_1_0_0/* this_arg */
	, DefaultComparer_t4904_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t4904_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t4904)/* instance_size */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2713_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_54MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m26707_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m46764_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m12678_MethodInfo;
 void GenericEqualityComparer_1__ctor_m12678 (GenericEqualityComparer_1_t2713 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m26707(__this, /*hidden argument*/&EqualityComparer_1__ctor_m26707_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m26705_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m26705 (GenericEqualityComparer_1_t2713 * __this, Guid_t103  ___obj, MethodInfo* method){
	{
		Guid_t103  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m461_MethodInfo, Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m26706_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m26706 (GenericEqualityComparer_1_t2713 * __this, Guid_t103  ___x, Guid_t103  ___y, MethodInfo* method){
	{
		Guid_t103  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t103  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Guid_t103  >::Invoke(&IEquatable_1_Equals_m46764_MethodInfo, Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m12678_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m12678_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m12678/* method */
	, &GenericEqualityComparer_1_t2713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &GenericEqualityComparer_1__ctor_m12678_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2713_GenericEqualityComparer_1_GetHashCode_m26705_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m26705_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m26705_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m26705/* method */
	, &GenericEqualityComparer_1_t2713_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103/* invoker_method */
	, GenericEqualityComparer_1_t2713_GenericEqualityComparer_1_GetHashCode_m26705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m26705_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2713_GenericEqualityComparer_1_Equals_m26706_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m26706_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m26706_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m26706/* method */
	, &GenericEqualityComparer_1_t2713_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103/* invoker_method */
	, GenericEqualityComparer_1_t2713_GenericEqualityComparer_1_Equals_m26706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m26706_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t2713_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m12678_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m26705_MethodInfo,
	&GenericEqualityComparer_1_Equals_m26706_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t2713_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&GenericEqualityComparer_1_Equals_m26706_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m26705_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m26705_MethodInfo,
	&GenericEqualityComparer_1_Equals_m26706_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t9310_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t1571_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t2713_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t9310_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1571_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t2713_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2713_1_0_0;
extern TypeInfo EqualityComparer_1_t4905_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t2713;
extern Il2CppGenericClass GenericEqualityComparer_1_t2713_GenericClass;
TypeInfo GenericEqualityComparer_1_t2713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t2713_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t2713_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t2713_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t2713_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t2713_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t2713_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t2713_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t2713_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t2713)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.GenericEqualityComparer`1
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_55.h"
extern TypeInfo GenericEqualityComparer_1_t1862_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4906_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_55MethodDeclarations.h"
extern Il2CppType GenericEqualityComparer_1_t1862_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26712_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m46767_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m46768_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
 void EqualityComparer_1__ctor_m26707 (EqualityComparer_1_t4905 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m26708_MethodInfo;
 void EqualityComparer_1__cctor_m26708 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t4906 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4906 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t4906_il2cpp_TypeInfo));
	DefaultComparer__ctor_m26712(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m26712_MethodInfo);
	((EqualityComparer_1_t4905_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t4905_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709 (EqualityComparer_1_t4905 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t103  >::Invoke(&EqualityComparer_1_GetHashCode_m46767_MethodInfo, __this, ((*(Guid_t103 *)((Guid_t103 *)UnBox (___obj, InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710 (EqualityComparer_1_t4905 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, Guid_t103 , Guid_t103  >::Invoke(&EqualityComparer_1_Equals_m46768_MethodInfo, __this, ((*(Guid_t103 *)((Guid_t103 *)UnBox (___x, InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo))))), ((*(Guid_t103 *)((Guid_t103 *)UnBox (___y, InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m26711_MethodInfo;
 EqualityComparer_1_t4905 * EqualityComparer_1_get_Default_m26711 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t4905_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t4905_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t4905_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType EqualityComparer_1_t4905_0_0_49;
FieldInfo EqualityComparer_1_t4905_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t4905_0_0_49/* type */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t4905_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t4905_FieldInfos[] =
{
	&EqualityComparer_1_t4905_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t4905____Default_PropertyInfo = 
{
	&EqualityComparer_1_t4905_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m26711_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t4905_PropertyInfos[] =
{
	&EqualityComparer_1_t4905____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m26707_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
MethodInfo EqualityComparer_1__ctor_m26707_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m26707/* method */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &EqualityComparer_1__ctor_m26707_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m26708_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
MethodInfo EqualityComparer_1__cctor_m26708_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m26708/* method */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m26708_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t4905_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709/* method */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, EqualityComparer_1_t4905_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t4905_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710/* method */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t4905_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo EqualityComparer_1_t4905_EqualityComparer_1_GetHashCode_m46767_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m46767_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m46767_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103/* invoker_method */
	, EqualityComparer_1_t4905_EqualityComparer_1_GetHashCode_m46767_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m46767_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo EqualityComparer_1_t4905_EqualityComparer_1_Equals_m46768_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m46768_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m46768_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103/* invoker_method */
	, EqualityComparer_1_t4905_EqualityComparer_1_Equals_m46768_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m46768_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t4905_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m26711_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m26711_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m26711/* method */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t4905_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m26711_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t4905_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m26707_MethodInfo,
	&EqualityComparer_1__cctor_m26708_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_MethodInfo,
	&EqualityComparer_1_GetHashCode_m46767_MethodInfo,
	&EqualityComparer_1_Equals_m46768_MethodInfo,
	&EqualityComparer_1_get_Default_m26711_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t4905_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&EqualityComparer_1_Equals_m46768_MethodInfo,
	&EqualityComparer_1_GetHashCode_m46767_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t4905_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t9310_il2cpp_TypeInfo,
	&IEqualityComparer_t1571_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t4905_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t9310_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1571_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t4905_0_0_0;
extern Il2CppType EqualityComparer_1_t4905_1_0_0;
struct EqualityComparer_1_t4905;
extern Il2CppGenericClass EqualityComparer_1_t4905_GenericClass;
TypeInfo EqualityComparer_1_t4905_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t4905_MethodInfos/* methods */
	, EqualityComparer_1_t4905_PropertyInfos/* properties */
	, EqualityComparer_1_t4905_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t4905_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t4905_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t4905_0_0_0/* byval_arg */
	, &EqualityComparer_1_t4905_1_0_0/* this_arg */
	, EqualityComparer_1_t4905_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t4905_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t4905)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t4905_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo IEqualityComparer_1_t9310_IEqualityComparer_1_Equals_m46769_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m46769_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m46769_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t9310_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103/* invoker_method */
	, IEqualityComparer_1_t9310_IEqualityComparer_1_Equals_m46769_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m46769_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo IEqualityComparer_1_t9310_IEqualityComparer_1_GetHashCode_m46770_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m46770_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m46770_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t9310_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103/* invoker_method */
	, IEqualityComparer_1_t9310_IEqualityComparer_1_GetHashCode_m46770_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m46770_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t9310_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m46769_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m46770_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t9310_0_0_0;
extern Il2CppType IEqualityComparer_1_t9310_1_0_0;
struct IEqualityComparer_1_t9310;
extern Il2CppGenericClass IEqualityComparer_1_t9310_GenericClass;
TypeInfo IEqualityComparer_1_t9310_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t9310_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t9310_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t9310_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t9310_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t9310_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t9310_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
 void DefaultComparer__ctor_m26712 (DefaultComparer_t4906 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m26707(__this, /*hidden argument*/&EqualityComparer_1__ctor_m26707_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m26713_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m26713 (DefaultComparer_t4906 * __this, Guid_t103  ___obj, MethodInfo* method){
	{
		Guid_t103  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m461_MethodInfo, Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m26714_MethodInfo;
 bool DefaultComparer_Equals_m26714 (DefaultComparer_t4906 * __this, Guid_t103  ___x, Guid_t103  ___y, MethodInfo* method){
	{
		Guid_t103  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t103  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t103  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m460_MethodInfo, Box(InitializedTypeInfo(&Guid_t103_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m26712_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m26712_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m26712/* method */
	, &DefaultComparer_t4906_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &DefaultComparer__ctor_m26712_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo DefaultComparer_t4906_DefaultComparer_GetHashCode_m26713_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m26713_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m26713_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m26713/* method */
	, &DefaultComparer_t4906_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Guid_t103/* invoker_method */
	, DefaultComparer_t4906_DefaultComparer_GetHashCode_m26713_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m26713_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t103_0_0_0;
extern Il2CppType Guid_t103_0_0_0;
static ParameterInfo DefaultComparer_t4906_DefaultComparer_Equals_m26714_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t103_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m26714_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m26714_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m26714/* method */
	, &DefaultComparer_t4906_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Guid_t103_Guid_t103/* invoker_method */
	, DefaultComparer_t4906_DefaultComparer_Equals_m26714_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m26714_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t4906_MethodInfos[] =
{
	&DefaultComparer__ctor_m26712_MethodInfo,
	&DefaultComparer_GetHashCode_m26713_MethodInfo,
	&DefaultComparer_Equals_m26714_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t4906_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&DefaultComparer_Equals_m26714_MethodInfo,
	&DefaultComparer_GetHashCode_m26713_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26710_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26709_MethodInfo,
	&DefaultComparer_GetHashCode_m26713_MethodInfo,
	&DefaultComparer_Equals_m26714_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t4906_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t9310_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1571_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t4906_0_0_0;
extern Il2CppType DefaultComparer_t4906_1_0_0;
struct DefaultComparer_t4906;
extern Il2CppGenericClass DefaultComparer_t4906_GenericClass;
extern TypeInfo EqualityComparer_1_t1861_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t4906_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t4906_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t4905_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t1861_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t4906_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t4906_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t4906_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t4906_0_0_0/* byval_arg */
	, &DefaultComparer_t4906_1_0_0/* this_arg */
	, DefaultComparer_t4906_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t4906_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t4906)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6979_il2cpp_TypeInfo;

// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimization.h"


// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo IEnumerator_1_get_Current_m46771_MethodInfo;
static PropertyInfo IEnumerator_1_t6979____Current_PropertyInfo = 
{
	&IEnumerator_1_t6979_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46771_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6979_PropertyInfos[] =
{
	&IEnumerator_1_t6979____Current_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t2267_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t2267 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46771_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46771_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6979_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t2267_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t2267/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46771_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6979_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46771_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6979_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6979_0_0_0;
extern Il2CppType IEnumerator_1_t6979_1_0_0;
struct IEnumerator_1_t6979;
extern Il2CppGenericClass IEnumerator_1_t6979_GenericClass;
TypeInfo IEnumerator_1_t6979_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6979_MethodInfos/* methods */
	, IEnumerator_1_t6979_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6979_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6979_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6979_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6979_0_0_0/* byval_arg */
	, &IEnumerator_1_t6979_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6979_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.LoaderOptimization>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_736.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4907_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.LoaderOptimization>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_736MethodDeclarations.h"

extern TypeInfo LoaderOptimization_t2267_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26719_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoaderOptimization_t2267_m35973_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoaderOptimization_t2267_m35973 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26715_MethodInfo;
 void InternalEnumerator_1__ctor_m26715 (InternalEnumerator_1_t4907 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716 (InternalEnumerator_1_t4907 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26719(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26719_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoaderOptimization_t2267_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26717_MethodInfo;
 void InternalEnumerator_1_Dispose_m26717 (InternalEnumerator_1_t4907 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26718_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26718 (InternalEnumerator_1_t4907 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26719 (InternalEnumerator_1_t4907 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLoaderOptimization_t2267_m35973(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoaderOptimization_t2267_m35973_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4907____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4907, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4907____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4907, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4907_FieldInfos[] =
{
	&InternalEnumerator_1_t4907____array_0_FieldInfo,
	&InternalEnumerator_1_t4907____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4907____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4907_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4907____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4907_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26719_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4907_PropertyInfos[] =
{
	&InternalEnumerator_1_t4907____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4907____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4907_InternalEnumerator_1__ctor_m26715_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26715_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26715_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26715/* method */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4907_InternalEnumerator_1__ctor_m26715_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26715_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716/* method */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26717_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26717_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26717/* method */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26717_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26718_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26718_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26718/* method */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26718_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2267_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t2267 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26719_GenericMethod;
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26719_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26719/* method */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t2267_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t2267/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26719_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4907_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26715_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716_MethodInfo,
	&InternalEnumerator_1_Dispose_m26717_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26718_MethodInfo,
	&InternalEnumerator_1_get_Current_m26719_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4907_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26716_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26718_MethodInfo,
	&InternalEnumerator_1_Dispose_m26717_MethodInfo,
	&InternalEnumerator_1_get_Current_m26719_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4907_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6979_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4907_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6979_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4907_0_0_0;
extern Il2CppType InternalEnumerator_1_t4907_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4907_GenericClass;
TypeInfo InternalEnumerator_1_t4907_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4907_MethodInfos/* methods */
	, InternalEnumerator_1_t4907_PropertyInfos/* properties */
	, InternalEnumerator_1_t4907_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4907_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4907_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4907_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4907_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4907_1_0_0/* this_arg */
	, InternalEnumerator_1_t4907_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4907_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4907)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9075_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo ICollection_1_get_Count_m46772_MethodInfo;
static PropertyInfo ICollection_1_t9075____Count_PropertyInfo = 
{
	&ICollection_1_t9075_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46772_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46773_MethodInfo;
static PropertyInfo ICollection_1_t9075____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9075_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46773_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9075_PropertyInfos[] =
{
	&ICollection_1_t9075____Count_PropertyInfo,
	&ICollection_1_t9075____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46772_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
MethodInfo ICollection_1_get_Count_m46772_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46772_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46773_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46773_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46773_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2267_0_0_0;
extern Il2CppType LoaderOptimization_t2267_0_0_0;
static ParameterInfo ICollection_1_t9075_ICollection_1_Add_m46774_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2267_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46774_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
MethodInfo ICollection_1_Add_m46774_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9075_ICollection_1_Add_m46774_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46774_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46775_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
MethodInfo ICollection_1_Clear_m46775_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46775_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2267_0_0_0;
static ParameterInfo ICollection_1_t9075_ICollection_1_Contains_m46776_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2267_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46776_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
MethodInfo ICollection_1_Contains_m46776_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9075_ICollection_1_Contains_m46776_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46776_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimizationU5BU5D_t5137_0_0_0;
extern Il2CppType LoaderOptimizationU5BU5D_t5137_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9075_ICollection_1_CopyTo_m46777_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimizationU5BU5D_t5137_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46777_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46777_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9075_ICollection_1_CopyTo_m46777_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46777_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t2267_0_0_0;
static ParameterInfo ICollection_1_t9075_ICollection_1_Remove_m46778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2267_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46778_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
MethodInfo ICollection_1_Remove_m46778_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9075_ICollection_1_Remove_m46778_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46778_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9075_MethodInfos[] =
{
	&ICollection_1_get_Count_m46772_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46773_MethodInfo,
	&ICollection_1_Add_m46774_MethodInfo,
	&ICollection_1_Clear_m46775_MethodInfo,
	&ICollection_1_Contains_m46776_MethodInfo,
	&ICollection_1_CopyTo_m46777_MethodInfo,
	&ICollection_1_Remove_m46778_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9077_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9075_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9077_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9075_0_0_0;
extern Il2CppType ICollection_1_t9075_1_0_0;
struct ICollection_1_t9075;
extern Il2CppGenericClass ICollection_1_t9075_GenericClass;
TypeInfo ICollection_1_t9075_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9075_MethodInfos/* methods */
	, ICollection_1_t9075_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9075_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9075_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9075_0_0_0/* byval_arg */
	, &ICollection_1_t9075_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9075_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern Il2CppType IEnumerator_1_t6979_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46779_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46779_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9077_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6979_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46779_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9077_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46779_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9077_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9077_0_0_0;
extern Il2CppType IEnumerable_1_t9077_1_0_0;
struct IEnumerable_1_t9077;
extern Il2CppGenericClass IEnumerable_1_t9077_GenericClass;
TypeInfo IEnumerable_1_t9077_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9077_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9077_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9077_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9077_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9077_0_0_0/* byval_arg */
	, &IEnumerable_1_t9077_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9077_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9076_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo IList_1_get_Item_m46780_MethodInfo;
extern MethodInfo IList_1_set_Item_m46781_MethodInfo;
static PropertyInfo IList_1_t9076____Item_PropertyInfo = 
{
	&IList_1_t9076_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46780_MethodInfo/* get */
	, &IList_1_set_Item_m46781_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9076_PropertyInfos[] =
{
	&IList_1_t9076____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t2267_0_0_0;
static ParameterInfo IList_1_t9076_IList_1_IndexOf_m46782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2267_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46782_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46782_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9076_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9076_IList_1_IndexOf_m46782_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46782_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType LoaderOptimization_t2267_0_0_0;
static ParameterInfo IList_1_t9076_IList_1_Insert_m46783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2267_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46783_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46783_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9076_IList_1_Insert_m46783_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46783_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9076_IList_1_RemoveAt_m46784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46784_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46784_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9076_IList_1_RemoveAt_m46784_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46784_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9076_IList_1_get_Item_m46780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType LoaderOptimization_t2267_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t2267_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46780_GenericMethod;
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46780_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9076_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t2267_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t2267_Int32_t63/* invoker_method */
	, IList_1_t9076_IList_1_get_Item_m46780_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46780_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType LoaderOptimization_t2267_0_0_0;
static ParameterInfo IList_1_t9076_IList_1_set_Item_m46781_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t2267_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46781_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46781_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9076_IList_1_set_Item_m46781_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46781_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9076_MethodInfos[] =
{
	&IList_1_IndexOf_m46782_MethodInfo,
	&IList_1_Insert_m46783_MethodInfo,
	&IList_1_RemoveAt_m46784_MethodInfo,
	&IList_1_get_Item_m46780_MethodInfo,
	&IList_1_set_Item_m46781_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9076_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9075_il2cpp_TypeInfo,
	&IEnumerable_1_t9077_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9076_0_0_0;
extern Il2CppType IList_1_t9076_1_0_0;
struct IList_1_t9076;
extern Il2CppGenericClass IList_1_t9076_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9076_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9076_MethodInfos/* methods */
	, IList_1_t9076_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9076_il2cpp_TypeInfo/* element_class */
	, IList_1_t9076_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9076_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9076_0_0_0/* byval_arg */
	, &IList_1_t9076_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9076_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6981_il2cpp_TypeInfo;

// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46785_MethodInfo;
static PropertyInfo IEnumerator_1_t6981____Current_PropertyInfo = 
{
	&IEnumerator_1_t6981_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6981_PropertyInfos[] =
{
	&IEnumerator_1_t6981____Current_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46785_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46785_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6981_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t2281_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46785_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6981_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46785_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6981_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6981_0_0_0;
extern Il2CppType IEnumerator_1_t6981_1_0_0;
struct IEnumerator_1_t6981;
extern Il2CppGenericClass IEnumerator_1_t6981_GenericClass;
TypeInfo IEnumerator_1_t6981_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6981_MethodInfos/* methods */
	, IEnumerator_1_t6981_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6981_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6981_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6981_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6981_0_0_0/* byval_arg */
	, &IEnumerator_1_t6981_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6981_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_737.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4908_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_737MethodDeclarations.h"

extern TypeInfo NonSerializedAttribute_t2281_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26724_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNonSerializedAttribute_t2281_m35984_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26773_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26773(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNonSerializedAttribute_t2281_m35984(__this, p0, method) (NonSerializedAttribute_t2281 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4908____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4908, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4908____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4908, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4908_FieldInfos[] =
{
	&InternalEnumerator_1_t4908____array_0_FieldInfo,
	&InternalEnumerator_1_t4908____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26721_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4908____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4908_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4908____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4908_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26724_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4908_PropertyInfos[] =
{
	&InternalEnumerator_1_t4908____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4908____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4908_InternalEnumerator_1__ctor_m26720_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26720_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26720_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4908_InternalEnumerator_1__ctor_m26720_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26720_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26721_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26721_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26721_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26722_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26722_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26722_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26723_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26723_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26723_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26724_GenericMethod;
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26724_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t2281_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26724_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4908_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26720_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26721_MethodInfo,
	&InternalEnumerator_1_Dispose_m26722_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26723_MethodInfo,
	&InternalEnumerator_1_get_Current_m26724_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26723_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26722_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4908_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26721_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26723_MethodInfo,
	&InternalEnumerator_1_Dispose_m26722_MethodInfo,
	&InternalEnumerator_1_get_Current_m26724_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4908_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6981_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4908_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6981_il2cpp_TypeInfo, 7},
};
extern TypeInfo NonSerializedAttribute_t2281_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4908_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26724_MethodInfo/* Method Usage */,
	&NonSerializedAttribute_t2281_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisNonSerializedAttribute_t2281_m35984_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4908_0_0_0;
extern Il2CppType InternalEnumerator_1_t4908_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4908_GenericClass;
TypeInfo InternalEnumerator_1_t4908_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4908_MethodInfos/* methods */
	, InternalEnumerator_1_t4908_PropertyInfos/* properties */
	, InternalEnumerator_1_t4908_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4908_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4908_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4908_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4908_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4908_1_0_0/* this_arg */
	, InternalEnumerator_1_t4908_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4908_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4908_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4908)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9078_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo ICollection_1_get_Count_m46786_MethodInfo;
static PropertyInfo ICollection_1_t9078____Count_PropertyInfo = 
{
	&ICollection_1_t9078_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46786_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46787_MethodInfo;
static PropertyInfo ICollection_1_t9078____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9078_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46787_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9078_PropertyInfos[] =
{
	&ICollection_1_t9078____Count_PropertyInfo,
	&ICollection_1_t9078____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46786_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46786_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46786_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46787_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46787_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46787_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
static ParameterInfo ICollection_1_t9078_ICollection_1_Add_m46788_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2281_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46788_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46788_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t9078_ICollection_1_Add_m46788_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46788_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46789_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46789_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46789_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
static ParameterInfo ICollection_1_t9078_ICollection_1_Contains_m46790_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2281_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46790_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46790_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9078_ICollection_1_Contains_m46790_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46790_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttributeU5BU5D_t5138_0_0_0;
extern Il2CppType NonSerializedAttributeU5BU5D_t5138_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9078_ICollection_1_CopyTo_m46791_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttributeU5BU5D_t5138_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46791_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46791_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9078_ICollection_1_CopyTo_m46791_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46791_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
static ParameterInfo ICollection_1_t9078_ICollection_1_Remove_m46792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2281_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46792_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46792_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9078_ICollection_1_Remove_m46792_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46792_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9078_MethodInfos[] =
{
	&ICollection_1_get_Count_m46786_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46787_MethodInfo,
	&ICollection_1_Add_m46788_MethodInfo,
	&ICollection_1_Clear_m46789_MethodInfo,
	&ICollection_1_Contains_m46790_MethodInfo,
	&ICollection_1_CopyTo_m46791_MethodInfo,
	&ICollection_1_Remove_m46792_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9080_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9078_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9080_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9078_0_0_0;
extern Il2CppType ICollection_1_t9078_1_0_0;
struct ICollection_1_t9078;
extern Il2CppGenericClass ICollection_1_t9078_GenericClass;
TypeInfo ICollection_1_t9078_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9078_MethodInfos/* methods */
	, ICollection_1_t9078_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9078_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9078_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9078_0_0_0/* byval_arg */
	, &ICollection_1_t9078_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9078_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern Il2CppType IEnumerator_1_t6981_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46793_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46793_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9080_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6981_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46793_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9080_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46793_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9080_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9080_0_0_0;
extern Il2CppType IEnumerable_1_t9080_1_0_0;
struct IEnumerable_1_t9080;
extern Il2CppGenericClass IEnumerable_1_t9080_GenericClass;
TypeInfo IEnumerable_1_t9080_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9080_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9080_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9080_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9080_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9080_0_0_0/* byval_arg */
	, &IEnumerable_1_t9080_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9080_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9079_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo IList_1_get_Item_m46794_MethodInfo;
extern MethodInfo IList_1_set_Item_m46795_MethodInfo;
static PropertyInfo IList_1_t9079____Item_PropertyInfo = 
{
	&IList_1_t9079_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46794_MethodInfo/* get */
	, &IList_1_set_Item_m46795_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9079_PropertyInfos[] =
{
	&IList_1_t9079____Item_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
static ParameterInfo IList_1_t9079_IList_1_IndexOf_m46796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2281_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46796_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46796_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9079_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9079_IList_1_IndexOf_m46796_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46796_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
static ParameterInfo IList_1_t9079_IList_1_Insert_m46797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2281_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46797_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46797_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9079_IList_1_Insert_m46797_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46797_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9079_IList_1_RemoveAt_m46798_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46798_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46798_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9079_IList_1_RemoveAt_m46798_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46798_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9079_IList_1_get_Item_m46794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46794_GenericMethod;
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46794_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9079_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t2281_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t9079_IList_1_get_Item_m46794_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46794_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType NonSerializedAttribute_t2281_0_0_0;
static ParameterInfo IList_1_t9079_IList_1_set_Item_m46795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t2281_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46795_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46795_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9079_IList_1_set_Item_m46795_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46795_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9079_MethodInfos[] =
{
	&IList_1_IndexOf_m46796_MethodInfo,
	&IList_1_Insert_m46797_MethodInfo,
	&IList_1_RemoveAt_m46798_MethodInfo,
	&IList_1_get_Item_m46794_MethodInfo,
	&IList_1_set_Item_m46795_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9079_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9078_il2cpp_TypeInfo,
	&IEnumerable_1_t9080_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9079_0_0_0;
extern Il2CppType IList_1_t9079_1_0_0;
struct IList_1_t9079;
extern Il2CppGenericClass IList_1_t9079_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9079_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9079_MethodInfos/* methods */
	, IList_1_t9079_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9079_il2cpp_TypeInfo/* element_class */
	, IList_1_t9079_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9079_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9079_0_0_0/* byval_arg */
	, &IList_1_t9079_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9079_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6983_il2cpp_TypeInfo;

// System.PlatformID
#include "mscorlib_System_PlatformID.h"


// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo IEnumerator_1_get_Current_m46799_MethodInfo;
static PropertyInfo IEnumerator_1_t6983____Current_PropertyInfo = 
{
	&IEnumerator_1_t6983_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46799_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6983_PropertyInfos[] =
{
	&IEnumerator_1_t6983____Current_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t2286_0_0_0;
extern void* RuntimeInvoker_PlatformID_t2286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46799_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46799_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6983_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t2286_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t2286/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46799_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6983_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46799_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6983_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6983_0_0_0;
extern Il2CppType IEnumerator_1_t6983_1_0_0;
struct IEnumerator_1_t6983;
extern Il2CppGenericClass IEnumerator_1_t6983_GenericClass;
TypeInfo IEnumerator_1_t6983_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6983_MethodInfos/* methods */
	, IEnumerator_1_t6983_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6983_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6983_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6983_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6983_0_0_0/* byval_arg */
	, &IEnumerator_1_t6983_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6983_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.PlatformID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_738.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4909_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.PlatformID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_738MethodDeclarations.h"

extern TypeInfo PlatformID_t2286_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26729_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPlatformID_t2286_m35995_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPlatformID_t2286_m35995 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26725_MethodInfo;
 void InternalEnumerator_1__ctor_m26725 (InternalEnumerator_1_t4909 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726 (InternalEnumerator_1_t4909 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26729(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26729_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PlatformID_t2286_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26727_MethodInfo;
 void InternalEnumerator_1_Dispose_m26727 (InternalEnumerator_1_t4909 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26728_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26728 (InternalEnumerator_1_t4909 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26729 (InternalEnumerator_1_t4909 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPlatformID_t2286_m35995(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPlatformID_t2286_m35995_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4909____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4909, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4909____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4909, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4909_FieldInfos[] =
{
	&InternalEnumerator_1_t4909____array_0_FieldInfo,
	&InternalEnumerator_1_t4909____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4909____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4909_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4909____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4909_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4909_PropertyInfos[] =
{
	&InternalEnumerator_1_t4909____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4909____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4909_InternalEnumerator_1__ctor_m26725_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26725_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26725_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26725/* method */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4909_InternalEnumerator_1__ctor_m26725_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26725_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726/* method */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26727_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26727_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26727/* method */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26727_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26728_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26728_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26728/* method */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26728_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2286_0_0_0;
extern void* RuntimeInvoker_PlatformID_t2286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26729_GenericMethod;
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26729_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26729/* method */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t2286_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t2286/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26729_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4909_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26725_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726_MethodInfo,
	&InternalEnumerator_1_Dispose_m26727_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26728_MethodInfo,
	&InternalEnumerator_1_get_Current_m26729_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4909_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26726_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26728_MethodInfo,
	&InternalEnumerator_1_Dispose_m26727_MethodInfo,
	&InternalEnumerator_1_get_Current_m26729_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4909_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6983_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4909_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6983_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4909_0_0_0;
extern Il2CppType InternalEnumerator_1_t4909_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4909_GenericClass;
TypeInfo InternalEnumerator_1_t4909_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4909_MethodInfos/* methods */
	, InternalEnumerator_1_t4909_PropertyInfos/* properties */
	, InternalEnumerator_1_t4909_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4909_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4909_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4909_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4909_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4909_1_0_0/* this_arg */
	, InternalEnumerator_1_t4909_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4909_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4909)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9081_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo ICollection_1_get_Count_m46800_MethodInfo;
static PropertyInfo ICollection_1_t9081____Count_PropertyInfo = 
{
	&ICollection_1_t9081_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46801_MethodInfo;
static PropertyInfo ICollection_1_t9081____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9081_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46801_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9081_PropertyInfos[] =
{
	&ICollection_1_t9081____Count_PropertyInfo,
	&ICollection_1_t9081____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46800_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
MethodInfo ICollection_1_get_Count_m46800_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46800_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46801_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46801_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46801_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2286_0_0_0;
extern Il2CppType PlatformID_t2286_0_0_0;
static ParameterInfo ICollection_1_t9081_ICollection_1_Add_m46802_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2286_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46802_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
MethodInfo ICollection_1_Add_m46802_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9081_ICollection_1_Add_m46802_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46802_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46803_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
MethodInfo ICollection_1_Clear_m46803_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46803_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2286_0_0_0;
static ParameterInfo ICollection_1_t9081_ICollection_1_Contains_m46804_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2286_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46804_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
MethodInfo ICollection_1_Contains_m46804_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9081_ICollection_1_Contains_m46804_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46804_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformIDU5BU5D_t5139_0_0_0;
extern Il2CppType PlatformIDU5BU5D_t5139_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9081_ICollection_1_CopyTo_m46805_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PlatformIDU5BU5D_t5139_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46805_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46805_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9081_ICollection_1_CopyTo_m46805_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46805_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t2286_0_0_0;
static ParameterInfo ICollection_1_t9081_ICollection_1_Remove_m46806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2286_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46806_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
MethodInfo ICollection_1_Remove_m46806_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9081_ICollection_1_Remove_m46806_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46806_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9081_MethodInfos[] =
{
	&ICollection_1_get_Count_m46800_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46801_MethodInfo,
	&ICollection_1_Add_m46802_MethodInfo,
	&ICollection_1_Clear_m46803_MethodInfo,
	&ICollection_1_Contains_m46804_MethodInfo,
	&ICollection_1_CopyTo_m46805_MethodInfo,
	&ICollection_1_Remove_m46806_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9083_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9081_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9083_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9081_0_0_0;
extern Il2CppType ICollection_1_t9081_1_0_0;
struct ICollection_1_t9081;
extern Il2CppGenericClass ICollection_1_t9081_GenericClass;
TypeInfo ICollection_1_t9081_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9081_MethodInfos/* methods */
	, ICollection_1_t9081_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9081_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9081_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9081_0_0_0/* byval_arg */
	, &ICollection_1_t9081_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9081_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern Il2CppType IEnumerator_1_t6983_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46807_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46807_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9083_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6983_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46807_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9083_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46807_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9083_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9083_0_0_0;
extern Il2CppType IEnumerable_1_t9083_1_0_0;
struct IEnumerable_1_t9083;
extern Il2CppGenericClass IEnumerable_1_t9083_GenericClass;
TypeInfo IEnumerable_1_t9083_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9083_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9083_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9083_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9083_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9083_0_0_0/* byval_arg */
	, &IEnumerable_1_t9083_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9083_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9082_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo IList_1_get_Item_m46808_MethodInfo;
extern MethodInfo IList_1_set_Item_m46809_MethodInfo;
static PropertyInfo IList_1_t9082____Item_PropertyInfo = 
{
	&IList_1_t9082_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46808_MethodInfo/* get */
	, &IList_1_set_Item_m46809_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9082_PropertyInfos[] =
{
	&IList_1_t9082____Item_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t2286_0_0_0;
static ParameterInfo IList_1_t9082_IList_1_IndexOf_m46810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2286_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46810_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46810_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9082_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9082_IList_1_IndexOf_m46810_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46810_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType PlatformID_t2286_0_0_0;
static ParameterInfo IList_1_t9082_IList_1_Insert_m46811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2286_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46811_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46811_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9082_IList_1_Insert_m46811_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46811_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9082_IList_1_RemoveAt_m46812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46812_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46812_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9082_IList_1_RemoveAt_m46812_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46812_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9082_IList_1_get_Item_m46808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType PlatformID_t2286_0_0_0;
extern void* RuntimeInvoker_PlatformID_t2286_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46808_GenericMethod;
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46808_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9082_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t2286_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t2286_Int32_t63/* invoker_method */
	, IList_1_t9082_IList_1_get_Item_m46808_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46808_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType PlatformID_t2286_0_0_0;
static ParameterInfo IList_1_t9082_IList_1_set_Item_m46809_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t2286_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46809_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46809_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9082_IList_1_set_Item_m46809_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46809_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9082_MethodInfos[] =
{
	&IList_1_IndexOf_m46810_MethodInfo,
	&IList_1_Insert_m46811_MethodInfo,
	&IList_1_RemoveAt_m46812_MethodInfo,
	&IList_1_get_Item_m46808_MethodInfo,
	&IList_1_set_Item_m46809_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9082_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9081_il2cpp_TypeInfo,
	&IEnumerable_1_t9083_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9082_0_0_0;
extern Il2CppType IList_1_t9082_1_0_0;
struct IList_1_t9082;
extern Il2CppGenericClass IList_1_t9082_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9082_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9082_MethodInfos/* methods */
	, IList_1_t9082_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9082_il2cpp_TypeInfo/* element_class */
	, IList_1_t9082_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9082_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9082_0_0_0/* byval_arg */
	, &IList_1_t9082_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9082_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6985_il2cpp_TypeInfo;

// System.StringComparison
#include "mscorlib_System_StringComparison.h"


// T System.Collections.Generic.IEnumerator`1<System.StringComparison>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringComparison>
extern MethodInfo IEnumerator_1_get_Current_m46813_MethodInfo;
static PropertyInfo IEnumerator_1_t6985____Current_PropertyInfo = 
{
	&IEnumerator_1_t6985_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46813_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6985_PropertyInfos[] =
{
	&IEnumerator_1_t6985____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringComparison_t304_0_0_0;
extern void* RuntimeInvoker_StringComparison_t304 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46813_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.StringComparison>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46813_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6985_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t304_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t304/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46813_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6985_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46813_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6985_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6985_0_0_0;
extern Il2CppType IEnumerator_1_t6985_1_0_0;
struct IEnumerator_1_t6985;
extern Il2CppGenericClass IEnumerator_1_t6985_GenericClass;
TypeInfo IEnumerator_1_t6985_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6985_MethodInfos/* methods */
	, IEnumerator_1_t6985_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6985_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6985_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6985_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6985_0_0_0/* byval_arg */
	, &IEnumerator_1_t6985_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.StringComparison>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_739.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4910_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.StringComparison>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_739MethodDeclarations.h"

extern TypeInfo StringComparison_t304_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26734_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringComparison_t304_m36006_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.StringComparison>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.StringComparison>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStringComparison_t304_m36006 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26730_MethodInfo;
 void InternalEnumerator_1__ctor_m26730 (InternalEnumerator_1_t4910 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.StringComparison>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731 (InternalEnumerator_1_t4910 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26734(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26734_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StringComparison_t304_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26732_MethodInfo;
 void InternalEnumerator_1_Dispose_m26732 (InternalEnumerator_1_t4910 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.StringComparison>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26733_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26733 (InternalEnumerator_1_t4910 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.StringComparison>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26734 (InternalEnumerator_1_t4910 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisStringComparison_t304_m36006(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStringComparison_t304_m36006_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringComparison>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4910____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4910, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4910____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4910, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4910_FieldInfos[] =
{
	&InternalEnumerator_1_t4910____array_0_FieldInfo,
	&InternalEnumerator_1_t4910____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4910____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4910_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4910____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4910_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26734_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4910_PropertyInfos[] =
{
	&InternalEnumerator_1_t4910____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4910____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4910_InternalEnumerator_1__ctor_m26730_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26730_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26730_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26730/* method */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4910_InternalEnumerator_1__ctor_m26730_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26730_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.StringComparison>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731/* method */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26732_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26732_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26732/* method */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26732_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26733_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.StringComparison>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26733_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26733/* method */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26733_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t304_0_0_0;
extern void* RuntimeInvoker_StringComparison_t304 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26734_GenericMethod;
// T System.Array/InternalEnumerator`1<System.StringComparison>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26734_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26734/* method */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t304_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t304/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26734_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4910_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26730_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731_MethodInfo,
	&InternalEnumerator_1_Dispose_m26732_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26733_MethodInfo,
	&InternalEnumerator_1_get_Current_m26734_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4910_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26731_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26733_MethodInfo,
	&InternalEnumerator_1_Dispose_m26732_MethodInfo,
	&InternalEnumerator_1_get_Current_m26734_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4910_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6985_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4910_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6985_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4910_0_0_0;
extern Il2CppType InternalEnumerator_1_t4910_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4910_GenericClass;
TypeInfo InternalEnumerator_1_t4910_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4910_MethodInfos/* methods */
	, InternalEnumerator_1_t4910_PropertyInfos/* properties */
	, InternalEnumerator_1_t4910_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4910_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4910_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4910_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4910_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4910_1_0_0/* this_arg */
	, InternalEnumerator_1_t4910_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4910_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4910)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9084_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.StringComparison>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.StringComparison>
extern MethodInfo ICollection_1_get_Count_m46814_MethodInfo;
static PropertyInfo ICollection_1_t9084____Count_PropertyInfo = 
{
	&ICollection_1_t9084_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46814_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46815_MethodInfo;
static PropertyInfo ICollection_1_t9084____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9084_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46815_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9084_PropertyInfos[] =
{
	&ICollection_1_t9084____Count_PropertyInfo,
	&ICollection_1_t9084____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46814_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.StringComparison>::get_Count()
MethodInfo ICollection_1_get_Count_m46814_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46814_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46815_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46815_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46815_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t304_0_0_0;
extern Il2CppType StringComparison_t304_0_0_0;
static ParameterInfo ICollection_1_t9084_ICollection_1_Add_m46816_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t304_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46816_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Add(T)
MethodInfo ICollection_1_Add_m46816_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9084_ICollection_1_Add_m46816_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46816_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46817_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Clear()
MethodInfo ICollection_1_Clear_m46817_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46817_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t304_0_0_0;
static ParameterInfo ICollection_1_t9084_ICollection_1_Contains_m46818_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t304_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46818_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Contains(T)
MethodInfo ICollection_1_Contains_m46818_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9084_ICollection_1_Contains_m46818_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46818_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparisonU5BU5D_t5140_0_0_0;
extern Il2CppType StringComparisonU5BU5D_t5140_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9084_ICollection_1_CopyTo_m46819_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringComparisonU5BU5D_t5140_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46819_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46819_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9084_ICollection_1_CopyTo_m46819_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46819_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t304_0_0_0;
static ParameterInfo ICollection_1_t9084_ICollection_1_Remove_m46820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t304_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46820_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Remove(T)
MethodInfo ICollection_1_Remove_m46820_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9084_ICollection_1_Remove_m46820_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46820_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9084_MethodInfos[] =
{
	&ICollection_1_get_Count_m46814_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46815_MethodInfo,
	&ICollection_1_Add_m46816_MethodInfo,
	&ICollection_1_Clear_m46817_MethodInfo,
	&ICollection_1_Contains_m46818_MethodInfo,
	&ICollection_1_CopyTo_m46819_MethodInfo,
	&ICollection_1_Remove_m46820_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9086_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9084_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9086_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9084_0_0_0;
extern Il2CppType ICollection_1_t9084_1_0_0;
struct ICollection_1_t9084;
extern Il2CppGenericClass ICollection_1_t9084_GenericClass;
TypeInfo ICollection_1_t9084_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9084_MethodInfos/* methods */
	, ICollection_1_t9084_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9084_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9084_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9084_0_0_0/* byval_arg */
	, &ICollection_1_t9084_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9084_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringComparison>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringComparison>
extern Il2CppType IEnumerator_1_t6985_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46821_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringComparison>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46821_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9086_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6985_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46821_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9086_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46821_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9086_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9086_0_0_0;
extern Il2CppType IEnumerable_1_t9086_1_0_0;
struct IEnumerable_1_t9086;
extern Il2CppGenericClass IEnumerable_1_t9086_GenericClass;
TypeInfo IEnumerable_1_t9086_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9086_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9086_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9086_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9086_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9086_0_0_0/* byval_arg */
	, &IEnumerable_1_t9086_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9086_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9085_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.StringComparison>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.StringComparison>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.StringComparison>
extern MethodInfo IList_1_get_Item_m46822_MethodInfo;
extern MethodInfo IList_1_set_Item_m46823_MethodInfo;
static PropertyInfo IList_1_t9085____Item_PropertyInfo = 
{
	&IList_1_t9085_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46822_MethodInfo/* get */
	, &IList_1_set_Item_m46823_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9085_PropertyInfos[] =
{
	&IList_1_t9085____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringComparison_t304_0_0_0;
static ParameterInfo IList_1_t9085_IList_1_IndexOf_m46824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t304_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46824_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.StringComparison>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46824_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9085_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9085_IList_1_IndexOf_m46824_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46824_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StringComparison_t304_0_0_0;
static ParameterInfo IList_1_t9085_IList_1_Insert_m46825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringComparison_t304_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46825_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46825_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9085_IList_1_Insert_m46825_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46825_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9085_IList_1_RemoveAt_m46826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46826_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46826_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9085_IList_1_RemoveAt_m46826_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46826_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9085_IList_1_get_Item_m46822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType StringComparison_t304_0_0_0;
extern void* RuntimeInvoker_StringComparison_t304_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46822_GenericMethod;
// T System.Collections.Generic.IList`1<System.StringComparison>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46822_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9085_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t304_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t304_Int32_t63/* invoker_method */
	, IList_1_t9085_IList_1_get_Item_m46822_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46822_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StringComparison_t304_0_0_0;
static ParameterInfo IList_1_t9085_IList_1_set_Item_m46823_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringComparison_t304_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46823_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46823_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9085_IList_1_set_Item_m46823_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46823_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9085_MethodInfos[] =
{
	&IList_1_IndexOf_m46824_MethodInfo,
	&IList_1_Insert_m46825_MethodInfo,
	&IList_1_RemoveAt_m46826_MethodInfo,
	&IList_1_get_Item_m46822_MethodInfo,
	&IList_1_set_Item_m46823_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9085_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9084_il2cpp_TypeInfo,
	&IEnumerable_1_t9086_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9085_0_0_0;
extern Il2CppType IList_1_t9085_1_0_0;
struct IList_1_t9085;
extern Il2CppGenericClass IList_1_t9085_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9085_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9085_MethodInfos/* methods */
	, IList_1_t9085_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9085_il2cpp_TypeInfo/* element_class */
	, IList_1_t9085_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9085_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9085_0_0_0/* byval_arg */
	, &IList_1_t9085_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9085_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6987_il2cpp_TypeInfo;

// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"


// T System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>
extern MethodInfo IEnumerator_1_get_Current_m46827_MethodInfo;
static PropertyInfo IEnumerator_1_t6987____Current_PropertyInfo = 
{
	&IEnumerator_1_t6987_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46827_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6987_PropertyInfos[] =
{
	&IEnumerator_1_t6987____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringSplitOptions_t2291_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t2291 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46827_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46827_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6987_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t2291_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t2291/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46827_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6987_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46827_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6987_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6987_0_0_0;
extern Il2CppType IEnumerator_1_t6987_1_0_0;
struct IEnumerator_1_t6987;
extern Il2CppGenericClass IEnumerator_1_t6987_GenericClass;
TypeInfo IEnumerator_1_t6987_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6987_MethodInfos/* methods */
	, IEnumerator_1_t6987_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6987_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6987_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6987_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6987_0_0_0/* byval_arg */
	, &IEnumerator_1_t6987_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6987_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.StringSplitOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4911_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.StringSplitOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_740MethodDeclarations.h"

extern TypeInfo StringSplitOptions_t2291_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26739_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringSplitOptions_t2291_m36017_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.StringSplitOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.StringSplitOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStringSplitOptions_t2291_m36017 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26735_MethodInfo;
 void InternalEnumerator_1__ctor_m26735 (InternalEnumerator_1_t4911 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.StringSplitOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736 (InternalEnumerator_1_t4911 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26739(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26739_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StringSplitOptions_t2291_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26737_MethodInfo;
 void InternalEnumerator_1_Dispose_m26737 (InternalEnumerator_1_t4911 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.StringSplitOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26738_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26738 (InternalEnumerator_1_t4911 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.StringSplitOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26739 (InternalEnumerator_1_t4911 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisStringSplitOptions_t2291_m36017(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStringSplitOptions_t2291_m36017_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringSplitOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4911____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4911, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4911____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4911, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4911_FieldInfos[] =
{
	&InternalEnumerator_1_t4911____array_0_FieldInfo,
	&InternalEnumerator_1_t4911____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4911____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4911_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4911____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4911_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26739_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4911_PropertyInfos[] =
{
	&InternalEnumerator_1_t4911____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4911____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4911_InternalEnumerator_1__ctor_m26735_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26735_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26735_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26735/* method */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4911_InternalEnumerator_1__ctor_m26735_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26735_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.StringSplitOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736/* method */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26737_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26737_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26737/* method */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26737_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26738_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.StringSplitOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26738_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26738/* method */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26738_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2291_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t2291 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26739_GenericMethod;
// T System.Array/InternalEnumerator`1<System.StringSplitOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26739_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26739/* method */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t2291_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t2291/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26739_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4911_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26735_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736_MethodInfo,
	&InternalEnumerator_1_Dispose_m26737_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26738_MethodInfo,
	&InternalEnumerator_1_get_Current_m26739_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4911_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26736_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26738_MethodInfo,
	&InternalEnumerator_1_Dispose_m26737_MethodInfo,
	&InternalEnumerator_1_get_Current_m26739_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4911_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6987_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4911_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6987_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4911_0_0_0;
extern Il2CppType InternalEnumerator_1_t4911_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4911_GenericClass;
TypeInfo InternalEnumerator_1_t4911_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4911_MethodInfos/* methods */
	, InternalEnumerator_1_t4911_PropertyInfos/* properties */
	, InternalEnumerator_1_t4911_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4911_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4911_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4911_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4911_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4911_1_0_0/* this_arg */
	, InternalEnumerator_1_t4911_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4911_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4911)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9087_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.StringSplitOptions>
extern MethodInfo ICollection_1_get_Count_m46828_MethodInfo;
static PropertyInfo ICollection_1_t9087____Count_PropertyInfo = 
{
	&ICollection_1_t9087_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46828_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46829_MethodInfo;
static PropertyInfo ICollection_1_t9087____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9087_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46829_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9087_PropertyInfos[] =
{
	&ICollection_1_t9087____Count_PropertyInfo,
	&ICollection_1_t9087____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46828_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m46828_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46828_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46829_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46829_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46829_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2291_0_0_0;
extern Il2CppType StringSplitOptions_t2291_0_0_0;
static ParameterInfo ICollection_1_t9087_ICollection_1_Add_m46830_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2291_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46830_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Add(T)
MethodInfo ICollection_1_Add_m46830_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9087_ICollection_1_Add_m46830_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46830_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46831_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Clear()
MethodInfo ICollection_1_Clear_m46831_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46831_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2291_0_0_0;
static ParameterInfo ICollection_1_t9087_ICollection_1_Contains_m46832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2291_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46832_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m46832_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9087_ICollection_1_Contains_m46832_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46832_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptionsU5BU5D_t5141_0_0_0;
extern Il2CppType StringSplitOptionsU5BU5D_t5141_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9087_ICollection_1_CopyTo_m46833_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptionsU5BU5D_t5141_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46833_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46833_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9087_ICollection_1_CopyTo_m46833_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46833_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t2291_0_0_0;
static ParameterInfo ICollection_1_t9087_ICollection_1_Remove_m46834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2291_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46834_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m46834_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9087_ICollection_1_Remove_m46834_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46834_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9087_MethodInfos[] =
{
	&ICollection_1_get_Count_m46828_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46829_MethodInfo,
	&ICollection_1_Add_m46830_MethodInfo,
	&ICollection_1_Clear_m46831_MethodInfo,
	&ICollection_1_Contains_m46832_MethodInfo,
	&ICollection_1_CopyTo_m46833_MethodInfo,
	&ICollection_1_Remove_m46834_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9089_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9087_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9089_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9087_0_0_0;
extern Il2CppType ICollection_1_t9087_1_0_0;
struct ICollection_1_t9087;
extern Il2CppGenericClass ICollection_1_t9087_GenericClass;
TypeInfo ICollection_1_t9087_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9087_MethodInfos/* methods */
	, ICollection_1_t9087_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9087_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9087_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9087_0_0_0/* byval_arg */
	, &ICollection_1_t9087_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9087_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>
extern Il2CppType IEnumerator_1_t6987_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46835_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46835_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9089_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6987_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46835_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9089_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46835_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9089_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9089_0_0_0;
extern Il2CppType IEnumerable_1_t9089_1_0_0;
struct IEnumerable_1_t9089;
extern Il2CppGenericClass IEnumerable_1_t9089_GenericClass;
TypeInfo IEnumerable_1_t9089_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9089_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9089_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9089_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9089_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9089_0_0_0/* byval_arg */
	, &IEnumerable_1_t9089_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9089_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9088_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.StringSplitOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.StringSplitOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.StringSplitOptions>
extern MethodInfo IList_1_get_Item_m46836_MethodInfo;
extern MethodInfo IList_1_set_Item_m46837_MethodInfo;
static PropertyInfo IList_1_t9088____Item_PropertyInfo = 
{
	&IList_1_t9088_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46836_MethodInfo/* get */
	, &IList_1_set_Item_m46837_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9088_PropertyInfos[] =
{
	&IList_1_t9088____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringSplitOptions_t2291_0_0_0;
static ParameterInfo IList_1_t9088_IList_1_IndexOf_m46838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2291_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46838_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.StringSplitOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46838_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9088_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9088_IList_1_IndexOf_m46838_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46838_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StringSplitOptions_t2291_0_0_0;
static ParameterInfo IList_1_t9088_IList_1_Insert_m46839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2291_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46839_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46839_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9088_IList_1_Insert_m46839_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46839_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9088_IList_1_RemoveAt_m46840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46840_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46840_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9088_IList_1_RemoveAt_m46840_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46840_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9088_IList_1_get_Item_m46836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType StringSplitOptions_t2291_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t2291_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46836_GenericMethod;
// T System.Collections.Generic.IList`1<System.StringSplitOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46836_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9088_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t2291_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t2291_Int32_t63/* invoker_method */
	, IList_1_t9088_IList_1_get_Item_m46836_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46836_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StringSplitOptions_t2291_0_0_0;
static ParameterInfo IList_1_t9088_IList_1_set_Item_m46837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t2291_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46837_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46837_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9088_IList_1_set_Item_m46837_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46837_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9088_MethodInfos[] =
{
	&IList_1_IndexOf_m46838_MethodInfo,
	&IList_1_Insert_m46839_MethodInfo,
	&IList_1_RemoveAt_m46840_MethodInfo,
	&IList_1_get_Item_m46836_MethodInfo,
	&IList_1_set_Item_m46837_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9088_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9087_il2cpp_TypeInfo,
	&IEnumerable_1_t9089_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9088_0_0_0;
extern Il2CppType IList_1_t9088_1_0_0;
struct IList_1_t9088;
extern Il2CppGenericClass IList_1_t9088_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9088_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9088_MethodInfos/* methods */
	, IList_1_t9088_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9088_il2cpp_TypeInfo/* element_class */
	, IList_1_t9088_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9088_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9088_0_0_0/* byval_arg */
	, &IList_1_t9088_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9088_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6989_il2cpp_TypeInfo;

// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46841_MethodInfo;
static PropertyInfo IEnumerator_1_t6989____Current_PropertyInfo = 
{
	&IEnumerator_1_t6989_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46841_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6989_PropertyInfos[] =
{
	&IEnumerator_1_t6989____Current_PropertyInfo,
	NULL
};
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46841_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46841_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6989_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t2292_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46841_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6989_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46841_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6989_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6989_0_0_0;
extern Il2CppType IEnumerator_1_t6989_1_0_0;
struct IEnumerator_1_t6989;
extern Il2CppGenericClass IEnumerator_1_t6989_GenericClass;
TypeInfo IEnumerator_1_t6989_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6989_MethodInfos/* methods */
	, IEnumerator_1_t6989_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6989_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6989_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6989_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6989_0_0_0/* byval_arg */
	, &IEnumerator_1_t6989_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6989_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4912_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_741MethodDeclarations.h"

extern TypeInfo ThreadStaticAttribute_t2292_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26744_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisThreadStaticAttribute_t2292_m36028_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ThreadStaticAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ThreadStaticAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisThreadStaticAttribute_t2292_m36028(__this, p0, method) (ThreadStaticAttribute_t2292 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4912____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4912, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4912____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4912, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4912_FieldInfos[] =
{
	&InternalEnumerator_1_t4912____array_0_FieldInfo,
	&InternalEnumerator_1_t4912____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26741_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4912____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4912_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26741_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4912____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4912_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26744_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4912_PropertyInfos[] =
{
	&InternalEnumerator_1_t4912____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4912____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4912_InternalEnumerator_1__ctor_m26740_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26740_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26740_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4912_InternalEnumerator_1__ctor_m26740_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26740_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26741_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26741_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26741_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26742_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26742_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26742_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26743_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26743_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26743_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26744_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26744_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t2292_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26744_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4912_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26740_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26741_MethodInfo,
	&InternalEnumerator_1_Dispose_m26742_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26743_MethodInfo,
	&InternalEnumerator_1_get_Current_m26744_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26743_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26742_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4912_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26741_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26743_MethodInfo,
	&InternalEnumerator_1_Dispose_m26742_MethodInfo,
	&InternalEnumerator_1_get_Current_m26744_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4912_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6989_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4912_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6989_il2cpp_TypeInfo, 7},
};
extern TypeInfo ThreadStaticAttribute_t2292_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4912_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26744_MethodInfo/* Method Usage */,
	&ThreadStaticAttribute_t2292_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisThreadStaticAttribute_t2292_m36028_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4912_0_0_0;
extern Il2CppType InternalEnumerator_1_t4912_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4912_GenericClass;
TypeInfo InternalEnumerator_1_t4912_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4912_MethodInfos/* methods */
	, InternalEnumerator_1_t4912_PropertyInfos/* properties */
	, InternalEnumerator_1_t4912_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4912_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4912_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4912_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4912_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4912_1_0_0/* this_arg */
	, InternalEnumerator_1_t4912_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4912_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4912_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4912)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9090_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>
extern MethodInfo ICollection_1_get_Count_m46842_MethodInfo;
static PropertyInfo ICollection_1_t9090____Count_PropertyInfo = 
{
	&ICollection_1_t9090_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46842_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46843_MethodInfo;
static PropertyInfo ICollection_1_t9090____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9090_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46843_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9090_PropertyInfos[] =
{
	&ICollection_1_t9090____Count_PropertyInfo,
	&ICollection_1_t9090____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46842_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46842_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46842_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46843_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46843_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46843_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
static ParameterInfo ICollection_1_t9090_ICollection_1_Add_m46844_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2292_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46844_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46844_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t9090_ICollection_1_Add_m46844_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46844_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46845_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46845_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46845_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
static ParameterInfo ICollection_1_t9090_ICollection_1_Contains_m46846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2292_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46846_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46846_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9090_ICollection_1_Contains_m46846_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46846_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttributeU5BU5D_t5142_0_0_0;
extern Il2CppType ThreadStaticAttributeU5BU5D_t5142_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9090_ICollection_1_CopyTo_m46847_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttributeU5BU5D_t5142_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46847_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46847_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9090_ICollection_1_CopyTo_m46847_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46847_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
static ParameterInfo ICollection_1_t9090_ICollection_1_Remove_m46848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2292_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46848_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46848_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9090_ICollection_1_Remove_m46848_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46848_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9090_MethodInfos[] =
{
	&ICollection_1_get_Count_m46842_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46843_MethodInfo,
	&ICollection_1_Add_m46844_MethodInfo,
	&ICollection_1_Clear_m46845_MethodInfo,
	&ICollection_1_Contains_m46846_MethodInfo,
	&ICollection_1_CopyTo_m46847_MethodInfo,
	&ICollection_1_Remove_m46848_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9092_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9090_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9092_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9090_0_0_0;
extern Il2CppType ICollection_1_t9090_1_0_0;
struct ICollection_1_t9090;
extern Il2CppGenericClass ICollection_1_t9090_GenericClass;
TypeInfo ICollection_1_t9090_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9090_MethodInfos/* methods */
	, ICollection_1_t9090_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9090_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9090_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9090_0_0_0/* byval_arg */
	, &ICollection_1_t9090_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9090_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>
extern Il2CppType IEnumerator_1_t6989_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46849_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46849_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9092_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6989_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46849_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9092_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46849_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9092_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9092_0_0_0;
extern Il2CppType IEnumerable_1_t9092_1_0_0;
struct IEnumerable_1_t9092;
extern Il2CppGenericClass IEnumerable_1_t9092_GenericClass;
TypeInfo IEnumerable_1_t9092_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9092_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9092_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9092_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9092_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9092_0_0_0/* byval_arg */
	, &IEnumerable_1_t9092_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9092_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9091_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ThreadStaticAttribute>
extern MethodInfo IList_1_get_Item_m46850_MethodInfo;
extern MethodInfo IList_1_set_Item_m46851_MethodInfo;
static PropertyInfo IList_1_t9091____Item_PropertyInfo = 
{
	&IList_1_t9091_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46850_MethodInfo/* get */
	, &IList_1_set_Item_m46851_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9091_PropertyInfos[] =
{
	&IList_1_t9091____Item_PropertyInfo,
	NULL
};
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
static ParameterInfo IList_1_t9091_IList_1_IndexOf_m46852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2292_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46852_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46852_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9091_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9091_IList_1_IndexOf_m46852_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46852_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
static ParameterInfo IList_1_t9091_IList_1_Insert_m46853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2292_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46853_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46853_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9091_IList_1_Insert_m46853_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46853_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9091_IList_1_RemoveAt_m46854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46854_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46854_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9091_IList_1_RemoveAt_m46854_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46854_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9091_IList_1_get_Item_m46850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46850_GenericMethod;
// T System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46850_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9091_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t2292_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t9091_IList_1_get_Item_m46850_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46850_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ThreadStaticAttribute_t2292_0_0_0;
static ParameterInfo IList_1_t9091_IList_1_set_Item_m46851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t2292_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46851_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46851_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9091_IList_1_set_Item_m46851_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46851_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9091_MethodInfos[] =
{
	&IList_1_IndexOf_m46852_MethodInfo,
	&IList_1_Insert_m46853_MethodInfo,
	&IList_1_RemoveAt_m46854_MethodInfo,
	&IList_1_get_Item_m46850_MethodInfo,
	&IList_1_set_Item_m46851_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9091_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9090_il2cpp_TypeInfo,
	&IEnumerable_1_t9092_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9091_0_0_0;
extern Il2CppType IList_1_t9091_1_0_0;
struct IList_1_t9091;
extern Il2CppGenericClass IList_1_t9091_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9091_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9091_MethodInfos/* methods */
	, IList_1_t9091_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9091_il2cpp_TypeInfo/* element_class */
	, IList_1_t9091_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9091_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9091_0_0_0/* byval_arg */
	, &IList_1_t9091_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9091_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2724_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
extern TypeInfo TimeSpan_t1620_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t2726_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_41MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m26746_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m46342_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m12682_MethodInfo;
 void GenericComparer_1__ctor_m12682 (GenericComparer_1_t2724 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m26746(__this, /*hidden argument*/&Comparer_1__ctor_m26746_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m26745_MethodInfo;
 int32_t GenericComparer_1_Compare_m26745 (GenericComparer_1_t2724 * __this, TimeSpan_t1620  ___x, TimeSpan_t1620  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t1620  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t1620  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t1620  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t1620  >::Invoke(&IComparable_1_CompareTo_m46342_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.TimeSpan>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m12682_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
MethodInfo GenericComparer_1__ctor_m12682_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m12682/* method */
	, &GenericComparer_1_t2724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &GenericComparer_1__ctor_m12682_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo GenericComparer_1_t2724_GenericComparer_1_Compare_m26745_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m26745_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m26745_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m26745/* method */
	, &GenericComparer_1_t2724_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, GenericComparer_1_t2724_GenericComparer_1_Compare_m26745_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m26745_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t2724_MethodInfos[] =
{
	&GenericComparer_1__ctor_m12682_MethodInfo,
	&GenericComparer_1_Compare_m26745_MethodInfo,
	NULL
};
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m26748_MethodInfo;
static MethodInfo* GenericComparer_1_t2724_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&GenericComparer_1_Compare_m26745_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26748_MethodInfo,
	&GenericComparer_1_Compare_m26745_MethodInfo,
};
extern TypeInfo IComparer_1_t9311_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t2724_InterfacesOffsets[] = 
{
	{ &IComparer_1_t9311_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t2724_0_0_0;
extern Il2CppType GenericComparer_1_t2724_1_0_0;
extern TypeInfo Comparer_1_t4913_il2cpp_TypeInfo;
struct GenericComparer_1_t2724;
extern Il2CppGenericClass GenericComparer_1_t2724_GenericClass;
TypeInfo GenericComparer_1_t2724_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t2724_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t2724_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t2724_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t2724_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t2724_0_0_0/* byval_arg */
	, &GenericComparer_1_t2724_1_0_0/* this_arg */
	, GenericComparer_1_t2724_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t2724_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t2724)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_41.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_42.h"
extern TypeInfo DefaultComparer_t4914_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_42MethodDeclarations.h"
extern Il2CppType IComparable_1_t2726_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26750_MethodInfo;
extern MethodInfo Comparer_1_Compare_m46855_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
 void Comparer_1__ctor_m26746 (Comparer_1_t4913 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern MethodInfo Comparer_1__cctor_m26747_MethodInfo;
 void Comparer_1__cctor_m26747 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t4914 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4914 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t4914_il2cpp_TypeInfo));
	DefaultComparer__ctor_m26750(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m26750_MethodInfo);
	((Comparer_1_t4913_StaticFields*)InitializedTypeInfo(&Comparer_1_t4913_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m26748 (Comparer_1_t4913 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t1620 , TimeSpan_t1620  >::Invoke(&Comparer_1_Compare_m46855_MethodInfo, __this, ((*(TimeSpan_t1620 *)((TimeSpan_t1620 *)UnBox (___x, InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo))))), ((*(TimeSpan_t1620 *)((TimeSpan_t1620 *)UnBox (___y, InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t116 * L_1 = (ArgumentException_t116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t116_il2cpp_TypeInfo));
		ArgumentException__ctor_m11264(L_1, /*hidden argument*/&ArgumentException__ctor_m11264_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern MethodInfo Comparer_1_get_Default_m26749_MethodInfo;
 Comparer_1_t4913 * Comparer_1_get_Default_m26749 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t4913_il2cpp_TypeInfo));
		return (((Comparer_1_t4913_StaticFields*)InitializedTypeInfo(&Comparer_1_t4913_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.TimeSpan>
extern Il2CppType Comparer_1_t4913_0_0_49;
FieldInfo Comparer_1_t4913_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t4913_0_0_49/* type */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t4913_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t4913_FieldInfos[] =
{
	&Comparer_1_t4913_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t4913____Default_PropertyInfo = 
{
	&Comparer_1_t4913_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m26749_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t4913_PropertyInfos[] =
{
	&Comparer_1_t4913____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m26746_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
MethodInfo Comparer_1__ctor_m26746_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m26746/* method */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &Comparer_1__ctor_m26746_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m26747_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
MethodInfo Comparer_1__cctor_m26747_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m26747/* method */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m26747_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t4913_Comparer_1_System_Collections_IComparer_Compare_m26748_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m26748_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m26748_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m26748/* method */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t_Object_t/* invoker_method */
	, Comparer_1_t4913_Comparer_1_System_Collections_IComparer_Compare_m26748_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m26748_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo Comparer_1_t4913_Comparer_1_Compare_m46855_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m46855_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo Comparer_1_Compare_m46855_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, Comparer_1_t4913_Comparer_1_Compare_m46855_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m46855_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t4913_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m26749_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
MethodInfo Comparer_1_get_Default_m26749_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m26749/* method */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t4913_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m26749_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t4913_MethodInfos[] =
{
	&Comparer_1__ctor_m26746_MethodInfo,
	&Comparer_1__cctor_m26747_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26748_MethodInfo,
	&Comparer_1_Compare_m46855_MethodInfo,
	&Comparer_1_get_Default_m26749_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t4913_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&Comparer_1_Compare_m46855_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26748_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t4913_InterfacesTypeInfos[] = 
{
	&IComparer_1_t9311_il2cpp_TypeInfo,
	&IComparer_t1565_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t4913_InterfacesOffsets[] = 
{
	{ &IComparer_1_t9311_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t4913_0_0_0;
extern Il2CppType Comparer_1_t4913_1_0_0;
struct Comparer_1_t4913;
extern Il2CppGenericClass Comparer_1_t4913_GenericClass;
TypeInfo Comparer_1_t4913_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t4913_MethodInfos/* methods */
	, Comparer_1_t4913_PropertyInfos/* properties */
	, Comparer_1_t4913_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t4913_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t4913_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t4913_0_0_0/* byval_arg */
	, &Comparer_1_t4913_1_0_0/* this_arg */
	, Comparer_1_t4913_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t4913_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t4913)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t4913_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.TimeSpan>
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IComparer_1_t9311_IComparer_1_Compare_m46856_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m46856_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo IComparer_1_Compare_m46856_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t9311_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, IComparer_1_t9311_IComparer_1_Compare_m46856_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m46856_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t9311_MethodInfos[] =
{
	&IComparer_1_Compare_m46856_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t9311_0_0_0;
extern Il2CppType IComparer_1_t9311_1_0_0;
struct IComparer_1_t9311;
extern Il2CppGenericClass IComparer_1_t9311_GenericClass;
TypeInfo IComparer_1_t9311_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t9311_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t9311_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t9311_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t9311_0_0_0/* byval_arg */
	, &IComparer_1_t9311_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t9311_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
 void DefaultComparer__ctor_m26750 (DefaultComparer_t4914 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m26746(__this, /*hidden argument*/&Comparer_1__ctor_m26746_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m26751_MethodInfo;
 int32_t DefaultComparer_Compare_m26751 (DefaultComparer_t4914 * __this, TimeSpan_t1620  ___x, TimeSpan_t1620  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t1620  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t1620  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t1620  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		TimeSpan_t1620  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t2726_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		TimeSpan_t1620  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2726_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t1620  >::Invoke(&IComparable_1_CompareTo_m46342_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2726_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		TimeSpan_t1620  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t86_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		TimeSpan_t1620  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_13);
		TimeSpan_t1620  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t86_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m12071_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t86_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t116 * L_18 = (ArgumentException_t116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t116_il2cpp_TypeInfo));
		ArgumentException__ctor_m586(L_18, (String_t*) &_stringLiteral1455, /*hidden argument*/&ArgumentException__ctor_m586_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m26750_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
MethodInfo DefaultComparer__ctor_m26750_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m26750/* method */
	, &DefaultComparer_t4914_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &DefaultComparer__ctor_m26750_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo DefaultComparer_t4914_DefaultComparer_Compare_m26751_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m26751_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m26751_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m26751/* method */
	, &DefaultComparer_t4914_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, DefaultComparer_t4914_DefaultComparer_Compare_m26751_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m26751_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t4914_MethodInfos[] =
{
	&DefaultComparer__ctor_m26750_MethodInfo,
	&DefaultComparer_Compare_m26751_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t4914_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&DefaultComparer_Compare_m26751_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m26748_MethodInfo,
	&DefaultComparer_Compare_m26751_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t4914_InterfacesOffsets[] = 
{
	{ &IComparer_1_t9311_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t4914_0_0_0;
extern Il2CppType DefaultComparer_t4914_1_0_0;
struct DefaultComparer_t4914;
extern Il2CppGenericClass DefaultComparer_t4914_GenericClass;
TypeInfo DefaultComparer_t4914_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t4914_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t4913_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t1849_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t4914_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t4914_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t4914_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t4914_0_0_0/* byval_arg */
	, &DefaultComparer_t4914_1_0_0/* this_arg */
	, DefaultComparer_t4914_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t4914_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t4914)/* instance_size */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2725_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2727_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_55MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m26754_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m46357_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m12683_MethodInfo;
 void GenericEqualityComparer_1__ctor_m12683 (GenericEqualityComparer_1_t2725 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m26754(__this, /*hidden argument*/&EqualityComparer_1__ctor_m26754_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m26752_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m26752 (GenericEqualityComparer_1_t2725 * __this, TimeSpan_t1620  ___obj, MethodInfo* method){
	{
		TimeSpan_t1620  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m461_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m26753_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m26753 (GenericEqualityComparer_1_t2725 * __this, TimeSpan_t1620  ___x, TimeSpan_t1620  ___y, MethodInfo* method){
	{
		TimeSpan_t1620  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t1620  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, TimeSpan_t1620  >::Invoke(&IEquatable_1_Equals_m46357_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m12683_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m12683_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m12683/* method */
	, &GenericEqualityComparer_1_t2725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &GenericEqualityComparer_1__ctor_m12683_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2725_GenericEqualityComparer_1_GetHashCode_m26752_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m26752_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m26752_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m26752/* method */
	, &GenericEqualityComparer_1_t2725_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620/* invoker_method */
	, GenericEqualityComparer_1_t2725_GenericEqualityComparer_1_GetHashCode_m26752_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m26752_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2725_GenericEqualityComparer_1_Equals_m26753_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m26753_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m26753_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m26753/* method */
	, &GenericEqualityComparer_1_t2725_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, GenericEqualityComparer_1_t2725_GenericEqualityComparer_1_Equals_m26753_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m26753_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t2725_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m12683_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m26752_MethodInfo,
	&GenericEqualityComparer_1_Equals_m26753_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t2725_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&GenericEqualityComparer_1_Equals_m26753_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m26752_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m26752_MethodInfo,
	&GenericEqualityComparer_1_Equals_m26753_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t9312_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t2725_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t9312_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1571_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t2725_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2725_1_0_0;
extern TypeInfo EqualityComparer_1_t4915_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t2725;
extern Il2CppGenericClass GenericEqualityComparer_1_t2725_GenericClass;
TypeInfo GenericEqualityComparer_1_t2725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t2725_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t2725_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t2725_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t2725_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t2725_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t2725_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t2725_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t2725_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t2725)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_56.h"
extern TypeInfo DefaultComparer_t4916_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_56MethodDeclarations.h"
extern Il2CppType IEquatable_1_t2727_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26759_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m46857_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m46858_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
 void EqualityComparer_1__ctor_m26754 (EqualityComparer_1_t4915 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m26755_MethodInfo;
 void EqualityComparer_1__cctor_m26755 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t4916 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4916 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t4916_il2cpp_TypeInfo));
	DefaultComparer__ctor_m26759(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m26759_MethodInfo);
	((EqualityComparer_1_t4915_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t4915_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756 (EqualityComparer_1_t4915 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t1620  >::Invoke(&EqualityComparer_1_GetHashCode_m46857_MethodInfo, __this, ((*(TimeSpan_t1620 *)((TimeSpan_t1620 *)UnBox (___obj, InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757 (EqualityComparer_1_t4915 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, TimeSpan_t1620 , TimeSpan_t1620  >::Invoke(&EqualityComparer_1_Equals_m46858_MethodInfo, __this, ((*(TimeSpan_t1620 *)((TimeSpan_t1620 *)UnBox (___x, InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo))))), ((*(TimeSpan_t1620 *)((TimeSpan_t1620 *)UnBox (___y, InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m26758_MethodInfo;
 EqualityComparer_1_t4915 * EqualityComparer_1_get_Default_m26758 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t4915_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t4915_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t4915_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
extern Il2CppType EqualityComparer_1_t4915_0_0_49;
FieldInfo EqualityComparer_1_t4915_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t4915_0_0_49/* type */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t4915_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t4915_FieldInfos[] =
{
	&EqualityComparer_1_t4915_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t4915____Default_PropertyInfo = 
{
	&EqualityComparer_1_t4915_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m26758_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t4915_PropertyInfos[] =
{
	&EqualityComparer_1_t4915____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m26754_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
MethodInfo EqualityComparer_1__ctor_m26754_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m26754/* method */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &EqualityComparer_1__ctor_m26754_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m26755_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
MethodInfo EqualityComparer_1__cctor_m26755_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m26755/* method */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m26755_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t4915_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756/* method */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, EqualityComparer_1_t4915_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t4915_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757/* method */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t4915_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo EqualityComparer_1_t4915_EqualityComparer_1_GetHashCode_m46857_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m46857_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m46857_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620/* invoker_method */
	, EqualityComparer_1_t4915_EqualityComparer_1_GetHashCode_m46857_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m46857_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo EqualityComparer_1_t4915_EqualityComparer_1_Equals_m46858_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m46858_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m46858_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, EqualityComparer_1_t4915_EqualityComparer_1_Equals_m46858_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m46858_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t4915_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m26758_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m26758_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m26758/* method */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t4915_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m26758_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t4915_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m26754_MethodInfo,
	&EqualityComparer_1__cctor_m26755_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_MethodInfo,
	&EqualityComparer_1_GetHashCode_m46857_MethodInfo,
	&EqualityComparer_1_Equals_m46858_MethodInfo,
	&EqualityComparer_1_get_Default_m26758_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t4915_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&EqualityComparer_1_Equals_m46858_MethodInfo,
	&EqualityComparer_1_GetHashCode_m46857_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t4915_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t9312_il2cpp_TypeInfo,
	&IEqualityComparer_t1571_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t4915_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t9312_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1571_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t4915_0_0_0;
extern Il2CppType EqualityComparer_1_t4915_1_0_0;
struct EqualityComparer_1_t4915;
extern Il2CppGenericClass EqualityComparer_1_t4915_GenericClass;
TypeInfo EqualityComparer_1_t4915_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t4915_MethodInfos/* methods */
	, EqualityComparer_1_t4915_PropertyInfos/* properties */
	, EqualityComparer_1_t4915_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t4915_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t4915_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t4915_0_0_0/* byval_arg */
	, &EqualityComparer_1_t4915_1_0_0/* this_arg */
	, EqualityComparer_1_t4915_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t4915_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t4915)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t4915_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IEqualityComparer_1_t9312_IEqualityComparer_1_Equals_m46859_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m46859_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m46859_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t9312_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, IEqualityComparer_1_t9312_IEqualityComparer_1_Equals_m46859_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m46859_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IEqualityComparer_1_t9312_IEqualityComparer_1_GetHashCode_m46860_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m46860_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m46860_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t9312_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620/* invoker_method */
	, IEqualityComparer_1_t9312_IEqualityComparer_1_GetHashCode_m46860_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m46860_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t9312_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m46859_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m46860_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t9312_0_0_0;
extern Il2CppType IEqualityComparer_1_t9312_1_0_0;
struct IEqualityComparer_1_t9312;
extern Il2CppGenericClass IEqualityComparer_1_t9312_GenericClass;
TypeInfo IEqualityComparer_1_t9312_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t9312_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t9312_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t9312_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t9312_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t9312_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t9312_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
 void DefaultComparer__ctor_m26759 (DefaultComparer_t4916 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m26754(__this, /*hidden argument*/&EqualityComparer_1__ctor_m26754_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m26760_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m26760 (DefaultComparer_t4916 * __this, TimeSpan_t1620  ___obj, MethodInfo* method){
	{
		TimeSpan_t1620  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m461_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m26761_MethodInfo;
 bool DefaultComparer_Equals_m26761 (DefaultComparer_t4916 * __this, TimeSpan_t1620  ___x, TimeSpan_t1620  ___y, MethodInfo* method){
	{
		TimeSpan_t1620  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t1620  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t1620  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m460_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m26759_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
MethodInfo DefaultComparer__ctor_m26759_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m26759/* method */
	, &DefaultComparer_t4916_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
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
	, &DefaultComparer__ctor_m26759_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo DefaultComparer_t4916_DefaultComparer_GetHashCode_m26760_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m26760_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m26760_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m26760/* method */
	, &DefaultComparer_t4916_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620/* invoker_method */
	, DefaultComparer_t4916_DefaultComparer_GetHashCode_m26760_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m26760_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo DefaultComparer_t4916_DefaultComparer_Equals_m26761_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m26761_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m26761_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m26761/* method */
	, &DefaultComparer_t4916_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_TimeSpan_t1620_TimeSpan_t1620/* invoker_method */
	, DefaultComparer_t4916_DefaultComparer_Equals_m26761_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m26761_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t4916_MethodInfos[] =
{
	&DefaultComparer__ctor_m26759_MethodInfo,
	&DefaultComparer_GetHashCode_m26760_MethodInfo,
	&DefaultComparer_Equals_m26761_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t4916_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&DefaultComparer_Equals_m26761_MethodInfo,
	&DefaultComparer_GetHashCode_m26760_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26757_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26756_MethodInfo,
	&DefaultComparer_GetHashCode_m26760_MethodInfo,
	&DefaultComparer_Equals_m26761_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t4916_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t9312_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t1571_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t4916_0_0_0;
extern Il2CppType DefaultComparer_t4916_1_0_0;
struct DefaultComparer_t4916;
extern Il2CppGenericClass DefaultComparer_t4916_GenericClass;
TypeInfo DefaultComparer_t4916_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t4916_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t4915_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t1861_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t4916_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t4916_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t4916_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t4916_0_0_0/* byval_arg */
	, &DefaultComparer_t4916_1_0_0/* this_arg */
	, DefaultComparer_t4916_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t4916_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t4916)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6991_il2cpp_TypeInfo;

// System.TypeCode
#include "mscorlib_System_TypeCode.h"


// T System.Collections.Generic.IEnumerator`1<System.TypeCode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo IEnumerator_1_get_Current_m46861_MethodInfo;
static PropertyInfo IEnumerator_1_t6991____Current_PropertyInfo = 
{
	&IEnumerator_1_t6991_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46861_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6991_PropertyInfos[] =
{
	&IEnumerator_1_t6991____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeCode_t1161_0_0_0;
extern void* RuntimeInvoker_TypeCode_t1161 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46861_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.TypeCode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46861_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6991_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t1161_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t1161/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46861_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6991_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46861_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6991_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6991_0_0_0;
extern Il2CppType IEnumerator_1_t6991_1_0_0;
struct IEnumerator_1_t6991;
extern Il2CppGenericClass IEnumerator_1_t6991_GenericClass;
TypeInfo IEnumerator_1_t6991_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6991_MethodInfos/* methods */
	, IEnumerator_1_t6991_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6991_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6991_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6991_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6991_0_0_0/* byval_arg */
	, &IEnumerator_1_t6991_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6991_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.TypeCode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4917_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.TypeCode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_742MethodDeclarations.h"

extern TypeInfo TypeCode_t1161_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26766_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeCode_t1161_m36039_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TypeCode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TypeCode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeCode_t1161_m36039 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26762_MethodInfo;
 void InternalEnumerator_1__ctor_m26762 (InternalEnumerator_1_t4917 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TypeCode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763 (InternalEnumerator_1_t4917 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26766(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26766_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeCode_t1161_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26764_MethodInfo;
 void InternalEnumerator_1_Dispose_m26764 (InternalEnumerator_1_t4917 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TypeCode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26765_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26765 (InternalEnumerator_1_t4917 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.TypeCode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26766 (InternalEnumerator_1_t4917 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeCode_t1161_m36039(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeCode_t1161_m36039_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4917____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4917, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4917____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4917, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4917_FieldInfos[] =
{
	&InternalEnumerator_1_t4917____array_0_FieldInfo,
	&InternalEnumerator_1_t4917____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4917____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4917_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4917____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4917_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26766_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4917_PropertyInfos[] =
{
	&InternalEnumerator_1_t4917____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4917____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4917_InternalEnumerator_1__ctor_m26762_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26762_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26762_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26762/* method */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4917_InternalEnumerator_1__ctor_m26762_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26762_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.TypeCode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763/* method */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26764_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26764_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26764/* method */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26764_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26765_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.TypeCode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26765_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26765/* method */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26765_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1161_0_0_0;
extern void* RuntimeInvoker_TypeCode_t1161 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26766_GenericMethod;
// T System.Array/InternalEnumerator`1<System.TypeCode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26766_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26766/* method */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t1161_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t1161/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26766_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4917_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26762_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763_MethodInfo,
	&InternalEnumerator_1_Dispose_m26764_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26765_MethodInfo,
	&InternalEnumerator_1_get_Current_m26766_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4917_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26763_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26765_MethodInfo,
	&InternalEnumerator_1_Dispose_m26764_MethodInfo,
	&InternalEnumerator_1_get_Current_m26766_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4917_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6991_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4917_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6991_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4917_0_0_0;
extern Il2CppType InternalEnumerator_1_t4917_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4917_GenericClass;
TypeInfo InternalEnumerator_1_t4917_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4917_MethodInfos/* methods */
	, InternalEnumerator_1_t4917_PropertyInfos/* properties */
	, InternalEnumerator_1_t4917_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4917_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4917_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4917_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4917_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4917_1_0_0/* this_arg */
	, InternalEnumerator_1_t4917_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4917_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4917)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9093_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.TypeCode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo ICollection_1_get_Count_m46862_MethodInfo;
static PropertyInfo ICollection_1_t9093____Count_PropertyInfo = 
{
	&ICollection_1_t9093_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46862_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46863_MethodInfo;
static PropertyInfo ICollection_1_t9093____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9093_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46863_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9093_PropertyInfos[] =
{
	&ICollection_1_t9093____Count_PropertyInfo,
	&ICollection_1_t9093____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46862_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.TypeCode>::get_Count()
MethodInfo ICollection_1_get_Count_m46862_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46862_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46863_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46863_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46863_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1161_0_0_0;
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo ICollection_1_t9093_ICollection_1_Add_m46864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46864_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Add(T)
MethodInfo ICollection_1_Add_m46864_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9093_ICollection_1_Add_m46864_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46864_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46865_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Clear()
MethodInfo ICollection_1_Clear_m46865_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46865_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo ICollection_1_t9093_ICollection_1_Contains_m46866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46866_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Contains(T)
MethodInfo ICollection_1_Contains_m46866_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9093_ICollection_1_Contains_m46866_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46866_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCodeU5BU5D_t5143_0_0_0;
extern Il2CppType TypeCodeU5BU5D_t5143_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9093_ICollection_1_CopyTo_m46867_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeCodeU5BU5D_t5143_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46867_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46867_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9093_ICollection_1_CopyTo_m46867_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46867_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo ICollection_1_t9093_ICollection_1_Remove_m46868_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46868_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Remove(T)
MethodInfo ICollection_1_Remove_m46868_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9093_ICollection_1_Remove_m46868_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46868_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9093_MethodInfos[] =
{
	&ICollection_1_get_Count_m46862_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46863_MethodInfo,
	&ICollection_1_Add_m46864_MethodInfo,
	&ICollection_1_Clear_m46865_MethodInfo,
	&ICollection_1_Contains_m46866_MethodInfo,
	&ICollection_1_CopyTo_m46867_MethodInfo,
	&ICollection_1_Remove_m46868_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9095_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9093_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9095_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9093_0_0_0;
extern Il2CppType ICollection_1_t9093_1_0_0;
struct ICollection_1_t9093;
extern Il2CppGenericClass ICollection_1_t9093_GenericClass;
TypeInfo ICollection_1_t9093_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9093_MethodInfos/* methods */
	, ICollection_1_t9093_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9093_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9093_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9093_0_0_0/* byval_arg */
	, &ICollection_1_t9093_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9093_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TypeCode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern Il2CppType IEnumerator_1_t6991_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46869_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TypeCode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46869_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9095_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6991_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46869_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9095_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46869_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9095_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9095_0_0_0;
extern Il2CppType IEnumerable_1_t9095_1_0_0;
struct IEnumerable_1_t9095;
extern Il2CppGenericClass IEnumerable_1_t9095_GenericClass;
TypeInfo IEnumerable_1_t9095_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9095_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9095_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9095_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9095_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9095_0_0_0/* byval_arg */
	, &IEnumerable_1_t9095_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9095_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9094_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.TypeCode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TypeCode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo IList_1_get_Item_m46870_MethodInfo;
extern MethodInfo IList_1_set_Item_m46871_MethodInfo;
static PropertyInfo IList_1_t9094____Item_PropertyInfo = 
{
	&IList_1_t9094_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46870_MethodInfo/* get */
	, &IList_1_set_Item_m46871_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9094_PropertyInfos[] =
{
	&IList_1_t9094____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo IList_1_t9094_IList_1_IndexOf_m46872_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46872_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.TypeCode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46872_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9094_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9094_IList_1_IndexOf_m46872_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46872_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo IList_1_t9094_IList_1_Insert_m46873_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46873_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46873_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9094_IList_1_Insert_m46873_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46873_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9094_IList_1_RemoveAt_m46874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46874_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46874_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9094_IList_1_RemoveAt_m46874_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46874_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9094_IList_1_get_Item_m46870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType TypeCode_t1161_0_0_0;
extern void* RuntimeInvoker_TypeCode_t1161_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46870_GenericMethod;
// T System.Collections.Generic.IList`1<System.TypeCode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46870_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9094_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t1161_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t1161_Int32_t63/* invoker_method */
	, IList_1_t9094_IList_1_get_Item_m46870_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46870_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo IList_1_t9094_IList_1_set_Item_m46871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46871_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46871_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9094_IList_1_set_Item_m46871_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46871_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9094_MethodInfos[] =
{
	&IList_1_IndexOf_m46872_MethodInfo,
	&IList_1_Insert_m46873_MethodInfo,
	&IList_1_RemoveAt_m46874_MethodInfo,
	&IList_1_get_Item_m46870_MethodInfo,
	&IList_1_set_Item_m46871_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9094_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9093_il2cpp_TypeInfo,
	&IEnumerable_1_t9095_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9094_0_0_0;
extern Il2CppType IList_1_t9094_1_0_0;
struct IList_1_t9094;
extern Il2CppGenericClass IList_1_t9094_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9094_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9094_MethodInfos/* methods */
	, IList_1_t9094_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9094_il2cpp_TypeInfo/* element_class */
	, IList_1_t9094_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9094_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9094_0_0_0/* byval_arg */
	, &IList_1_t9094_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9094_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6993_il2cpp_TypeInfo;

// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityType.h"


// T System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo IEnumerator_1_get_Current_m46875_MethodInfo;
static PropertyInfo IEnumerator_1_t6993____Current_PropertyInfo = 
{
	&IEnumerator_1_t6993_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46875_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6993_PropertyInfos[] =
{
	&IEnumerator_1_t6993____Current_PropertyInfo,
	NULL
};
extern Il2CppType UnityType_t2298_0_0_0;
extern void* RuntimeInvoker_UnityType_t2298 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46875_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46875_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6993_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t2298_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t2298/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46875_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6993_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46875_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6993_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6993_0_0_0;
extern Il2CppType IEnumerator_1_t6993_1_0_0;
struct IEnumerator_1_t6993;
extern Il2CppGenericClass IEnumerator_1_t6993_GenericClass;
TypeInfo IEnumerator_1_t6993_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6993_MethodInfos/* methods */
	, IEnumerator_1_t6993_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6993_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6993_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6993_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6993_0_0_0/* byval_arg */
	, &IEnumerator_1_t6993_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6993_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_743.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4918_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_743MethodDeclarations.h"

extern TypeInfo UnityType_t2298_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26771_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnityType_t2298_m36050_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UnitySerializationHolder/UnityType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UnitySerializationHolder/UnityType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisUnityType_t2298_m36050 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26767_MethodInfo;
 void InternalEnumerator_1__ctor_m26767 (InternalEnumerator_1_t4918 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768 (InternalEnumerator_1_t4918 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m26771(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26771_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UnityType_t2298_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26769_MethodInfo;
 void InternalEnumerator_1_Dispose_m26769 (InternalEnumerator_1_t4918 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26770_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26770 (InternalEnumerator_1_t4918 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m26771 (InternalEnumerator_1_t4918 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisUnityType_t2298_m36050(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUnityType_t2298_m36050_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4918____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4918, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4918____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4918, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4918_FieldInfos[] =
{
	&InternalEnumerator_1_t4918____array_0_FieldInfo,
	&InternalEnumerator_1_t4918____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4918____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4918_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4918____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4918_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26771_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4918_PropertyInfos[] =
{
	&InternalEnumerator_1_t4918____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4918____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4918_InternalEnumerator_1__ctor_m26767_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26767_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26767_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26767/* method */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4918_InternalEnumerator_1__ctor_m26767_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26767_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768/* method */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26769_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26769_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26769/* method */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26769_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26770_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26770_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26770/* method */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26770_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2298_0_0_0;
extern void* RuntimeInvoker_UnityType_t2298 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26771_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26771_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26771/* method */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t2298_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t2298/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26771_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4918_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26767_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768_MethodInfo,
	&InternalEnumerator_1_Dispose_m26769_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26770_MethodInfo,
	&InternalEnumerator_1_get_Current_m26771_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4918_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26768_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26770_MethodInfo,
	&InternalEnumerator_1_Dispose_m26769_MethodInfo,
	&InternalEnumerator_1_get_Current_m26771_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4918_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6993_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4918_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6993_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4918_0_0_0;
extern Il2CppType InternalEnumerator_1_t4918_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4918_GenericClass;
TypeInfo InternalEnumerator_1_t4918_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4918_MethodInfos/* methods */
	, InternalEnumerator_1_t4918_PropertyInfos/* properties */
	, InternalEnumerator_1_t4918_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4918_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4918_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4918_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4918_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4918_1_0_0/* this_arg */
	, InternalEnumerator_1_t4918_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4918_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4918)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9096_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo ICollection_1_get_Count_m46876_MethodInfo;
static PropertyInfo ICollection_1_t9096____Count_PropertyInfo = 
{
	&ICollection_1_t9096_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46876_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46877_MethodInfo;
static PropertyInfo ICollection_1_t9096____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9096_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46877_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9096_PropertyInfos[] =
{
	&ICollection_1_t9096____Count_PropertyInfo,
	&ICollection_1_t9096____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46876_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_Count()
MethodInfo ICollection_1_get_Count_m46876_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46876_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46877_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46877_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46877_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2298_0_0_0;
extern Il2CppType UnityType_t2298_0_0_0;
static ParameterInfo ICollection_1_t9096_ICollection_1_Add_m46878_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2298_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46878_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Add(T)
MethodInfo ICollection_1_Add_m46878_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Byte_t98/* invoker_method */
	, ICollection_1_t9096_ICollection_1_Add_m46878_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46878_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46879_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Clear()
MethodInfo ICollection_1_Clear_m46879_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46879_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2298_0_0_0;
static ParameterInfo ICollection_1_t9096_ICollection_1_Contains_m46880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2298_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46880_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Contains(T)
MethodInfo ICollection_1_Contains_m46880_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t9096_ICollection_1_Contains_m46880_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46880_GenericMethod/* genericMethod */

};
extern Il2CppType UnityTypeU5BU5D_t5144_0_0_0;
extern Il2CppType UnityTypeU5BU5D_t5144_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9096_ICollection_1_CopyTo_m46881_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnityTypeU5BU5D_t5144_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46881_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46881_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9096_ICollection_1_CopyTo_m46881_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46881_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t2298_0_0_0;
static ParameterInfo ICollection_1_t9096_ICollection_1_Remove_m46882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2298_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46882_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Remove(T)
MethodInfo ICollection_1_Remove_m46882_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t9096_ICollection_1_Remove_m46882_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46882_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9096_MethodInfos[] =
{
	&ICollection_1_get_Count_m46876_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46877_MethodInfo,
	&ICollection_1_Add_m46878_MethodInfo,
	&ICollection_1_Clear_m46879_MethodInfo,
	&ICollection_1_Contains_m46880_MethodInfo,
	&ICollection_1_CopyTo_m46881_MethodInfo,
	&ICollection_1_Remove_m46882_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9098_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9096_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9098_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9096_0_0_0;
extern Il2CppType ICollection_1_t9096_1_0_0;
struct ICollection_1_t9096;
extern Il2CppGenericClass ICollection_1_t9096_GenericClass;
TypeInfo ICollection_1_t9096_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9096_MethodInfos/* methods */
	, ICollection_1_t9096_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9096_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9096_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9096_0_0_0/* byval_arg */
	, &ICollection_1_t9096_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9096_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType IEnumerator_1_t6993_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46883_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46883_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9098_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6993_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46883_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9098_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46883_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9098_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9098_0_0_0;
extern Il2CppType IEnumerable_1_t9098_1_0_0;
struct IEnumerable_1_t9098;
extern Il2CppGenericClass IEnumerable_1_t9098_GenericClass;
TypeInfo IEnumerable_1_t9098_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9098_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9098_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9098_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9098_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9098_0_0_0/* byval_arg */
	, &IEnumerable_1_t9098_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9098_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t9097_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo IList_1_get_Item_m46884_MethodInfo;
extern MethodInfo IList_1_set_Item_m46885_MethodInfo;
static PropertyInfo IList_1_t9097____Item_PropertyInfo = 
{
	&IList_1_t9097_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46884_MethodInfo/* get */
	, &IList_1_set_Item_m46885_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9097_PropertyInfos[] =
{
	&IList_1_t9097____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnityType_t2298_0_0_0;
static ParameterInfo IList_1_t9097_IList_1_IndexOf_m46886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t2298_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46886_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46886_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9097_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t9097_IList_1_IndexOf_m46886_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46886_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UnityType_t2298_0_0_0;
static ParameterInfo IList_1_t9097_IList_1_Insert_m46887_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnityType_t2298_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46887_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46887_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t9097_IList_1_Insert_m46887_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46887_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9097_IList_1_RemoveAt_m46888_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46888_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46888_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9097_IList_1_RemoveAt_m46888_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46888_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9097_IList_1_get_Item_m46884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType UnityType_t2298_0_0_0;
extern void* RuntimeInvoker_UnityType_t2298_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46884_GenericMethod;
// T System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46884_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9097_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t2298_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t2298_Int32_t63/* invoker_method */
	, IList_1_t9097_IList_1_get_Item_m46884_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46884_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UnityType_t2298_0_0_0;
static ParameterInfo IList_1_t9097_IList_1_set_Item_m46885_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnityType_t2298_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46885_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46885_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t9097_IList_1_set_Item_m46885_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46885_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9097_MethodInfos[] =
{
	&IList_1_IndexOf_m46886_MethodInfo,
	&IList_1_Insert_m46887_MethodInfo,
	&IList_1_RemoveAt_m46888_MethodInfo,
	&IList_1_get_Item_m46884_MethodInfo,
	&IList_1_set_Item_m46885_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9097_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9096_il2cpp_TypeInfo,
	&IEnumerable_1_t9098_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9097_0_0_0;
extern Il2CppType IList_1_t9097_1_0_0;
struct IList_1_t9097;
extern Il2CppGenericClass IList_1_t9097_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9097_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9097_MethodInfos/* methods */
	, IList_1_t9097_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9097_il2cpp_TypeInfo/* element_class */
	, IList_1_t9097_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9097_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9097_0_0_0/* byval_arg */
	, &IList_1_t9097_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9097_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t2730_il2cpp_TypeInfo;

// System.Version
#include "mscorlib_System_Version.h"


// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType Version_t1587_0_0_0;
extern Il2CppType Version_t1587_0_0_0;
static ParameterInfo IComparable_1_t2730_IComparable_1_CompareTo_m46889_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Version_t1587_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m46889_GenericMethod;
// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m46889_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2730_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IComparable_1_t2730_IComparable_1_CompareTo_m46889_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m46889_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2730_MethodInfos[] =
{
	&IComparable_1_CompareTo_m46889_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2730_0_0_0;
extern Il2CppType IComparable_1_t2730_1_0_0;
struct IComparable_1_t2730;
extern Il2CppGenericClass IComparable_1_t2730_GenericClass;
TypeInfo IComparable_1_t2730_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2730_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2730_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2730_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2730_0_0_0/* byval_arg */
	, &IComparable_1_t2730_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2730_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEquatable_1_t2731_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType Version_t1587_0_0_0;
static ParameterInfo IEquatable_1_t2731_IEquatable_1_Equals_m46890_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Version_t1587_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m46890_GenericMethod;
// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
MethodInfo IEquatable_1_Equals_m46890_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2731_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, IEquatable_1_t2731_IEquatable_1_Equals_m46890_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m46890_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2731_MethodInfos[] =
{
	&IEquatable_1_Equals_m46890_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2731_0_0_0;
extern Il2CppType IEquatable_1_t2731_1_0_0;
struct IEquatable_1_t2731;
extern Il2CppGenericClass IEquatable_1_t2731_GenericClass;
TypeInfo IEquatable_1_t2731_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2731_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2731_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2731_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2731_0_0_0/* byval_arg */
	, &IEquatable_1_t2731_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2731_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
