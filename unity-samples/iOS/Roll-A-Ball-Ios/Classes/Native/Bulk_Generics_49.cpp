#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_663.h"
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
extern TypeInfo InternalEnumerator_1_t4809_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_663MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
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
extern TypeInfo CompilationRelaxations_t2001_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1534_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26156_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6562_MethodInfo;
extern MethodInfo Array_get_Length_m1819_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxations_t2001_m35155_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCompilationRelaxations_t2001_m35155 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26152_MethodInfo;
 void InternalEnumerator_1__ctor_m26152 (InternalEnumerator_1_t4809 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153 (InternalEnumerator_1_t4809 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26156(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26156_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CompilationRelaxations_t2001_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26154_MethodInfo;
 void InternalEnumerator_1_Dispose_m26154 (InternalEnumerator_1_t4809 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26155_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26155 (InternalEnumerator_1_t4809 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26156 (InternalEnumerator_1_t4809 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCompilationRelaxations_t2001_m35155(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCompilationRelaxations_t2001_m35155_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4809____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4809, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4809____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
static PropertyInfo InternalEnumerator_1_t4809____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4809_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4809____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4809_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26156_MethodInfo/* get */
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
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4809_InternalEnumerator_1__ctor_m26152_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26152_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26152_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26152/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4809_InternalEnumerator_1__ctor_m26152_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26152_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26154_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26154_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26154/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26154_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26155_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26155_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26155/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26155_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t2001 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26156_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26156_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26156/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t2001_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t2001/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26156_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4809_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26152_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153_MethodInfo,
	&InternalEnumerator_1_Dispose_m26154_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26155_MethodInfo,
	&InternalEnumerator_1_get_Current_m26156_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3280_MethodInfo;
extern MethodInfo Object_Finalize_m416_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3281_MethodInfo;
extern MethodInfo ValueType_ToString_m3369_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4809_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26153_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26155_MethodInfo,
	&InternalEnumerator_1_Dispose_m26154_MethodInfo,
	&InternalEnumerator_1_get_Current_m26156_MethodInfo,
};
extern TypeInfo IEnumerator_t21_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t69_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6833_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t4809_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6833_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4809_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6833_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4809_0_0_0;
extern Il2CppType InternalEnumerator_1_t4809_1_0_0;
extern TypeInfo ValueType_t700_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4809_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
	, NULL/* rgctx_data */
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
extern TypeInfo ICollection_1_t8859_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo ICollection_1_get_Count_m45716_MethodInfo;
static PropertyInfo ICollection_1_t8859____Count_PropertyInfo = 
{
	&ICollection_1_t8859_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45716_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45717_MethodInfo;
static PropertyInfo ICollection_1_t8859____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8859_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45717_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8859_PropertyInfos[] =
{
	&ICollection_1_t8859____Count_PropertyInfo,
	&ICollection_1_t8859____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45716_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Count()
MethodInfo ICollection_1_get_Count_m45716_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45716_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45717_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45717_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45717_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
static ParameterInfo ICollection_1_t8859_ICollection_1_Add_m45718_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t2001_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45718_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Add(T)
MethodInfo ICollection_1_Add_m45718_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8859_ICollection_1_Add_m45718_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45718_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45719_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Clear()
MethodInfo ICollection_1_Clear_m45719_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45719_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
static ParameterInfo ICollection_1_t8859_ICollection_1_Contains_m45720_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t2001_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45720_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Contains(T)
MethodInfo ICollection_1_Contains_m45720_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8859_ICollection_1_Contains_m45720_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45720_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsU5BU5D_t5072_0_0_0;
extern Il2CppType CompilationRelaxationsU5BU5D_t5072_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8859_ICollection_1_CopyTo_m45721_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsU5BU5D_t5072_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45721_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45721_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8859_ICollection_1_CopyTo_m45721_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45721_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
static ParameterInfo ICollection_1_t8859_ICollection_1_Remove_m45722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t2001_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45722_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Remove(T)
MethodInfo ICollection_1_Remove_m45722_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8859_ICollection_1_Remove_m45722_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45722_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8859_MethodInfos[] =
{
	&ICollection_1_get_Count_m45716_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45717_MethodInfo,
	&ICollection_1_Add_m45718_MethodInfo,
	&ICollection_1_Clear_m45719_MethodInfo,
	&ICollection_1_Contains_m45720_MethodInfo,
	&ICollection_1_CopyTo_m45721_MethodInfo,
	&ICollection_1_Remove_m45722_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t88_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8861_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8859_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8861_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8859_0_0_0;
extern Il2CppType ICollection_1_t8859_1_0_0;
struct ICollection_1_t8859;
extern Il2CppGenericClass ICollection_1_t8859_GenericClass;
TypeInfo ICollection_1_t8859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8859_MethodInfos/* methods */
	, ICollection_1_t8859_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8859_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8859_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8859_0_0_0/* byval_arg */
	, &ICollection_1_t8859_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8859_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType IEnumerator_1_t6833_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45723_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45723_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8861_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45723_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8861_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45723_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8861_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8861_0_0_0;
extern Il2CppType IEnumerable_1_t8861_1_0_0;
struct IEnumerable_1_t8861;
extern Il2CppGenericClass IEnumerable_1_t8861_GenericClass;
TypeInfo IEnumerable_1_t8861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8861_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8861_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8861_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8861_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8861_0_0_0/* byval_arg */
	, &IEnumerable_1_t8861_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8861_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8860_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo IList_1_get_Item_m45724_MethodInfo;
extern MethodInfo IList_1_set_Item_m45725_MethodInfo;
static PropertyInfo IList_1_t8860____Item_PropertyInfo = 
{
	&IList_1_t8860_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45724_MethodInfo/* get */
	, &IList_1_set_Item_m45725_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8860_PropertyInfos[] =
{
	&IList_1_t8860____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
static ParameterInfo IList_1_t8860_IList_1_IndexOf_m45726_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t2001_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45726_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45726_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8860_IList_1_IndexOf_m45726_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45726_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
static ParameterInfo IList_1_t8860_IList_1_Insert_m45727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t2001_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45727_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45727_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8860_IList_1_Insert_m45727_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45727_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8860_IList_1_RemoveAt_m45728_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45728_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45728_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8860_IList_1_RemoveAt_m45728_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45728_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8860_IList_1_get_Item_m45724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t2001_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45724_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45724_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t2001_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t2001_Int32_t63/* invoker_method */
	, IList_1_t8860_IList_1_get_Item_m45724_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45724_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CompilationRelaxations_t2001_0_0_0;
static ParameterInfo IList_1_t8860_IList_1_set_Item_m45725_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t2001_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45725_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45725_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8860_IList_1_set_Item_m45725_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45725_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8860_MethodInfos[] =
{
	&IList_1_IndexOf_m45726_MethodInfo,
	&IList_1_Insert_m45727_MethodInfo,
	&IList_1_RemoveAt_m45728_MethodInfo,
	&IList_1_get_Item_m45724_MethodInfo,
	&IList_1_set_Item_m45725_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8860_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8859_il2cpp_TypeInfo,
	&IEnumerable_1_t8861_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8860_0_0_0;
extern Il2CppType IList_1_t8860_1_0_0;
struct IList_1_t8860;
extern Il2CppGenericClass IList_1_t8860_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8860_MethodInfos/* methods */
	, IList_1_t8860_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8860_il2cpp_TypeInfo/* element_class */
	, IList_1_t8860_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8860_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8860_0_0_0/* byval_arg */
	, &IList_1_t8860_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8860_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45729_MethodInfo;
static PropertyInfo IEnumerator_1_t6835____Current_PropertyInfo = 
{
	&IEnumerator_1_t6835_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6835_PropertyInfos[] =
{
	&IEnumerator_1_t6835____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45729_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45729_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6835_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t1356_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45729_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6835_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45729_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6835_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_664.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4810_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_664MethodDeclarations.h"

extern TypeInfo CompilationRelaxationsAttribute_t1356_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26161_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t1356_m35166_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26773_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26773(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t1356_m35166(__this, p0, method) (CompilationRelaxationsAttribute_t1356 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4810____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4810, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4810____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26158_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4810____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26158_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4810____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26161_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4810_InternalEnumerator_1__ctor_m26157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26157_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26157_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4810_InternalEnumerator_1__ctor_m26157_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26157_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26158_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26158_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26158_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26159_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26159_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26159_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26160_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26160_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26160_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26161_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26161_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t1356_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26161_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4810_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26157_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26158_MethodInfo,
	&InternalEnumerator_1_Dispose_m26159_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26160_MethodInfo,
	&InternalEnumerator_1_get_Current_m26161_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26160_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26159_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4810_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26158_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26160_MethodInfo,
	&InternalEnumerator_1_Dispose_m26159_MethodInfo,
	&InternalEnumerator_1_get_Current_m26161_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4810_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6835_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4810_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6835_il2cpp_TypeInfo, 7},
};
extern TypeInfo CompilationRelaxationsAttribute_t1356_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4810_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26161_MethodInfo/* Method Usage */,
	&CompilationRelaxationsAttribute_t1356_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t1356_m35166_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8862_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo ICollection_1_get_Count_m45730_MethodInfo;
static PropertyInfo ICollection_1_t8862____Count_PropertyInfo = 
{
	&ICollection_1_t8862_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45730_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45731_MethodInfo;
static PropertyInfo ICollection_1_t8862____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8862_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45731_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8862_PropertyInfos[] =
{
	&ICollection_1_t8862____Count_PropertyInfo,
	&ICollection_1_t8862____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45730_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45730_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45730_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45731_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45731_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45731_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
static ParameterInfo ICollection_1_t8862_ICollection_1_Add_m45732_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t1356_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45732_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45732_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8862_ICollection_1_Add_m45732_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45732_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45733_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45733_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45733_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
static ParameterInfo ICollection_1_t8862_ICollection_1_Contains_m45734_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t1356_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45734_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45734_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8862_ICollection_1_Contains_m45734_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45734_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttributeU5BU5D_t5073_0_0_0;
extern Il2CppType CompilationRelaxationsAttributeU5BU5D_t5073_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8862_ICollection_1_CopyTo_m45735_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttributeU5BU5D_t5073_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45735_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45735_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8862_ICollection_1_CopyTo_m45735_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45735_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
static ParameterInfo ICollection_1_t8862_ICollection_1_Remove_m45736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t1356_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45736_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45736_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8862_ICollection_1_Remove_m45736_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45736_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8862_MethodInfos[] =
{
	&ICollection_1_get_Count_m45730_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45731_MethodInfo,
	&ICollection_1_Add_m45732_MethodInfo,
	&ICollection_1_Clear_m45733_MethodInfo,
	&ICollection_1_Contains_m45734_MethodInfo,
	&ICollection_1_CopyTo_m45735_MethodInfo,
	&ICollection_1_Remove_m45736_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8864_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8862_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8864_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8862_0_0_0;
extern Il2CppType ICollection_1_t8862_1_0_0;
struct ICollection_1_t8862;
extern Il2CppGenericClass ICollection_1_t8862_GenericClass;
TypeInfo ICollection_1_t8862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8862_MethodInfos/* methods */
	, ICollection_1_t8862_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8862_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8862_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8862_0_0_0/* byval_arg */
	, &ICollection_1_t8862_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8862_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern Il2CppType IEnumerator_1_t6835_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45737_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45737_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8864_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45737_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8864_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45737_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8864_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8864_0_0_0;
extern Il2CppType IEnumerable_1_t8864_1_0_0;
struct IEnumerable_1_t8864;
extern Il2CppGenericClass IEnumerable_1_t8864_GenericClass;
TypeInfo IEnumerable_1_t8864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8864_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8864_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8864_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8864_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8864_0_0_0/* byval_arg */
	, &IEnumerable_1_t8864_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8864_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8863_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo IList_1_get_Item_m45738_MethodInfo;
extern MethodInfo IList_1_set_Item_m45739_MethodInfo;
static PropertyInfo IList_1_t8863____Item_PropertyInfo = 
{
	&IList_1_t8863_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45738_MethodInfo/* get */
	, &IList_1_set_Item_m45739_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8863_PropertyInfos[] =
{
	&IList_1_t8863____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
static ParameterInfo IList_1_t8863_IList_1_IndexOf_m45740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t1356_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45740_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45740_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8863_IList_1_IndexOf_m45740_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45740_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
static ParameterInfo IList_1_t8863_IList_1_Insert_m45741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t1356_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45741_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45741_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8863_IList_1_Insert_m45741_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45741_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8863_IList_1_RemoveAt_m45742_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45742_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45742_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8863_IList_1_RemoveAt_m45742_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45742_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8863_IList_1_get_Item_m45738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45738_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45738_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t1356_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8863_IList_1_get_Item_m45738_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45738_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CompilationRelaxationsAttribute_t1356_0_0_0;
static ParameterInfo IList_1_t8863_IList_1_set_Item_m45739_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t1356_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45739_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45739_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8863_IList_1_set_Item_m45739_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45739_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8863_MethodInfos[] =
{
	&IList_1_IndexOf_m45740_MethodInfo,
	&IList_1_Insert_m45741_MethodInfo,
	&IList_1_RemoveAt_m45742_MethodInfo,
	&IList_1_get_Item_m45738_MethodInfo,
	&IList_1_set_Item_m45739_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8863_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8862_il2cpp_TypeInfo,
	&IEnumerable_1_t8864_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8863_0_0_0;
extern Il2CppType IList_1_t8863_1_0_0;
struct IList_1_t8863;
extern Il2CppGenericClass IList_1_t8863_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8863_MethodInfos/* methods */
	, IList_1_t8863_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8863_il2cpp_TypeInfo/* element_class */
	, IList_1_t8863_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8863_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8863_0_0_0/* byval_arg */
	, &IList_1_t8863_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8863_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6837_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45743_MethodInfo;
static PropertyInfo IEnumerator_1_t6837____Current_PropertyInfo = 
{
	&IEnumerator_1_t6837_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45743_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6837_PropertyInfos[] =
{
	&IEnumerator_1_t6837____Current_PropertyInfo,
	NULL
};
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45743_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45743_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6837_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t2002_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45743_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6837_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45743_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6837_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4811_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_665MethodDeclarations.h"

extern TypeInfo DefaultDependencyAttribute_t2002_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26166_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t2002_m35177_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DefaultDependencyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DefaultDependencyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t2002_m35177(__this, p0, method) (DefaultDependencyAttribute_t2002 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4811____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4811, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4811____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26163_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4811____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4811_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26163_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4811____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4811_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26166_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4811_InternalEnumerator_1__ctor_m26162_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26162_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26162_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4811_InternalEnumerator_1__ctor_m26162_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26162_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26163_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26163_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26163_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26164_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26164_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26164_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26165_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26165_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26165_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26166_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26166_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t2002_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26166_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4811_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26162_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26163_MethodInfo,
	&InternalEnumerator_1_Dispose_m26164_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26165_MethodInfo,
	&InternalEnumerator_1_get_Current_m26166_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26165_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26164_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4811_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26163_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26165_MethodInfo,
	&InternalEnumerator_1_Dispose_m26164_MethodInfo,
	&InternalEnumerator_1_get_Current_m26166_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4811_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6837_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4811_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6837_il2cpp_TypeInfo, 7},
};
extern TypeInfo DefaultDependencyAttribute_t2002_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4811_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26166_MethodInfo/* Method Usage */,
	&DefaultDependencyAttribute_t2002_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t2002_m35177_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
	, InternalEnumerator_1_t4811_RGCTXData/* rgctx_data */
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
extern TypeInfo ICollection_1_t8865_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo ICollection_1_get_Count_m45744_MethodInfo;
static PropertyInfo ICollection_1_t8865____Count_PropertyInfo = 
{
	&ICollection_1_t8865_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45744_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45745_MethodInfo;
static PropertyInfo ICollection_1_t8865____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8865_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45745_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8865_PropertyInfos[] =
{
	&ICollection_1_t8865____Count_PropertyInfo,
	&ICollection_1_t8865____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45744_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45744_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45744_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45745_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45745_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45745_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
static ParameterInfo ICollection_1_t8865_ICollection_1_Add_m45746_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t2002_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45746_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45746_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8865_ICollection_1_Add_m45746_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45746_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45747_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45747_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45747_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
static ParameterInfo ICollection_1_t8865_ICollection_1_Contains_m45748_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t2002_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45748_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45748_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8865_ICollection_1_Contains_m45748_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45748_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttributeU5BU5D_t5074_0_0_0;
extern Il2CppType DefaultDependencyAttributeU5BU5D_t5074_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8865_ICollection_1_CopyTo_m45749_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttributeU5BU5D_t5074_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45749_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45749_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8865_ICollection_1_CopyTo_m45749_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45749_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
static ParameterInfo ICollection_1_t8865_ICollection_1_Remove_m45750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t2002_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45750_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45750_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8865_ICollection_1_Remove_m45750_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45750_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8865_MethodInfos[] =
{
	&ICollection_1_get_Count_m45744_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45745_MethodInfo,
	&ICollection_1_Add_m45746_MethodInfo,
	&ICollection_1_Clear_m45747_MethodInfo,
	&ICollection_1_Contains_m45748_MethodInfo,
	&ICollection_1_CopyTo_m45749_MethodInfo,
	&ICollection_1_Remove_m45750_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8867_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8865_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8867_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8865_0_0_0;
extern Il2CppType ICollection_1_t8865_1_0_0;
struct ICollection_1_t8865;
extern Il2CppGenericClass ICollection_1_t8865_GenericClass;
TypeInfo ICollection_1_t8865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8865_MethodInfos/* methods */
	, ICollection_1_t8865_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8865_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8865_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8865_0_0_0/* byval_arg */
	, &ICollection_1_t8865_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern Il2CppType IEnumerator_1_t6837_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45751_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45751_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8867_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45751_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8867_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45751_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8867_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8867_0_0_0;
extern Il2CppType IEnumerable_1_t8867_1_0_0;
struct IEnumerable_1_t8867;
extern Il2CppGenericClass IEnumerable_1_t8867_GenericClass;
TypeInfo IEnumerable_1_t8867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8867_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8867_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8867_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8867_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8867_0_0_0/* byval_arg */
	, &IEnumerable_1_t8867_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8867_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8866_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo IList_1_get_Item_m45752_MethodInfo;
extern MethodInfo IList_1_set_Item_m45753_MethodInfo;
static PropertyInfo IList_1_t8866____Item_PropertyInfo = 
{
	&IList_1_t8866_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45752_MethodInfo/* get */
	, &IList_1_set_Item_m45753_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8866_PropertyInfos[] =
{
	&IList_1_t8866____Item_PropertyInfo,
	NULL
};
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
static ParameterInfo IList_1_t8866_IList_1_IndexOf_m45754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t2002_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45754_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45754_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8866_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8866_IList_1_IndexOf_m45754_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45754_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
static ParameterInfo IList_1_t8866_IList_1_Insert_m45755_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t2002_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45755_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45755_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8866_IList_1_Insert_m45755_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45755_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8866_IList_1_RemoveAt_m45756_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45756_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45756_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8866_IList_1_RemoveAt_m45756_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45756_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8866_IList_1_get_Item_m45752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45752_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45752_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8866_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t2002_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8866_IList_1_get_Item_m45752_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45752_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType DefaultDependencyAttribute_t2002_0_0_0;
static ParameterInfo IList_1_t8866_IList_1_set_Item_m45753_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t2002_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45753_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45753_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8866_IList_1_set_Item_m45753_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45753_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8866_MethodInfos[] =
{
	&IList_1_IndexOf_m45754_MethodInfo,
	&IList_1_Insert_m45755_MethodInfo,
	&IList_1_RemoveAt_m45756_MethodInfo,
	&IList_1_get_Item_m45752_MethodInfo,
	&IList_1_set_Item_m45753_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8866_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8865_il2cpp_TypeInfo,
	&IEnumerable_1_t8867_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8866_0_0_0;
extern Il2CppType IList_1_t8866_1_0_0;
struct IList_1_t8866;
extern Il2CppGenericClass IList_1_t8866_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8866_MethodInfos/* methods */
	, IList_1_t8866_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8866_il2cpp_TypeInfo/* element_class */
	, IList_1_t8866_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8866_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8866_0_0_0/* byval_arg */
	, &IList_1_t8866_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8866_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo IEnumerator_1_get_Current_m45757_MethodInfo;
static PropertyInfo IEnumerator_1_t6839____Current_PropertyInfo = 
{
	&IEnumerator_1_t6839_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45757_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6839_PropertyInfos[] =
{
	&IEnumerator_1_t6839____Current_PropertyInfo,
	NULL
};
extern Il2CppType LoadHint_t2004_0_0_0;
extern void* RuntimeInvoker_LoadHint_t2004 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45757_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45757_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6839_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t2004_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t2004/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45757_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6839_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45757_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6839_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_666.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4812_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_666MethodDeclarations.h"

extern TypeInfo LoadHint_t2004_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26171_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoadHint_t2004_m35188_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.LoadHint>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.LoadHint>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoadHint_t2004_m35188 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26167_MethodInfo;
 void InternalEnumerator_1__ctor_m26167 (InternalEnumerator_1_t4812 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26171(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26171_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoadHint_t2004_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26169_MethodInfo;
 void InternalEnumerator_1_Dispose_m26169 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26170_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26170 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26171 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLoadHint_t2004_m35188(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoadHint_t2004_m35188_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4812____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4812, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4812____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4812____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4812_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26171_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4812_InternalEnumerator_1__ctor_m26167_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26167_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26167_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26167/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4812_InternalEnumerator_1__ctor_m26167_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26167_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26169_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26169_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26169/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26169_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26170_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26170_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26170/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26170_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t2004_0_0_0;
extern void* RuntimeInvoker_LoadHint_t2004 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26171_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26171_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26171/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t2004_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t2004/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26171_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4812_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26167_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168_MethodInfo,
	&InternalEnumerator_1_Dispose_m26169_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26170_MethodInfo,
	&InternalEnumerator_1_get_Current_m26171_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4812_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26168_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26170_MethodInfo,
	&InternalEnumerator_1_Dispose_m26169_MethodInfo,
	&InternalEnumerator_1_get_Current_m26171_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4812_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6839_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4812_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6839_il2cpp_TypeInfo, 7},
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8868_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo ICollection_1_get_Count_m45758_MethodInfo;
static PropertyInfo ICollection_1_t8868____Count_PropertyInfo = 
{
	&ICollection_1_t8868_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45758_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45759_MethodInfo;
static PropertyInfo ICollection_1_t8868____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8868_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45759_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8868_PropertyInfos[] =
{
	&ICollection_1_t8868____Count_PropertyInfo,
	&ICollection_1_t8868____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45758_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_Count()
MethodInfo ICollection_1_get_Count_m45758_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45758_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45759_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45759_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45759_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t2004_0_0_0;
extern Il2CppType LoadHint_t2004_0_0_0;
static ParameterInfo ICollection_1_t8868_ICollection_1_Add_m45760_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t2004_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45760_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Add(T)
MethodInfo ICollection_1_Add_m45760_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8868_ICollection_1_Add_m45760_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45760_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45761_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Clear()
MethodInfo ICollection_1_Clear_m45761_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45761_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t2004_0_0_0;
static ParameterInfo ICollection_1_t8868_ICollection_1_Contains_m45762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t2004_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45762_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Contains(T)
MethodInfo ICollection_1_Contains_m45762_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8868_ICollection_1_Contains_m45762_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45762_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHintU5BU5D_t5075_0_0_0;
extern Il2CppType LoadHintU5BU5D_t5075_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8868_ICollection_1_CopyTo_m45763_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoadHintU5BU5D_t5075_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45763_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45763_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8868_ICollection_1_CopyTo_m45763_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45763_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t2004_0_0_0;
static ParameterInfo ICollection_1_t8868_ICollection_1_Remove_m45764_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t2004_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45764_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Remove(T)
MethodInfo ICollection_1_Remove_m45764_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8868_ICollection_1_Remove_m45764_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45764_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8868_MethodInfos[] =
{
	&ICollection_1_get_Count_m45758_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45759_MethodInfo,
	&ICollection_1_Add_m45760_MethodInfo,
	&ICollection_1_Clear_m45761_MethodInfo,
	&ICollection_1_Contains_m45762_MethodInfo,
	&ICollection_1_CopyTo_m45763_MethodInfo,
	&ICollection_1_Remove_m45764_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8870_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8868_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8870_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8868_0_0_0;
extern Il2CppType ICollection_1_t8868_1_0_0;
struct ICollection_1_t8868;
extern Il2CppGenericClass ICollection_1_t8868_GenericClass;
TypeInfo ICollection_1_t8868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8868_MethodInfos/* methods */
	, ICollection_1_t8868_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8868_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8868_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8868_0_0_0/* byval_arg */
	, &ICollection_1_t8868_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8868_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType IEnumerator_1_t6839_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45765_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45765_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8870_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45765_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8870_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45765_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8870_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8870_0_0_0;
extern Il2CppType IEnumerable_1_t8870_1_0_0;
struct IEnumerable_1_t8870;
extern Il2CppGenericClass IEnumerable_1_t8870_GenericClass;
TypeInfo IEnumerable_1_t8870_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8870_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8870_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8870_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8870_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8870_0_0_0/* byval_arg */
	, &IEnumerable_1_t8870_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8870_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8869_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo IList_1_get_Item_m45766_MethodInfo;
extern MethodInfo IList_1_set_Item_m45767_MethodInfo;
static PropertyInfo IList_1_t8869____Item_PropertyInfo = 
{
	&IList_1_t8869_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45766_MethodInfo/* get */
	, &IList_1_set_Item_m45767_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8869_PropertyInfos[] =
{
	&IList_1_t8869____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoadHint_t2004_0_0_0;
static ParameterInfo IList_1_t8869_IList_1_IndexOf_m45768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t2004_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45768_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45768_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8869_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8869_IList_1_IndexOf_m45768_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45768_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType LoadHint_t2004_0_0_0;
static ParameterInfo IList_1_t8869_IList_1_Insert_m45769_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoadHint_t2004_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45769_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45769_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8869_IList_1_Insert_m45769_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45769_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8869_IList_1_RemoveAt_m45770_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45770_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45770_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8869_IList_1_RemoveAt_m45770_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45770_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8869_IList_1_get_Item_m45766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType LoadHint_t2004_0_0_0;
extern void* RuntimeInvoker_LoadHint_t2004_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45766_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45766_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8869_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t2004_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t2004_Int32_t63/* invoker_method */
	, IList_1_t8869_IList_1_get_Item_m45766_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45766_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType LoadHint_t2004_0_0_0;
static ParameterInfo IList_1_t8869_IList_1_set_Item_m45767_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoadHint_t2004_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45767_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45767_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8869_IList_1_set_Item_m45767_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45767_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8869_MethodInfos[] =
{
	&IList_1_IndexOf_m45768_MethodInfo,
	&IList_1_Insert_m45769_MethodInfo,
	&IList_1_RemoveAt_m45770_MethodInfo,
	&IList_1_get_Item_m45766_MethodInfo,
	&IList_1_set_Item_m45767_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8869_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8868_il2cpp_TypeInfo,
	&IEnumerable_1_t8870_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8869_0_0_0;
extern Il2CppType IList_1_t8869_1_0_0;
struct IList_1_t8869;
extern Il2CppGenericClass IList_1_t8869_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8869_MethodInfos/* methods */
	, IList_1_t8869_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8869_il2cpp_TypeInfo/* element_class */
	, IList_1_t8869_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8869_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8869_0_0_0/* byval_arg */
	, &IList_1_t8869_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8869_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45771_MethodInfo;
static PropertyInfo IEnumerator_1_t6841____Current_PropertyInfo = 
{
	&IEnumerator_1_t6841_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45771_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6841_PropertyInfos[] =
{
	&IEnumerator_1_t6841____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45771_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45771_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6841_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t2005_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45771_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6841_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45771_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6841_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_667.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4813_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_667MethodDeclarations.h"

extern TypeInfo StringFreezingAttribute_t2005_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26176_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringFreezingAttribute_t2005_m35199_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.StringFreezingAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.StringFreezingAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisStringFreezingAttribute_t2005_m35199(__this, p0, method) (StringFreezingAttribute_t2005 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4813____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4813, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4813____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26173_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4813____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4813_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26173_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4813____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4813_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26176_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4813_InternalEnumerator_1__ctor_m26172_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26172_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26172_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4813_InternalEnumerator_1__ctor_m26172_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26172_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26173_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26173_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26173_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26174_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26174_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26174_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26175_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26175_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26175_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26176_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26176_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t2005_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26176_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4813_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26172_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26173_MethodInfo,
	&InternalEnumerator_1_Dispose_m26174_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26175_MethodInfo,
	&InternalEnumerator_1_get_Current_m26176_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26175_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26174_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4813_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26173_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26175_MethodInfo,
	&InternalEnumerator_1_Dispose_m26174_MethodInfo,
	&InternalEnumerator_1_get_Current_m26176_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4813_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6841_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4813_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6841_il2cpp_TypeInfo, 7},
};
extern TypeInfo StringFreezingAttribute_t2005_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4813_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26176_MethodInfo/* Method Usage */,
	&StringFreezingAttribute_t2005_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisStringFreezingAttribute_t2005_m35199_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
	, InternalEnumerator_1_t4813_RGCTXData/* rgctx_data */
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
extern TypeInfo ICollection_1_t8871_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo ICollection_1_get_Count_m45772_MethodInfo;
static PropertyInfo ICollection_1_t8871____Count_PropertyInfo = 
{
	&ICollection_1_t8871_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45772_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45773_MethodInfo;
static PropertyInfo ICollection_1_t8871____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8871_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45773_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8871_PropertyInfos[] =
{
	&ICollection_1_t8871____Count_PropertyInfo,
	&ICollection_1_t8871____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45772_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45772_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45772_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45773_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45773_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45773_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
static ParameterInfo ICollection_1_t8871_ICollection_1_Add_m45774_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t2005_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45774_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45774_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8871_ICollection_1_Add_m45774_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45774_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45775_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45775_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45775_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
static ParameterInfo ICollection_1_t8871_ICollection_1_Contains_m45776_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t2005_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45776_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45776_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8871_ICollection_1_Contains_m45776_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45776_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttributeU5BU5D_t5076_0_0_0;
extern Il2CppType StringFreezingAttributeU5BU5D_t5076_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8871_ICollection_1_CopyTo_m45777_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttributeU5BU5D_t5076_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45777_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45777_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8871_ICollection_1_CopyTo_m45777_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45777_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
static ParameterInfo ICollection_1_t8871_ICollection_1_Remove_m45778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t2005_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45778_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45778_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8871_ICollection_1_Remove_m45778_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45778_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8871_MethodInfos[] =
{
	&ICollection_1_get_Count_m45772_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45773_MethodInfo,
	&ICollection_1_Add_m45774_MethodInfo,
	&ICollection_1_Clear_m45775_MethodInfo,
	&ICollection_1_Contains_m45776_MethodInfo,
	&ICollection_1_CopyTo_m45777_MethodInfo,
	&ICollection_1_Remove_m45778_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8873_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8871_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8873_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8871_0_0_0;
extern Il2CppType ICollection_1_t8871_1_0_0;
struct ICollection_1_t8871;
extern Il2CppGenericClass ICollection_1_t8871_GenericClass;
TypeInfo ICollection_1_t8871_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8871_MethodInfos/* methods */
	, ICollection_1_t8871_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8871_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8871_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8871_0_0_0/* byval_arg */
	, &ICollection_1_t8871_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8871_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType IEnumerator_1_t6841_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45779_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45779_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8873_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45779_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8873_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45779_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8873_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8873_0_0_0;
extern Il2CppType IEnumerable_1_t8873_1_0_0;
struct IEnumerable_1_t8873;
extern Il2CppGenericClass IEnumerable_1_t8873_GenericClass;
TypeInfo IEnumerable_1_t8873_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8873_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8873_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8873_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8873_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8873_0_0_0/* byval_arg */
	, &IEnumerable_1_t8873_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8873_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8872_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo IList_1_get_Item_m45780_MethodInfo;
extern MethodInfo IList_1_set_Item_m45781_MethodInfo;
static PropertyInfo IList_1_t8872____Item_PropertyInfo = 
{
	&IList_1_t8872_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45780_MethodInfo/* get */
	, &IList_1_set_Item_m45781_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8872_PropertyInfos[] =
{
	&IList_1_t8872____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
static ParameterInfo IList_1_t8872_IList_1_IndexOf_m45782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t2005_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45782_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45782_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8872_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8872_IList_1_IndexOf_m45782_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45782_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
static ParameterInfo IList_1_t8872_IList_1_Insert_m45783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t2005_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45783_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45783_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8872_IList_1_Insert_m45783_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45783_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8872_IList_1_RemoveAt_m45784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45784_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45784_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8872_IList_1_RemoveAt_m45784_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45784_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8872_IList_1_get_Item_m45780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45780_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45780_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8872_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t2005_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8872_IList_1_get_Item_m45780_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45780_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StringFreezingAttribute_t2005_0_0_0;
static ParameterInfo IList_1_t8872_IList_1_set_Item_m45781_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t2005_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45781_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45781_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8872_IList_1_set_Item_m45781_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45781_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8872_MethodInfos[] =
{
	&IList_1_IndexOf_m45782_MethodInfo,
	&IList_1_Insert_m45783_MethodInfo,
	&IList_1_RemoveAt_m45784_MethodInfo,
	&IList_1_get_Item_m45780_MethodInfo,
	&IList_1_set_Item_m45781_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8872_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8871_il2cpp_TypeInfo,
	&IEnumerable_1_t8873_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8872_0_0_0;
extern Il2CppType IList_1_t8872_1_0_0;
struct IList_1_t8872;
extern Il2CppGenericClass IList_1_t8872_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8872_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8872_MethodInfos/* methods */
	, IList_1_t8872_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8872_il2cpp_TypeInfo/* element_class */
	, IList_1_t8872_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8872_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8872_0_0_0/* byval_arg */
	, &IList_1_t8872_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8872_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo IEnumerator_1_get_Current_m45785_MethodInfo;
static PropertyInfo IEnumerator_1_t6843____Current_PropertyInfo = 
{
	&IEnumerator_1_t6843_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6843_PropertyInfos[] =
{
	&IEnumerator_1_t6843____Current_PropertyInfo,
	NULL
};
extern Il2CppType Cer_t2006_0_0_0;
extern void* RuntimeInvoker_Cer_t2006 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45785_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45785_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6843_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t2006_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t2006/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45785_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6843_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45785_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6843_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_668.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4814_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_668MethodDeclarations.h"

extern TypeInfo Cer_t2006_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26181_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCer_t2006_m35210_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Cer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Cer>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCer_t2006_m35210 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26177_MethodInfo;
 void InternalEnumerator_1__ctor_m26177 (InternalEnumerator_1_t4814 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26181(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26181_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Cer_t2006_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26179_MethodInfo;
 void InternalEnumerator_1_Dispose_m26179 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26180_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26180 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26181 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCer_t2006_m35210(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCer_t2006_m35210_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4814____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4814, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4814____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4814____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4814_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26181_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4814_InternalEnumerator_1__ctor_m26177_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26177_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26177_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26177/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4814_InternalEnumerator_1__ctor_m26177_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26177_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26179_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26179_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26179/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26179_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26180_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26180_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26180/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26180_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t2006_0_0_0;
extern void* RuntimeInvoker_Cer_t2006 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26181_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26181_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26181/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t2006_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t2006/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26181_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4814_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26177_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178_MethodInfo,
	&InternalEnumerator_1_Dispose_m26179_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26180_MethodInfo,
	&InternalEnumerator_1_get_Current_m26181_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4814_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26178_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26180_MethodInfo,
	&InternalEnumerator_1_Dispose_m26179_MethodInfo,
	&InternalEnumerator_1_get_Current_m26181_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4814_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6843_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4814_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6843_il2cpp_TypeInfo, 7},
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8874_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo ICollection_1_get_Count_m45786_MethodInfo;
static PropertyInfo ICollection_1_t8874____Count_PropertyInfo = 
{
	&ICollection_1_t8874_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45786_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45787_MethodInfo;
static PropertyInfo ICollection_1_t8874____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8874_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45787_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8874_PropertyInfos[] =
{
	&ICollection_1_t8874____Count_PropertyInfo,
	&ICollection_1_t8874____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45786_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_Count()
MethodInfo ICollection_1_get_Count_m45786_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45786_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45787_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45787_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45787_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t2006_0_0_0;
extern Il2CppType Cer_t2006_0_0_0;
static ParameterInfo ICollection_1_t8874_ICollection_1_Add_m45788_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t2006_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45788_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Add(T)
MethodInfo ICollection_1_Add_m45788_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8874_ICollection_1_Add_m45788_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45788_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45789_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Clear()
MethodInfo ICollection_1_Clear_m45789_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45789_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t2006_0_0_0;
static ParameterInfo ICollection_1_t8874_ICollection_1_Contains_m45790_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t2006_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45790_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Contains(T)
MethodInfo ICollection_1_Contains_m45790_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8874_ICollection_1_Contains_m45790_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45790_GenericMethod/* genericMethod */

};
extern Il2CppType CerU5BU5D_t5077_0_0_0;
extern Il2CppType CerU5BU5D_t5077_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8874_ICollection_1_CopyTo_m45791_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CerU5BU5D_t5077_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45791_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45791_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8874_ICollection_1_CopyTo_m45791_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45791_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t2006_0_0_0;
static ParameterInfo ICollection_1_t8874_ICollection_1_Remove_m45792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t2006_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45792_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Remove(T)
MethodInfo ICollection_1_Remove_m45792_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8874_ICollection_1_Remove_m45792_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45792_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8874_MethodInfos[] =
{
	&ICollection_1_get_Count_m45786_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45787_MethodInfo,
	&ICollection_1_Add_m45788_MethodInfo,
	&ICollection_1_Clear_m45789_MethodInfo,
	&ICollection_1_Contains_m45790_MethodInfo,
	&ICollection_1_CopyTo_m45791_MethodInfo,
	&ICollection_1_Remove_m45792_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8876_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8874_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8876_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8874_0_0_0;
extern Il2CppType ICollection_1_t8874_1_0_0;
struct ICollection_1_t8874;
extern Il2CppGenericClass ICollection_1_t8874_GenericClass;
TypeInfo ICollection_1_t8874_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8874_MethodInfos/* methods */
	, ICollection_1_t8874_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8874_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8874_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8874_0_0_0/* byval_arg */
	, &ICollection_1_t8874_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8874_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType IEnumerator_1_t6843_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45793_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45793_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8876_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45793_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8876_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45793_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8876_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8876_0_0_0;
extern Il2CppType IEnumerable_1_t8876_1_0_0;
struct IEnumerable_1_t8876;
extern Il2CppGenericClass IEnumerable_1_t8876_GenericClass;
TypeInfo IEnumerable_1_t8876_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8876_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8876_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8876_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8876_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8876_0_0_0/* byval_arg */
	, &IEnumerable_1_t8876_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8876_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8875_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo IList_1_get_Item_m45794_MethodInfo;
extern MethodInfo IList_1_set_Item_m45795_MethodInfo;
static PropertyInfo IList_1_t8875____Item_PropertyInfo = 
{
	&IList_1_t8875_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45794_MethodInfo/* get */
	, &IList_1_set_Item_m45795_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8875_PropertyInfos[] =
{
	&IList_1_t8875____Item_PropertyInfo,
	NULL
};
extern Il2CppType Cer_t2006_0_0_0;
static ParameterInfo IList_1_t8875_IList_1_IndexOf_m45796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t2006_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45796_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45796_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8875_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8875_IList_1_IndexOf_m45796_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45796_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Cer_t2006_0_0_0;
static ParameterInfo IList_1_t8875_IList_1_Insert_m45797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Cer_t2006_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45797_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45797_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8875_IList_1_Insert_m45797_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45797_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8875_IList_1_RemoveAt_m45798_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45798_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45798_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8875_IList_1_RemoveAt_m45798_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45798_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8875_IList_1_get_Item_m45794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Cer_t2006_0_0_0;
extern void* RuntimeInvoker_Cer_t2006_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45794_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45794_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8875_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t2006_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t2006_Int32_t63/* invoker_method */
	, IList_1_t8875_IList_1_get_Item_m45794_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45794_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Cer_t2006_0_0_0;
static ParameterInfo IList_1_t8875_IList_1_set_Item_m45795_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Cer_t2006_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45795_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45795_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8875_IList_1_set_Item_m45795_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45795_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8875_MethodInfos[] =
{
	&IList_1_IndexOf_m45796_MethodInfo,
	&IList_1_Insert_m45797_MethodInfo,
	&IList_1_RemoveAt_m45798_MethodInfo,
	&IList_1_get_Item_m45794_MethodInfo,
	&IList_1_set_Item_m45795_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8875_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8874_il2cpp_TypeInfo,
	&IEnumerable_1_t8876_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8875_0_0_0;
extern Il2CppType IList_1_t8875_1_0_0;
struct IList_1_t8875;
extern Il2CppGenericClass IList_1_t8875_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8875_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8875_MethodInfos/* methods */
	, IList_1_t8875_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8875_il2cpp_TypeInfo/* element_class */
	, IList_1_t8875_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8875_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8875_0_0_0/* byval_arg */
	, &IList_1_t8875_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8875_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo IEnumerator_1_get_Current_m45799_MethodInfo;
static PropertyInfo IEnumerator_1_t6845____Current_PropertyInfo = 
{
	&IEnumerator_1_t6845_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45799_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6845_PropertyInfos[] =
{
	&IEnumerator_1_t6845____Current_PropertyInfo,
	NULL
};
extern Il2CppType Consistency_t2007_0_0_0;
extern void* RuntimeInvoker_Consistency_t2007 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45799_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45799_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6845_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t2007_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t2007/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45799_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6845_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45799_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6845_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_669.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4815_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_669MethodDeclarations.h"

extern TypeInfo Consistency_t2007_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26186_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConsistency_t2007_m35221_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Consistency>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Consistency>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConsistency_t2007_m35221 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26182_MethodInfo;
 void InternalEnumerator_1__ctor_m26182 (InternalEnumerator_1_t4815 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26186(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26186_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Consistency_t2007_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26184_MethodInfo;
 void InternalEnumerator_1_Dispose_m26184 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26185_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26185 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26186 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisConsistency_t2007_m35221(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConsistency_t2007_m35221_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4815____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4815, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4815____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4815____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4815_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26186_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4815_InternalEnumerator_1__ctor_m26182_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26182_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26182_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26182/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4815_InternalEnumerator_1__ctor_m26182_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26182_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26184_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26184_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26184/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26184_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26185_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26185_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26185/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26185_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t2007_0_0_0;
extern void* RuntimeInvoker_Consistency_t2007 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26186_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26186_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26186/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t2007_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t2007/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26186_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4815_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26182_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183_MethodInfo,
	&InternalEnumerator_1_Dispose_m26184_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26185_MethodInfo,
	&InternalEnumerator_1_get_Current_m26186_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4815_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26183_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26185_MethodInfo,
	&InternalEnumerator_1_Dispose_m26184_MethodInfo,
	&InternalEnumerator_1_get_Current_m26186_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4815_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6845_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4815_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6845_il2cpp_TypeInfo, 7},
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8877_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo ICollection_1_get_Count_m45800_MethodInfo;
static PropertyInfo ICollection_1_t8877____Count_PropertyInfo = 
{
	&ICollection_1_t8877_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45801_MethodInfo;
static PropertyInfo ICollection_1_t8877____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8877_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45801_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8877_PropertyInfos[] =
{
	&ICollection_1_t8877____Count_PropertyInfo,
	&ICollection_1_t8877____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45800_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_Count()
MethodInfo ICollection_1_get_Count_m45800_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45800_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45801_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45801_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45801_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t2007_0_0_0;
extern Il2CppType Consistency_t2007_0_0_0;
static ParameterInfo ICollection_1_t8877_ICollection_1_Add_m45802_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t2007_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45802_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Add(T)
MethodInfo ICollection_1_Add_m45802_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8877_ICollection_1_Add_m45802_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45802_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45803_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Clear()
MethodInfo ICollection_1_Clear_m45803_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45803_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t2007_0_0_0;
static ParameterInfo ICollection_1_t8877_ICollection_1_Contains_m45804_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t2007_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45804_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Contains(T)
MethodInfo ICollection_1_Contains_m45804_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8877_ICollection_1_Contains_m45804_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45804_GenericMethod/* genericMethod */

};
extern Il2CppType ConsistencyU5BU5D_t5078_0_0_0;
extern Il2CppType ConsistencyU5BU5D_t5078_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8877_ICollection_1_CopyTo_m45805_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConsistencyU5BU5D_t5078_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45805_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45805_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8877_ICollection_1_CopyTo_m45805_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45805_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t2007_0_0_0;
static ParameterInfo ICollection_1_t8877_ICollection_1_Remove_m45806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t2007_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45806_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Remove(T)
MethodInfo ICollection_1_Remove_m45806_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8877_ICollection_1_Remove_m45806_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45806_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8877_MethodInfos[] =
{
	&ICollection_1_get_Count_m45800_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45801_MethodInfo,
	&ICollection_1_Add_m45802_MethodInfo,
	&ICollection_1_Clear_m45803_MethodInfo,
	&ICollection_1_Contains_m45804_MethodInfo,
	&ICollection_1_CopyTo_m45805_MethodInfo,
	&ICollection_1_Remove_m45806_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8879_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8877_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8879_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8877_0_0_0;
extern Il2CppType ICollection_1_t8877_1_0_0;
struct ICollection_1_t8877;
extern Il2CppGenericClass ICollection_1_t8877_GenericClass;
TypeInfo ICollection_1_t8877_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8877_MethodInfos/* methods */
	, ICollection_1_t8877_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8877_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8877_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8877_0_0_0/* byval_arg */
	, &ICollection_1_t8877_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8877_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType IEnumerator_1_t6845_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45807_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45807_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8879_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45807_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8879_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45807_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8879_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8879_0_0_0;
extern Il2CppType IEnumerable_1_t8879_1_0_0;
struct IEnumerable_1_t8879;
extern Il2CppGenericClass IEnumerable_1_t8879_GenericClass;
TypeInfo IEnumerable_1_t8879_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8879_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8879_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8879_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8879_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8879_0_0_0/* byval_arg */
	, &IEnumerable_1_t8879_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8879_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8878_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo IList_1_get_Item_m45808_MethodInfo;
extern MethodInfo IList_1_set_Item_m45809_MethodInfo;
static PropertyInfo IList_1_t8878____Item_PropertyInfo = 
{
	&IList_1_t8878_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45808_MethodInfo/* get */
	, &IList_1_set_Item_m45809_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8878_PropertyInfos[] =
{
	&IList_1_t8878____Item_PropertyInfo,
	NULL
};
extern Il2CppType Consistency_t2007_0_0_0;
static ParameterInfo IList_1_t8878_IList_1_IndexOf_m45810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t2007_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45810_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45810_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8878_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8878_IList_1_IndexOf_m45810_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45810_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Consistency_t2007_0_0_0;
static ParameterInfo IList_1_t8878_IList_1_Insert_m45811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Consistency_t2007_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45811_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45811_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8878_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8878_IList_1_Insert_m45811_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45811_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8878_IList_1_RemoveAt_m45812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45812_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45812_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8878_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8878_IList_1_RemoveAt_m45812_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45812_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8878_IList_1_get_Item_m45808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Consistency_t2007_0_0_0;
extern void* RuntimeInvoker_Consistency_t2007_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45808_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45808_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8878_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t2007_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t2007_Int32_t63/* invoker_method */
	, IList_1_t8878_IList_1_get_Item_m45808_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45808_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Consistency_t2007_0_0_0;
static ParameterInfo IList_1_t8878_IList_1_set_Item_m45809_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Consistency_t2007_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45809_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45809_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8878_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8878_IList_1_set_Item_m45809_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45809_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8878_MethodInfos[] =
{
	&IList_1_IndexOf_m45810_MethodInfo,
	&IList_1_Insert_m45811_MethodInfo,
	&IList_1_RemoveAt_m45812_MethodInfo,
	&IList_1_get_Item_m45808_MethodInfo,
	&IList_1_set_Item_m45809_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8878_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8877_il2cpp_TypeInfo,
	&IEnumerable_1_t8879_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8878_0_0_0;
extern Il2CppType IList_1_t8878_1_0_0;
struct IList_1_t8878;
extern Il2CppGenericClass IList_1_t8878_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8878_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8878_MethodInfos/* methods */
	, IList_1_t8878_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8878_il2cpp_TypeInfo/* element_class */
	, IList_1_t8878_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8878_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8878_0_0_0/* byval_arg */
	, &IList_1_t8878_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8878_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45813_MethodInfo;
static PropertyInfo IEnumerator_1_t6847____Current_PropertyInfo = 
{
	&IEnumerator_1_t6847_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45813_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6847_PropertyInfos[] =
{
	&IEnumerator_1_t6847____Current_PropertyInfo,
	NULL
};
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45813_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45813_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6847_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t2009_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45813_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6847_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45813_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6847_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4816_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_670MethodDeclarations.h"

extern TypeInfo ReliabilityContractAttribute_t2009_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26191_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisReliabilityContractAttribute_t2009_m35232_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisReliabilityContractAttribute_t2009_m35232(__this, p0, method) (ReliabilityContractAttribute_t2009 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4816____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4816, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4816____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26188_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4816____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26188_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4816____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26191_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4816_InternalEnumerator_1__ctor_m26187_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26187_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26187_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4816_InternalEnumerator_1__ctor_m26187_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26187_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26188_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26188_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26188_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26189_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26189_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26189_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26190_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26190_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26190_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26191_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26191_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t2009_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26191_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4816_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26187_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26188_MethodInfo,
	&InternalEnumerator_1_Dispose_m26189_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26190_MethodInfo,
	&InternalEnumerator_1_get_Current_m26191_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26190_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26189_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4816_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26188_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26190_MethodInfo,
	&InternalEnumerator_1_Dispose_m26189_MethodInfo,
	&InternalEnumerator_1_get_Current_m26191_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4816_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6847_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4816_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6847_il2cpp_TypeInfo, 7},
};
extern TypeInfo ReliabilityContractAttribute_t2009_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4816_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26191_MethodInfo/* Method Usage */,
	&ReliabilityContractAttribute_t2009_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisReliabilityContractAttribute_t2009_m35232_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
	, InternalEnumerator_1_t4816_RGCTXData/* rgctx_data */
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
extern TypeInfo ICollection_1_t8880_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo ICollection_1_get_Count_m45814_MethodInfo;
static PropertyInfo ICollection_1_t8880____Count_PropertyInfo = 
{
	&ICollection_1_t8880_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45814_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45815_MethodInfo;
static PropertyInfo ICollection_1_t8880____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8880_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45815_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8880_PropertyInfos[] =
{
	&ICollection_1_t8880____Count_PropertyInfo,
	&ICollection_1_t8880____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45814_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45814_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45814_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45815_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45815_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45815_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
static ParameterInfo ICollection_1_t8880_ICollection_1_Add_m45816_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t2009_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45816_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45816_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8880_ICollection_1_Add_m45816_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45816_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45817_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45817_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45817_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
static ParameterInfo ICollection_1_t8880_ICollection_1_Contains_m45818_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t2009_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45818_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45818_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8880_ICollection_1_Contains_m45818_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45818_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttributeU5BU5D_t5079_0_0_0;
extern Il2CppType ReliabilityContractAttributeU5BU5D_t5079_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8880_ICollection_1_CopyTo_m45819_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttributeU5BU5D_t5079_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45819_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45819_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8880_ICollection_1_CopyTo_m45819_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45819_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
static ParameterInfo ICollection_1_t8880_ICollection_1_Remove_m45820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t2009_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45820_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45820_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8880_ICollection_1_Remove_m45820_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45820_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8880_MethodInfos[] =
{
	&ICollection_1_get_Count_m45814_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45815_MethodInfo,
	&ICollection_1_Add_m45816_MethodInfo,
	&ICollection_1_Clear_m45817_MethodInfo,
	&ICollection_1_Contains_m45818_MethodInfo,
	&ICollection_1_CopyTo_m45819_MethodInfo,
	&ICollection_1_Remove_m45820_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8882_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8880_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8882_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8880_0_0_0;
extern Il2CppType ICollection_1_t8880_1_0_0;
struct ICollection_1_t8880;
extern Il2CppGenericClass ICollection_1_t8880_GenericClass;
TypeInfo ICollection_1_t8880_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8880_MethodInfos/* methods */
	, ICollection_1_t8880_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8880_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8880_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8880_0_0_0/* byval_arg */
	, &ICollection_1_t8880_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8880_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType IEnumerator_1_t6847_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45821_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45821_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8882_il2cpp_TypeInfo/* declaring_type */
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
	, &IEnumerable_1_GetEnumerator_m45821_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8882_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45821_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8882_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8882_0_0_0;
extern Il2CppType IEnumerable_1_t8882_1_0_0;
struct IEnumerable_1_t8882;
extern Il2CppGenericClass IEnumerable_1_t8882_GenericClass;
TypeInfo IEnumerable_1_t8882_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8882_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8882_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8882_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8882_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8882_0_0_0/* byval_arg */
	, &IEnumerable_1_t8882_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8882_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8881_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo IList_1_get_Item_m45822_MethodInfo;
extern MethodInfo IList_1_set_Item_m45823_MethodInfo;
static PropertyInfo IList_1_t8881____Item_PropertyInfo = 
{
	&IList_1_t8881_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45822_MethodInfo/* get */
	, &IList_1_set_Item_m45823_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8881_PropertyInfos[] =
{
	&IList_1_t8881____Item_PropertyInfo,
	NULL
};
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
static ParameterInfo IList_1_t8881_IList_1_IndexOf_m45824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t2009_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45824_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45824_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8881_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8881_IList_1_IndexOf_m45824_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45824_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
static ParameterInfo IList_1_t8881_IList_1_Insert_m45825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t2009_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45825_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45825_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8881_IList_1_Insert_m45825_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45825_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8881_IList_1_RemoveAt_m45826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45826_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45826_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8881_IList_1_RemoveAt_m45826_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45826_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8881_IList_1_get_Item_m45822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45822_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45822_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8881_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t2009_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8881_IList_1_get_Item_m45822_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45822_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ReliabilityContractAttribute_t2009_0_0_0;
static ParameterInfo IList_1_t8881_IList_1_set_Item_m45823_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t2009_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45823_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45823_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8881_IList_1_set_Item_m45823_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45823_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8881_MethodInfos[] =
{
	&IList_1_IndexOf_m45824_MethodInfo,
	&IList_1_Insert_m45825_MethodInfo,
	&IList_1_RemoveAt_m45826_MethodInfo,
	&IList_1_get_Item_m45822_MethodInfo,
	&IList_1_set_Item_m45823_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8881_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8880_il2cpp_TypeInfo,
	&IEnumerable_1_t8882_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8881_0_0_0;
extern Il2CppType IList_1_t8881_1_0_0;
struct IList_1_t8881;
extern Il2CppGenericClass IList_1_t8881_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8881_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8881_MethodInfos/* methods */
	, IList_1_t8881_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8881_il2cpp_TypeInfo/* element_class */
	, IList_1_t8881_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8881_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8881_0_0_0/* byval_arg */
	, &IList_1_t8881_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8881_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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

// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo IEnumerator_1_get_Current_m45827_MethodInfo;
static PropertyInfo IEnumerator_1_t6849____Current_PropertyInfo = 
{
	&IEnumerator_1_t6849_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45827_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6849_PropertyInfos[] =
{
	&IEnumerator_1_t6849____Current_PropertyInfo,
	NULL
};
extern Il2CppType CallingConvention_t2011_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t2011 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45827_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45827_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6849_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t2011_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t2011/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45827_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6849_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45827_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6849_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4817_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_671MethodDeclarations.h"

extern TypeInfo CallingConvention_t2011_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26196_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCallingConvention_t2011_m35243_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CallingConvention>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CallingConvention>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCallingConvention_t2011_m35243 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26192_MethodInfo;
 void InternalEnumerator_1__ctor_m26192 (InternalEnumerator_1_t4817 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26196(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26196_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CallingConvention_t2011_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26194_MethodInfo;
 void InternalEnumerator_1_Dispose_m26194 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26195_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26195 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26196 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCallingConvention_t2011_m35243(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCallingConvention_t2011_m35243_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4817____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4817, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4817____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4817____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4817_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26196_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4817_InternalEnumerator_1__ctor_m26192_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26192_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26192_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26192/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4817_InternalEnumerator_1__ctor_m26192_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26192_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26194_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26194_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26194/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26194_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26195_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26195_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26195/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26195_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t2011_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t2011 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26196_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26196_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26196/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t2011_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t2011/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26196_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4817_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26192_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193_MethodInfo,
	&InternalEnumerator_1_Dispose_m26194_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26195_MethodInfo,
	&InternalEnumerator_1_get_Current_m26196_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4817_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26193_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26195_MethodInfo,
	&InternalEnumerator_1_Dispose_m26194_MethodInfo,
	&InternalEnumerator_1_get_Current_m26196_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4817_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6849_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4817_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6849_il2cpp_TypeInfo, 7},
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8883_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo ICollection_1_get_Count_m45828_MethodInfo;
static PropertyInfo ICollection_1_t8883____Count_PropertyInfo = 
{
	&ICollection_1_t8883_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45828_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45829_MethodInfo;
static PropertyInfo ICollection_1_t8883____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8883_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45829_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8883_PropertyInfos[] =
{
	&ICollection_1_t8883____Count_PropertyInfo,
	&ICollection_1_t8883____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45828_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_Count()
MethodInfo ICollection_1_get_Count_m45828_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45828_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45829_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45829_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45829_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t2011_0_0_0;
extern Il2CppType CallingConvention_t2011_0_0_0;
static ParameterInfo ICollection_1_t8883_ICollection_1_Add_m45830_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t2011_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45830_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Add(T)
MethodInfo ICollection_1_Add_m45830_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8883_ICollection_1_Add_m45830_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45830_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45831_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Clear()
MethodInfo ICollection_1_Clear_m45831_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45831_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t2011_0_0_0;
static ParameterInfo ICollection_1_t8883_ICollection_1_Contains_m45832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t2011_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45832_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Contains(T)
MethodInfo ICollection_1_Contains_m45832_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8883_ICollection_1_Contains_m45832_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45832_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventionU5BU5D_t5080_0_0_0;
extern Il2CppType CallingConventionU5BU5D_t5080_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8883_ICollection_1_CopyTo_m45833_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventionU5BU5D_t5080_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45833_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45833_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8883_ICollection_1_CopyTo_m45833_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45833_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t2011_0_0_0;
static ParameterInfo ICollection_1_t8883_ICollection_1_Remove_m45834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t2011_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45834_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Remove(T)
MethodInfo ICollection_1_Remove_m45834_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8883_ICollection_1_Remove_m45834_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45834_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8883_MethodInfos[] =
{
	&ICollection_1_get_Count_m45828_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45829_MethodInfo,
	&ICollection_1_Add_m45830_MethodInfo,
	&ICollection_1_Clear_m45831_MethodInfo,
	&ICollection_1_Contains_m45832_MethodInfo,
	&ICollection_1_CopyTo_m45833_MethodInfo,
	&ICollection_1_Remove_m45834_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8885_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8883_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8885_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8883_0_0_0;
extern Il2CppType ICollection_1_t8883_1_0_0;
struct ICollection_1_t8883;
extern Il2CppGenericClass ICollection_1_t8883_GenericClass;
TypeInfo ICollection_1_t8883_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8883_MethodInfos/* methods */
	, ICollection_1_t8883_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8883_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8883_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8883_0_0_0/* byval_arg */
	, &ICollection_1_t8883_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8883_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType IEnumerator_1_t6849_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45835_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45835_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8885_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6849_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45835_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8885_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45835_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8885_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8885_0_0_0;
extern Il2CppType IEnumerable_1_t8885_1_0_0;
struct IEnumerable_1_t8885;
extern Il2CppGenericClass IEnumerable_1_t8885_GenericClass;
TypeInfo IEnumerable_1_t8885_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8885_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8885_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8885_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8885_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8885_0_0_0/* byval_arg */
	, &IEnumerable_1_t8885_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8885_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8884_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo IList_1_get_Item_m45836_MethodInfo;
extern MethodInfo IList_1_set_Item_m45837_MethodInfo;
static PropertyInfo IList_1_t8884____Item_PropertyInfo = 
{
	&IList_1_t8884_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45836_MethodInfo/* get */
	, &IList_1_set_Item_m45837_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8884_PropertyInfos[] =
{
	&IList_1_t8884____Item_PropertyInfo,
	NULL
};
extern Il2CppType CallingConvention_t2011_0_0_0;
static ParameterInfo IList_1_t8884_IList_1_IndexOf_m45838_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t2011_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45838_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45838_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8884_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8884_IList_1_IndexOf_m45838_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45838_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CallingConvention_t2011_0_0_0;
static ParameterInfo IList_1_t8884_IList_1_Insert_m45839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t2011_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45839_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45839_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8884_IList_1_Insert_m45839_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45839_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8884_IList_1_RemoveAt_m45840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45840_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45840_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8884_IList_1_RemoveAt_m45840_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45840_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8884_IList_1_get_Item_m45836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType CallingConvention_t2011_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t2011_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45836_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45836_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8884_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t2011_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t2011_Int32_t63/* invoker_method */
	, IList_1_t8884_IList_1_get_Item_m45836_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45836_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CallingConvention_t2011_0_0_0;
static ParameterInfo IList_1_t8884_IList_1_set_Item_m45837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t2011_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45837_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45837_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8884_IList_1_set_Item_m45837_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45837_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8884_MethodInfos[] =
{
	&IList_1_IndexOf_m45838_MethodInfo,
	&IList_1_Insert_m45839_MethodInfo,
	&IList_1_RemoveAt_m45840_MethodInfo,
	&IList_1_get_Item_m45836_MethodInfo,
	&IList_1_set_Item_m45837_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8884_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8883_il2cpp_TypeInfo,
	&IEnumerable_1_t8885_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8884_0_0_0;
extern Il2CppType IList_1_t8884_1_0_0;
struct IList_1_t8884;
extern Il2CppGenericClass IList_1_t8884_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8884_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8884_MethodInfos/* methods */
	, IList_1_t8884_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8884_il2cpp_TypeInfo/* element_class */
	, IList_1_t8884_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8884_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8884_0_0_0/* byval_arg */
	, &IList_1_t8884_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8884_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6851_il2cpp_TypeInfo;

// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo IEnumerator_1_get_Current_m45841_MethodInfo;
static PropertyInfo IEnumerator_1_t6851____Current_PropertyInfo = 
{
	&IEnumerator_1_t6851_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45841_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6851_PropertyInfos[] =
{
	&IEnumerator_1_t6851____Current_PropertyInfo,
	NULL
};
extern Il2CppType CharSet_t2012_0_0_0;
extern void* RuntimeInvoker_CharSet_t2012 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45841_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45841_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6851_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t2012_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t2012/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45841_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6851_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45841_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6851_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6851_0_0_0;
extern Il2CppType IEnumerator_1_t6851_1_0_0;
struct IEnumerator_1_t6851;
extern Il2CppGenericClass IEnumerator_1_t6851_GenericClass;
TypeInfo IEnumerator_1_t6851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6851_MethodInfos/* methods */
	, IEnumerator_1_t6851_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6851_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6851_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6851_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6851_0_0_0/* byval_arg */
	, &IEnumerator_1_t6851_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6851_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4818_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_672MethodDeclarations.h"

extern TypeInfo CharSet_t2012_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26201_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCharSet_t2012_m35254_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CharSet>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CharSet>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCharSet_t2012_m35254 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26197_MethodInfo;
 void InternalEnumerator_1__ctor_m26197 (InternalEnumerator_1_t4818 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26201(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26201_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CharSet_t2012_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26199_MethodInfo;
 void InternalEnumerator_1_Dispose_m26199 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26200_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26200 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26201 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCharSet_t2012_m35254(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCharSet_t2012_m35254_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4818____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4818, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4818____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4818____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4818_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26201_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4818_InternalEnumerator_1__ctor_m26197_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26197_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26197_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26197/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4818_InternalEnumerator_1__ctor_m26197_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26197_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26199_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26199_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26199/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26199_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26200_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26200_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26200/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26200_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t2012_0_0_0;
extern void* RuntimeInvoker_CharSet_t2012 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26201_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26201_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26201/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t2012_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t2012/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26201_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4818_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26197_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198_MethodInfo,
	&InternalEnumerator_1_Dispose_m26199_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26200_MethodInfo,
	&InternalEnumerator_1_get_Current_m26201_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4818_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26198_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26200_MethodInfo,
	&InternalEnumerator_1_Dispose_m26199_MethodInfo,
	&InternalEnumerator_1_get_Current_m26201_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4818_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6851_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4818_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6851_il2cpp_TypeInfo, 7},
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8886_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo ICollection_1_get_Count_m45842_MethodInfo;
static PropertyInfo ICollection_1_t8886____Count_PropertyInfo = 
{
	&ICollection_1_t8886_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45842_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45843_MethodInfo;
static PropertyInfo ICollection_1_t8886____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8886_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45843_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8886_PropertyInfos[] =
{
	&ICollection_1_t8886____Count_PropertyInfo,
	&ICollection_1_t8886____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45842_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_Count()
MethodInfo ICollection_1_get_Count_m45842_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45842_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45843_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45843_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45843_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t2012_0_0_0;
extern Il2CppType CharSet_t2012_0_0_0;
static ParameterInfo ICollection_1_t8886_ICollection_1_Add_m45844_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t2012_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45844_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Add(T)
MethodInfo ICollection_1_Add_m45844_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8886_ICollection_1_Add_m45844_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45844_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45845_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Clear()
MethodInfo ICollection_1_Clear_m45845_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45845_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t2012_0_0_0;
static ParameterInfo ICollection_1_t8886_ICollection_1_Contains_m45846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t2012_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45846_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Contains(T)
MethodInfo ICollection_1_Contains_m45846_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8886_ICollection_1_Contains_m45846_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45846_GenericMethod/* genericMethod */

};
extern Il2CppType CharSetU5BU5D_t5081_0_0_0;
extern Il2CppType CharSetU5BU5D_t5081_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8886_ICollection_1_CopyTo_m45847_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CharSetU5BU5D_t5081_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45847_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45847_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8886_ICollection_1_CopyTo_m45847_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45847_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t2012_0_0_0;
static ParameterInfo ICollection_1_t8886_ICollection_1_Remove_m45848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t2012_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45848_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Remove(T)
MethodInfo ICollection_1_Remove_m45848_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8886_ICollection_1_Remove_m45848_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45848_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8886_MethodInfos[] =
{
	&ICollection_1_get_Count_m45842_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45843_MethodInfo,
	&ICollection_1_Add_m45844_MethodInfo,
	&ICollection_1_Clear_m45845_MethodInfo,
	&ICollection_1_Contains_m45846_MethodInfo,
	&ICollection_1_CopyTo_m45847_MethodInfo,
	&ICollection_1_Remove_m45848_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8888_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8886_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8888_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8886_0_0_0;
extern Il2CppType ICollection_1_t8886_1_0_0;
struct ICollection_1_t8886;
extern Il2CppGenericClass ICollection_1_t8886_GenericClass;
TypeInfo ICollection_1_t8886_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8886_MethodInfos/* methods */
	, ICollection_1_t8886_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8886_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8886_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8886_0_0_0/* byval_arg */
	, &ICollection_1_t8886_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8886_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType IEnumerator_1_t6851_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45849_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45849_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8888_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6851_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45849_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8888_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45849_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8888_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8888_0_0_0;
extern Il2CppType IEnumerable_1_t8888_1_0_0;
struct IEnumerable_1_t8888;
extern Il2CppGenericClass IEnumerable_1_t8888_GenericClass;
TypeInfo IEnumerable_1_t8888_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8888_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8888_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8888_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8888_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8888_0_0_0/* byval_arg */
	, &IEnumerable_1_t8888_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8888_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8887_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo IList_1_get_Item_m45850_MethodInfo;
extern MethodInfo IList_1_set_Item_m45851_MethodInfo;
static PropertyInfo IList_1_t8887____Item_PropertyInfo = 
{
	&IList_1_t8887_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45850_MethodInfo/* get */
	, &IList_1_set_Item_m45851_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8887_PropertyInfos[] =
{
	&IList_1_t8887____Item_PropertyInfo,
	NULL
};
extern Il2CppType CharSet_t2012_0_0_0;
static ParameterInfo IList_1_t8887_IList_1_IndexOf_m45852_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t2012_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45852_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45852_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8887_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8887_IList_1_IndexOf_m45852_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45852_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CharSet_t2012_0_0_0;
static ParameterInfo IList_1_t8887_IList_1_Insert_m45853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CharSet_t2012_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45853_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45853_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8887_IList_1_Insert_m45853_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45853_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8887_IList_1_RemoveAt_m45854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45854_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45854_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8887_IList_1_RemoveAt_m45854_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45854_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8887_IList_1_get_Item_m45850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType CharSet_t2012_0_0_0;
extern void* RuntimeInvoker_CharSet_t2012_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45850_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45850_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8887_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t2012_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t2012_Int32_t63/* invoker_method */
	, IList_1_t8887_IList_1_get_Item_m45850_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45850_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CharSet_t2012_0_0_0;
static ParameterInfo IList_1_t8887_IList_1_set_Item_m45851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CharSet_t2012_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45851_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45851_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8887_IList_1_set_Item_m45851_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45851_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8887_MethodInfos[] =
{
	&IList_1_IndexOf_m45852_MethodInfo,
	&IList_1_Insert_m45853_MethodInfo,
	&IList_1_RemoveAt_m45854_MethodInfo,
	&IList_1_get_Item_m45850_MethodInfo,
	&IList_1_set_Item_m45851_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8887_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8886_il2cpp_TypeInfo,
	&IEnumerable_1_t8888_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8887_0_0_0;
extern Il2CppType IList_1_t8887_1_0_0;
struct IList_1_t8887;
extern Il2CppGenericClass IList_1_t8887_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8887_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8887_MethodInfos/* methods */
	, IList_1_t8887_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8887_il2cpp_TypeInfo/* element_class */
	, IList_1_t8887_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8887_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8887_0_0_0/* byval_arg */
	, &IList_1_t8887_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8887_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6853_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45855_MethodInfo;
static PropertyInfo IEnumerator_1_t6853____Current_PropertyInfo = 
{
	&IEnumerator_1_t6853_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45855_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6853_PropertyInfos[] =
{
	&IEnumerator_1_t6853____Current_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45855_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45855_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6853_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t2013_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45855_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6853_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45855_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6853_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6853_0_0_0;
extern Il2CppType IEnumerator_1_t6853_1_0_0;
struct IEnumerator_1_t6853;
extern Il2CppGenericClass IEnumerator_1_t6853_GenericClass;
TypeInfo IEnumerator_1_t6853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6853_MethodInfos/* methods */
	, IEnumerator_1_t6853_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6853_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6853_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6853_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6853_0_0_0/* byval_arg */
	, &IEnumerator_1_t6853_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6853_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4819_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_673MethodDeclarations.h"

extern TypeInfo ClassInterfaceAttribute_t2013_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26206_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceAttribute_t2013_m35265_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisClassInterfaceAttribute_t2013_m35265(__this, p0, method) (ClassInterfaceAttribute_t2013 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4819____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4819, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4819____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4819, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4819_FieldInfos[] =
{
	&InternalEnumerator_1_t4819____array_0_FieldInfo,
	&InternalEnumerator_1_t4819____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26203_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4819____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4819_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26203_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4819____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4819_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26206_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4819_PropertyInfos[] =
{
	&InternalEnumerator_1_t4819____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4819____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4819_InternalEnumerator_1__ctor_m26202_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26202_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26202_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4819_InternalEnumerator_1__ctor_m26202_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26202_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26203_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26203_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26203_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26204_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26204_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26204_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26205_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26205_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26205_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26206_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26206_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t2013_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26206_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4819_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26202_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26203_MethodInfo,
	&InternalEnumerator_1_Dispose_m26204_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26205_MethodInfo,
	&InternalEnumerator_1_get_Current_m26206_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26205_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26204_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4819_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26203_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26205_MethodInfo,
	&InternalEnumerator_1_Dispose_m26204_MethodInfo,
	&InternalEnumerator_1_get_Current_m26206_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4819_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6853_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4819_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6853_il2cpp_TypeInfo, 7},
};
extern TypeInfo ClassInterfaceAttribute_t2013_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4819_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26206_MethodInfo/* Method Usage */,
	&ClassInterfaceAttribute_t2013_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisClassInterfaceAttribute_t2013_m35265_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4819_0_0_0;
extern Il2CppType InternalEnumerator_1_t4819_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4819_GenericClass;
TypeInfo InternalEnumerator_1_t4819_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4819_MethodInfos/* methods */
	, InternalEnumerator_1_t4819_PropertyInfos/* properties */
	, InternalEnumerator_1_t4819_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4819_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4819_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4819_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4819_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4819_1_0_0/* this_arg */
	, InternalEnumerator_1_t4819_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4819_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4819_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4819)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8889_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo ICollection_1_get_Count_m45856_MethodInfo;
static PropertyInfo ICollection_1_t8889____Count_PropertyInfo = 
{
	&ICollection_1_t8889_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45856_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45857_MethodInfo;
static PropertyInfo ICollection_1_t8889____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8889_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45857_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8889_PropertyInfos[] =
{
	&ICollection_1_t8889____Count_PropertyInfo,
	&ICollection_1_t8889____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45856_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45856_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45856_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45857_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45857_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45857_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
static ParameterInfo ICollection_1_t8889_ICollection_1_Add_m45858_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t2013_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45858_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45858_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8889_ICollection_1_Add_m45858_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45858_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45859_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45859_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45859_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
static ParameterInfo ICollection_1_t8889_ICollection_1_Contains_m45860_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t2013_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45860_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45860_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8889_ICollection_1_Contains_m45860_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45860_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttributeU5BU5D_t5082_0_0_0;
extern Il2CppType ClassInterfaceAttributeU5BU5D_t5082_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8889_ICollection_1_CopyTo_m45861_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttributeU5BU5D_t5082_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45861_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45861_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8889_ICollection_1_CopyTo_m45861_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45861_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
static ParameterInfo ICollection_1_t8889_ICollection_1_Remove_m45862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t2013_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45862_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45862_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8889_ICollection_1_Remove_m45862_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45862_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8889_MethodInfos[] =
{
	&ICollection_1_get_Count_m45856_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45857_MethodInfo,
	&ICollection_1_Add_m45858_MethodInfo,
	&ICollection_1_Clear_m45859_MethodInfo,
	&ICollection_1_Contains_m45860_MethodInfo,
	&ICollection_1_CopyTo_m45861_MethodInfo,
	&ICollection_1_Remove_m45862_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8891_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8889_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8891_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8889_0_0_0;
extern Il2CppType ICollection_1_t8889_1_0_0;
struct ICollection_1_t8889;
extern Il2CppGenericClass ICollection_1_t8889_GenericClass;
TypeInfo ICollection_1_t8889_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8889_MethodInfos/* methods */
	, ICollection_1_t8889_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8889_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8889_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8889_0_0_0/* byval_arg */
	, &ICollection_1_t8889_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8889_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType IEnumerator_1_t6853_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45863_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45863_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8891_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6853_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45863_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8891_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45863_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8891_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8891_0_0_0;
extern Il2CppType IEnumerable_1_t8891_1_0_0;
struct IEnumerable_1_t8891;
extern Il2CppGenericClass IEnumerable_1_t8891_GenericClass;
TypeInfo IEnumerable_1_t8891_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8891_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8891_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8891_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8891_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8891_0_0_0/* byval_arg */
	, &IEnumerable_1_t8891_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8891_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8890_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo IList_1_get_Item_m45864_MethodInfo;
extern MethodInfo IList_1_set_Item_m45865_MethodInfo;
static PropertyInfo IList_1_t8890____Item_PropertyInfo = 
{
	&IList_1_t8890_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45864_MethodInfo/* get */
	, &IList_1_set_Item_m45865_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8890_PropertyInfos[] =
{
	&IList_1_t8890____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
static ParameterInfo IList_1_t8890_IList_1_IndexOf_m45866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t2013_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45866_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45866_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8890_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8890_IList_1_IndexOf_m45866_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45866_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
static ParameterInfo IList_1_t8890_IList_1_Insert_m45867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t2013_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45867_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45867_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8890_IList_1_Insert_m45867_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45867_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8890_IList_1_RemoveAt_m45868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45868_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45868_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8890_IList_1_RemoveAt_m45868_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45868_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8890_IList_1_get_Item_m45864_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45864_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45864_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8890_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t2013_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8890_IList_1_get_Item_m45864_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45864_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ClassInterfaceAttribute_t2013_0_0_0;
static ParameterInfo IList_1_t8890_IList_1_set_Item_m45865_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t2013_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45865_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45865_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8890_IList_1_set_Item_m45865_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45865_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8890_MethodInfos[] =
{
	&IList_1_IndexOf_m45866_MethodInfo,
	&IList_1_Insert_m45867_MethodInfo,
	&IList_1_RemoveAt_m45868_MethodInfo,
	&IList_1_get_Item_m45864_MethodInfo,
	&IList_1_set_Item_m45865_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8890_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8889_il2cpp_TypeInfo,
	&IEnumerable_1_t8891_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8890_0_0_0;
extern Il2CppType IList_1_t8890_1_0_0;
struct IList_1_t8890;
extern Il2CppGenericClass IList_1_t8890_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8890_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8890_MethodInfos/* methods */
	, IList_1_t8890_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8890_il2cpp_TypeInfo/* element_class */
	, IList_1_t8890_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8890_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8890_0_0_0/* byval_arg */
	, &IList_1_t8890_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8890_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6855_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo IEnumerator_1_get_Current_m45869_MethodInfo;
static PropertyInfo IEnumerator_1_t6855____Current_PropertyInfo = 
{
	&IEnumerator_1_t6855_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45869_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6855_PropertyInfos[] =
{
	&IEnumerator_1_t6855____Current_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t2014 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45869_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45869_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6855_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t2014_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t2014/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45869_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6855_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45869_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6855_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6855_0_0_0;
extern Il2CppType IEnumerator_1_t6855_1_0_0;
struct IEnumerator_1_t6855;
extern Il2CppGenericClass IEnumerator_1_t6855_GenericClass;
TypeInfo IEnumerator_1_t6855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6855_MethodInfos/* methods */
	, IEnumerator_1_t6855_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6855_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6855_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6855_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6855_0_0_0/* byval_arg */
	, &IEnumerator_1_t6855_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6855_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4820_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_674MethodDeclarations.h"

extern TypeInfo ClassInterfaceType_t2014_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26211_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceType_t2014_m35276_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisClassInterfaceType_t2014_m35276 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26207_MethodInfo;
 void InternalEnumerator_1__ctor_m26207 (InternalEnumerator_1_t4820 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208 (InternalEnumerator_1_t4820 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26211(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26211_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ClassInterfaceType_t2014_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26209_MethodInfo;
 void InternalEnumerator_1_Dispose_m26209 (InternalEnumerator_1_t4820 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26210_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26210 (InternalEnumerator_1_t4820 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26211 (InternalEnumerator_1_t4820 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisClassInterfaceType_t2014_m35276(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisClassInterfaceType_t2014_m35276_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4820____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4820, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4820____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4820, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4820_FieldInfos[] =
{
	&InternalEnumerator_1_t4820____array_0_FieldInfo,
	&InternalEnumerator_1_t4820____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4820____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4820_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4820____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4820_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26211_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4820_PropertyInfos[] =
{
	&InternalEnumerator_1_t4820____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4820____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4820_InternalEnumerator_1__ctor_m26207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26207_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26207_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26207/* method */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4820_InternalEnumerator_1__ctor_m26207_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26207_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208/* method */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26209_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26209_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26209/* method */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26209_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26210_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26210_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26210/* method */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26210_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t2014 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26211_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26211_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26211/* method */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t2014_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t2014/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26211_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4820_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26207_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208_MethodInfo,
	&InternalEnumerator_1_Dispose_m26209_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26210_MethodInfo,
	&InternalEnumerator_1_get_Current_m26211_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4820_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26208_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26210_MethodInfo,
	&InternalEnumerator_1_Dispose_m26209_MethodInfo,
	&InternalEnumerator_1_get_Current_m26211_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4820_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6855_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4820_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6855_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4820_0_0_0;
extern Il2CppType InternalEnumerator_1_t4820_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4820_GenericClass;
TypeInfo InternalEnumerator_1_t4820_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4820_MethodInfos/* methods */
	, InternalEnumerator_1_t4820_PropertyInfos/* properties */
	, InternalEnumerator_1_t4820_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4820_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4820_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4820_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4820_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4820_1_0_0/* this_arg */
	, InternalEnumerator_1_t4820_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4820_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4820)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8892_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo ICollection_1_get_Count_m45870_MethodInfo;
static PropertyInfo ICollection_1_t8892____Count_PropertyInfo = 
{
	&ICollection_1_t8892_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45870_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45871_MethodInfo;
static PropertyInfo ICollection_1_t8892____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8892_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45871_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8892_PropertyInfos[] =
{
	&ICollection_1_t8892____Count_PropertyInfo,
	&ICollection_1_t8892____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45870_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Count()
MethodInfo ICollection_1_get_Count_m45870_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45870_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45871_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45871_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45871_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
static ParameterInfo ICollection_1_t8892_ICollection_1_Add_m45872_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t2014_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45872_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Add(T)
MethodInfo ICollection_1_Add_m45872_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8892_ICollection_1_Add_m45872_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45872_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45873_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Clear()
MethodInfo ICollection_1_Clear_m45873_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45873_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
static ParameterInfo ICollection_1_t8892_ICollection_1_Contains_m45874_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t2014_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45874_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Contains(T)
MethodInfo ICollection_1_Contains_m45874_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8892_ICollection_1_Contains_m45874_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45874_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceTypeU5BU5D_t5083_0_0_0;
extern Il2CppType ClassInterfaceTypeU5BU5D_t5083_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8892_ICollection_1_CopyTo_m45875_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceTypeU5BU5D_t5083_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45875_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45875_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8892_ICollection_1_CopyTo_m45875_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45875_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
static ParameterInfo ICollection_1_t8892_ICollection_1_Remove_m45876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t2014_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45876_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Remove(T)
MethodInfo ICollection_1_Remove_m45876_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8892_ICollection_1_Remove_m45876_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45876_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8892_MethodInfos[] =
{
	&ICollection_1_get_Count_m45870_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45871_MethodInfo,
	&ICollection_1_Add_m45872_MethodInfo,
	&ICollection_1_Clear_m45873_MethodInfo,
	&ICollection_1_Contains_m45874_MethodInfo,
	&ICollection_1_CopyTo_m45875_MethodInfo,
	&ICollection_1_Remove_m45876_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8894_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8892_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8894_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8892_0_0_0;
extern Il2CppType ICollection_1_t8892_1_0_0;
struct ICollection_1_t8892;
extern Il2CppGenericClass ICollection_1_t8892_GenericClass;
TypeInfo ICollection_1_t8892_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8892_MethodInfos/* methods */
	, ICollection_1_t8892_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8892_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8892_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8892_0_0_0/* byval_arg */
	, &ICollection_1_t8892_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8892_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType IEnumerator_1_t6855_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45877_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45877_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8894_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6855_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45877_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8894_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45877_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8894_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8894_0_0_0;
extern Il2CppType IEnumerable_1_t8894_1_0_0;
struct IEnumerable_1_t8894;
extern Il2CppGenericClass IEnumerable_1_t8894_GenericClass;
TypeInfo IEnumerable_1_t8894_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8894_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8894_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8894_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8894_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8894_0_0_0/* byval_arg */
	, &IEnumerable_1_t8894_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8894_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8893_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo IList_1_get_Item_m45878_MethodInfo;
extern MethodInfo IList_1_set_Item_m45879_MethodInfo;
static PropertyInfo IList_1_t8893____Item_PropertyInfo = 
{
	&IList_1_t8893_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45878_MethodInfo/* get */
	, &IList_1_set_Item_m45879_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8893_PropertyInfos[] =
{
	&IList_1_t8893____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
static ParameterInfo IList_1_t8893_IList_1_IndexOf_m45880_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t2014_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45880_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45880_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8893_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8893_IList_1_IndexOf_m45880_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45880_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
static ParameterInfo IList_1_t8893_IList_1_Insert_m45881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t2014_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45881_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45881_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8893_IList_1_Insert_m45881_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45881_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8893_IList_1_RemoveAt_m45882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45882_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45882_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8893_IList_1_RemoveAt_m45882_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45882_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8893_IList_1_get_Item_m45878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t2014_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45878_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45878_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8893_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t2014_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t2014_Int32_t63/* invoker_method */
	, IList_1_t8893_IList_1_get_Item_m45878_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45878_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ClassInterfaceType_t2014_0_0_0;
static ParameterInfo IList_1_t8893_IList_1_set_Item_m45879_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t2014_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45879_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45879_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8893_IList_1_set_Item_m45879_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45879_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8893_MethodInfos[] =
{
	&IList_1_IndexOf_m45880_MethodInfo,
	&IList_1_Insert_m45881_MethodInfo,
	&IList_1_RemoveAt_m45882_MethodInfo,
	&IList_1_get_Item_m45878_MethodInfo,
	&IList_1_set_Item_m45879_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8893_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8892_il2cpp_TypeInfo,
	&IEnumerable_1_t8894_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8893_0_0_0;
extern Il2CppType IList_1_t8893_1_0_0;
struct IList_1_t8893;
extern Il2CppGenericClass IList_1_t8893_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8893_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8893_MethodInfos/* methods */
	, IList_1_t8893_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8893_il2cpp_TypeInfo/* element_class */
	, IList_1_t8893_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8893_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8893_0_0_0/* byval_arg */
	, &IList_1_t8893_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8893_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6857_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45883_MethodInfo;
static PropertyInfo IEnumerator_1_t6857____Current_PropertyInfo = 
{
	&IEnumerator_1_t6857_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45883_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6857_PropertyInfos[] =
{
	&IEnumerator_1_t6857____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45883_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45883_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6857_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t2015_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45883_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6857_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45883_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6857_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6857_0_0_0;
extern Il2CppType IEnumerator_1_t6857_1_0_0;
struct IEnumerator_1_t6857;
extern Il2CppGenericClass IEnumerator_1_t6857_GenericClass;
TypeInfo IEnumerator_1_t6857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6857_MethodInfos/* methods */
	, IEnumerator_1_t6857_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6857_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6857_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6857_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6857_0_0_0/* byval_arg */
	, &IEnumerator_1_t6857_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6857_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4821_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_675MethodDeclarations.h"

extern TypeInfo ComDefaultInterfaceAttribute_t2015_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26216_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t2015_m35287_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t2015_m35287(__this, p0, method) (ComDefaultInterfaceAttribute_t2015 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4821____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4821, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4821____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26213_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4821____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4821____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26216_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4821_InternalEnumerator_1__ctor_m26212_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26212_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26212_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4821_InternalEnumerator_1__ctor_m26212_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26212_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26213_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26213_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26213_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26214_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26214_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26214_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26215_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26215_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26215_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26216_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26216_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t2015_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26216_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4821_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26212_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26213_MethodInfo,
	&InternalEnumerator_1_Dispose_m26214_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26215_MethodInfo,
	&InternalEnumerator_1_get_Current_m26216_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26215_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26214_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4821_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26213_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26215_MethodInfo,
	&InternalEnumerator_1_Dispose_m26214_MethodInfo,
	&InternalEnumerator_1_get_Current_m26216_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4821_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6857_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4821_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6857_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComDefaultInterfaceAttribute_t2015_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4821_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26216_MethodInfo/* Method Usage */,
	&ComDefaultInterfaceAttribute_t2015_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t2015_m35287_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
	, InternalEnumerator_1_t4821_RGCTXData/* rgctx_data */
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
extern TypeInfo ICollection_1_t8895_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo ICollection_1_get_Count_m45884_MethodInfo;
static PropertyInfo ICollection_1_t8895____Count_PropertyInfo = 
{
	&ICollection_1_t8895_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45884_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45885_MethodInfo;
static PropertyInfo ICollection_1_t8895____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8895_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45885_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8895_PropertyInfos[] =
{
	&ICollection_1_t8895____Count_PropertyInfo,
	&ICollection_1_t8895____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45884_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45884_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45884_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45885_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45885_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45885_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
static ParameterInfo ICollection_1_t8895_ICollection_1_Add_m45886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t2015_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45886_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45886_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8895_ICollection_1_Add_m45886_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45886_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45887_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45887_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45887_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
static ParameterInfo ICollection_1_t8895_ICollection_1_Contains_m45888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t2015_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45888_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45888_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8895_ICollection_1_Contains_m45888_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45888_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttributeU5BU5D_t5084_0_0_0;
extern Il2CppType ComDefaultInterfaceAttributeU5BU5D_t5084_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8895_ICollection_1_CopyTo_m45889_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttributeU5BU5D_t5084_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45889_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45889_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8895_ICollection_1_CopyTo_m45889_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45889_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
static ParameterInfo ICollection_1_t8895_ICollection_1_Remove_m45890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t2015_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45890_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45890_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8895_ICollection_1_Remove_m45890_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45890_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8895_MethodInfos[] =
{
	&ICollection_1_get_Count_m45884_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45885_MethodInfo,
	&ICollection_1_Add_m45886_MethodInfo,
	&ICollection_1_Clear_m45887_MethodInfo,
	&ICollection_1_Contains_m45888_MethodInfo,
	&ICollection_1_CopyTo_m45889_MethodInfo,
	&ICollection_1_Remove_m45890_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8897_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8895_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8897_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8895_0_0_0;
extern Il2CppType ICollection_1_t8895_1_0_0;
struct ICollection_1_t8895;
extern Il2CppGenericClass ICollection_1_t8895_GenericClass;
TypeInfo ICollection_1_t8895_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8895_MethodInfos/* methods */
	, ICollection_1_t8895_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8895_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8895_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8895_0_0_0/* byval_arg */
	, &ICollection_1_t8895_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8895_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType IEnumerator_1_t6857_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45891_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45891_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8897_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6857_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45891_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8897_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45891_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8897_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8897_0_0_0;
extern Il2CppType IEnumerable_1_t8897_1_0_0;
struct IEnumerable_1_t8897;
extern Il2CppGenericClass IEnumerable_1_t8897_GenericClass;
TypeInfo IEnumerable_1_t8897_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8897_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8897_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8897_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8897_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8897_0_0_0/* byval_arg */
	, &IEnumerable_1_t8897_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8897_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8896_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo IList_1_get_Item_m45892_MethodInfo;
extern MethodInfo IList_1_set_Item_m45893_MethodInfo;
static PropertyInfo IList_1_t8896____Item_PropertyInfo = 
{
	&IList_1_t8896_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45892_MethodInfo/* get */
	, &IList_1_set_Item_m45893_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8896_PropertyInfos[] =
{
	&IList_1_t8896____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
static ParameterInfo IList_1_t8896_IList_1_IndexOf_m45894_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t2015_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45894_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45894_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8896_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8896_IList_1_IndexOf_m45894_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45894_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
static ParameterInfo IList_1_t8896_IList_1_Insert_m45895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t2015_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45895_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45895_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8896_IList_1_Insert_m45895_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45895_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8896_IList_1_RemoveAt_m45896_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45896_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45896_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8896_IList_1_RemoveAt_m45896_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45896_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8896_IList_1_get_Item_m45892_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45892_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45892_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8896_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t2015_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8896_IList_1_get_Item_m45892_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45892_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ComDefaultInterfaceAttribute_t2015_0_0_0;
static ParameterInfo IList_1_t8896_IList_1_set_Item_m45893_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t2015_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45893_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45893_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8896_IList_1_set_Item_m45893_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45893_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8896_MethodInfos[] =
{
	&IList_1_IndexOf_m45894_MethodInfo,
	&IList_1_Insert_m45895_MethodInfo,
	&IList_1_RemoveAt_m45896_MethodInfo,
	&IList_1_get_Item_m45892_MethodInfo,
	&IList_1_set_Item_m45893_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8896_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8895_il2cpp_TypeInfo,
	&IEnumerable_1_t8897_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8896_0_0_0;
extern Il2CppType IList_1_t8896_1_0_0;
struct IList_1_t8896;
extern Il2CppGenericClass IList_1_t8896_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8896_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8896_MethodInfos/* methods */
	, IList_1_t8896_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8896_il2cpp_TypeInfo/* element_class */
	, IList_1_t8896_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8896_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8896_0_0_0/* byval_arg */
	, &IList_1_t8896_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8896_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6859_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo IEnumerator_1_get_Current_m45897_MethodInfo;
static PropertyInfo IEnumerator_1_t6859____Current_PropertyInfo = 
{
	&IEnumerator_1_t6859_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6859_PropertyInfos[] =
{
	&IEnumerator_1_t6859____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComInterfaceType_t2016_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t2016 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45897_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45897_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6859_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t2016_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t2016/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45897_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6859_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45897_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6859_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6859_0_0_0;
extern Il2CppType IEnumerator_1_t6859_1_0_0;
struct IEnumerator_1_t6859;
extern Il2CppGenericClass IEnumerator_1_t6859_GenericClass;
TypeInfo IEnumerator_1_t6859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6859_MethodInfos/* methods */
	, IEnumerator_1_t6859_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6859_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6859_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6859_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6859_0_0_0/* byval_arg */
	, &IEnumerator_1_t6859_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6859_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4822_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_676MethodDeclarations.h"

extern TypeInfo ComInterfaceType_t2016_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26221_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComInterfaceType_t2016_m35298_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComInterfaceType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComInterfaceType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisComInterfaceType_t2016_m35298 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26217_MethodInfo;
 void InternalEnumerator_1__ctor_m26217 (InternalEnumerator_1_t4822 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26221(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26221_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ComInterfaceType_t2016_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26219_MethodInfo;
 void InternalEnumerator_1_Dispose_m26219 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26220_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26220 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26221 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisComInterfaceType_t2016_m35298(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisComInterfaceType_t2016_m35298_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4822____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4822, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4822____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4822____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4822_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26221_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4822_InternalEnumerator_1__ctor_m26217_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26217_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26217_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26217/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4822_InternalEnumerator_1__ctor_m26217_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26217_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26219_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26219_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26219/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26219_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26220_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26220_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26220/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26220_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t2016_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t2016 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26221_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26221_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26221/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t2016_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t2016/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26221_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4822_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26217_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218_MethodInfo,
	&InternalEnumerator_1_Dispose_m26219_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26220_MethodInfo,
	&InternalEnumerator_1_get_Current_m26221_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4822_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26218_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26220_MethodInfo,
	&InternalEnumerator_1_Dispose_m26219_MethodInfo,
	&InternalEnumerator_1_get_Current_m26221_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4822_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6859_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4822_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6859_il2cpp_TypeInfo, 7},
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8898_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo ICollection_1_get_Count_m45898_MethodInfo;
static PropertyInfo ICollection_1_t8898____Count_PropertyInfo = 
{
	&ICollection_1_t8898_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45898_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45899_MethodInfo;
static PropertyInfo ICollection_1_t8898____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8898_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8898_PropertyInfos[] =
{
	&ICollection_1_t8898____Count_PropertyInfo,
	&ICollection_1_t8898____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45898_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_Count()
MethodInfo ICollection_1_get_Count_m45898_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45898_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45899_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45899_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45899_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t2016_0_0_0;
extern Il2CppType ComInterfaceType_t2016_0_0_0;
static ParameterInfo ICollection_1_t8898_ICollection_1_Add_m45900_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t2016_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45900_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Add(T)
MethodInfo ICollection_1_Add_m45900_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8898_ICollection_1_Add_m45900_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45900_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45901_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Clear()
MethodInfo ICollection_1_Clear_m45901_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45901_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t2016_0_0_0;
static ParameterInfo ICollection_1_t8898_ICollection_1_Contains_m45902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t2016_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45902_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Contains(T)
MethodInfo ICollection_1_Contains_m45902_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8898_ICollection_1_Contains_m45902_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45902_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceTypeU5BU5D_t5085_0_0_0;
extern Il2CppType ComInterfaceTypeU5BU5D_t5085_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8898_ICollection_1_CopyTo_m45903_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceTypeU5BU5D_t5085_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45903_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45903_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8898_ICollection_1_CopyTo_m45903_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45903_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t2016_0_0_0;
static ParameterInfo ICollection_1_t8898_ICollection_1_Remove_m45904_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t2016_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45904_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Remove(T)
MethodInfo ICollection_1_Remove_m45904_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8898_ICollection_1_Remove_m45904_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45904_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8898_MethodInfos[] =
{
	&ICollection_1_get_Count_m45898_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45899_MethodInfo,
	&ICollection_1_Add_m45900_MethodInfo,
	&ICollection_1_Clear_m45901_MethodInfo,
	&ICollection_1_Contains_m45902_MethodInfo,
	&ICollection_1_CopyTo_m45903_MethodInfo,
	&ICollection_1_Remove_m45904_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8900_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8898_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8900_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8898_0_0_0;
extern Il2CppType ICollection_1_t8898_1_0_0;
struct ICollection_1_t8898;
extern Il2CppGenericClass ICollection_1_t8898_GenericClass;
TypeInfo ICollection_1_t8898_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8898_MethodInfos/* methods */
	, ICollection_1_t8898_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8898_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8898_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8898_0_0_0/* byval_arg */
	, &ICollection_1_t8898_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8898_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType IEnumerator_1_t6859_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45905_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45905_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8900_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6859_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45905_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8900_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45905_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8900_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8900_0_0_0;
extern Il2CppType IEnumerable_1_t8900_1_0_0;
struct IEnumerable_1_t8900;
extern Il2CppGenericClass IEnumerable_1_t8900_GenericClass;
TypeInfo IEnumerable_1_t8900_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8900_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8900_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8900_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8900_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8900_0_0_0/* byval_arg */
	, &IEnumerable_1_t8900_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8900_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8899_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo IList_1_get_Item_m45906_MethodInfo;
extern MethodInfo IList_1_set_Item_m45907_MethodInfo;
static PropertyInfo IList_1_t8899____Item_PropertyInfo = 
{
	&IList_1_t8899_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45906_MethodInfo/* get */
	, &IList_1_set_Item_m45907_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8899_PropertyInfos[] =
{
	&IList_1_t8899____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComInterfaceType_t2016_0_0_0;
static ParameterInfo IList_1_t8899_IList_1_IndexOf_m45908_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t2016_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45908_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45908_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8899_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8899_IList_1_IndexOf_m45908_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45908_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ComInterfaceType_t2016_0_0_0;
static ParameterInfo IList_1_t8899_IList_1_Insert_m45909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t2016_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45909_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45909_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8899_IList_1_Insert_m45909_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45909_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8899_IList_1_RemoveAt_m45910_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45910_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45910_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8899_IList_1_RemoveAt_m45910_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45910_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8899_IList_1_get_Item_m45906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ComInterfaceType_t2016_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t2016_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45906_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45906_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8899_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t2016_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t2016_Int32_t63/* invoker_method */
	, IList_1_t8899_IList_1_get_Item_m45906_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45906_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ComInterfaceType_t2016_0_0_0;
static ParameterInfo IList_1_t8899_IList_1_set_Item_m45907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t2016_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45907_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45907_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8899_IList_1_set_Item_m45907_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45907_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8899_MethodInfos[] =
{
	&IList_1_IndexOf_m45908_MethodInfo,
	&IList_1_Insert_m45909_MethodInfo,
	&IList_1_RemoveAt_m45910_MethodInfo,
	&IList_1_get_Item_m45906_MethodInfo,
	&IList_1_set_Item_m45907_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8899_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8898_il2cpp_TypeInfo,
	&IEnumerable_1_t8900_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8899_0_0_0;
extern Il2CppType IList_1_t8899_1_0_0;
struct IList_1_t8899;
extern Il2CppGenericClass IList_1_t8899_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8899_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8899_MethodInfos/* methods */
	, IList_1_t8899_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8899_il2cpp_TypeInfo/* element_class */
	, IList_1_t8899_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8899_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8899_0_0_0/* byval_arg */
	, &IList_1_t8899_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8899_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6861_il2cpp_TypeInfo;

// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45911_MethodInfo;
static PropertyInfo IEnumerator_1_t6861____Current_PropertyInfo = 
{
	&IEnumerator_1_t6861_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45911_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6861_PropertyInfos[] =
{
	&IEnumerator_1_t6861____Current_PropertyInfo,
	NULL
};
extern Il2CppType DispIdAttribute_t2017_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45911_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45911_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6861_il2cpp_TypeInfo/* declaring_type */
	, &DispIdAttribute_t2017_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45911_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6861_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45911_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6861_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6861_0_0_0;
extern Il2CppType IEnumerator_1_t6861_1_0_0;
struct IEnumerator_1_t6861;
extern Il2CppGenericClass IEnumerator_1_t6861_GenericClass;
TypeInfo IEnumerator_1_t6861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6861_MethodInfos/* methods */
	, IEnumerator_1_t6861_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6861_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6861_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6861_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6861_0_0_0/* byval_arg */
	, &IEnumerator_1_t6861_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6861_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_677.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4823_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_677MethodDeclarations.h"

extern TypeInfo DispIdAttribute_t2017_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26226_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDispIdAttribute_t2017_m35309_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DispIdAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DispIdAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDispIdAttribute_t2017_m35309(__this, p0, method) (DispIdAttribute_t2017 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4823____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4823, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4823____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26223_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4823____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26223_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4823____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26226_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4823_InternalEnumerator_1__ctor_m26222_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26222_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26222_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4823_InternalEnumerator_1__ctor_m26222_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26222_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26223_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26223_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26223_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26224_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26224_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26224_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26225_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26225_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26225_GenericMethod/* genericMethod */

};
extern Il2CppType DispIdAttribute_t2017_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26226_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26226_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
	, &DispIdAttribute_t2017_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26226_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4823_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26222_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26223_MethodInfo,
	&InternalEnumerator_1_Dispose_m26224_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26225_MethodInfo,
	&InternalEnumerator_1_get_Current_m26226_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26225_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26224_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4823_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26223_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26225_MethodInfo,
	&InternalEnumerator_1_Dispose_m26224_MethodInfo,
	&InternalEnumerator_1_get_Current_m26226_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4823_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6861_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4823_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6861_il2cpp_TypeInfo, 7},
};
extern TypeInfo DispIdAttribute_t2017_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4823_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26226_MethodInfo/* Method Usage */,
	&DispIdAttribute_t2017_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDispIdAttribute_t2017_m35309_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
	, InternalEnumerator_1_t4823_RGCTXData/* rgctx_data */
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
extern TypeInfo ICollection_1_t8901_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo ICollection_1_get_Count_m45912_MethodInfo;
static PropertyInfo ICollection_1_t8901____Count_PropertyInfo = 
{
	&ICollection_1_t8901_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45912_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45913_MethodInfo;
static PropertyInfo ICollection_1_t8901____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8901_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45913_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8901_PropertyInfos[] =
{
	&ICollection_1_t8901____Count_PropertyInfo,
	&ICollection_1_t8901____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45912_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45912_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45912_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45913_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45913_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45913_GenericMethod/* genericMethod */

};
extern Il2CppType DispIdAttribute_t2017_0_0_0;
extern Il2CppType DispIdAttribute_t2017_0_0_0;
static ParameterInfo ICollection_1_t8901_ICollection_1_Add_m45914_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t2017_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45914_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45914_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8901_ICollection_1_Add_m45914_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45914_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45915_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45915_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45915_GenericMethod/* genericMethod */

};
extern Il2CppType DispIdAttribute_t2017_0_0_0;
static ParameterInfo ICollection_1_t8901_ICollection_1_Contains_m45916_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t2017_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45916_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45916_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8901_ICollection_1_Contains_m45916_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45916_GenericMethod/* genericMethod */

};
extern Il2CppType DispIdAttributeU5BU5D_t5086_0_0_0;
extern Il2CppType DispIdAttributeU5BU5D_t5086_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8901_ICollection_1_CopyTo_m45917_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttributeU5BU5D_t5086_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45917_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45917_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8901_ICollection_1_CopyTo_m45917_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45917_GenericMethod/* genericMethod */

};
extern Il2CppType DispIdAttribute_t2017_0_0_0;
static ParameterInfo ICollection_1_t8901_ICollection_1_Remove_m45918_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t2017_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45918_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45918_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8901_ICollection_1_Remove_m45918_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45918_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8901_MethodInfos[] =
{
	&ICollection_1_get_Count_m45912_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45913_MethodInfo,
	&ICollection_1_Add_m45914_MethodInfo,
	&ICollection_1_Clear_m45915_MethodInfo,
	&ICollection_1_Contains_m45916_MethodInfo,
	&ICollection_1_CopyTo_m45917_MethodInfo,
	&ICollection_1_Remove_m45918_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8903_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8901_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8903_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8901_0_0_0;
extern Il2CppType ICollection_1_t8901_1_0_0;
struct ICollection_1_t8901;
extern Il2CppGenericClass ICollection_1_t8901_GenericClass;
TypeInfo ICollection_1_t8901_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8901_MethodInfos/* methods */
	, ICollection_1_t8901_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8901_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8901_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8901_0_0_0/* byval_arg */
	, &ICollection_1_t8901_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8901_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>
extern Il2CppType IEnumerator_1_t6861_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45919_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45919_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8903_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6861_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45919_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8903_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45919_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8903_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8903_0_0_0;
extern Il2CppType IEnumerable_1_t8903_1_0_0;
struct IEnumerable_1_t8903;
extern Il2CppGenericClass IEnumerable_1_t8903_GenericClass;
TypeInfo IEnumerable_1_t8903_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8903_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8903_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8903_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8903_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8903_0_0_0/* byval_arg */
	, &IEnumerable_1_t8903_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8903_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8902_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo IList_1_get_Item_m45920_MethodInfo;
extern MethodInfo IList_1_set_Item_m45921_MethodInfo;
static PropertyInfo IList_1_t8902____Item_PropertyInfo = 
{
	&IList_1_t8902_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45920_MethodInfo/* get */
	, &IList_1_set_Item_m45921_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8902_PropertyInfos[] =
{
	&IList_1_t8902____Item_PropertyInfo,
	NULL
};
extern Il2CppType DispIdAttribute_t2017_0_0_0;
static ParameterInfo IList_1_t8902_IList_1_IndexOf_m45922_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t2017_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45922_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45922_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8902_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8902_IList_1_IndexOf_m45922_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45922_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType DispIdAttribute_t2017_0_0_0;
static ParameterInfo IList_1_t8902_IList_1_Insert_m45923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t2017_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45923_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45923_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8902_IList_1_Insert_m45923_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45923_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8902_IList_1_RemoveAt_m45924_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45924_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45924_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8902_IList_1_RemoveAt_m45924_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45924_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8902_IList_1_get_Item_m45920_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType DispIdAttribute_t2017_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45920_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45920_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8902_il2cpp_TypeInfo/* declaring_type */
	, &DispIdAttribute_t2017_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8902_IList_1_get_Item_m45920_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45920_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType DispIdAttribute_t2017_0_0_0;
static ParameterInfo IList_1_t8902_IList_1_set_Item_m45921_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t2017_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45921_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45921_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8902_IList_1_set_Item_m45921_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45921_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8902_MethodInfos[] =
{
	&IList_1_IndexOf_m45922_MethodInfo,
	&IList_1_Insert_m45923_MethodInfo,
	&IList_1_RemoveAt_m45924_MethodInfo,
	&IList_1_get_Item_m45920_MethodInfo,
	&IList_1_set_Item_m45921_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8902_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8901_il2cpp_TypeInfo,
	&IEnumerable_1_t8903_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8902_0_0_0;
extern Il2CppType IList_1_t8902_1_0_0;
struct IList_1_t8902;
extern Il2CppGenericClass IList_1_t8902_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8902_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8902_MethodInfos/* methods */
	, IList_1_t8902_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8902_il2cpp_TypeInfo/* element_class */
	, IList_1_t8902_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8902_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8902_0_0_0/* byval_arg */
	, &IList_1_t8902_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8902_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6863_il2cpp_TypeInfo;

// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo IEnumerator_1_get_Current_m45925_MethodInfo;
static PropertyInfo IEnumerator_1_t6863____Current_PropertyInfo = 
{
	&IEnumerator_1_t6863_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45925_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6863_PropertyInfos[] =
{
	&IEnumerator_1_t6863____Current_PropertyInfo,
	NULL
};
extern Il2CppType GCHandleType_t2019_0_0_0;
extern void* RuntimeInvoker_GCHandleType_t2019 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45925_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45925_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6863_il2cpp_TypeInfo/* declaring_type */
	, &GCHandleType_t2019_0_0_0/* return_type */
	, RuntimeInvoker_GCHandleType_t2019/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45925_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6863_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45925_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6863_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6863_0_0_0;
extern Il2CppType IEnumerator_1_t6863_1_0_0;
struct IEnumerator_1_t6863;
extern Il2CppGenericClass IEnumerator_1_t6863_GenericClass;
TypeInfo IEnumerator_1_t6863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6863_MethodInfos/* methods */
	, IEnumerator_1_t6863_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6863_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6863_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6863_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6863_0_0_0/* byval_arg */
	, &IEnumerator_1_t6863_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6863_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4824_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_678MethodDeclarations.h"

extern TypeInfo GCHandleType_t2019_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26231_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGCHandleType_t2019_m35320_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GCHandleType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GCHandleType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGCHandleType_t2019_m35320 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26227_MethodInfo;
 void InternalEnumerator_1__ctor_m26227 (InternalEnumerator_1_t4824 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26231(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26231_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GCHandleType_t2019_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26229_MethodInfo;
 void InternalEnumerator_1_Dispose_m26229 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26230_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26230 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26231 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGCHandleType_t2019_m35320(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGCHandleType_t2019_m35320_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4824____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4824, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4824____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4824____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4824_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26231_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4824_InternalEnumerator_1__ctor_m26227_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26227_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26227_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26227/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4824_InternalEnumerator_1__ctor_m26227_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26227_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26229_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26229_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26229/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26229_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26230_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26230_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26230/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26230_GenericMethod/* genericMethod */

};
extern Il2CppType GCHandleType_t2019_0_0_0;
extern void* RuntimeInvoker_GCHandleType_t2019 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26231_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26231_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26231/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
	, &GCHandleType_t2019_0_0_0/* return_type */
	, RuntimeInvoker_GCHandleType_t2019/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26231_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4824_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26227_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228_MethodInfo,
	&InternalEnumerator_1_Dispose_m26229_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26230_MethodInfo,
	&InternalEnumerator_1_get_Current_m26231_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4824_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26228_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26230_MethodInfo,
	&InternalEnumerator_1_Dispose_m26229_MethodInfo,
	&InternalEnumerator_1_get_Current_m26231_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4824_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6863_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4824_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6863_il2cpp_TypeInfo, 7},
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8904_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo ICollection_1_get_Count_m45926_MethodInfo;
static PropertyInfo ICollection_1_t8904____Count_PropertyInfo = 
{
	&ICollection_1_t8904_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45926_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45927_MethodInfo;
static PropertyInfo ICollection_1_t8904____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8904_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45927_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8904_PropertyInfos[] =
{
	&ICollection_1_t8904____Count_PropertyInfo,
	&ICollection_1_t8904____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45926_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_Count()
MethodInfo ICollection_1_get_Count_m45926_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45926_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45927_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45927_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45927_GenericMethod/* genericMethod */

};
extern Il2CppType GCHandleType_t2019_0_0_0;
extern Il2CppType GCHandleType_t2019_0_0_0;
static ParameterInfo ICollection_1_t8904_ICollection_1_Add_m45928_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t2019_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45928_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Add(T)
MethodInfo ICollection_1_Add_m45928_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8904_ICollection_1_Add_m45928_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45928_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45929_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Clear()
MethodInfo ICollection_1_Clear_m45929_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45929_GenericMethod/* genericMethod */

};
extern Il2CppType GCHandleType_t2019_0_0_0;
static ParameterInfo ICollection_1_t8904_ICollection_1_Contains_m45930_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t2019_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45930_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Contains(T)
MethodInfo ICollection_1_Contains_m45930_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8904_ICollection_1_Contains_m45930_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45930_GenericMethod/* genericMethod */

};
extern Il2CppType GCHandleTypeU5BU5D_t5087_0_0_0;
extern Il2CppType GCHandleTypeU5BU5D_t5087_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8904_ICollection_1_CopyTo_m45931_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleTypeU5BU5D_t5087_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45931_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45931_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8904_ICollection_1_CopyTo_m45931_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45931_GenericMethod/* genericMethod */

};
extern Il2CppType GCHandleType_t2019_0_0_0;
static ParameterInfo ICollection_1_t8904_ICollection_1_Remove_m45932_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t2019_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45932_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Remove(T)
MethodInfo ICollection_1_Remove_m45932_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8904_ICollection_1_Remove_m45932_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45932_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8904_MethodInfos[] =
{
	&ICollection_1_get_Count_m45926_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45927_MethodInfo,
	&ICollection_1_Add_m45928_MethodInfo,
	&ICollection_1_Clear_m45929_MethodInfo,
	&ICollection_1_Contains_m45930_MethodInfo,
	&ICollection_1_CopyTo_m45931_MethodInfo,
	&ICollection_1_Remove_m45932_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8906_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8904_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8906_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8904_0_0_0;
extern Il2CppType ICollection_1_t8904_1_0_0;
struct ICollection_1_t8904;
extern Il2CppGenericClass ICollection_1_t8904_GenericClass;
TypeInfo ICollection_1_t8904_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8904_MethodInfos/* methods */
	, ICollection_1_t8904_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8904_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8904_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8904_0_0_0/* byval_arg */
	, &ICollection_1_t8904_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8904_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>
extern Il2CppType IEnumerator_1_t6863_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45933_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45933_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8906_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6863_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45933_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8906_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45933_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8906_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8906_0_0_0;
extern Il2CppType IEnumerable_1_t8906_1_0_0;
struct IEnumerable_1_t8906;
extern Il2CppGenericClass IEnumerable_1_t8906_GenericClass;
TypeInfo IEnumerable_1_t8906_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8906_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8906_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8906_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8906_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8906_0_0_0/* byval_arg */
	, &IEnumerable_1_t8906_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8906_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8905_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo IList_1_get_Item_m45934_MethodInfo;
extern MethodInfo IList_1_set_Item_m45935_MethodInfo;
static PropertyInfo IList_1_t8905____Item_PropertyInfo = 
{
	&IList_1_t8905_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45934_MethodInfo/* get */
	, &IList_1_set_Item_m45935_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8905_PropertyInfos[] =
{
	&IList_1_t8905____Item_PropertyInfo,
	NULL
};
extern Il2CppType GCHandleType_t2019_0_0_0;
static ParameterInfo IList_1_t8905_IList_1_IndexOf_m45936_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t2019_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45936_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45936_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8905_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8905_IList_1_IndexOf_m45936_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45936_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType GCHandleType_t2019_0_0_0;
static ParameterInfo IList_1_t8905_IList_1_Insert_m45937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t2019_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45937_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45937_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8905_IList_1_Insert_m45937_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45937_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8905_IList_1_RemoveAt_m45938_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45938_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45938_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8905_IList_1_RemoveAt_m45938_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45938_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8905_IList_1_get_Item_m45934_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType GCHandleType_t2019_0_0_0;
extern void* RuntimeInvoker_GCHandleType_t2019_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45934_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45934_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8905_il2cpp_TypeInfo/* declaring_type */
	, &GCHandleType_t2019_0_0_0/* return_type */
	, RuntimeInvoker_GCHandleType_t2019_Int32_t63/* invoker_method */
	, IList_1_t8905_IList_1_get_Item_m45934_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45934_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType GCHandleType_t2019_0_0_0;
static ParameterInfo IList_1_t8905_IList_1_set_Item_m45935_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t2019_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45935_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45935_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8905_IList_1_set_Item_m45935_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45935_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8905_MethodInfos[] =
{
	&IList_1_IndexOf_m45936_MethodInfo,
	&IList_1_Insert_m45937_MethodInfo,
	&IList_1_RemoveAt_m45938_MethodInfo,
	&IList_1_get_Item_m45934_MethodInfo,
	&IList_1_set_Item_m45935_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8905_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8904_il2cpp_TypeInfo,
	&IEnumerable_1_t8906_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8905_0_0_0;
extern Il2CppType IList_1_t8905_1_0_0;
struct IList_1_t8905;
extern Il2CppGenericClass IList_1_t8905_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8905_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8905_MethodInfos/* methods */
	, IList_1_t8905_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8905_il2cpp_TypeInfo/* element_class */
	, IList_1_t8905_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8905_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8905_0_0_0/* byval_arg */
	, &IList_1_t8905_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8905_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6865_il2cpp_TypeInfo;

// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45939_MethodInfo;
static PropertyInfo IEnumerator_1_t6865____Current_PropertyInfo = 
{
	&IEnumerator_1_t6865_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45939_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6865_PropertyInfos[] =
{
	&IEnumerator_1_t6865____Current_PropertyInfo,
	NULL
};
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45939_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45939_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6865_il2cpp_TypeInfo/* declaring_type */
	, &InterfaceTypeAttribute_t2020_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45939_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6865_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45939_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6865_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6865_0_0_0;
extern Il2CppType IEnumerator_1_t6865_1_0_0;
struct IEnumerator_1_t6865;
extern Il2CppGenericClass IEnumerator_1_t6865_GenericClass;
TypeInfo IEnumerator_1_t6865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6865_MethodInfos/* methods */
	, IEnumerator_1_t6865_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6865_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6865_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6865_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6865_0_0_0/* byval_arg */
	, &IEnumerator_1_t6865_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4825_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_679MethodDeclarations.h"

extern TypeInfo InterfaceTypeAttribute_t2020_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26236_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t2020_m35331_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InterfaceTypeAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InterfaceTypeAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t2020_m35331(__this, p0, method) (InterfaceTypeAttribute_t2020 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4825____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4825, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4825____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26233_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4825____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26233_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4825____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26236_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4825_InternalEnumerator_1__ctor_m26232_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26232_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26232_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4825_InternalEnumerator_1__ctor_m26232_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26232_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26233_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26233_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26233_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26234_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26234_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26234_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26235_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26235_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26235_GenericMethod/* genericMethod */

};
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26236_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26236_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
	, &InterfaceTypeAttribute_t2020_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26236_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4825_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26232_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26233_MethodInfo,
	&InternalEnumerator_1_Dispose_m26234_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26235_MethodInfo,
	&InternalEnumerator_1_get_Current_m26236_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26235_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26234_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4825_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26233_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26235_MethodInfo,
	&InternalEnumerator_1_Dispose_m26234_MethodInfo,
	&InternalEnumerator_1_get_Current_m26236_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4825_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6865_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4825_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6865_il2cpp_TypeInfo, 7},
};
extern TypeInfo InterfaceTypeAttribute_t2020_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4825_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26236_MethodInfo/* Method Usage */,
	&InterfaceTypeAttribute_t2020_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t2020_m35331_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8907_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo ICollection_1_get_Count_m45940_MethodInfo;
static PropertyInfo ICollection_1_t8907____Count_PropertyInfo = 
{
	&ICollection_1_t8907_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45940_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45941_MethodInfo;
static PropertyInfo ICollection_1_t8907____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8907_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45941_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8907_PropertyInfos[] =
{
	&ICollection_1_t8907____Count_PropertyInfo,
	&ICollection_1_t8907____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45940_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45940_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45940_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45941_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45941_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45941_GenericMethod/* genericMethod */

};
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
static ParameterInfo ICollection_1_t8907_ICollection_1_Add_m45942_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t2020_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45942_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45942_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8907_ICollection_1_Add_m45942_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45942_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45943_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45943_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45943_GenericMethod/* genericMethod */

};
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
static ParameterInfo ICollection_1_t8907_ICollection_1_Contains_m45944_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t2020_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45944_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45944_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8907_ICollection_1_Contains_m45944_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45944_GenericMethod/* genericMethod */

};
extern Il2CppType InterfaceTypeAttributeU5BU5D_t5088_0_0_0;
extern Il2CppType InterfaceTypeAttributeU5BU5D_t5088_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8907_ICollection_1_CopyTo_m45945_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttributeU5BU5D_t5088_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45945_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45945_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8907_ICollection_1_CopyTo_m45945_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45945_GenericMethod/* genericMethod */

};
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
static ParameterInfo ICollection_1_t8907_ICollection_1_Remove_m45946_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t2020_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45946_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45946_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8907_ICollection_1_Remove_m45946_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45946_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8907_MethodInfos[] =
{
	&ICollection_1_get_Count_m45940_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45941_MethodInfo,
	&ICollection_1_Add_m45942_MethodInfo,
	&ICollection_1_Clear_m45943_MethodInfo,
	&ICollection_1_Contains_m45944_MethodInfo,
	&ICollection_1_CopyTo_m45945_MethodInfo,
	&ICollection_1_Remove_m45946_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8909_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8907_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8909_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8907_0_0_0;
extern Il2CppType ICollection_1_t8907_1_0_0;
struct ICollection_1_t8907;
extern Il2CppGenericClass ICollection_1_t8907_GenericClass;
TypeInfo ICollection_1_t8907_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8907_MethodInfos/* methods */
	, ICollection_1_t8907_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8907_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8907_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8907_0_0_0/* byval_arg */
	, &ICollection_1_t8907_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8907_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern Il2CppType IEnumerator_1_t6865_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45947_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45947_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8909_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6865_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45947_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8909_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45947_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8909_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8909_0_0_0;
extern Il2CppType IEnumerable_1_t8909_1_0_0;
struct IEnumerable_1_t8909;
extern Il2CppGenericClass IEnumerable_1_t8909_GenericClass;
TypeInfo IEnumerable_1_t8909_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8909_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8909_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8909_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8909_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8909_0_0_0/* byval_arg */
	, &IEnumerable_1_t8909_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8909_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8908_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo IList_1_get_Item_m45948_MethodInfo;
extern MethodInfo IList_1_set_Item_m45949_MethodInfo;
static PropertyInfo IList_1_t8908____Item_PropertyInfo = 
{
	&IList_1_t8908_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45948_MethodInfo/* get */
	, &IList_1_set_Item_m45949_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8908_PropertyInfos[] =
{
	&IList_1_t8908____Item_PropertyInfo,
	NULL
};
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
static ParameterInfo IList_1_t8908_IList_1_IndexOf_m45950_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t2020_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45950_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45950_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8908_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8908_IList_1_IndexOf_m45950_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45950_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
static ParameterInfo IList_1_t8908_IList_1_Insert_m45951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t2020_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45951_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45951_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8908_IList_1_Insert_m45951_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45951_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8908_IList_1_RemoveAt_m45952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45952_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45952_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8908_IList_1_RemoveAt_m45952_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45952_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8908_IList_1_get_Item_m45948_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45948_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45948_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8908_il2cpp_TypeInfo/* declaring_type */
	, &InterfaceTypeAttribute_t2020_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8908_IList_1_get_Item_m45948_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45948_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType InterfaceTypeAttribute_t2020_0_0_0;
static ParameterInfo IList_1_t8908_IList_1_set_Item_m45949_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t2020_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45949_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45949_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8908_IList_1_set_Item_m45949_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45949_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8908_MethodInfos[] =
{
	&IList_1_IndexOf_m45950_MethodInfo,
	&IList_1_Insert_m45951_MethodInfo,
	&IList_1_RemoveAt_m45952_MethodInfo,
	&IList_1_get_Item_m45948_MethodInfo,
	&IList_1_set_Item_m45949_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8908_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8907_il2cpp_TypeInfo,
	&IEnumerable_1_t8909_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8908_0_0_0;
extern Il2CppType IList_1_t8908_1_0_0;
struct IList_1_t8908;
extern Il2CppGenericClass IList_1_t8908_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8908_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8908_MethodInfos/* methods */
	, IList_1_t8908_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8908_il2cpp_TypeInfo/* element_class */
	, IList_1_t8908_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8908_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8908_0_0_0/* byval_arg */
	, &IList_1_t8908_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8908_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6867_il2cpp_TypeInfo;

// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45953_MethodInfo;
static PropertyInfo IEnumerator_1_t6867____Current_PropertyInfo = 
{
	&IEnumerator_1_t6867_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45953_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6867_PropertyInfos[] =
{
	&IEnumerator_1_t6867____Current_PropertyInfo,
	NULL
};
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45953_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45953_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6867_il2cpp_TypeInfo/* declaring_type */
	, &PreserveSigAttribute_t2023_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45953_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6867_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45953_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6867_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6867_0_0_0;
extern Il2CppType IEnumerator_1_t6867_1_0_0;
struct IEnumerator_1_t6867;
extern Il2CppGenericClass IEnumerator_1_t6867_GenericClass;
TypeInfo IEnumerator_1_t6867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6867_MethodInfos/* methods */
	, IEnumerator_1_t6867_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6867_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6867_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6867_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6867_0_0_0/* byval_arg */
	, &IEnumerator_1_t6867_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6867_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4826_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_680MethodDeclarations.h"

extern TypeInfo PreserveSigAttribute_t2023_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26241_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPreserveSigAttribute_t2023_m35342_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.PreserveSigAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.PreserveSigAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisPreserveSigAttribute_t2023_m35342(__this, p0, method) (PreserveSigAttribute_t2023 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4826____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4826, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4826____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26238_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4826____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4826_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26238_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4826____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4826_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26241_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4826_InternalEnumerator_1__ctor_m26237_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26237_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26237_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4826_InternalEnumerator_1__ctor_m26237_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26237_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26238_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26238_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26238_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26239_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26239_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26239_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26240_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26240_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26240_GenericMethod/* genericMethod */

};
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26241_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26241_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
	, &PreserveSigAttribute_t2023_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26241_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4826_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26237_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26238_MethodInfo,
	&InternalEnumerator_1_Dispose_m26239_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26240_MethodInfo,
	&InternalEnumerator_1_get_Current_m26241_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26240_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26239_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4826_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26238_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26240_MethodInfo,
	&InternalEnumerator_1_Dispose_m26239_MethodInfo,
	&InternalEnumerator_1_get_Current_m26241_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4826_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6867_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4826_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6867_il2cpp_TypeInfo, 7},
};
extern TypeInfo PreserveSigAttribute_t2023_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4826_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26241_MethodInfo/* Method Usage */,
	&PreserveSigAttribute_t2023_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisPreserveSigAttribute_t2023_m35342_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
extern TypeInfo ICollection_1_t8910_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo ICollection_1_get_Count_m45954_MethodInfo;
static PropertyInfo ICollection_1_t8910____Count_PropertyInfo = 
{
	&ICollection_1_t8910_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45954_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45955_MethodInfo;
static PropertyInfo ICollection_1_t8910____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8910_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45955_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8910_PropertyInfos[] =
{
	&ICollection_1_t8910____Count_PropertyInfo,
	&ICollection_1_t8910____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45954_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45954_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45954_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45955_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45955_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45955_GenericMethod/* genericMethod */

};
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
static ParameterInfo ICollection_1_t8910_ICollection_1_Add_m45956_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t2023_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45956_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45956_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8910_ICollection_1_Add_m45956_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45956_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45957_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45957_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45957_GenericMethod/* genericMethod */

};
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
static ParameterInfo ICollection_1_t8910_ICollection_1_Contains_m45958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t2023_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45958_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45958_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8910_ICollection_1_Contains_m45958_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45958_GenericMethod/* genericMethod */

};
extern Il2CppType PreserveSigAttributeU5BU5D_t5089_0_0_0;
extern Il2CppType PreserveSigAttributeU5BU5D_t5089_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8910_ICollection_1_CopyTo_m45959_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttributeU5BU5D_t5089_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45959_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45959_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8910_ICollection_1_CopyTo_m45959_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45959_GenericMethod/* genericMethod */

};
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
static ParameterInfo ICollection_1_t8910_ICollection_1_Remove_m45960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t2023_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45960_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45960_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8910_ICollection_1_Remove_m45960_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45960_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8910_MethodInfos[] =
{
	&ICollection_1_get_Count_m45954_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45955_MethodInfo,
	&ICollection_1_Add_m45956_MethodInfo,
	&ICollection_1_Clear_m45957_MethodInfo,
	&ICollection_1_Contains_m45958_MethodInfo,
	&ICollection_1_CopyTo_m45959_MethodInfo,
	&ICollection_1_Remove_m45960_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8912_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8910_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8912_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8910_0_0_0;
extern Il2CppType ICollection_1_t8910_1_0_0;
struct ICollection_1_t8910;
extern Il2CppGenericClass ICollection_1_t8910_GenericClass;
TypeInfo ICollection_1_t8910_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8910_MethodInfos/* methods */
	, ICollection_1_t8910_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8910_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8910_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8910_0_0_0/* byval_arg */
	, &ICollection_1_t8910_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8910_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern Il2CppType IEnumerator_1_t6867_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45961_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45961_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8912_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6867_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45961_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8912_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45961_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8912_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8912_0_0_0;
extern Il2CppType IEnumerable_1_t8912_1_0_0;
struct IEnumerable_1_t8912;
extern Il2CppGenericClass IEnumerable_1_t8912_GenericClass;
TypeInfo IEnumerable_1_t8912_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8912_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8912_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8912_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8912_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8912_0_0_0/* byval_arg */
	, &IEnumerable_1_t8912_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8912_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8911_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo IList_1_get_Item_m45962_MethodInfo;
extern MethodInfo IList_1_set_Item_m45963_MethodInfo;
static PropertyInfo IList_1_t8911____Item_PropertyInfo = 
{
	&IList_1_t8911_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45962_MethodInfo/* get */
	, &IList_1_set_Item_m45963_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8911_PropertyInfos[] =
{
	&IList_1_t8911____Item_PropertyInfo,
	NULL
};
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
static ParameterInfo IList_1_t8911_IList_1_IndexOf_m45964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t2023_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45964_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45964_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8911_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8911_IList_1_IndexOf_m45964_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45964_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
static ParameterInfo IList_1_t8911_IList_1_Insert_m45965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t2023_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45965_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45965_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8911_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8911_IList_1_Insert_m45965_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45965_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8911_IList_1_RemoveAt_m45966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45966_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45966_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8911_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8911_IList_1_RemoveAt_m45966_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45966_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8911_IList_1_get_Item_m45962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45962_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45962_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8911_il2cpp_TypeInfo/* declaring_type */
	, &PreserveSigAttribute_t2023_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8911_IList_1_get_Item_m45962_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45962_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType PreserveSigAttribute_t2023_0_0_0;
static ParameterInfo IList_1_t8911_IList_1_set_Item_m45963_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t2023_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45963_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45963_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8911_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8911_IList_1_set_Item_m45963_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45963_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8911_MethodInfos[] =
{
	&IList_1_IndexOf_m45964_MethodInfo,
	&IList_1_Insert_m45965_MethodInfo,
	&IList_1_RemoveAt_m45966_MethodInfo,
	&IList_1_get_Item_m45962_MethodInfo,
	&IList_1_set_Item_m45963_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8911_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8910_il2cpp_TypeInfo,
	&IEnumerable_1_t8912_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8911_0_0_0;
extern Il2CppType IList_1_t8911_1_0_0;
struct IList_1_t8911;
extern Il2CppGenericClass IList_1_t8911_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8911_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8911_MethodInfos/* methods */
	, IList_1_t8911_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8911_il2cpp_TypeInfo/* element_class */
	, IList_1_t8911_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8911_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8911_0_0_0/* byval_arg */
	, &IList_1_t8911_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8911_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6869_il2cpp_TypeInfo;

// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45967_MethodInfo;
static PropertyInfo IEnumerator_1_t6869____Current_PropertyInfo = 
{
	&IEnumerator_1_t6869_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45967_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6869_PropertyInfos[] =
{
	&IEnumerator_1_t6869____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45967_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45967_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6869_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibImportClassAttribute_t2024_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45967_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6869_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45967_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6869_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6869_0_0_0;
extern Il2CppType IEnumerator_1_t6869_1_0_0;
struct IEnumerator_1_t6869;
extern Il2CppGenericClass IEnumerator_1_t6869_GenericClass;
TypeInfo IEnumerator_1_t6869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6869_MethodInfos/* methods */
	, IEnumerator_1_t6869_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6869_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6869_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6869_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6869_0_0_0/* byval_arg */
	, &IEnumerator_1_t6869_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6869_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_681.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4827_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_681MethodDeclarations.h"

extern TypeInfo TypeLibImportClassAttribute_t2024_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26246_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t2024_m35353_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibImportClassAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibImportClassAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t2024_m35353(__this, p0, method) (TypeLibImportClassAttribute_t2024 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4827____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4827, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4827____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
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
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26243_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4827____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26243_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4827____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26246_MethodInfo/* get */
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
static ParameterInfo InternalEnumerator_1_t4827_InternalEnumerator_1__ctor_m26242_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26242_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26242_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4827_InternalEnumerator_1__ctor_m26242_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26242_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26243_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26243_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26243_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26244_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26244_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26244_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26245_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26245_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26245_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26246_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26246_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibImportClassAttribute_t2024_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26246_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4827_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26242_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26243_MethodInfo,
	&InternalEnumerator_1_Dispose_m26244_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26245_MethodInfo,
	&InternalEnumerator_1_get_Current_m26246_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26245_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26244_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4827_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26243_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26245_MethodInfo,
	&InternalEnumerator_1_Dispose_m26244_MethodInfo,
	&InternalEnumerator_1_get_Current_m26246_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4827_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6869_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4827_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6869_il2cpp_TypeInfo, 7},
};
extern TypeInfo TypeLibImportClassAttribute_t2024_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4827_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26246_MethodInfo/* Method Usage */,
	&TypeLibImportClassAttribute_t2024_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t2024_m35353_MethodInfo/* Method Usage */,
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
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
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
	, InternalEnumerator_1_t4827_RGCTXData/* rgctx_data */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8913_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo ICollection_1_get_Count_m45968_MethodInfo;
static PropertyInfo ICollection_1_t8913____Count_PropertyInfo = 
{
	&ICollection_1_t8913_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45968_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45969_MethodInfo;
static PropertyInfo ICollection_1_t8913____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8913_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45969_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8913_PropertyInfos[] =
{
	&ICollection_1_t8913____Count_PropertyInfo,
	&ICollection_1_t8913____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45968_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45968_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45968_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45969_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45969_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45969_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
static ParameterInfo ICollection_1_t8913_ICollection_1_Add_m45970_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t2024_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45970_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45970_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8913_ICollection_1_Add_m45970_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45970_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45971_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45971_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45971_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
static ParameterInfo ICollection_1_t8913_ICollection_1_Contains_m45972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t2024_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45972_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45972_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8913_ICollection_1_Contains_m45972_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45972_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibImportClassAttributeU5BU5D_t5090_0_0_0;
extern Il2CppType TypeLibImportClassAttributeU5BU5D_t5090_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8913_ICollection_1_CopyTo_m45973_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttributeU5BU5D_t5090_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45973_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45973_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8913_ICollection_1_CopyTo_m45973_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45973_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
static ParameterInfo ICollection_1_t8913_ICollection_1_Remove_m45974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t2024_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45974_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45974_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8913_ICollection_1_Remove_m45974_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45974_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8913_MethodInfos[] =
{
	&ICollection_1_get_Count_m45968_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45969_MethodInfo,
	&ICollection_1_Add_m45970_MethodInfo,
	&ICollection_1_Clear_m45971_MethodInfo,
	&ICollection_1_Contains_m45972_MethodInfo,
	&ICollection_1_CopyTo_m45973_MethodInfo,
	&ICollection_1_Remove_m45974_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8915_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8913_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8915_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8913_0_0_0;
extern Il2CppType ICollection_1_t8913_1_0_0;
struct ICollection_1_t8913;
extern Il2CppGenericClass ICollection_1_t8913_GenericClass;
TypeInfo ICollection_1_t8913_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8913_MethodInfos/* methods */
	, ICollection_1_t8913_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8913_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8913_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8913_0_0_0/* byval_arg */
	, &ICollection_1_t8913_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8913_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern Il2CppType IEnumerator_1_t6869_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45975_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45975_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8915_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6869_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45975_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8915_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45975_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8915_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8915_0_0_0;
extern Il2CppType IEnumerable_1_t8915_1_0_0;
struct IEnumerable_1_t8915;
extern Il2CppGenericClass IEnumerable_1_t8915_GenericClass;
TypeInfo IEnumerable_1_t8915_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8915_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8915_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8915_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8915_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8915_0_0_0/* byval_arg */
	, &IEnumerable_1_t8915_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8915_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8914_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo IList_1_get_Item_m45976_MethodInfo;
extern MethodInfo IList_1_set_Item_m45977_MethodInfo;
static PropertyInfo IList_1_t8914____Item_PropertyInfo = 
{
	&IList_1_t8914_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45976_MethodInfo/* get */
	, &IList_1_set_Item_m45977_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8914_PropertyInfos[] =
{
	&IList_1_t8914____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
static ParameterInfo IList_1_t8914_IList_1_IndexOf_m45978_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t2024_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45978_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45978_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8914_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8914_IList_1_IndexOf_m45978_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45978_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
static ParameterInfo IList_1_t8914_IList_1_Insert_m45979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t2024_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45979_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45979_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8914_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8914_IList_1_Insert_m45979_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45979_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8914_IList_1_RemoveAt_m45980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45980_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45980_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8914_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8914_IList_1_RemoveAt_m45980_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45980_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8914_IList_1_get_Item_m45976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45976_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45976_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8914_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibImportClassAttribute_t2024_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8914_IList_1_get_Item_m45976_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45976_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeLibImportClassAttribute_t2024_0_0_0;
static ParameterInfo IList_1_t8914_IList_1_set_Item_m45977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t2024_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45977_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45977_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8914_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8914_IList_1_set_Item_m45977_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45977_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8914_MethodInfos[] =
{
	&IList_1_IndexOf_m45978_MethodInfo,
	&IList_1_Insert_m45979_MethodInfo,
	&IList_1_RemoveAt_m45980_MethodInfo,
	&IList_1_get_Item_m45976_MethodInfo,
	&IList_1_set_Item_m45977_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8914_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8913_il2cpp_TypeInfo,
	&IEnumerable_1_t8915_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8914_0_0_0;
extern Il2CppType IList_1_t8914_1_0_0;
struct IList_1_t8914;
extern Il2CppGenericClass IList_1_t8914_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8914_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8914_MethodInfos/* methods */
	, IList_1_t8914_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8914_il2cpp_TypeInfo/* element_class */
	, IList_1_t8914_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8914_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8914_0_0_0/* byval_arg */
	, &IList_1_t8914_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8914_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6871_il2cpp_TypeInfo;

// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45981_MethodInfo;
static PropertyInfo IEnumerator_1_t6871____Current_PropertyInfo = 
{
	&IEnumerator_1_t6871_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45981_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6871_PropertyInfos[] =
{
	&IEnumerator_1_t6871____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45981_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45981_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6871_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibVersionAttribute_t2025_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45981_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6871_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45981_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6871_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6871_0_0_0;
extern Il2CppType IEnumerator_1_t6871_1_0_0;
struct IEnumerator_1_t6871;
extern Il2CppGenericClass IEnumerator_1_t6871_GenericClass;
TypeInfo IEnumerator_1_t6871_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6871_MethodInfos/* methods */
	, IEnumerator_1_t6871_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6871_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6871_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6871_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6871_0_0_0/* byval_arg */
	, &IEnumerator_1_t6871_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6871_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4828_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_682MethodDeclarations.h"

extern TypeInfo TypeLibVersionAttribute_t2025_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26251_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t2025_m35364_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t2025_m35364(__this, p0, method) (TypeLibVersionAttribute_t2025 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4828____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4828, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4828____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4828, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4828_FieldInfos[] =
{
	&InternalEnumerator_1_t4828____array_0_FieldInfo,
	&InternalEnumerator_1_t4828____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26248_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4828____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4828_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26248_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4828____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4828_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26251_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4828_PropertyInfos[] =
{
	&InternalEnumerator_1_t4828____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4828____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4828_InternalEnumerator_1__ctor_m26247_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26247_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26247_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4828_InternalEnumerator_1__ctor_m26247_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26247_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26248_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26248_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26248_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26249_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26249_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26249_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26250_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26250_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26250_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26251_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26251_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibVersionAttribute_t2025_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26251_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4828_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26247_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26248_MethodInfo,
	&InternalEnumerator_1_Dispose_m26249_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26250_MethodInfo,
	&InternalEnumerator_1_get_Current_m26251_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26250_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26249_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4828_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26248_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26250_MethodInfo,
	&InternalEnumerator_1_Dispose_m26249_MethodInfo,
	&InternalEnumerator_1_get_Current_m26251_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4828_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6871_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4828_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6871_il2cpp_TypeInfo, 7},
};
extern TypeInfo TypeLibVersionAttribute_t2025_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4828_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26251_MethodInfo/* Method Usage */,
	&TypeLibVersionAttribute_t2025_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t2025_m35364_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4828_0_0_0;
extern Il2CppType InternalEnumerator_1_t4828_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4828_GenericClass;
TypeInfo InternalEnumerator_1_t4828_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4828_MethodInfos/* methods */
	, InternalEnumerator_1_t4828_PropertyInfos/* properties */
	, InternalEnumerator_1_t4828_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4828_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4828_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4828_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4828_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4828_1_0_0/* this_arg */
	, InternalEnumerator_1_t4828_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4828_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4828_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4828)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8916_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m45982_MethodInfo;
static PropertyInfo ICollection_1_t8916____Count_PropertyInfo = 
{
	&ICollection_1_t8916_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45982_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45983_MethodInfo;
static PropertyInfo ICollection_1_t8916____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8916_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8916_PropertyInfos[] =
{
	&ICollection_1_t8916____Count_PropertyInfo,
	&ICollection_1_t8916____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45982_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45982_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45982_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45983_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45983_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45983_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
static ParameterInfo ICollection_1_t8916_ICollection_1_Add_m45984_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t2025_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45984_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45984_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8916_ICollection_1_Add_m45984_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45984_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45985_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45985_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45985_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
static ParameterInfo ICollection_1_t8916_ICollection_1_Contains_m45986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t2025_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45986_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45986_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8916_ICollection_1_Contains_m45986_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45986_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibVersionAttributeU5BU5D_t5091_0_0_0;
extern Il2CppType TypeLibVersionAttributeU5BU5D_t5091_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8916_ICollection_1_CopyTo_m45987_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttributeU5BU5D_t5091_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45987_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45987_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8916_ICollection_1_CopyTo_m45987_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45987_GenericMethod/* genericMethod */

};
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
static ParameterInfo ICollection_1_t8916_ICollection_1_Remove_m45988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t2025_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45988_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45988_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8916_ICollection_1_Remove_m45988_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45988_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8916_MethodInfos[] =
{
	&ICollection_1_get_Count_m45982_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45983_MethodInfo,
	&ICollection_1_Add_m45984_MethodInfo,
	&ICollection_1_Clear_m45985_MethodInfo,
	&ICollection_1_Contains_m45986_MethodInfo,
	&ICollection_1_CopyTo_m45987_MethodInfo,
	&ICollection_1_Remove_m45988_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8918_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8916_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8918_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8916_0_0_0;
extern Il2CppType ICollection_1_t8916_1_0_0;
struct ICollection_1_t8916;
extern Il2CppGenericClass ICollection_1_t8916_GenericClass;
TypeInfo ICollection_1_t8916_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8916_MethodInfos/* methods */
	, ICollection_1_t8916_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8916_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8916_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8916_0_0_0/* byval_arg */
	, &ICollection_1_t8916_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8916_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern Il2CppType IEnumerator_1_t6871_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45989_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45989_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8918_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6871_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45989_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8918_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45989_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8918_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8918_0_0_0;
extern Il2CppType IEnumerable_1_t8918_1_0_0;
struct IEnumerable_1_t8918;
extern Il2CppGenericClass IEnumerable_1_t8918_GenericClass;
TypeInfo IEnumerable_1_t8918_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8918_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8918_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8918_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8918_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8918_0_0_0/* byval_arg */
	, &IEnumerable_1_t8918_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8918_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8917_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo IList_1_get_Item_m45990_MethodInfo;
extern MethodInfo IList_1_set_Item_m45991_MethodInfo;
static PropertyInfo IList_1_t8917____Item_PropertyInfo = 
{
	&IList_1_t8917_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45990_MethodInfo/* get */
	, &IList_1_set_Item_m45991_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8917_PropertyInfos[] =
{
	&IList_1_t8917____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
static ParameterInfo IList_1_t8917_IList_1_IndexOf_m45992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t2025_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45992_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45992_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8917_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8917_IList_1_IndexOf_m45992_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45992_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
static ParameterInfo IList_1_t8917_IList_1_Insert_m45993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t2025_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45993_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45993_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8917_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8917_IList_1_Insert_m45993_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45993_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8917_IList_1_RemoveAt_m45994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45994_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45994_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8917_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8917_IList_1_RemoveAt_m45994_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45994_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8917_IList_1_get_Item_m45990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45990_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45990_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8917_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibVersionAttribute_t2025_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8917_IList_1_get_Item_m45990_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45990_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeLibVersionAttribute_t2025_0_0_0;
static ParameterInfo IList_1_t8917_IList_1_set_Item_m45991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t2025_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45991_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45991_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8917_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8917_IList_1_set_Item_m45991_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45991_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8917_MethodInfos[] =
{
	&IList_1_IndexOf_m45992_MethodInfo,
	&IList_1_Insert_m45993_MethodInfo,
	&IList_1_RemoveAt_m45994_MethodInfo,
	&IList_1_get_Item_m45990_MethodInfo,
	&IList_1_set_Item_m45991_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8917_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8916_il2cpp_TypeInfo,
	&IEnumerable_1_t8918_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8917_0_0_0;
extern Il2CppType IList_1_t8917_1_0_0;
struct IList_1_t8917;
extern Il2CppGenericClass IList_1_t8917_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8917_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8917_MethodInfos/* methods */
	, IList_1_t8917_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8917_il2cpp_TypeInfo/* element_class */
	, IList_1_t8917_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8917_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8917_0_0_0/* byval_arg */
	, &IList_1_t8917_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8917_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6873_il2cpp_TypeInfo;

// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo IEnumerator_1_get_Current_m45995_MethodInfo;
static PropertyInfo IEnumerator_1_t6873____Current_PropertyInfo = 
{
	&IEnumerator_1_t6873_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45995_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6873_PropertyInfos[] =
{
	&IEnumerator_1_t6873____Current_PropertyInfo,
	NULL
};
extern Il2CppType UnmanagedType_t2026_0_0_0;
extern void* RuntimeInvoker_UnmanagedType_t2026 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45995_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45995_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6873_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedType_t2026_0_0_0/* return_type */
	, RuntimeInvoker_UnmanagedType_t2026/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45995_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6873_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45995_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6873_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6873_0_0_0;
extern Il2CppType IEnumerator_1_t6873_1_0_0;
struct IEnumerator_1_t6873;
extern Il2CppGenericClass IEnumerator_1_t6873_GenericClass;
TypeInfo IEnumerator_1_t6873_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6873_MethodInfos/* methods */
	, IEnumerator_1_t6873_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6873_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6873_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6873_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6873_0_0_0/* byval_arg */
	, &IEnumerator_1_t6873_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6873_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
