#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_527.h"
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
extern TypeInfo InternalEnumerator_1_t4664_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_527MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System_System_Security_Cryptography_X509Certificates_X509Sub_0.h"
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
extern TypeInfo X509SubjectKeyIdentifierHashAlgorithm_t1631_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1534_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m25437_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6562_MethodInfo;
extern MethodInfo Array_get_Length_m1819_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t1631_m33627_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t1631_m33627 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25433_MethodInfo;
 void InternalEnumerator_1__ctor_m25433 (InternalEnumerator_1_t4664 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434 (InternalEnumerator_1_t4664 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25437(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25437_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509SubjectKeyIdentifierHashAlgorithm_t1631_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25435_MethodInfo;
 void InternalEnumerator_1_Dispose_m25435 (InternalEnumerator_1_t4664 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25436_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25436 (InternalEnumerator_1_t4664 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25437 (InternalEnumerator_1_t4664 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t1631_m33627(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509SubjectKeyIdentifierHashAlgorithm_t1631_m33627_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4664____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4664, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4664____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4664, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4664_FieldInfos[] =
{
	&InternalEnumerator_1_t4664____array_0_FieldInfo,
	&InternalEnumerator_1_t4664____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4664____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4664_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4664____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4664_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25437_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4664_PropertyInfos[] =
{
	&InternalEnumerator_1_t4664____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4664____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4664_InternalEnumerator_1__ctor_m25433_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25433_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25433_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25433/* method */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4664_InternalEnumerator_1__ctor_m25433_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25433_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434/* method */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25435_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25435_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25435/* method */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25435_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25436_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25436_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25436/* method */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25436_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
extern void* RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t1631 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25437_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25437_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25437/* method */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* declaring_type */
	, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0/* return_type */
	, RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t1631/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25437_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4664_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25433_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434_MethodInfo,
	&InternalEnumerator_1_Dispose_m25435_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25436_MethodInfo,
	&InternalEnumerator_1_get_Current_m25437_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3280_MethodInfo;
extern MethodInfo Object_Finalize_m416_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3281_MethodInfo;
extern MethodInfo ValueType_ToString_m3369_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4664_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25434_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25436_MethodInfo,
	&InternalEnumerator_1_Dispose_m25435_MethodInfo,
	&InternalEnumerator_1_get_Current_m25437_MethodInfo,
};
extern TypeInfo IEnumerator_t21_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t69_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6569_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t4664_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6569_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4664_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6569_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4664_0_0_0;
extern Il2CppType InternalEnumerator_1_t4664_1_0_0;
extern TypeInfo ValueType_t700_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4664_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4664_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4664_MethodInfos/* methods */
	, InternalEnumerator_1_t4664_PropertyInfos/* properties */
	, InternalEnumerator_1_t4664_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4664_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4664_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4664_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4664_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4664_1_0_0/* this_arg */
	, InternalEnumerator_1_t4664_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4664_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4664)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8451_il2cpp_TypeInfo;

#include "System_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern MethodInfo ICollection_1_get_Count_m43801_MethodInfo;
static PropertyInfo ICollection_1_t8451____Count_PropertyInfo = 
{
	&ICollection_1_t8451_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43801_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43802_MethodInfo;
static PropertyInfo ICollection_1_t8451____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8451_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43802_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8451_PropertyInfos[] =
{
	&ICollection_1_t8451____Count_PropertyInfo,
	&ICollection_1_t8451____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43801_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Count()
MethodInfo ICollection_1_get_Count_m43801_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43801_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43802_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43802_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43802_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
static ParameterInfo ICollection_1_t8451_ICollection_1_Add_m43803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43803_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Add(T)
MethodInfo ICollection_1_Add_m43803_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8451_ICollection_1_Add_m43803_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43803_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43804_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Clear()
MethodInfo ICollection_1_Clear_m43804_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43804_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
static ParameterInfo ICollection_1_t8451_ICollection_1_Contains_m43805_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43805_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Contains(T)
MethodInfo ICollection_1_Contains_m43805_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8451_ICollection_1_Contains_m43805_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43805_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithmU5BU5D_t5479_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithmU5BU5D_t5479_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8451_ICollection_1_CopyTo_m43806_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithmU5BU5D_t5479_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43806_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43806_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8451_ICollection_1_CopyTo_m43806_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43806_GenericMethod/* genericMethod */

};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
static ParameterInfo ICollection_1_t8451_ICollection_1_Remove_m43807_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43807_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Remove(T)
MethodInfo ICollection_1_Remove_m43807_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8451_ICollection_1_Remove_m43807_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43807_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8451_MethodInfos[] =
{
	&ICollection_1_get_Count_m43801_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43802_MethodInfo,
	&ICollection_1_Add_m43803_MethodInfo,
	&ICollection_1_Clear_m43804_MethodInfo,
	&ICollection_1_Contains_m43805_MethodInfo,
	&ICollection_1_CopyTo_m43806_MethodInfo,
	&ICollection_1_Remove_m43807_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t88_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8453_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8451_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8453_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8451_0_0_0;
extern Il2CppType ICollection_1_t8451_1_0_0;
struct ICollection_1_t8451;
extern Il2CppGenericClass ICollection_1_t8451_GenericClass;
TypeInfo ICollection_1_t8451_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8451_MethodInfos/* methods */
	, ICollection_1_t8451_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8451_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8451_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8451_0_0_0/* byval_arg */
	, &ICollection_1_t8451_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8451_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern Il2CppType IEnumerator_1_t6569_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43808_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43808_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8453_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6569_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43808_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8453_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43808_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8453_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8453_0_0_0;
extern Il2CppType IEnumerable_1_t8453_1_0_0;
struct IEnumerable_1_t8453;
extern Il2CppGenericClass IEnumerable_1_t8453_GenericClass;
TypeInfo IEnumerable_1_t8453_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8453_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8453_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8453_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8453_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8453_0_0_0/* byval_arg */
	, &IEnumerable_1_t8453_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8453_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8452_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>
extern MethodInfo IList_1_get_Item_m43809_MethodInfo;
extern MethodInfo IList_1_set_Item_m43810_MethodInfo;
static PropertyInfo IList_1_t8452____Item_PropertyInfo = 
{
	&IList_1_t8452_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43809_MethodInfo/* get */
	, &IList_1_set_Item_m43810_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8452_PropertyInfos[] =
{
	&IList_1_t8452____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
static ParameterInfo IList_1_t8452_IList_1_IndexOf_m43811_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43811_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43811_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8452_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8452_IList_1_IndexOf_m43811_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43811_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
static ParameterInfo IList_1_t8452_IList_1_Insert_m43812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43812_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43812_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8452_IList_1_Insert_m43812_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43812_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8452_IList_1_RemoveAt_m43813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43813_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43813_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8452_IList_1_RemoveAt_m43813_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43813_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8452_IList_1_get_Item_m43809_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
extern void* RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t1631_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43809_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43809_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8452_il2cpp_TypeInfo/* declaring_type */
	, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0/* return_type */
	, RuntimeInvoker_X509SubjectKeyIdentifierHashAlgorithm_t1631_Int32_t63/* invoker_method */
	, IList_1_t8452_IList_1_get_Item_m43809_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43809_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0;
static ParameterInfo IList_1_t8452_IList_1_set_Item_m43810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509SubjectKeyIdentifierHashAlgorithm_t1631_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43810_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43810_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8452_IList_1_set_Item_m43810_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43810_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8452_MethodInfos[] =
{
	&IList_1_IndexOf_m43811_MethodInfo,
	&IList_1_Insert_m43812_MethodInfo,
	&IList_1_RemoveAt_m43813_MethodInfo,
	&IList_1_get_Item_m43809_MethodInfo,
	&IList_1_set_Item_m43810_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8452_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8451_il2cpp_TypeInfo,
	&IEnumerable_1_t8453_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8452_0_0_0;
extern Il2CppType IList_1_t8452_1_0_0;
struct IList_1_t8452;
extern Il2CppGenericClass IList_1_t8452_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8452_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8452_MethodInfos/* methods */
	, IList_1_t8452_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8452_il2cpp_TypeInfo/* element_class */
	, IList_1_t8452_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8452_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8452_0_0_0/* byval_arg */
	, &IList_1_t8452_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8452_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6571_il2cpp_TypeInfo;

// System.Security.Cryptography.X509Certificates.X509VerificationFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Ver.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern MethodInfo IEnumerator_1_get_Current_m43814_MethodInfo;
static PropertyInfo IEnumerator_1_t6571____Current_PropertyInfo = 
{
	&IEnumerator_1_t6571_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43814_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6571_PropertyInfos[] =
{
	&IEnumerator_1_t6571____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
extern void* RuntimeInvoker_X509VerificationFlags_t1632 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43814_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43814_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6571_il2cpp_TypeInfo/* declaring_type */
	, &X509VerificationFlags_t1632_0_0_0/* return_type */
	, RuntimeInvoker_X509VerificationFlags_t1632/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43814_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6571_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43814_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6571_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6571_0_0_0;
extern Il2CppType IEnumerator_1_t6571_1_0_0;
struct IEnumerator_1_t6571;
extern Il2CppGenericClass IEnumerator_1_t6571_GenericClass;
TypeInfo IEnumerator_1_t6571_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6571_MethodInfos/* methods */
	, IEnumerator_1_t6571_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6571_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6571_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6571_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6571_0_0_0/* byval_arg */
	, &IEnumerator_1_t6571_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6571_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_528.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4665_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_528MethodDeclarations.h"

extern TypeInfo X509VerificationFlags_t1632_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25442_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509VerificationFlags_t1632_m33638_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509VerificationFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509VerificationFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509VerificationFlags_t1632_m33638 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25438_MethodInfo;
 void InternalEnumerator_1__ctor_m25438 (InternalEnumerator_1_t4665 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439 (InternalEnumerator_1_t4665 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25442(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25442_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509VerificationFlags_t1632_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25440_MethodInfo;
 void InternalEnumerator_1_Dispose_m25440 (InternalEnumerator_1_t4665 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25441_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25441 (InternalEnumerator_1_t4665 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25442 (InternalEnumerator_1_t4665 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisX509VerificationFlags_t1632_m33638(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509VerificationFlags_t1632_m33638_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4665____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4665, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4665____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4665, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4665_FieldInfos[] =
{
	&InternalEnumerator_1_t4665____array_0_FieldInfo,
	&InternalEnumerator_1_t4665____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4665____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4665_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4665____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4665_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25442_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4665_PropertyInfos[] =
{
	&InternalEnumerator_1_t4665____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4665____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4665_InternalEnumerator_1__ctor_m25438_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25438_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25438_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25438/* method */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4665_InternalEnumerator_1__ctor_m25438_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25438_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439/* method */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25440_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25440_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25440/* method */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25440_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25441_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25441_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25441/* method */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25441_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
extern void* RuntimeInvoker_X509VerificationFlags_t1632 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25442_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25442_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25442/* method */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* declaring_type */
	, &X509VerificationFlags_t1632_0_0_0/* return_type */
	, RuntimeInvoker_X509VerificationFlags_t1632/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25442_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4665_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25438_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439_MethodInfo,
	&InternalEnumerator_1_Dispose_m25440_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25441_MethodInfo,
	&InternalEnumerator_1_get_Current_m25442_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4665_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25439_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25441_MethodInfo,
	&InternalEnumerator_1_Dispose_m25440_MethodInfo,
	&InternalEnumerator_1_get_Current_m25442_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4665_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6571_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4665_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6571_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4665_0_0_0;
extern Il2CppType InternalEnumerator_1_t4665_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4665_GenericClass;
TypeInfo InternalEnumerator_1_t4665_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4665_MethodInfos/* methods */
	, InternalEnumerator_1_t4665_PropertyInfos/* properties */
	, InternalEnumerator_1_t4665_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4665_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4665_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4665_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4665_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4665_1_0_0/* this_arg */
	, InternalEnumerator_1_t4665_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4665_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4665)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8454_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern MethodInfo ICollection_1_get_Count_m43815_MethodInfo;
static PropertyInfo ICollection_1_t8454____Count_PropertyInfo = 
{
	&ICollection_1_t8454_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43815_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43816_MethodInfo;
static PropertyInfo ICollection_1_t8454____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8454_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43816_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8454_PropertyInfos[] =
{
	&ICollection_1_t8454____Count_PropertyInfo,
	&ICollection_1_t8454____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43815_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m43815_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43815_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43816_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43816_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43816_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
static ParameterInfo ICollection_1_t8454_ICollection_1_Add_m43817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t1632_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43817_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Add(T)
MethodInfo ICollection_1_Add_m43817_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8454_ICollection_1_Add_m43817_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43817_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43818_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Clear()
MethodInfo ICollection_1_Clear_m43818_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43818_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
static ParameterInfo ICollection_1_t8454_ICollection_1_Contains_m43819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t1632_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43819_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m43819_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8454_ICollection_1_Contains_m43819_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43819_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlagsU5BU5D_t5480_0_0_0;
extern Il2CppType X509VerificationFlagsU5BU5D_t5480_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8454_ICollection_1_CopyTo_m43820_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlagsU5BU5D_t5480_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43820_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43820_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8454_ICollection_1_CopyTo_m43820_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43820_GenericMethod/* genericMethod */

};
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
static ParameterInfo ICollection_1_t8454_ICollection_1_Remove_m43821_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t1632_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43821_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m43821_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8454_ICollection_1_Remove_m43821_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43821_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8454_MethodInfos[] =
{
	&ICollection_1_get_Count_m43815_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43816_MethodInfo,
	&ICollection_1_Add_m43817_MethodInfo,
	&ICollection_1_Clear_m43818_MethodInfo,
	&ICollection_1_Contains_m43819_MethodInfo,
	&ICollection_1_CopyTo_m43820_MethodInfo,
	&ICollection_1_Remove_m43821_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8456_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8454_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8456_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8454_0_0_0;
extern Il2CppType ICollection_1_t8454_1_0_0;
struct ICollection_1_t8454;
extern Il2CppGenericClass ICollection_1_t8454_GenericClass;
TypeInfo ICollection_1_t8454_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8454_MethodInfos/* methods */
	, ICollection_1_t8454_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8454_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8454_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8454_0_0_0/* byval_arg */
	, &ICollection_1_t8454_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8454_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern Il2CppType IEnumerator_1_t6571_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43822_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43822_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8456_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6571_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43822_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8456_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43822_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8456_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8456_0_0_0;
extern Il2CppType IEnumerable_1_t8456_1_0_0;
struct IEnumerable_1_t8456;
extern Il2CppGenericClass IEnumerable_1_t8456_GenericClass;
TypeInfo IEnumerable_1_t8456_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8456_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8456_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8456_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8456_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8456_0_0_0/* byval_arg */
	, &IEnumerable_1_t8456_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8456_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8455_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>
extern MethodInfo IList_1_get_Item_m43823_MethodInfo;
extern MethodInfo IList_1_set_Item_m43824_MethodInfo;
static PropertyInfo IList_1_t8455____Item_PropertyInfo = 
{
	&IList_1_t8455_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43823_MethodInfo/* get */
	, &IList_1_set_Item_m43824_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8455_PropertyInfos[] =
{
	&IList_1_t8455____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
static ParameterInfo IList_1_t8455_IList_1_IndexOf_m43825_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t1632_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43825_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43825_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8455_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8455_IList_1_IndexOf_m43825_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43825_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
static ParameterInfo IList_1_t8455_IList_1_Insert_m43826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t1632_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43826_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43826_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8455_IList_1_Insert_m43826_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43826_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8455_IList_1_RemoveAt_m43827_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43827_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43827_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8455_IList_1_RemoveAt_m43827_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43827_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8455_IList_1_get_Item_m43823_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
extern void* RuntimeInvoker_X509VerificationFlags_t1632_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43823_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43823_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8455_il2cpp_TypeInfo/* declaring_type */
	, &X509VerificationFlags_t1632_0_0_0/* return_type */
	, RuntimeInvoker_X509VerificationFlags_t1632_Int32_t63/* invoker_method */
	, IList_1_t8455_IList_1_get_Item_m43823_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43823_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType X509VerificationFlags_t1632_0_0_0;
static ParameterInfo IList_1_t8455_IList_1_set_Item_m43824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509VerificationFlags_t1632_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43824_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509VerificationFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43824_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8455_IList_1_set_Item_m43824_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43824_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8455_MethodInfos[] =
{
	&IList_1_IndexOf_m43825_MethodInfo,
	&IList_1_Insert_m43826_MethodInfo,
	&IList_1_RemoveAt_m43827_MethodInfo,
	&IList_1_get_Item_m43823_MethodInfo,
	&IList_1_set_Item_m43824_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8455_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8454_il2cpp_TypeInfo,
	&IEnumerable_1_t8456_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8455_0_0_0;
extern Il2CppType IList_1_t8455_1_0_0;
struct IList_1_t8455;
extern Il2CppGenericClass IList_1_t8455_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8455_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8455_MethodInfos/* methods */
	, IList_1_t8455_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8455_il2cpp_TypeInfo/* element_class */
	, IList_1_t8455_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8455_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8455_0_0_0/* byval_arg */
	, &IList_1_t8455_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8455_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6573_il2cpp_TypeInfo;

// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>
extern MethodInfo IEnumerator_1_get_Current_m43828_MethodInfo;
static PropertyInfo IEnumerator_1_t6573____Current_PropertyInfo = 
{
	&IEnumerator_1_t6573_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43828_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6573_PropertyInfos[] =
{
	&IEnumerator_1_t6573____Current_PropertyInfo,
	NULL
};
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
extern void* RuntimeInvoker_AsnDecodeStatus_t1633 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43828_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43828_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6573_il2cpp_TypeInfo/* declaring_type */
	, &AsnDecodeStatus_t1633_0_0_0/* return_type */
	, RuntimeInvoker_AsnDecodeStatus_t1633/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43828_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6573_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43828_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6573_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6573_0_0_0;
extern Il2CppType IEnumerator_1_t6573_1_0_0;
struct IEnumerator_1_t6573;
extern Il2CppGenericClass IEnumerator_1_t6573_GenericClass;
TypeInfo IEnumerator_1_t6573_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6573_MethodInfos/* methods */
	, IEnumerator_1_t6573_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6573_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6573_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6573_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6573_0_0_0/* byval_arg */
	, &IEnumerator_1_t6573_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6573_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_529.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4666_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_529MethodDeclarations.h"

extern TypeInfo AsnDecodeStatus_t1633_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25447_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAsnDecodeStatus_t1633_m33649_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.AsnDecodeStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.AsnDecodeStatus>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAsnDecodeStatus_t1633_m33649 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25443_MethodInfo;
 void InternalEnumerator_1__ctor_m25443 (InternalEnumerator_1_t4666 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444 (InternalEnumerator_1_t4666 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25447(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25447_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AsnDecodeStatus_t1633_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25445_MethodInfo;
 void InternalEnumerator_1_Dispose_m25445 (InternalEnumerator_1_t4666 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25446_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25446 (InternalEnumerator_1_t4666 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25447 (InternalEnumerator_1_t4666 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAsnDecodeStatus_t1633_m33649(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAsnDecodeStatus_t1633_m33649_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4666____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4666, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4666____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4666, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4666_FieldInfos[] =
{
	&InternalEnumerator_1_t4666____array_0_FieldInfo,
	&InternalEnumerator_1_t4666____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4666____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4666_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4666____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4666_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25447_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4666_PropertyInfos[] =
{
	&InternalEnumerator_1_t4666____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4666____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4666_InternalEnumerator_1__ctor_m25443_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25443_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25443_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25443/* method */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4666_InternalEnumerator_1__ctor_m25443_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25443_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444/* method */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25445_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25445_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25445/* method */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25445_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25446_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25446_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25446/* method */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25446_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
extern void* RuntimeInvoker_AsnDecodeStatus_t1633 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25447_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.AsnDecodeStatus>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25447_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25447/* method */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* declaring_type */
	, &AsnDecodeStatus_t1633_0_0_0/* return_type */
	, RuntimeInvoker_AsnDecodeStatus_t1633/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25447_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4666_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25443_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444_MethodInfo,
	&InternalEnumerator_1_Dispose_m25445_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25446_MethodInfo,
	&InternalEnumerator_1_get_Current_m25447_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4666_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25444_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25446_MethodInfo,
	&InternalEnumerator_1_Dispose_m25445_MethodInfo,
	&InternalEnumerator_1_get_Current_m25447_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4666_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6573_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4666_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6573_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4666_0_0_0;
extern Il2CppType InternalEnumerator_1_t4666_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4666_GenericClass;
TypeInfo InternalEnumerator_1_t4666_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4666_MethodInfos/* methods */
	, InternalEnumerator_1_t4666_PropertyInfos/* properties */
	, InternalEnumerator_1_t4666_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4666_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4666_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4666_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4666_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4666_1_0_0/* this_arg */
	, InternalEnumerator_1_t4666_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4666_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4666)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8457_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>
extern MethodInfo ICollection_1_get_Count_m43829_MethodInfo;
static PropertyInfo ICollection_1_t8457____Count_PropertyInfo = 
{
	&ICollection_1_t8457_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43829_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43830_MethodInfo;
static PropertyInfo ICollection_1_t8457____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8457_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43830_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8457_PropertyInfos[] =
{
	&ICollection_1_t8457____Count_PropertyInfo,
	&ICollection_1_t8457____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43829_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_Count()
MethodInfo ICollection_1_get_Count_m43829_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43829_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43830_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43830_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43830_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
static ParameterInfo ICollection_1_t8457_ICollection_1_Add_m43831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t1633_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43831_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Add(T)
MethodInfo ICollection_1_Add_m43831_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8457_ICollection_1_Add_m43831_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43831_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43832_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Clear()
MethodInfo ICollection_1_Clear_m43832_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43832_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
static ParameterInfo ICollection_1_t8457_ICollection_1_Contains_m43833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t1633_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43833_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Contains(T)
MethodInfo ICollection_1_Contains_m43833_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8457_ICollection_1_Contains_m43833_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43833_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatusU5BU5D_t5481_0_0_0;
extern Il2CppType AsnDecodeStatusU5BU5D_t5481_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8457_ICollection_1_CopyTo_m43834_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatusU5BU5D_t5481_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43834_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43834_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8457_ICollection_1_CopyTo_m43834_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43834_GenericMethod/* genericMethod */

};
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
static ParameterInfo ICollection_1_t8457_ICollection_1_Remove_m43835_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t1633_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43835_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.AsnDecodeStatus>::Remove(T)
MethodInfo ICollection_1_Remove_m43835_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8457_ICollection_1_Remove_m43835_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43835_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8457_MethodInfos[] =
{
	&ICollection_1_get_Count_m43829_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43830_MethodInfo,
	&ICollection_1_Add_m43831_MethodInfo,
	&ICollection_1_Clear_m43832_MethodInfo,
	&ICollection_1_Contains_m43833_MethodInfo,
	&ICollection_1_CopyTo_m43834_MethodInfo,
	&ICollection_1_Remove_m43835_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8459_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8457_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8459_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8457_0_0_0;
extern Il2CppType ICollection_1_t8457_1_0_0;
struct ICollection_1_t8457;
extern Il2CppGenericClass ICollection_1_t8457_GenericClass;
TypeInfo ICollection_1_t8457_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8457_MethodInfos/* methods */
	, ICollection_1_t8457_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8457_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8457_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8457_0_0_0/* byval_arg */
	, &ICollection_1_t8457_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8457_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.AsnDecodeStatus>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.AsnDecodeStatus>
extern Il2CppType IEnumerator_1_t6573_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43836_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.AsnDecodeStatus>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43836_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8459_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6573_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43836_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8459_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43836_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8459_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8459_0_0_0;
extern Il2CppType IEnumerable_1_t8459_1_0_0;
struct IEnumerable_1_t8459;
extern Il2CppGenericClass IEnumerable_1_t8459_GenericClass;
TypeInfo IEnumerable_1_t8459_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8459_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8459_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8459_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8459_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8459_0_0_0/* byval_arg */
	, &IEnumerable_1_t8459_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8459_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8458_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>
extern MethodInfo IList_1_get_Item_m43837_MethodInfo;
extern MethodInfo IList_1_set_Item_m43838_MethodInfo;
static PropertyInfo IList_1_t8458____Item_PropertyInfo = 
{
	&IList_1_t8458_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43837_MethodInfo/* get */
	, &IList_1_set_Item_m43838_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8458_PropertyInfos[] =
{
	&IList_1_t8458____Item_PropertyInfo,
	NULL
};
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
static ParameterInfo IList_1_t8458_IList_1_IndexOf_m43839_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t1633_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43839_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43839_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8458_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8458_IList_1_IndexOf_m43839_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43839_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
static ParameterInfo IList_1_t8458_IList_1_Insert_m43840_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t1633_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43840_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43840_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8458_IList_1_Insert_m43840_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43840_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8458_IList_1_RemoveAt_m43841_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43841_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43841_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8458_IList_1_RemoveAt_m43841_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43841_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8458_IList_1_get_Item_m43837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
extern void* RuntimeInvoker_AsnDecodeStatus_t1633_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43837_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43837_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8458_il2cpp_TypeInfo/* declaring_type */
	, &AsnDecodeStatus_t1633_0_0_0/* return_type */
	, RuntimeInvoker_AsnDecodeStatus_t1633_Int32_t63/* invoker_method */
	, IList_1_t8458_IList_1_get_Item_m43837_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43837_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType AsnDecodeStatus_t1633_0_0_0;
static ParameterInfo IList_1_t8458_IList_1_set_Item_m43838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AsnDecodeStatus_t1633_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43838_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.AsnDecodeStatus>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43838_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8458_IList_1_set_Item_m43838_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43838_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8458_MethodInfos[] =
{
	&IList_1_IndexOf_m43839_MethodInfo,
	&IList_1_Insert_m43840_MethodInfo,
	&IList_1_RemoveAt_m43841_MethodInfo,
	&IList_1_get_Item_m43837_MethodInfo,
	&IList_1_set_Item_m43838_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8458_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8457_il2cpp_TypeInfo,
	&IEnumerable_1_t8459_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8458_0_0_0;
extern Il2CppType IList_1_t8458_1_0_0;
struct IList_1_t8458;
extern Il2CppGenericClass IList_1_t8458_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8458_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8458_MethodInfos/* methods */
	, IList_1_t8458_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8458_il2cpp_TypeInfo/* element_class */
	, IList_1_t8458_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8458_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8458_0_0_0/* byval_arg */
	, &IList_1_t8458_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8458_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6575_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>
extern MethodInfo IEnumerator_1_get_Current_m43842_MethodInfo;
static PropertyInfo IEnumerator_1_t6575____Current_PropertyInfo = 
{
	&IEnumerator_1_t6575_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43842_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6575_PropertyInfos[] =
{
	&IEnumerator_1_t6575____Current_PropertyInfo,
	NULL
};
extern Il2CppType Capture_t1636_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43842_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43842_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6575_il2cpp_TypeInfo/* declaring_type */
	, &Capture_t1636_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43842_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6575_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43842_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6575_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6575_0_0_0;
extern Il2CppType IEnumerator_1_t6575_1_0_0;
struct IEnumerator_1_t6575;
extern Il2CppGenericClass IEnumerator_1_t6575_GenericClass;
TypeInfo IEnumerator_1_t6575_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6575_MethodInfos/* methods */
	, IEnumerator_1_t6575_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6575_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6575_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6575_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6575_0_0_0/* byval_arg */
	, &IEnumerator_1_t6575_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6575_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_530.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4667_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_530MethodDeclarations.h"

extern TypeInfo Capture_t1636_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25452_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCapture_t1636_m33660_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26773_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26773(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Capture>(System.Int32)
#define Array_InternalArray__get_Item_TisCapture_t1636_m33660(__this, p0, method) (Capture_t1636 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4667____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4667, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4667____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4667, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4667_FieldInfos[] =
{
	&InternalEnumerator_1_t4667____array_0_FieldInfo,
	&InternalEnumerator_1_t4667____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25449_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4667____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4667_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25449_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4667____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4667_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25452_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4667_PropertyInfos[] =
{
	&InternalEnumerator_1_t4667____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4667____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4667_InternalEnumerator_1__ctor_m25448_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25448_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25448_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4667_InternalEnumerator_1__ctor_m25448_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25448_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25449_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25449_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25449_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25450_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25450_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25450_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25451_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25451_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25451_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t1636_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25452_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Capture>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25452_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* declaring_type */
	, &Capture_t1636_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25452_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4667_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25448_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25449_MethodInfo,
	&InternalEnumerator_1_Dispose_m25450_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25451_MethodInfo,
	&InternalEnumerator_1_get_Current_m25452_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25451_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25450_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4667_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25449_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25451_MethodInfo,
	&InternalEnumerator_1_Dispose_m25450_MethodInfo,
	&InternalEnumerator_1_get_Current_m25452_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4667_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6575_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4667_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6575_il2cpp_TypeInfo, 7},
};
extern TypeInfo Capture_t1636_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4667_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25452_MethodInfo/* Method Usage */,
	&Capture_t1636_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCapture_t1636_m33660_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4667_0_0_0;
extern Il2CppType InternalEnumerator_1_t4667_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4667_GenericClass;
TypeInfo InternalEnumerator_1_t4667_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4667_MethodInfos/* methods */
	, InternalEnumerator_1_t4667_PropertyInfos/* properties */
	, InternalEnumerator_1_t4667_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4667_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4667_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4667_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4667_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4667_1_0_0/* this_arg */
	, InternalEnumerator_1_t4667_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4667_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4667_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4667)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8460_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>
extern MethodInfo ICollection_1_get_Count_m43843_MethodInfo;
static PropertyInfo ICollection_1_t8460____Count_PropertyInfo = 
{
	&ICollection_1_t8460_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43843_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43844_MethodInfo;
static PropertyInfo ICollection_1_t8460____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8460_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43844_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8460_PropertyInfos[] =
{
	&ICollection_1_t8460____Count_PropertyInfo,
	&ICollection_1_t8460____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43843_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_Count()
MethodInfo ICollection_1_get_Count_m43843_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43843_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43844_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43844_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43844_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t1636_0_0_0;
extern Il2CppType Capture_t1636_0_0_0;
static ParameterInfo ICollection_1_t8460_ICollection_1_Add_m43845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t1636_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43845_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Add(T)
MethodInfo ICollection_1_Add_m43845_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8460_ICollection_1_Add_m43845_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43845_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43846_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Clear()
MethodInfo ICollection_1_Clear_m43846_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43846_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t1636_0_0_0;
static ParameterInfo ICollection_1_t8460_ICollection_1_Contains_m43847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t1636_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43847_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Contains(T)
MethodInfo ICollection_1_Contains_m43847_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8460_ICollection_1_Contains_m43847_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43847_GenericMethod/* genericMethod */

};
extern Il2CppType CaptureU5BU5D_t1637_0_0_0;
extern Il2CppType CaptureU5BU5D_t1637_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8460_ICollection_1_CopyTo_m43848_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CaptureU5BU5D_t1637_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43848_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43848_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8460_ICollection_1_CopyTo_m43848_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43848_GenericMethod/* genericMethod */

};
extern Il2CppType Capture_t1636_0_0_0;
static ParameterInfo ICollection_1_t8460_ICollection_1_Remove_m43849_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t1636_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43849_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Capture>::Remove(T)
MethodInfo ICollection_1_Remove_m43849_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8460_ICollection_1_Remove_m43849_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43849_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8460_MethodInfos[] =
{
	&ICollection_1_get_Count_m43843_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43844_MethodInfo,
	&ICollection_1_Add_m43845_MethodInfo,
	&ICollection_1_Clear_m43846_MethodInfo,
	&ICollection_1_Contains_m43847_MethodInfo,
	&ICollection_1_CopyTo_m43848_MethodInfo,
	&ICollection_1_Remove_m43849_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8462_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8460_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8462_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8460_0_0_0;
extern Il2CppType ICollection_1_t8460_1_0_0;
struct ICollection_1_t8460;
extern Il2CppGenericClass ICollection_1_t8460_GenericClass;
TypeInfo ICollection_1_t8460_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8460_MethodInfos/* methods */
	, ICollection_1_t8460_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8460_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8460_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8460_0_0_0/* byval_arg */
	, &ICollection_1_t8460_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8460_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>
extern Il2CppType IEnumerator_1_t6575_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43850_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Capture>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43850_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8462_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6575_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43850_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8462_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43850_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8462_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8462_0_0_0;
extern Il2CppType IEnumerable_1_t8462_1_0_0;
struct IEnumerable_1_t8462;
extern Il2CppGenericClass IEnumerable_1_t8462_GenericClass;
TypeInfo IEnumerable_1_t8462_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8462_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8462_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8462_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8462_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8462_0_0_0/* byval_arg */
	, &IEnumerable_1_t8462_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8462_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8461_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>
extern MethodInfo IList_1_get_Item_m43851_MethodInfo;
extern MethodInfo IList_1_set_Item_m43852_MethodInfo;
static PropertyInfo IList_1_t8461____Item_PropertyInfo = 
{
	&IList_1_t8461_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43851_MethodInfo/* get */
	, &IList_1_set_Item_m43852_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8461_PropertyInfos[] =
{
	&IList_1_t8461____Item_PropertyInfo,
	NULL
};
extern Il2CppType Capture_t1636_0_0_0;
static ParameterInfo IList_1_t8461_IList_1_IndexOf_m43853_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Capture_t1636_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43853_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43853_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8461_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8461_IList_1_IndexOf_m43853_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43853_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Capture_t1636_0_0_0;
static ParameterInfo IList_1_t8461_IList_1_Insert_m43854_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Capture_t1636_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43854_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43854_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8461_IList_1_Insert_m43854_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43854_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8461_IList_1_RemoveAt_m43855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43855_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43855_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8461_IList_1_RemoveAt_m43855_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43855_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8461_IList_1_get_Item_m43851_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Capture_t1636_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43851_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43851_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8461_il2cpp_TypeInfo/* declaring_type */
	, &Capture_t1636_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8461_IList_1_get_Item_m43851_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43851_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Capture_t1636_0_0_0;
static ParameterInfo IList_1_t8461_IList_1_set_Item_m43852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Capture_t1636_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43852_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Capture>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43852_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8461_IList_1_set_Item_m43852_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43852_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8461_MethodInfos[] =
{
	&IList_1_IndexOf_m43853_MethodInfo,
	&IList_1_Insert_m43854_MethodInfo,
	&IList_1_RemoveAt_m43855_MethodInfo,
	&IList_1_get_Item_m43851_MethodInfo,
	&IList_1_set_Item_m43852_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8461_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8460_il2cpp_TypeInfo,
	&IEnumerable_1_t8462_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8461_0_0_0;
extern Il2CppType IList_1_t8461_1_0_0;
struct IList_1_t8461;
extern Il2CppGenericClass IList_1_t8461_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8461_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8461_MethodInfos/* methods */
	, IList_1_t8461_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8461_il2cpp_TypeInfo/* element_class */
	, IList_1_t8461_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8461_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8461_0_0_0/* byval_arg */
	, &IList_1_t8461_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8461_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6577_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>
extern MethodInfo IEnumerator_1_get_Current_m43856_MethodInfo;
static PropertyInfo IEnumerator_1_t6577____Current_PropertyInfo = 
{
	&IEnumerator_1_t6577_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43856_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6577_PropertyInfos[] =
{
	&IEnumerator_1_t6577____Current_PropertyInfo,
	NULL
};
extern Il2CppType Group_t1550_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43856_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43856_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6577_il2cpp_TypeInfo/* declaring_type */
	, &Group_t1550_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43856_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6577_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43856_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6577_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6577_0_0_0;
extern Il2CppType IEnumerator_1_t6577_1_0_0;
struct IEnumerator_1_t6577;
extern Il2CppGenericClass IEnumerator_1_t6577_GenericClass;
TypeInfo IEnumerator_1_t6577_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6577_MethodInfos/* methods */
	, IEnumerator_1_t6577_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6577_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6577_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6577_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6577_0_0_0/* byval_arg */
	, &IEnumerator_1_t6577_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6577_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_531.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4668_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_531MethodDeclarations.h"

extern TypeInfo Group_t1550_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25457_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGroup_t1550_m33671_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Group>(System.Int32)
#define Array_InternalArray__get_Item_TisGroup_t1550_m33671(__this, p0, method) (Group_t1550 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4668____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4668, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4668____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4668, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4668_FieldInfos[] =
{
	&InternalEnumerator_1_t4668____array_0_FieldInfo,
	&InternalEnumerator_1_t4668____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25454_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4668____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4668_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25454_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4668____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4668_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25457_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4668_PropertyInfos[] =
{
	&InternalEnumerator_1_t4668____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4668____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4668_InternalEnumerator_1__ctor_m25453_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25453_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25453_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4668_InternalEnumerator_1__ctor_m25453_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25453_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25454_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25454_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25454_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25455_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25455_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25455_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25456_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25456_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25456_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t1550_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25457_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Group>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25457_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* declaring_type */
	, &Group_t1550_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25457_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4668_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25453_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25454_MethodInfo,
	&InternalEnumerator_1_Dispose_m25455_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25456_MethodInfo,
	&InternalEnumerator_1_get_Current_m25457_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25456_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25455_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4668_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25454_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25456_MethodInfo,
	&InternalEnumerator_1_Dispose_m25455_MethodInfo,
	&InternalEnumerator_1_get_Current_m25457_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4668_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6577_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4668_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6577_il2cpp_TypeInfo, 7},
};
extern TypeInfo Group_t1550_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4668_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25457_MethodInfo/* Method Usage */,
	&Group_t1550_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisGroup_t1550_m33671_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4668_0_0_0;
extern Il2CppType InternalEnumerator_1_t4668_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4668_GenericClass;
TypeInfo InternalEnumerator_1_t4668_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4668_MethodInfos/* methods */
	, InternalEnumerator_1_t4668_PropertyInfos/* properties */
	, InternalEnumerator_1_t4668_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4668_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4668_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4668_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4668_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4668_1_0_0/* this_arg */
	, InternalEnumerator_1_t4668_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4668_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4668_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4668)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8463_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>
extern MethodInfo ICollection_1_get_Count_m43857_MethodInfo;
static PropertyInfo ICollection_1_t8463____Count_PropertyInfo = 
{
	&ICollection_1_t8463_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43857_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43858_MethodInfo;
static PropertyInfo ICollection_1_t8463____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8463_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43858_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8463_PropertyInfos[] =
{
	&ICollection_1_t8463____Count_PropertyInfo,
	&ICollection_1_t8463____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43857_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_Count()
MethodInfo ICollection_1_get_Count_m43857_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43857_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43858_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43858_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43858_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t1550_0_0_0;
extern Il2CppType Group_t1550_0_0_0;
static ParameterInfo ICollection_1_t8463_ICollection_1_Add_m43859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t1550_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43859_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Add(T)
MethodInfo ICollection_1_Add_m43859_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8463_ICollection_1_Add_m43859_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43859_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43860_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Clear()
MethodInfo ICollection_1_Clear_m43860_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43860_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t1550_0_0_0;
static ParameterInfo ICollection_1_t8463_ICollection_1_Contains_m43861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t1550_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43861_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Contains(T)
MethodInfo ICollection_1_Contains_m43861_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8463_ICollection_1_Contains_m43861_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43861_GenericMethod/* genericMethod */

};
extern Il2CppType GroupU5BU5D_t1639_0_0_0;
extern Il2CppType GroupU5BU5D_t1639_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8463_ICollection_1_CopyTo_m43862_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GroupU5BU5D_t1639_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43862_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43862_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8463_ICollection_1_CopyTo_m43862_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43862_GenericMethod/* genericMethod */

};
extern Il2CppType Group_t1550_0_0_0;
static ParameterInfo ICollection_1_t8463_ICollection_1_Remove_m43863_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t1550_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43863_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Group>::Remove(T)
MethodInfo ICollection_1_Remove_m43863_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8463_ICollection_1_Remove_m43863_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43863_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8463_MethodInfos[] =
{
	&ICollection_1_get_Count_m43857_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43858_MethodInfo,
	&ICollection_1_Add_m43859_MethodInfo,
	&ICollection_1_Clear_m43860_MethodInfo,
	&ICollection_1_Contains_m43861_MethodInfo,
	&ICollection_1_CopyTo_m43862_MethodInfo,
	&ICollection_1_Remove_m43863_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8465_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8463_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8465_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8463_0_0_0;
extern Il2CppType ICollection_1_t8463_1_0_0;
struct ICollection_1_t8463;
extern Il2CppGenericClass ICollection_1_t8463_GenericClass;
TypeInfo ICollection_1_t8463_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8463_MethodInfos/* methods */
	, ICollection_1_t8463_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8463_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8463_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8463_0_0_0/* byval_arg */
	, &ICollection_1_t8463_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8463_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>
extern Il2CppType IEnumerator_1_t6577_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43864_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Group>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43864_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8465_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6577_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43864_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8465_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43864_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8465_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8465_0_0_0;
extern Il2CppType IEnumerable_1_t8465_1_0_0;
struct IEnumerable_1_t8465;
extern Il2CppGenericClass IEnumerable_1_t8465_GenericClass;
TypeInfo IEnumerable_1_t8465_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8465_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8465_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8465_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8465_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8465_0_0_0/* byval_arg */
	, &IEnumerable_1_t8465_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8465_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8464_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>
extern MethodInfo IList_1_get_Item_m43865_MethodInfo;
extern MethodInfo IList_1_set_Item_m43866_MethodInfo;
static PropertyInfo IList_1_t8464____Item_PropertyInfo = 
{
	&IList_1_t8464_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43865_MethodInfo/* get */
	, &IList_1_set_Item_m43866_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8464_PropertyInfos[] =
{
	&IList_1_t8464____Item_PropertyInfo,
	NULL
};
extern Il2CppType Group_t1550_0_0_0;
static ParameterInfo IList_1_t8464_IList_1_IndexOf_m43867_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Group_t1550_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43867_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43867_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8464_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8464_IList_1_IndexOf_m43867_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43867_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Group_t1550_0_0_0;
static ParameterInfo IList_1_t8464_IList_1_Insert_m43868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Group_t1550_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43868_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43868_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8464_IList_1_Insert_m43868_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43868_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8464_IList_1_RemoveAt_m43869_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43869_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43869_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8464_IList_1_RemoveAt_m43869_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43869_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8464_IList_1_get_Item_m43865_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Group_t1550_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43865_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43865_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8464_il2cpp_TypeInfo/* declaring_type */
	, &Group_t1550_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8464_IList_1_get_Item_m43865_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43865_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Group_t1550_0_0_0;
static ParameterInfo IList_1_t8464_IList_1_set_Item_m43866_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Group_t1550_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43866_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Group>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43866_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8464_IList_1_set_Item_m43866_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43866_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8464_MethodInfos[] =
{
	&IList_1_IndexOf_m43867_MethodInfo,
	&IList_1_Insert_m43868_MethodInfo,
	&IList_1_RemoveAt_m43869_MethodInfo,
	&IList_1_get_Item_m43865_MethodInfo,
	&IList_1_set_Item_m43866_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8464_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8463_il2cpp_TypeInfo,
	&IEnumerable_1_t8465_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8464_0_0_0;
extern Il2CppType IList_1_t8464_1_0_0;
struct IList_1_t8464;
extern Il2CppGenericClass IList_1_t8464_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8464_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8464_MethodInfos/* methods */
	, IList_1_t8464_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8464_il2cpp_TypeInfo/* element_class */
	, IList_1_t8464_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8464_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8464_0_0_0/* byval_arg */
	, &IList_1_t8464_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8464_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6578_il2cpp_TypeInfo;

// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.RegexOptions>
extern MethodInfo IEnumerator_1_get_Current_m43870_MethodInfo;
static PropertyInfo IEnumerator_1_t6578____Current_PropertyInfo = 
{
	&IEnumerator_1_t6578_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43870_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6578_PropertyInfos[] =
{
	&IEnumerator_1_t6578____Current_PropertyInfo,
	NULL
};
extern Il2CppType RegexOptions_t1644_0_0_0;
extern void* RuntimeInvoker_RegexOptions_t1644 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43870_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43870_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6578_il2cpp_TypeInfo/* declaring_type */
	, &RegexOptions_t1644_0_0_0/* return_type */
	, RuntimeInvoker_RegexOptions_t1644/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43870_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6578_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43870_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6578_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6578_0_0_0;
extern Il2CppType IEnumerator_1_t6578_1_0_0;
struct IEnumerator_1_t6578;
extern Il2CppGenericClass IEnumerator_1_t6578_GenericClass;
TypeInfo IEnumerator_1_t6578_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6578_MethodInfos/* methods */
	, IEnumerator_1_t6578_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6578_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6578_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6578_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6578_0_0_0/* byval_arg */
	, &IEnumerator_1_t6578_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6578_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_532.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4669_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_532MethodDeclarations.h"

extern TypeInfo RegexOptions_t1644_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25462_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRegexOptions_t1644_m33682_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.RegexOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.RegexOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRegexOptions_t1644_m33682 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25458_MethodInfo;
 void InternalEnumerator_1__ctor_m25458 (InternalEnumerator_1_t4669 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459 (InternalEnumerator_1_t4669 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25462(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25462_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RegexOptions_t1644_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25460_MethodInfo;
 void InternalEnumerator_1_Dispose_m25460 (InternalEnumerator_1_t4669 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25461_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25461 (InternalEnumerator_1_t4669 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25462 (InternalEnumerator_1_t4669 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRegexOptions_t1644_m33682(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRegexOptions_t1644_m33682_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4669____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4669, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4669____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4669, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4669_FieldInfos[] =
{
	&InternalEnumerator_1_t4669____array_0_FieldInfo,
	&InternalEnumerator_1_t4669____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4669____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4669_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4669____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4669_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25462_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4669_PropertyInfos[] =
{
	&InternalEnumerator_1_t4669____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4669____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4669_InternalEnumerator_1__ctor_m25458_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25458_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25458_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25458/* method */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4669_InternalEnumerator_1__ctor_m25458_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25458_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459/* method */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25460_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25460_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25460/* method */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25460_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25461_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25461_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25461/* method */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25461_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t1644_0_0_0;
extern void* RuntimeInvoker_RegexOptions_t1644 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25462_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.RegexOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25462_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25462/* method */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* declaring_type */
	, &RegexOptions_t1644_0_0_0/* return_type */
	, RuntimeInvoker_RegexOptions_t1644/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25462_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4669_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25458_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459_MethodInfo,
	&InternalEnumerator_1_Dispose_m25460_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25461_MethodInfo,
	&InternalEnumerator_1_get_Current_m25462_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4669_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25459_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25461_MethodInfo,
	&InternalEnumerator_1_Dispose_m25460_MethodInfo,
	&InternalEnumerator_1_get_Current_m25462_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4669_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6578_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4669_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6578_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4669_0_0_0;
extern Il2CppType InternalEnumerator_1_t4669_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4669_GenericClass;
TypeInfo InternalEnumerator_1_t4669_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4669_MethodInfos/* methods */
	, InternalEnumerator_1_t4669_PropertyInfos/* properties */
	, InternalEnumerator_1_t4669_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4669_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4669_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4669_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4669_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4669_1_0_0/* this_arg */
	, InternalEnumerator_1_t4669_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4669_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4669)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8466_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>
extern MethodInfo ICollection_1_get_Count_m43871_MethodInfo;
static PropertyInfo ICollection_1_t8466____Count_PropertyInfo = 
{
	&ICollection_1_t8466_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43871_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43872_MethodInfo;
static PropertyInfo ICollection_1_t8466____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8466_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43872_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8466_PropertyInfos[] =
{
	&ICollection_1_t8466____Count_PropertyInfo,
	&ICollection_1_t8466____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43871_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m43871_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43871_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43872_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43872_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43872_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t1644_0_0_0;
extern Il2CppType RegexOptions_t1644_0_0_0;
static ParameterInfo ICollection_1_t8466_ICollection_1_Add_m43873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t1644_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43873_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Add(T)
MethodInfo ICollection_1_Add_m43873_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8466_ICollection_1_Add_m43873_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43873_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43874_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Clear()
MethodInfo ICollection_1_Clear_m43874_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43874_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t1644_0_0_0;
static ParameterInfo ICollection_1_t8466_ICollection_1_Contains_m43875_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t1644_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43875_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m43875_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8466_ICollection_1_Contains_m43875_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43875_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptionsU5BU5D_t5482_0_0_0;
extern Il2CppType RegexOptionsU5BU5D_t5482_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8466_ICollection_1_CopyTo_m43876_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptionsU5BU5D_t5482_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43876_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43876_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8466_ICollection_1_CopyTo_m43876_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43876_GenericMethod/* genericMethod */

};
extern Il2CppType RegexOptions_t1644_0_0_0;
static ParameterInfo ICollection_1_t8466_ICollection_1_Remove_m43877_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t1644_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43877_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.RegexOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m43877_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8466_ICollection_1_Remove_m43877_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43877_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8466_MethodInfos[] =
{
	&ICollection_1_get_Count_m43871_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43872_MethodInfo,
	&ICollection_1_Add_m43873_MethodInfo,
	&ICollection_1_Clear_m43874_MethodInfo,
	&ICollection_1_Contains_m43875_MethodInfo,
	&ICollection_1_CopyTo_m43876_MethodInfo,
	&ICollection_1_Remove_m43877_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8468_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8466_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8466_0_0_0;
extern Il2CppType ICollection_1_t8466_1_0_0;
struct ICollection_1_t8466;
extern Il2CppGenericClass ICollection_1_t8466_GenericClass;
TypeInfo ICollection_1_t8466_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8466_MethodInfos/* methods */
	, ICollection_1_t8466_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8466_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8466_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8466_0_0_0/* byval_arg */
	, &ICollection_1_t8466_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8466_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.RegexOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.RegexOptions>
extern Il2CppType IEnumerator_1_t6578_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43878_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.RegexOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43878_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8468_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6578_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43878_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8468_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43878_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8468_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8468_0_0_0;
extern Il2CppType IEnumerable_1_t8468_1_0_0;
struct IEnumerable_1_t8468;
extern Il2CppGenericClass IEnumerable_1_t8468_GenericClass;
TypeInfo IEnumerable_1_t8468_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8468_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8468_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8468_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8468_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8468_0_0_0/* byval_arg */
	, &IEnumerable_1_t8468_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8468_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8467_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>
extern MethodInfo IList_1_get_Item_m43879_MethodInfo;
extern MethodInfo IList_1_set_Item_m43880_MethodInfo;
static PropertyInfo IList_1_t8467____Item_PropertyInfo = 
{
	&IList_1_t8467_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43879_MethodInfo/* get */
	, &IList_1_set_Item_m43880_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8467_PropertyInfos[] =
{
	&IList_1_t8467____Item_PropertyInfo,
	NULL
};
extern Il2CppType RegexOptions_t1644_0_0_0;
static ParameterInfo IList_1_t8467_IList_1_IndexOf_m43881_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t1644_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43881_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43881_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8467_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8467_IList_1_IndexOf_m43881_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43881_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType RegexOptions_t1644_0_0_0;
static ParameterInfo IList_1_t8467_IList_1_Insert_m43882_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t1644_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43882_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43882_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8467_IList_1_Insert_m43882_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43882_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8467_IList_1_RemoveAt_m43883_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43883_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43883_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8467_IList_1_RemoveAt_m43883_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43883_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8467_IList_1_get_Item_m43879_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType RegexOptions_t1644_0_0_0;
extern void* RuntimeInvoker_RegexOptions_t1644_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43879_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43879_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8467_il2cpp_TypeInfo/* declaring_type */
	, &RegexOptions_t1644_0_0_0/* return_type */
	, RuntimeInvoker_RegexOptions_t1644_Int32_t63/* invoker_method */
	, IList_1_t8467_IList_1_get_Item_m43879_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43879_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType RegexOptions_t1644_0_0_0;
static ParameterInfo IList_1_t8467_IList_1_set_Item_m43880_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RegexOptions_t1644_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43880_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.RegexOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43880_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8467_IList_1_set_Item_m43880_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43880_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8467_MethodInfos[] =
{
	&IList_1_IndexOf_m43881_MethodInfo,
	&IList_1_Insert_m43882_MethodInfo,
	&IList_1_RemoveAt_m43883_MethodInfo,
	&IList_1_get_Item_m43879_MethodInfo,
	&IList_1_set_Item_m43880_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8467_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8466_il2cpp_TypeInfo,
	&IEnumerable_1_t8468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8467_0_0_0;
extern Il2CppType IList_1_t8467_1_0_0;
struct IList_1_t8467;
extern Il2CppGenericClass IList_1_t8467_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8467_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8467_MethodInfos/* methods */
	, IList_1_t8467_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8467_il2cpp_TypeInfo/* element_class */
	, IList_1_t8467_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8467_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8467_0_0_0/* byval_arg */
	, &IList_1_t8467_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8467_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparer_1_t2709_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Int32>
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IComparer_1_t2709_IComparer_1_Compare_m33693_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m33693_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T)
MethodInfo IComparer_1_Compare_m33693_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t2709_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63_Int32_t63/* invoker_method */
	, IComparer_1_t2709_IComparer_1_Compare_m33693_ParameterInfos/* parameters */
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
	, &IComparer_1_Compare_m33693_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t2709_MethodInfos[] =
{
	&IComparer_1_Compare_m33693_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t2709_0_0_0;
extern Il2CppType IComparer_1_t2709_1_0_0;
struct IComparer_1_t2709;
extern Il2CppGenericClass IComparer_1_t2709_GenericClass;
TypeInfo IComparer_1_t2709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t2709_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t2709_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t2709_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t2709_0_0_0/* byval_arg */
	, &IComparer_1_t2709_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t2709_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t4670_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_36MethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.GenericComparer`1
#include "mscorlib_System_Collections_Generic_GenericComparer_1.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_37.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo IComparable_1_t2327_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t63_il2cpp_TypeInfo;
extern TypeInfo Boolean_t64_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t1850_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t146_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4671_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t116_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_37MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType IComparable_1_t2327_0_0_0;
extern Il2CppType GenericComparer_1_t1850_0_0_0;
extern MethodInfo Object__ctor_m448_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m441_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m1419_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5125_MethodInfo;
extern MethodInfo Activator_CreateInstance_m5003_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m25467_MethodInfo;
extern MethodInfo Comparer_1_Compare_m43884_MethodInfo;
extern MethodInfo ArgumentException__ctor_m11264_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
extern MethodInfo Comparer_1__ctor_m25463_MethodInfo;
 void Comparer_1__ctor_m25463 (Comparer_1_t4670 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
extern MethodInfo Comparer_1__cctor_m25464_MethodInfo;
 void Comparer_1__cctor_m25464 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t4671 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4671 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t4671_il2cpp_TypeInfo));
	DefaultComparer__ctor_m25467(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m25467_MethodInfo);
	((Comparer_1_t4670_StaticFields*)InitializedTypeInfo(&Comparer_1_t4670_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m25465_MethodInfo;
 int32_t Comparer_1_System_Collections_IComparer_Compare_m25465 (Comparer_1_t4670 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
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
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(&Comparer_1_Compare_m43884_MethodInfo, __this, ((*(int32_t*)((int32_t*)UnBox (___x, InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo))))), ((*(int32_t*)((int32_t*)UnBox (___y, InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t116 * L_1 = (ArgumentException_t116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t116_il2cpp_TypeInfo));
		ArgumentException__ctor_m11264(L_1, /*hidden argument*/&ArgumentException__ctor_m11264_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
extern MethodInfo Comparer_1_get_Default_m25466_MethodInfo;
 Comparer_1_t4670 * Comparer_1_get_Default_m25466 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t4670_il2cpp_TypeInfo));
		return (((Comparer_1_t4670_StaticFields*)InitializedTypeInfo(&Comparer_1_t4670_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Int32>
extern Il2CppType Comparer_1_t4670_0_0_49;
FieldInfo Comparer_1_t4670_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t4670_0_0_49/* type */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t4670_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t4670_FieldInfos[] =
{
	&Comparer_1_t4670_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t4670____Default_PropertyInfo = 
{
	&Comparer_1_t4670_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m25466_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t4670_PropertyInfos[] =
{
	&Comparer_1_t4670____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m25463_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
MethodInfo Comparer_1__ctor_m25463_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m25463/* method */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* declaring_type */
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
	, &Comparer_1__ctor_m25463_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m25464_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
MethodInfo Comparer_1__cctor_m25464_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m25464/* method */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* declaring_type */
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
	, &Comparer_1__cctor_m25464_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t4670_Comparer_1_System_Collections_IComparer_Compare_m25465_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m25465_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m25465_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m25465/* method */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t_Object_t/* invoker_method */
	, Comparer_1_t4670_Comparer_1_System_Collections_IComparer_Compare_m25465_ParameterInfos/* parameters */
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
	, &Comparer_1_System_Collections_IComparer_Compare_m25465_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo Comparer_1_t4670_Comparer_1_Compare_m43884_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m43884_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T)
MethodInfo Comparer_1_Compare_m43884_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63_Int32_t63/* invoker_method */
	, Comparer_1_t4670_Comparer_1_Compare_m43884_ParameterInfos/* parameters */
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
	, &Comparer_1_Compare_m43884_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t4670_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m25466_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
MethodInfo Comparer_1_get_Default_m25466_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m25466/* method */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t4670_0_0_0/* return_type */
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
	, &Comparer_1_get_Default_m25466_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t4670_MethodInfos[] =
{
	&Comparer_1__ctor_m25463_MethodInfo,
	&Comparer_1__cctor_m25464_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m25465_MethodInfo,
	&Comparer_1_Compare_m43884_MethodInfo,
	&Comparer_1_get_Default_m25466_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m460_MethodInfo;
extern MethodInfo Object_GetHashCode_m461_MethodInfo;
extern MethodInfo Object_ToString_m435_MethodInfo;
static MethodInfo* Comparer_1_t4670_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&Comparer_1_Compare_m43884_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m25465_MethodInfo,
	NULL,
};
extern TypeInfo IComparer_t1565_il2cpp_TypeInfo;
static TypeInfo* Comparer_1_t4670_InterfacesTypeInfos[] = 
{
	&IComparer_1_t2709_il2cpp_TypeInfo,
	&IComparer_t1565_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t4670_InterfacesOffsets[] = 
{
	{ &IComparer_1_t2709_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t4670_0_0_0;
extern Il2CppType Comparer_1_t4670_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t4670;
extern Il2CppGenericClass Comparer_1_t4670_GenericClass;
TypeInfo Comparer_1_t4670_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t4670_MethodInfos/* methods */
	, Comparer_1_t4670_PropertyInfos/* properties */
	, Comparer_1_t4670_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t4670_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t4670_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t4670_0_0_0/* byval_arg */
	, &Comparer_1_t4670_1_0_0/* this_arg */
	, Comparer_1_t4670_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t4670_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t4670)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t4670_StaticFields)/* static_fields_size */
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

extern TypeInfo IComparable_t86_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m36345_MethodInfo;
extern MethodInfo IComparable_CompareTo_m12071_MethodInfo;
extern MethodInfo ArgumentException__ctor_m586_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
 void DefaultComparer__ctor_m25467 (DefaultComparer_t4671 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m25463(__this, /*hidden argument*/&Comparer_1__ctor_m25463_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m25468_MethodInfo;
 int32_t DefaultComparer_Compare_m25468 (DefaultComparer_t4671 * __this, int32_t ___x, int32_t ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_2);
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
		int32_t L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_4);
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
		int32_t L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t2327_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2327_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(&IComparable_1_CompareTo_m36345_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2327_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		int32_t L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t86_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_13);
		int32_t L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t63_il2cpp_TypeInfo), &L_15);
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
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m25467_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
MethodInfo DefaultComparer__ctor_m25467_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m25467/* method */
	, &DefaultComparer_t4671_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m25467_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo DefaultComparer_t4671_DefaultComparer_Compare_m25468_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m25468_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m25468_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m25468/* method */
	, &DefaultComparer_t4671_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63_Int32_t63/* invoker_method */
	, DefaultComparer_t4671_DefaultComparer_Compare_m25468_ParameterInfos/* parameters */
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
	, &DefaultComparer_Compare_m25468_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t4671_MethodInfos[] =
{
	&DefaultComparer__ctor_m25467_MethodInfo,
	&DefaultComparer_Compare_m25468_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t4671_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&DefaultComparer_Compare_m25468_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m25465_MethodInfo,
	&DefaultComparer_Compare_m25468_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t4671_InterfacesOffsets[] = 
{
	{ &IComparer_1_t2709_il2cpp_TypeInfo, 4},
	{ &IComparer_t1565_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t4671_0_0_0;
extern Il2CppType DefaultComparer_t4671_1_0_0;
struct DefaultComparer_t4671;
extern Il2CppGenericClass DefaultComparer_t4671_GenericClass;
extern TypeInfo Comparer_1_t1849_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t4671_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t4671_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t4670_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t1849_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t4671_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t4671_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t4671_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t4671_0_0_0/* byval_arg */
	, &DefaultComparer_t4671_1_0_0/* this_arg */
	, DefaultComparer_t4671_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t4671_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t4671)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6580_il2cpp_TypeInfo;

// System.Text.RegularExpressions.OpCode
#include "System_System_Text_RegularExpressions_OpCode.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpCode>
extern MethodInfo IEnumerator_1_get_Current_m43885_MethodInfo;
static PropertyInfo IEnumerator_1_t6580____Current_PropertyInfo = 
{
	&IEnumerator_1_t6580_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43885_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6580_PropertyInfos[] =
{
	&IEnumerator_1_t6580____Current_PropertyInfo,
	NULL
};
extern Il2CppType OpCode_t1645_0_0_0;
extern void* RuntimeInvoker_OpCode_t1645 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43885_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43885_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6580_il2cpp_TypeInfo/* declaring_type */
	, &OpCode_t1645_0_0_0/* return_type */
	, RuntimeInvoker_OpCode_t1645/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43885_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6580_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43885_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6580_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6580_0_0_0;
extern Il2CppType IEnumerator_1_t6580_1_0_0;
struct IEnumerator_1_t6580;
extern Il2CppGenericClass IEnumerator_1_t6580_GenericClass;
TypeInfo IEnumerator_1_t6580_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6580_MethodInfos/* methods */
	, IEnumerator_1_t6580_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6580_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6580_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6580_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6580_0_0_0/* byval_arg */
	, &IEnumerator_1_t6580_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6580_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_533.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4672_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_533MethodDeclarations.h"

extern TypeInfo OpCode_t1645_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25473_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOpCode_t1645_m33695_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpCode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpCode>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisOpCode_t1645_m33695 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25469_MethodInfo;
 void InternalEnumerator_1__ctor_m25469 (InternalEnumerator_1_t4672 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470 (InternalEnumerator_1_t4672 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m25473(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25473_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OpCode_t1645_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25471_MethodInfo;
 void InternalEnumerator_1_Dispose_m25471 (InternalEnumerator_1_t4672 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25472_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25472 (InternalEnumerator_1_t4672 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m25473 (InternalEnumerator_1_t4672 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisOpCode_t1645_m33695(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOpCode_t1645_m33695_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4672____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4672, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4672____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4672, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4672_FieldInfos[] =
{
	&InternalEnumerator_1_t4672____array_0_FieldInfo,
	&InternalEnumerator_1_t4672____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4672____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4672_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4672____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4672_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25473_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4672_PropertyInfos[] =
{
	&InternalEnumerator_1_t4672____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4672____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4672_InternalEnumerator_1__ctor_m25469_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25469_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25469_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25469/* method */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4672_InternalEnumerator_1__ctor_m25469_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25469_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470/* method */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25471_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25471_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25471/* method */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25471_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25472_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25472_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25472/* method */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25472_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t1645_0_0_0;
extern void* RuntimeInvoker_OpCode_t1645 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25473_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpCode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25473_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25473/* method */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* declaring_type */
	, &OpCode_t1645_0_0_0/* return_type */
	, RuntimeInvoker_OpCode_t1645/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25473_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4672_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25469_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470_MethodInfo,
	&InternalEnumerator_1_Dispose_m25471_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25472_MethodInfo,
	&InternalEnumerator_1_get_Current_m25473_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4672_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25470_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25472_MethodInfo,
	&InternalEnumerator_1_Dispose_m25471_MethodInfo,
	&InternalEnumerator_1_get_Current_m25473_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4672_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6580_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4672_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6580_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4672_0_0_0;
extern Il2CppType InternalEnumerator_1_t4672_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4672_GenericClass;
TypeInfo InternalEnumerator_1_t4672_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4672_MethodInfos/* methods */
	, InternalEnumerator_1_t4672_PropertyInfos/* properties */
	, InternalEnumerator_1_t4672_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4672_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4672_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4672_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4672_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4672_1_0_0/* this_arg */
	, InternalEnumerator_1_t4672_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4672_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4672)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8469_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>
extern MethodInfo ICollection_1_get_Count_m43886_MethodInfo;
static PropertyInfo ICollection_1_t8469____Count_PropertyInfo = 
{
	&ICollection_1_t8469_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43886_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43887_MethodInfo;
static PropertyInfo ICollection_1_t8469____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8469_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43887_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8469_PropertyInfos[] =
{
	&ICollection_1_t8469____Count_PropertyInfo,
	&ICollection_1_t8469____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43886_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_Count()
MethodInfo ICollection_1_get_Count_m43886_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43886_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43887_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43887_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43887_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t1645_0_0_0;
extern Il2CppType OpCode_t1645_0_0_0;
static ParameterInfo ICollection_1_t8469_ICollection_1_Add_m43888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t1645_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43888_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Add(T)
MethodInfo ICollection_1_Add_m43888_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_UInt16_t1058/* invoker_method */
	, ICollection_1_t8469_ICollection_1_Add_m43888_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43888_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43889_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Clear()
MethodInfo ICollection_1_Clear_m43889_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43889_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t1645_0_0_0;
static ParameterInfo ICollection_1_t8469_ICollection_1_Contains_m43890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t1645_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43890_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Contains(T)
MethodInfo ICollection_1_Contains_m43890_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8469_ICollection_1_Contains_m43890_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43890_GenericMethod/* genericMethod */

};
extern Il2CppType OpCodeU5BU5D_t5483_0_0_0;
extern Il2CppType OpCodeU5BU5D_t5483_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8469_ICollection_1_CopyTo_m43891_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OpCodeU5BU5D_t5483_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43891_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43891_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8469_ICollection_1_CopyTo_m43891_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43891_GenericMethod/* genericMethod */

};
extern Il2CppType OpCode_t1645_0_0_0;
static ParameterInfo ICollection_1_t8469_ICollection_1_Remove_m43892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t1645_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43892_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpCode>::Remove(T)
MethodInfo ICollection_1_Remove_m43892_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8469_ICollection_1_Remove_m43892_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43892_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8469_MethodInfos[] =
{
	&ICollection_1_get_Count_m43886_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43887_MethodInfo,
	&ICollection_1_Add_m43888_MethodInfo,
	&ICollection_1_Clear_m43889_MethodInfo,
	&ICollection_1_Contains_m43890_MethodInfo,
	&ICollection_1_CopyTo_m43891_MethodInfo,
	&ICollection_1_Remove_m43892_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8471_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8469_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8469_0_0_0;
extern Il2CppType ICollection_1_t8469_1_0_0;
struct ICollection_1_t8469;
extern Il2CppGenericClass ICollection_1_t8469_GenericClass;
TypeInfo ICollection_1_t8469_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8469_MethodInfos/* methods */
	, ICollection_1_t8469_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8469_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8469_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8469_0_0_0/* byval_arg */
	, &ICollection_1_t8469_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8469_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpCode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpCode>
extern Il2CppType IEnumerator_1_t6580_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43893_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpCode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43893_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8471_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6580_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43893_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8471_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43893_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8471_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8471_0_0_0;
extern Il2CppType IEnumerable_1_t8471_1_0_0;
struct IEnumerable_1_t8471;
extern Il2CppGenericClass IEnumerable_1_t8471_GenericClass;
TypeInfo IEnumerable_1_t8471_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8471_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8471_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8471_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8471_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8471_0_0_0/* byval_arg */
	, &IEnumerable_1_t8471_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8471_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>
extern MethodInfo IList_1_get_Item_m43894_MethodInfo;
extern MethodInfo IList_1_set_Item_m43895_MethodInfo;
static PropertyInfo IList_1_t8470____Item_PropertyInfo = 
{
	&IList_1_t8470_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43894_MethodInfo/* get */
	, &IList_1_set_Item_m43895_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8470_PropertyInfos[] =
{
	&IList_1_t8470____Item_PropertyInfo,
	NULL
};
extern Il2CppType OpCode_t1645_0_0_0;
static ParameterInfo IList_1_t8470_IList_1_IndexOf_m43896_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpCode_t1645_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43896_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43896_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8470_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8470_IList_1_IndexOf_m43896_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43896_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OpCode_t1645_0_0_0;
static ParameterInfo IList_1_t8470_IList_1_Insert_m43897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OpCode_t1645_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43897_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43897_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8470_IList_1_Insert_m43897_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43897_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8470_IList_1_RemoveAt_m43898_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43898_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43898_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8470_IList_1_RemoveAt_m43898_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43898_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8470_IList_1_get_Item_m43894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType OpCode_t1645_0_0_0;
extern void* RuntimeInvoker_OpCode_t1645_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43894_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43894_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8470_il2cpp_TypeInfo/* declaring_type */
	, &OpCode_t1645_0_0_0/* return_type */
	, RuntimeInvoker_OpCode_t1645_Int32_t63/* invoker_method */
	, IList_1_t8470_IList_1_get_Item_m43894_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43894_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OpCode_t1645_0_0_0;
static ParameterInfo IList_1_t8470_IList_1_set_Item_m43895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OpCode_t1645_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43895_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpCode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43895_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8470_IList_1_set_Item_m43895_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43895_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8470_MethodInfos[] =
{
	&IList_1_IndexOf_m43896_MethodInfo,
	&IList_1_Insert_m43897_MethodInfo,
	&IList_1_RemoveAt_m43898_MethodInfo,
	&IList_1_get_Item_m43894_MethodInfo,
	&IList_1_set_Item_m43895_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8470_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8469_il2cpp_TypeInfo,
	&IEnumerable_1_t8471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8470_0_0_0;
extern Il2CppType IList_1_t8470_1_0_0;
struct IList_1_t8470;
extern Il2CppGenericClass IList_1_t8470_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8470_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8470_MethodInfos/* methods */
	, IList_1_t8470_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8470_il2cpp_TypeInfo/* element_class */
	, IList_1_t8470_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8470_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8470_0_0_0/* byval_arg */
	, &IList_1_t8470_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8470_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6582_il2cpp_TypeInfo;

// System.Text.RegularExpressions.OpFlags
#include "System_System_Text_RegularExpressions_OpFlags.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpFlags>
extern MethodInfo IEnumerator_1_get_Current_m43899_MethodInfo;
static PropertyInfo IEnumerator_1_t6582____Current_PropertyInfo = 
{
	&IEnumerator_1_t6582_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6582_PropertyInfos[] =
{
	&IEnumerator_1_t6582____Current_PropertyInfo,
	NULL
};
extern Il2CppType OpFlags_t1646_0_0_0;
extern void* RuntimeInvoker_OpFlags_t1646 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43899_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43899_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6582_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1646_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1646/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43899_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6582_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43899_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6582_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6582_0_0_0;
extern Il2CppType IEnumerator_1_t6582_1_0_0;
struct IEnumerator_1_t6582;
extern Il2CppGenericClass IEnumerator_1_t6582_GenericClass;
TypeInfo IEnumerator_1_t6582_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6582_MethodInfos/* methods */
	, IEnumerator_1_t6582_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6582_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6582_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6582_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6582_0_0_0/* byval_arg */
	, &IEnumerator_1_t6582_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6582_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_534.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4673_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_534MethodDeclarations.h"

extern TypeInfo OpFlags_t1646_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25478_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOpFlags_t1646_m33706_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.OpFlags>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisOpFlags_t1646_m33706 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25474_MethodInfo;
 void InternalEnumerator_1__ctor_m25474 (InternalEnumerator_1_t4673 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475 (InternalEnumerator_1_t4673 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m25478(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25478_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&OpFlags_t1646_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25476_MethodInfo;
 void InternalEnumerator_1_Dispose_m25476 (InternalEnumerator_1_t4673 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25477_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25477 (InternalEnumerator_1_t4673 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m25478 (InternalEnumerator_1_t4673 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisOpFlags_t1646_m33706(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisOpFlags_t1646_m33706_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4673____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4673, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4673____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4673, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4673_FieldInfos[] =
{
	&InternalEnumerator_1_t4673____array_0_FieldInfo,
	&InternalEnumerator_1_t4673____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4673____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4673_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4673____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4673_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25478_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4673_PropertyInfos[] =
{
	&InternalEnumerator_1_t4673____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4673____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4673_InternalEnumerator_1__ctor_m25474_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25474_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25474_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25474/* method */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4673_InternalEnumerator_1__ctor_m25474_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25474_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475/* method */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25476_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25476_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25476/* method */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25476_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25477_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25477_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25477/* method */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25477_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t1646_0_0_0;
extern void* RuntimeInvoker_OpFlags_t1646 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25478_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.OpFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25478_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25478/* method */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1646_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1646/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25478_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4673_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475_MethodInfo,
	&InternalEnumerator_1_Dispose_m25476_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25477_MethodInfo,
	&InternalEnumerator_1_get_Current_m25478_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4673_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25475_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25477_MethodInfo,
	&InternalEnumerator_1_Dispose_m25476_MethodInfo,
	&InternalEnumerator_1_get_Current_m25478_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4673_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6582_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4673_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6582_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4673_0_0_0;
extern Il2CppType InternalEnumerator_1_t4673_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4673_GenericClass;
TypeInfo InternalEnumerator_1_t4673_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4673_MethodInfos/* methods */
	, InternalEnumerator_1_t4673_PropertyInfos/* properties */
	, InternalEnumerator_1_t4673_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4673_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4673_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4673_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4673_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4673_1_0_0/* this_arg */
	, InternalEnumerator_1_t4673_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4673_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4673)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8472_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>
extern MethodInfo ICollection_1_get_Count_m43900_MethodInfo;
static PropertyInfo ICollection_1_t8472____Count_PropertyInfo = 
{
	&ICollection_1_t8472_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43901_MethodInfo;
static PropertyInfo ICollection_1_t8472____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8472_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43901_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8472_PropertyInfos[] =
{
	&ICollection_1_t8472____Count_PropertyInfo,
	&ICollection_1_t8472____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43900_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m43900_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43900_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43901_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43901_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43901_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t1646_0_0_0;
extern Il2CppType OpFlags_t1646_0_0_0;
static ParameterInfo ICollection_1_t8472_ICollection_1_Add_m43902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t1646_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43902_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Add(T)
MethodInfo ICollection_1_Add_m43902_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_UInt16_t1058/* invoker_method */
	, ICollection_1_t8472_ICollection_1_Add_m43902_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43902_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43903_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Clear()
MethodInfo ICollection_1_Clear_m43903_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43903_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t1646_0_0_0;
static ParameterInfo ICollection_1_t8472_ICollection_1_Contains_m43904_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t1646_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43904_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m43904_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8472_ICollection_1_Contains_m43904_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43904_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlagsU5BU5D_t5484_0_0_0;
extern Il2CppType OpFlagsU5BU5D_t5484_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8472_ICollection_1_CopyTo_m43905_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OpFlagsU5BU5D_t5484_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43905_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43905_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8472_ICollection_1_CopyTo_m43905_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43905_GenericMethod/* genericMethod */

};
extern Il2CppType OpFlags_t1646_0_0_0;
static ParameterInfo ICollection_1_t8472_ICollection_1_Remove_m43906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t1646_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43906_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.OpFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m43906_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8472_ICollection_1_Remove_m43906_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43906_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8472_MethodInfos[] =
{
	&ICollection_1_get_Count_m43900_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43901_MethodInfo,
	&ICollection_1_Add_m43902_MethodInfo,
	&ICollection_1_Clear_m43903_MethodInfo,
	&ICollection_1_Contains_m43904_MethodInfo,
	&ICollection_1_CopyTo_m43905_MethodInfo,
	&ICollection_1_Remove_m43906_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8474_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8472_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8472_0_0_0;
extern Il2CppType ICollection_1_t8472_1_0_0;
struct ICollection_1_t8472;
extern Il2CppGenericClass ICollection_1_t8472_GenericClass;
TypeInfo ICollection_1_t8472_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8472_MethodInfos/* methods */
	, ICollection_1_t8472_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8472_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8472_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8472_0_0_0/* byval_arg */
	, &ICollection_1_t8472_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8472_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpFlags>
extern Il2CppType IEnumerator_1_t6582_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43907_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.OpFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43907_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8474_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6582_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43907_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8474_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43907_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8474_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8474_0_0_0;
extern Il2CppType IEnumerable_1_t8474_1_0_0;
struct IEnumerable_1_t8474;
extern Il2CppGenericClass IEnumerable_1_t8474_GenericClass;
TypeInfo IEnumerable_1_t8474_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8474_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8474_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8474_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8474_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8474_0_0_0/* byval_arg */
	, &IEnumerable_1_t8474_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8474_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8473_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>
extern MethodInfo IList_1_get_Item_m43908_MethodInfo;
extern MethodInfo IList_1_set_Item_m43909_MethodInfo;
static PropertyInfo IList_1_t8473____Item_PropertyInfo = 
{
	&IList_1_t8473_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43908_MethodInfo/* get */
	, &IList_1_set_Item_m43909_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8473_PropertyInfos[] =
{
	&IList_1_t8473____Item_PropertyInfo,
	NULL
};
extern Il2CppType OpFlags_t1646_0_0_0;
static ParameterInfo IList_1_t8473_IList_1_IndexOf_m43910_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OpFlags_t1646_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43910_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43910_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8473_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8473_IList_1_IndexOf_m43910_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43910_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OpFlags_t1646_0_0_0;
static ParameterInfo IList_1_t8473_IList_1_Insert_m43911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OpFlags_t1646_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43911_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43911_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8473_IList_1_Insert_m43911_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43911_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8473_IList_1_RemoveAt_m43912_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43912_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43912_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8473_IList_1_RemoveAt_m43912_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43912_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8473_IList_1_get_Item_m43908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType OpFlags_t1646_0_0_0;
extern void* RuntimeInvoker_OpFlags_t1646_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43908_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43908_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8473_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1646_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1646_Int32_t63/* invoker_method */
	, IList_1_t8473_IList_1_get_Item_m43908_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43908_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OpFlags_t1646_0_0_0;
static ParameterInfo IList_1_t8473_IList_1_set_Item_m43909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OpFlags_t1646_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43909_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.OpFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43909_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8473_IList_1_set_Item_m43909_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43909_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8473_MethodInfos[] =
{
	&IList_1_IndexOf_m43910_MethodInfo,
	&IList_1_Insert_m43911_MethodInfo,
	&IList_1_RemoveAt_m43912_MethodInfo,
	&IList_1_get_Item_m43908_MethodInfo,
	&IList_1_set_Item_m43909_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8473_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8472_il2cpp_TypeInfo,
	&IEnumerable_1_t8474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8473_0_0_0;
extern Il2CppType IList_1_t8473_1_0_0;
struct IList_1_t8473;
extern Il2CppGenericClass IList_1_t8473_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8473_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8473_MethodInfos/* methods */
	, IList_1_t8473_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8473_il2cpp_TypeInfo/* element_class */
	, IList_1_t8473_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8473_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8473_0_0_0/* byval_arg */
	, &IList_1_t8473_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8473_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6584_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Position>
extern MethodInfo IEnumerator_1_get_Current_m43913_MethodInfo;
static PropertyInfo IEnumerator_1_t6584____Current_PropertyInfo = 
{
	&IEnumerator_1_t6584_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43913_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6584_PropertyInfos[] =
{
	&IEnumerator_1_t6584____Current_PropertyInfo,
	NULL
};
extern Il2CppType Position_t1647_0_0_0;
extern void* RuntimeInvoker_Position_t1647 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43913_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43913_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6584_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1647_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1647/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43913_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6584_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43913_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6584_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6584_0_0_0;
extern Il2CppType IEnumerator_1_t6584_1_0_0;
struct IEnumerator_1_t6584;
extern Il2CppGenericClass IEnumerator_1_t6584_GenericClass;
TypeInfo IEnumerator_1_t6584_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6584_MethodInfos/* methods */
	, IEnumerator_1_t6584_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6584_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6584_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6584_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6584_0_0_0/* byval_arg */
	, &IEnumerator_1_t6584_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6584_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_535.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4674_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_535MethodDeclarations.h"

extern TypeInfo Position_t1647_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25483_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPosition_t1647_m33717_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Position>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Position>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisPosition_t1647_m33717 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25479_MethodInfo;
 void InternalEnumerator_1__ctor_m25479 (InternalEnumerator_1_t4674 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480 (InternalEnumerator_1_t4674 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m25483(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25483_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Position_t1647_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25481_MethodInfo;
 void InternalEnumerator_1_Dispose_m25481 (InternalEnumerator_1_t4674 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25482_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25482 (InternalEnumerator_1_t4674 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m25483 (InternalEnumerator_1_t4674 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisPosition_t1647_m33717(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPosition_t1647_m33717_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4674____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4674, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4674____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4674, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4674_FieldInfos[] =
{
	&InternalEnumerator_1_t4674____array_0_FieldInfo,
	&InternalEnumerator_1_t4674____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4674____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4674_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4674____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4674_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25483_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4674_PropertyInfos[] =
{
	&InternalEnumerator_1_t4674____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4674____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4674_InternalEnumerator_1__ctor_m25479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25479_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25479_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25479/* method */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4674_InternalEnumerator_1__ctor_m25479_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25479_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480/* method */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25481_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25481_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25481/* method */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25481_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25482_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25482_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25482/* method */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25482_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t1647_0_0_0;
extern void* RuntimeInvoker_Position_t1647 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25483_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Position>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25483_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25483/* method */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1647_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1647/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25483_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4674_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25479_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480_MethodInfo,
	&InternalEnumerator_1_Dispose_m25481_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25482_MethodInfo,
	&InternalEnumerator_1_get_Current_m25483_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4674_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25480_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25482_MethodInfo,
	&InternalEnumerator_1_Dispose_m25481_MethodInfo,
	&InternalEnumerator_1_get_Current_m25483_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4674_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6584_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4674_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6584_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4674_0_0_0;
extern Il2CppType InternalEnumerator_1_t4674_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4674_GenericClass;
TypeInfo InternalEnumerator_1_t4674_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4674_MethodInfos/* methods */
	, InternalEnumerator_1_t4674_PropertyInfos/* properties */
	, InternalEnumerator_1_t4674_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4674_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4674_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4674_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4674_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4674_1_0_0/* this_arg */
	, InternalEnumerator_1_t4674_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4674_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4674)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8475_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>
extern MethodInfo ICollection_1_get_Count_m43914_MethodInfo;
static PropertyInfo ICollection_1_t8475____Count_PropertyInfo = 
{
	&ICollection_1_t8475_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43914_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43915_MethodInfo;
static PropertyInfo ICollection_1_t8475____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8475_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8475_PropertyInfos[] =
{
	&ICollection_1_t8475____Count_PropertyInfo,
	&ICollection_1_t8475____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43914_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_Count()
MethodInfo ICollection_1_get_Count_m43914_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43914_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43915_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43915_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43915_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t1647_0_0_0;
extern Il2CppType Position_t1647_0_0_0;
static ParameterInfo ICollection_1_t8475_ICollection_1_Add_m43916_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t1647_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43916_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Add(T)
MethodInfo ICollection_1_Add_m43916_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_UInt16_t1058/* invoker_method */
	, ICollection_1_t8475_ICollection_1_Add_m43916_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43916_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43917_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Clear()
MethodInfo ICollection_1_Clear_m43917_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43917_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t1647_0_0_0;
static ParameterInfo ICollection_1_t8475_ICollection_1_Contains_m43918_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t1647_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43918_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Contains(T)
MethodInfo ICollection_1_Contains_m43918_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8475_ICollection_1_Contains_m43918_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43918_GenericMethod/* genericMethod */

};
extern Il2CppType PositionU5BU5D_t5485_0_0_0;
extern Il2CppType PositionU5BU5D_t5485_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8475_ICollection_1_CopyTo_m43919_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PositionU5BU5D_t5485_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43919_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43919_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8475_ICollection_1_CopyTo_m43919_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43919_GenericMethod/* genericMethod */

};
extern Il2CppType Position_t1647_0_0_0;
static ParameterInfo ICollection_1_t8475_ICollection_1_Remove_m43920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t1647_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43920_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Position>::Remove(T)
MethodInfo ICollection_1_Remove_m43920_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8475_ICollection_1_Remove_m43920_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43920_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8475_MethodInfos[] =
{
	&ICollection_1_get_Count_m43914_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43915_MethodInfo,
	&ICollection_1_Add_m43916_MethodInfo,
	&ICollection_1_Clear_m43917_MethodInfo,
	&ICollection_1_Contains_m43918_MethodInfo,
	&ICollection_1_CopyTo_m43919_MethodInfo,
	&ICollection_1_Remove_m43920_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8477_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8475_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8475_0_0_0;
extern Il2CppType ICollection_1_t8475_1_0_0;
struct ICollection_1_t8475;
extern Il2CppGenericClass ICollection_1_t8475_GenericClass;
TypeInfo ICollection_1_t8475_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8475_MethodInfos/* methods */
	, ICollection_1_t8475_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8475_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8475_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8475_0_0_0/* byval_arg */
	, &ICollection_1_t8475_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8475_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Position>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Position>
extern Il2CppType IEnumerator_1_t6584_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43921_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Position>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43921_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8477_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6584_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43921_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8477_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43921_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8477_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8477_0_0_0;
extern Il2CppType IEnumerable_1_t8477_1_0_0;
struct IEnumerable_1_t8477;
extern Il2CppGenericClass IEnumerable_1_t8477_GenericClass;
TypeInfo IEnumerable_1_t8477_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8477_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8477_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8477_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8477_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8477_0_0_0/* byval_arg */
	, &IEnumerable_1_t8477_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8477_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8476_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>
extern MethodInfo IList_1_get_Item_m43922_MethodInfo;
extern MethodInfo IList_1_set_Item_m43923_MethodInfo;
static PropertyInfo IList_1_t8476____Item_PropertyInfo = 
{
	&IList_1_t8476_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43922_MethodInfo/* get */
	, &IList_1_set_Item_m43923_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8476_PropertyInfos[] =
{
	&IList_1_t8476____Item_PropertyInfo,
	NULL
};
extern Il2CppType Position_t1647_0_0_0;
static ParameterInfo IList_1_t8476_IList_1_IndexOf_m43924_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Position_t1647_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43924_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43924_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8476_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8476_IList_1_IndexOf_m43924_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43924_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Position_t1647_0_0_0;
static ParameterInfo IList_1_t8476_IList_1_Insert_m43925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Position_t1647_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43925_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43925_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8476_IList_1_Insert_m43925_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43925_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8476_IList_1_RemoveAt_m43926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43926_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43926_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8476_IList_1_RemoveAt_m43926_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43926_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8476_IList_1_get_Item_m43922_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Position_t1647_0_0_0;
extern void* RuntimeInvoker_Position_t1647_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43922_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43922_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8476_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1647_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1647_Int32_t63/* invoker_method */
	, IList_1_t8476_IList_1_get_Item_m43922_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43922_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Position_t1647_0_0_0;
static ParameterInfo IList_1_t8476_IList_1_set_Item_m43923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Position_t1647_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43923_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Position>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43923_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8476_IList_1_set_Item_m43923_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43923_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8476_MethodInfos[] =
{
	&IList_1_IndexOf_m43924_MethodInfo,
	&IList_1_Insert_m43925_MethodInfo,
	&IList_1_RemoveAt_m43926_MethodInfo,
	&IList_1_get_Item_m43922_MethodInfo,
	&IList_1_set_Item_m43923_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8476_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8475_il2cpp_TypeInfo,
	&IEnumerable_1_t8477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8476_0_0_0;
extern Il2CppType IList_1_t8476_1_0_0;
struct IList_1_t8476;
extern Il2CppGenericClass IList_1_t8476_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8476_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8476_MethodInfos/* methods */
	, IList_1_t8476_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8476_il2cpp_TypeInfo/* element_class */
	, IList_1_t8476_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8476_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8476_0_0_0/* byval_arg */
	, &IList_1_t8476_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8476_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6586_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Category>
extern MethodInfo IEnumerator_1_get_Current_m43927_MethodInfo;
static PropertyInfo IEnumerator_1_t6586____Current_PropertyInfo = 
{
	&IEnumerator_1_t6586_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43927_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6586_PropertyInfos[] =
{
	&IEnumerator_1_t6586____Current_PropertyInfo,
	NULL
};
extern Il2CppType Category_t1651_0_0_0;
extern void* RuntimeInvoker_Category_t1651 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43927_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43927_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6586_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1651_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1651/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43927_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6586_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43927_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6586_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6586_0_0_0;
extern Il2CppType IEnumerator_1_t6586_1_0_0;
struct IEnumerator_1_t6586;
extern Il2CppGenericClass IEnumerator_1_t6586_GenericClass;
TypeInfo IEnumerator_1_t6586_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6586_MethodInfos/* methods */
	, IEnumerator_1_t6586_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6586_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6586_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6586_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6586_0_0_0/* byval_arg */
	, &IEnumerator_1_t6586_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6586_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_536.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4675_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_536MethodDeclarations.h"

extern TypeInfo Category_t1651_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25488_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCategory_t1651_m33728_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Category>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Category>(System.Int32)
 uint16_t Array_InternalArray__get_Item_TisCategory_t1651_m33728 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25484_MethodInfo;
 void InternalEnumerator_1__ctor_m25484 (InternalEnumerator_1_t4675 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485 (InternalEnumerator_1_t4675 * __this, MethodInfo* method){
	{
		uint16_t L_0 = InternalEnumerator_1_get_Current_m25488(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25488_MethodInfo);
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Category_t1651_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25486_MethodInfo;
 void InternalEnumerator_1_Dispose_m25486 (InternalEnumerator_1_t4675 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25487_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25487 (InternalEnumerator_1_t4675 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
 uint16_t InternalEnumerator_1_get_Current_m25488 (InternalEnumerator_1_t4675 * __this, MethodInfo* method){
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
		uint16_t L_8 = Array_InternalArray__get_Item_TisCategory_t1651_m33728(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCategory_t1651_m33728_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4675____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4675, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4675____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4675, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4675_FieldInfos[] =
{
	&InternalEnumerator_1_t4675____array_0_FieldInfo,
	&InternalEnumerator_1_t4675____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4675____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4675_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4675____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4675_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25488_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4675_PropertyInfos[] =
{
	&InternalEnumerator_1_t4675____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4675____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4675_InternalEnumerator_1__ctor_m25484_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25484_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25484_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25484/* method */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4675_InternalEnumerator_1__ctor_m25484_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25484_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485/* method */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25486_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25486_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25486/* method */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25486_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25487_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25487_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25487/* method */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25487_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t1651_0_0_0;
extern void* RuntimeInvoker_Category_t1651 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25488_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Category>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25488_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25488/* method */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1651_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1651/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25488_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4675_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25484_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485_MethodInfo,
	&InternalEnumerator_1_Dispose_m25486_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25487_MethodInfo,
	&InternalEnumerator_1_get_Current_m25488_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4675_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25485_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25487_MethodInfo,
	&InternalEnumerator_1_Dispose_m25486_MethodInfo,
	&InternalEnumerator_1_get_Current_m25488_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4675_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6586_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4675_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6586_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4675_0_0_0;
extern Il2CppType InternalEnumerator_1_t4675_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4675_GenericClass;
TypeInfo InternalEnumerator_1_t4675_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4675_MethodInfos/* methods */
	, InternalEnumerator_1_t4675_PropertyInfos/* properties */
	, InternalEnumerator_1_t4675_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4675_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4675_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4675_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4675_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4675_1_0_0/* this_arg */
	, InternalEnumerator_1_t4675_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4675_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4675)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8478_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>
extern MethodInfo ICollection_1_get_Count_m43928_MethodInfo;
static PropertyInfo ICollection_1_t8478____Count_PropertyInfo = 
{
	&ICollection_1_t8478_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43928_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43929_MethodInfo;
static PropertyInfo ICollection_1_t8478____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8478_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43929_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8478_PropertyInfos[] =
{
	&ICollection_1_t8478____Count_PropertyInfo,
	&ICollection_1_t8478____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43928_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_Count()
MethodInfo ICollection_1_get_Count_m43928_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43928_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43929_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43929_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43929_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t1651_0_0_0;
extern Il2CppType Category_t1651_0_0_0;
static ParameterInfo ICollection_1_t8478_ICollection_1_Add_m43930_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t1651_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43930_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Add(T)
MethodInfo ICollection_1_Add_m43930_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_UInt16_t1058/* invoker_method */
	, ICollection_1_t8478_ICollection_1_Add_m43930_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43930_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43931_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Clear()
MethodInfo ICollection_1_Clear_m43931_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43931_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t1651_0_0_0;
static ParameterInfo ICollection_1_t8478_ICollection_1_Contains_m43932_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t1651_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43932_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Contains(T)
MethodInfo ICollection_1_Contains_m43932_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8478_ICollection_1_Contains_m43932_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43932_GenericMethod/* genericMethod */

};
extern Il2CppType CategoryU5BU5D_t5486_0_0_0;
extern Il2CppType CategoryU5BU5D_t5486_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8478_ICollection_1_CopyTo_m43933_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CategoryU5BU5D_t5486_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43933_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43933_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8478_ICollection_1_CopyTo_m43933_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43933_GenericMethod/* genericMethod */

};
extern Il2CppType Category_t1651_0_0_0;
static ParameterInfo ICollection_1_t8478_ICollection_1_Remove_m43934_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t1651_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43934_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Category>::Remove(T)
MethodInfo ICollection_1_Remove_m43934_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UInt16_t1058/* invoker_method */
	, ICollection_1_t8478_ICollection_1_Remove_m43934_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43934_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8478_MethodInfos[] =
{
	&ICollection_1_get_Count_m43928_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43929_MethodInfo,
	&ICollection_1_Add_m43930_MethodInfo,
	&ICollection_1_Clear_m43931_MethodInfo,
	&ICollection_1_Contains_m43932_MethodInfo,
	&ICollection_1_CopyTo_m43933_MethodInfo,
	&ICollection_1_Remove_m43934_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8480_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8478_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8478_0_0_0;
extern Il2CppType ICollection_1_t8478_1_0_0;
struct ICollection_1_t8478;
extern Il2CppGenericClass ICollection_1_t8478_GenericClass;
TypeInfo ICollection_1_t8478_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8478_MethodInfos/* methods */
	, ICollection_1_t8478_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8478_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8478_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8478_0_0_0/* byval_arg */
	, &ICollection_1_t8478_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8478_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Category>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Category>
extern Il2CppType IEnumerator_1_t6586_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43935_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Category>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43935_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8480_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6586_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43935_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8480_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43935_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8480_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8480_0_0_0;
extern Il2CppType IEnumerable_1_t8480_1_0_0;
struct IEnumerable_1_t8480;
extern Il2CppGenericClass IEnumerable_1_t8480_GenericClass;
TypeInfo IEnumerable_1_t8480_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8480_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8480_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8480_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8480_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8480_0_0_0/* byval_arg */
	, &IEnumerable_1_t8480_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8480_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8479_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>
extern MethodInfo IList_1_get_Item_m43936_MethodInfo;
extern MethodInfo IList_1_set_Item_m43937_MethodInfo;
static PropertyInfo IList_1_t8479____Item_PropertyInfo = 
{
	&IList_1_t8479_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43936_MethodInfo/* get */
	, &IList_1_set_Item_m43937_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8479_PropertyInfos[] =
{
	&IList_1_t8479____Item_PropertyInfo,
	NULL
};
extern Il2CppType Category_t1651_0_0_0;
static ParameterInfo IList_1_t8479_IList_1_IndexOf_m43938_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Category_t1651_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43938_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43938_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8479_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8479_IList_1_IndexOf_m43938_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43938_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Category_t1651_0_0_0;
static ParameterInfo IList_1_t8479_IList_1_Insert_m43939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Category_t1651_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43939_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43939_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8479_IList_1_Insert_m43939_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43939_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8479_IList_1_RemoveAt_m43940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43940_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43940_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8479_IList_1_RemoveAt_m43940_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43940_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8479_IList_1_get_Item_m43936_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Category_t1651_0_0_0;
extern void* RuntimeInvoker_Category_t1651_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43936_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43936_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8479_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1651_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1651_Int32_t63/* invoker_method */
	, IList_1_t8479_IList_1_get_Item_m43936_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43936_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Category_t1651_0_0_0;
static ParameterInfo IList_1_t8479_IList_1_set_Item_m43937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Category_t1651_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43937_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Category>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43937_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UInt16_t1058/* invoker_method */
	, IList_1_t8479_IList_1_set_Item_m43937_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43937_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8479_MethodInfos[] =
{
	&IList_1_IndexOf_m43938_MethodInfo,
	&IList_1_Insert_m43939_MethodInfo,
	&IList_1_RemoveAt_m43940_MethodInfo,
	&IList_1_get_Item_m43936_MethodInfo,
	&IList_1_set_Item_m43937_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8479_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8478_il2cpp_TypeInfo,
	&IEnumerable_1_t8480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8479_0_0_0;
extern Il2CppType IList_1_t8479_1_0_0;
struct IList_1_t8479;
extern Il2CppGenericClass IList_1_t8479_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8479_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8479_MethodInfos/* methods */
	, IList_1_t8479_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8479_il2cpp_TypeInfo/* element_class */
	, IList_1_t8479_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8479_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8479_0_0_0/* byval_arg */
	, &IList_1_t8479_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8479_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6588_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>
extern MethodInfo IEnumerator_1_get_Current_m43941_MethodInfo;
static PropertyInfo IEnumerator_1_t6588____Current_PropertyInfo = 
{
	&IEnumerator_1_t6588_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43941_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6588_PropertyInfos[] =
{
	&IEnumerator_1_t6588____Current_PropertyInfo,
	NULL
};
extern Il2CppType Mark_t1660_0_0_0;
extern void* RuntimeInvoker_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43941_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43941_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6588_il2cpp_TypeInfo/* declaring_type */
	, &Mark_t1660_0_0_0/* return_type */
	, RuntimeInvoker_Mark_t1660/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43941_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6588_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43941_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6588_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6588_0_0_0;
extern Il2CppType IEnumerator_1_t6588_1_0_0;
struct IEnumerator_1_t6588;
extern Il2CppGenericClass IEnumerator_1_t6588_GenericClass;
TypeInfo IEnumerator_1_t6588_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6588_MethodInfos/* methods */
	, IEnumerator_1_t6588_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6588_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6588_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6588_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6588_0_0_0/* byval_arg */
	, &IEnumerator_1_t6588_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6588_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_537.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4676_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_537MethodDeclarations.h"

extern TypeInfo Mark_t1660_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25493_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMark_t1660_m33739_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
 Mark_t1660  Array_InternalArray__get_Item_TisMark_t1660_m33739 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25489_MethodInfo;
 void InternalEnumerator_1__ctor_m25489 (InternalEnumerator_1_t4676 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490 (InternalEnumerator_1_t4676 * __this, MethodInfo* method){
	{
		Mark_t1660  L_0 = InternalEnumerator_1_get_Current_m25493(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25493_MethodInfo);
		Mark_t1660  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Mark_t1660_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25491_MethodInfo;
 void InternalEnumerator_1_Dispose_m25491 (InternalEnumerator_1_t4676 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25492_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25492 (InternalEnumerator_1_t4676 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
 Mark_t1660  InternalEnumerator_1_get_Current_m25493 (InternalEnumerator_1_t4676 * __this, MethodInfo* method){
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
		Mark_t1660  L_8 = Array_InternalArray__get_Item_TisMark_t1660_m33739(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMark_t1660_m33739_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4676____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4676, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4676____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4676, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4676_FieldInfos[] =
{
	&InternalEnumerator_1_t4676____array_0_FieldInfo,
	&InternalEnumerator_1_t4676____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4676____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4676_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4676____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4676_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25493_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4676_PropertyInfos[] =
{
	&InternalEnumerator_1_t4676____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4676____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4676_InternalEnumerator_1__ctor_m25489_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25489_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25489_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25489/* method */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4676_InternalEnumerator_1__ctor_m25489_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25489_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490/* method */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25491_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25491_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25491/* method */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25491_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25492_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25492_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25492/* method */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25492_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t1660_0_0_0;
extern void* RuntimeInvoker_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25493_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25493_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25493/* method */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* declaring_type */
	, &Mark_t1660_0_0_0/* return_type */
	, RuntimeInvoker_Mark_t1660/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25493_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4676_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25489_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490_MethodInfo,
	&InternalEnumerator_1_Dispose_m25491_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25492_MethodInfo,
	&InternalEnumerator_1_get_Current_m25493_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4676_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25490_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25492_MethodInfo,
	&InternalEnumerator_1_Dispose_m25491_MethodInfo,
	&InternalEnumerator_1_get_Current_m25493_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4676_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6588_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4676_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6588_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4676_0_0_0;
extern Il2CppType InternalEnumerator_1_t4676_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4676_GenericClass;
TypeInfo InternalEnumerator_1_t4676_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4676_MethodInfos/* methods */
	, InternalEnumerator_1_t4676_PropertyInfos/* properties */
	, InternalEnumerator_1_t4676_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4676_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4676_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4676_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4676_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4676_1_0_0/* this_arg */
	, InternalEnumerator_1_t4676_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4676_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4676)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8481_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>
extern MethodInfo ICollection_1_get_Count_m43942_MethodInfo;
static PropertyInfo ICollection_1_t8481____Count_PropertyInfo = 
{
	&ICollection_1_t8481_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43942_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43943_MethodInfo;
static PropertyInfo ICollection_1_t8481____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8481_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43943_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8481_PropertyInfos[] =
{
	&ICollection_1_t8481____Count_PropertyInfo,
	&ICollection_1_t8481____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43942_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_Count()
MethodInfo ICollection_1_get_Count_m43942_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43942_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43943_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43943_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43943_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t1660_0_0_0;
extern Il2CppType Mark_t1660_0_0_0;
static ParameterInfo ICollection_1_t8481_ICollection_1_Add_m43944_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t1660_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43944_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Add(T)
MethodInfo ICollection_1_Add_m43944_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Mark_t1660/* invoker_method */
	, ICollection_1_t8481_ICollection_1_Add_m43944_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43944_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43945_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Clear()
MethodInfo ICollection_1_Clear_m43945_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43945_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t1660_0_0_0;
static ParameterInfo ICollection_1_t8481_ICollection_1_Contains_m43946_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t1660_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43946_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Contains(T)
MethodInfo ICollection_1_Contains_m43946_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Mark_t1660/* invoker_method */
	, ICollection_1_t8481_ICollection_1_Contains_m43946_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43946_GenericMethod/* genericMethod */

};
extern Il2CppType MarkU5BU5D_t1665_0_0_0;
extern Il2CppType MarkU5BU5D_t1665_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8481_ICollection_1_CopyTo_m43947_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MarkU5BU5D_t1665_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43947_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43947_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8481_ICollection_1_CopyTo_m43947_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43947_GenericMethod/* genericMethod */

};
extern Il2CppType Mark_t1660_0_0_0;
static ParameterInfo ICollection_1_t8481_ICollection_1_Remove_m43948_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t1660_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43948_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Remove(T)
MethodInfo ICollection_1_Remove_m43948_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Mark_t1660/* invoker_method */
	, ICollection_1_t8481_ICollection_1_Remove_m43948_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43948_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8481_MethodInfos[] =
{
	&ICollection_1_get_Count_m43942_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43943_MethodInfo,
	&ICollection_1_Add_m43944_MethodInfo,
	&ICollection_1_Clear_m43945_MethodInfo,
	&ICollection_1_Contains_m43946_MethodInfo,
	&ICollection_1_CopyTo_m43947_MethodInfo,
	&ICollection_1_Remove_m43948_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8483_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8481_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8481_0_0_0;
extern Il2CppType ICollection_1_t8481_1_0_0;
struct ICollection_1_t8481;
extern Il2CppGenericClass ICollection_1_t8481_GenericClass;
TypeInfo ICollection_1_t8481_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8481_MethodInfos/* methods */
	, ICollection_1_t8481_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8481_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8481_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8481_0_0_0/* byval_arg */
	, &ICollection_1_t8481_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8481_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>
extern Il2CppType IEnumerator_1_t6588_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43949_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43949_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8483_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6588_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43949_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8483_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43949_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8483_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8483_0_0_0;
extern Il2CppType IEnumerable_1_t8483_1_0_0;
struct IEnumerable_1_t8483;
extern Il2CppGenericClass IEnumerable_1_t8483_GenericClass;
TypeInfo IEnumerable_1_t8483_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8483_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8483_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8483_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8483_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8483_0_0_0/* byval_arg */
	, &IEnumerable_1_t8483_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8483_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8482_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>
extern MethodInfo IList_1_get_Item_m43950_MethodInfo;
extern MethodInfo IList_1_set_Item_m43951_MethodInfo;
static PropertyInfo IList_1_t8482____Item_PropertyInfo = 
{
	&IList_1_t8482_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43950_MethodInfo/* get */
	, &IList_1_set_Item_m43951_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8482_PropertyInfos[] =
{
	&IList_1_t8482____Item_PropertyInfo,
	NULL
};
extern Il2CppType Mark_t1660_0_0_0;
static ParameterInfo IList_1_t8482_IList_1_IndexOf_m43952_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mark_t1660_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43952_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43952_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8482_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Mark_t1660/* invoker_method */
	, IList_1_t8482_IList_1_IndexOf_m43952_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43952_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Mark_t1660_0_0_0;
static ParameterInfo IList_1_t8482_IList_1_Insert_m43953_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Mark_t1660_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43953_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43953_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Mark_t1660/* invoker_method */
	, IList_1_t8482_IList_1_Insert_m43953_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43953_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8482_IList_1_RemoveAt_m43954_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43954_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43954_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8482_IList_1_RemoveAt_m43954_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43954_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8482_IList_1_get_Item_m43950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Mark_t1660_0_0_0;
extern void* RuntimeInvoker_Mark_t1660_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43950_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43950_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8482_il2cpp_TypeInfo/* declaring_type */
	, &Mark_t1660_0_0_0/* return_type */
	, RuntimeInvoker_Mark_t1660_Int32_t63/* invoker_method */
	, IList_1_t8482_IList_1_get_Item_m43950_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43950_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Mark_t1660_0_0_0;
static ParameterInfo IList_1_t8482_IList_1_set_Item_m43951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Mark_t1660_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Mark_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43951_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43951_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Mark_t1660/* invoker_method */
	, IList_1_t8482_IList_1_set_Item_m43951_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43951_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8482_MethodInfos[] =
{
	&IList_1_IndexOf_m43952_MethodInfo,
	&IList_1_Insert_m43953_MethodInfo,
	&IList_1_RemoveAt_m43954_MethodInfo,
	&IList_1_get_Item_m43950_MethodInfo,
	&IList_1_set_Item_m43951_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8482_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8481_il2cpp_TypeInfo,
	&IEnumerable_1_t8483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8482_0_0_0;
extern Il2CppType IList_1_t8482_1_0_0;
struct IList_1_t8482;
extern Il2CppGenericClass IList_1_t8482_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8482_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8482_MethodInfos/* methods */
	, IList_1_t8482_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8482_il2cpp_TypeInfo/* element_class */
	, IList_1_t8482_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8482_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8482_0_0_0/* byval_arg */
	, &IList_1_t8482_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8482_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6590_il2cpp_TypeInfo;

// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>
extern MethodInfo IEnumerator_1_get_Current_m43955_MethodInfo;
static PropertyInfo IEnumerator_1_t6590____Current_PropertyInfo = 
{
	&IEnumerator_1_t6590_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43955_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6590_PropertyInfos[] =
{
	&IEnumerator_1_t6590____Current_PropertyInfo,
	NULL
};
extern Il2CppType Mode_t1663_0_0_0;
extern void* RuntimeInvoker_Mode_t1663 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43955_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43955_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6590_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t1663_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t1663/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43955_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6590_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43955_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6590_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6590_0_0_0;
extern Il2CppType IEnumerator_1_t6590_1_0_0;
struct IEnumerator_1_t6590;
extern Il2CppGenericClass IEnumerator_1_t6590_GenericClass;
TypeInfo IEnumerator_1_t6590_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6590_MethodInfos/* methods */
	, IEnumerator_1_t6590_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6590_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6590_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6590_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6590_0_0_0/* byval_arg */
	, &IEnumerator_1_t6590_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6590_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_538.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4677_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_538MethodDeclarations.h"

extern TypeInfo Mode_t1663_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25498_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMode_t1663_m33750_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Interpreter/Mode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Interpreter/Mode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMode_t1663_m33750 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25494_MethodInfo;
 void InternalEnumerator_1__ctor_m25494 (InternalEnumerator_1_t4677 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495 (InternalEnumerator_1_t4677 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25498(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25498_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Mode_t1663_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25496_MethodInfo;
 void InternalEnumerator_1_Dispose_m25496 (InternalEnumerator_1_t4677 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25497_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25497 (InternalEnumerator_1_t4677 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25498 (InternalEnumerator_1_t4677 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMode_t1663_m33750(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMode_t1663_m33750_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4677____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4677, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4677____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4677, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4677_FieldInfos[] =
{
	&InternalEnumerator_1_t4677____array_0_FieldInfo,
	&InternalEnumerator_1_t4677____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4677____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4677_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4677____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4677_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25498_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4677_PropertyInfos[] =
{
	&InternalEnumerator_1_t4677____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4677____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4677_InternalEnumerator_1__ctor_m25494_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25494_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25494_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25494/* method */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4677_InternalEnumerator_1__ctor_m25494_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25494_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495/* method */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25496_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25496_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25496/* method */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25496_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25497_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25497_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25497/* method */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25497_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t1663_0_0_0;
extern void* RuntimeInvoker_Mode_t1663 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25498_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25498_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25498/* method */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t1663_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t1663/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25498_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4677_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25494_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495_MethodInfo,
	&InternalEnumerator_1_Dispose_m25496_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25497_MethodInfo,
	&InternalEnumerator_1_get_Current_m25498_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4677_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25495_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25497_MethodInfo,
	&InternalEnumerator_1_Dispose_m25496_MethodInfo,
	&InternalEnumerator_1_get_Current_m25498_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4677_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6590_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4677_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6590_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4677_0_0_0;
extern Il2CppType InternalEnumerator_1_t4677_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4677_GenericClass;
TypeInfo InternalEnumerator_1_t4677_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4677_MethodInfos/* methods */
	, InternalEnumerator_1_t4677_PropertyInfos/* properties */
	, InternalEnumerator_1_t4677_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4677_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4677_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4677_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4677_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4677_1_0_0/* this_arg */
	, InternalEnumerator_1_t4677_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4677_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4677)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8484_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>
extern MethodInfo ICollection_1_get_Count_m43956_MethodInfo;
static PropertyInfo ICollection_1_t8484____Count_PropertyInfo = 
{
	&ICollection_1_t8484_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43956_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43957_MethodInfo;
static PropertyInfo ICollection_1_t8484____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8484_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43957_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8484_PropertyInfos[] =
{
	&ICollection_1_t8484____Count_PropertyInfo,
	&ICollection_1_t8484____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43956_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Count()
MethodInfo ICollection_1_get_Count_m43956_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43956_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43957_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43957_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43957_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t1663_0_0_0;
extern Il2CppType Mode_t1663_0_0_0;
static ParameterInfo ICollection_1_t8484_ICollection_1_Add_m43958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t1663_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43958_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Add(T)
MethodInfo ICollection_1_Add_m43958_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8484_ICollection_1_Add_m43958_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43958_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43959_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Clear()
MethodInfo ICollection_1_Clear_m43959_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43959_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t1663_0_0_0;
static ParameterInfo ICollection_1_t8484_ICollection_1_Contains_m43960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t1663_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43960_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Contains(T)
MethodInfo ICollection_1_Contains_m43960_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8484_ICollection_1_Contains_m43960_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43960_GenericMethod/* genericMethod */

};
extern Il2CppType ModeU5BU5D_t5487_0_0_0;
extern Il2CppType ModeU5BU5D_t5487_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8484_ICollection_1_CopyTo_m43961_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ModeU5BU5D_t5487_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43961_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43961_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8484_ICollection_1_CopyTo_m43961_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43961_GenericMethod/* genericMethod */

};
extern Il2CppType Mode_t1663_0_0_0;
static ParameterInfo ICollection_1_t8484_ICollection_1_Remove_m43962_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t1663_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43962_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Interpreter/Mode>::Remove(T)
MethodInfo ICollection_1_Remove_m43962_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8484_ICollection_1_Remove_m43962_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43962_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8484_MethodInfos[] =
{
	&ICollection_1_get_Count_m43956_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43957_MethodInfo,
	&ICollection_1_Add_m43958_MethodInfo,
	&ICollection_1_Clear_m43959_MethodInfo,
	&ICollection_1_Contains_m43960_MethodInfo,
	&ICollection_1_CopyTo_m43961_MethodInfo,
	&ICollection_1_Remove_m43962_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8486_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8484_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8484_0_0_0;
extern Il2CppType ICollection_1_t8484_1_0_0;
struct ICollection_1_t8484;
extern Il2CppGenericClass ICollection_1_t8484_GenericClass;
TypeInfo ICollection_1_t8484_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8484_MethodInfos/* methods */
	, ICollection_1_t8484_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8484_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8484_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8484_0_0_0/* byval_arg */
	, &ICollection_1_t8484_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8484_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Interpreter/Mode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Interpreter/Mode>
extern Il2CppType IEnumerator_1_t6590_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43963_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Interpreter/Mode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43963_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8486_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6590_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43963_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8486_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43963_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8486_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8486_0_0_0;
extern Il2CppType IEnumerable_1_t8486_1_0_0;
struct IEnumerable_1_t8486;
extern Il2CppGenericClass IEnumerable_1_t8486_GenericClass;
TypeInfo IEnumerable_1_t8486_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8486_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8486_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8486_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8486_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8486_0_0_0/* byval_arg */
	, &IEnumerable_1_t8486_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8486_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8485_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>
extern MethodInfo IList_1_get_Item_m43964_MethodInfo;
extern MethodInfo IList_1_set_Item_m43965_MethodInfo;
static PropertyInfo IList_1_t8485____Item_PropertyInfo = 
{
	&IList_1_t8485_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43964_MethodInfo/* get */
	, &IList_1_set_Item_m43965_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8485_PropertyInfos[] =
{
	&IList_1_t8485____Item_PropertyInfo,
	NULL
};
extern Il2CppType Mode_t1663_0_0_0;
static ParameterInfo IList_1_t8485_IList_1_IndexOf_m43966_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Mode_t1663_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43966_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43966_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8485_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8485_IList_1_IndexOf_m43966_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43966_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Mode_t1663_0_0_0;
static ParameterInfo IList_1_t8485_IList_1_Insert_m43967_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t1663_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43967_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43967_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8485_IList_1_Insert_m43967_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43967_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8485_IList_1_RemoveAt_m43968_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43968_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43968_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8485_IList_1_RemoveAt_m43968_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43968_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8485_IList_1_get_Item_m43964_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Mode_t1663_0_0_0;
extern void* RuntimeInvoker_Mode_t1663_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43964_GenericMethod;
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43964_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8485_il2cpp_TypeInfo/* declaring_type */
	, &Mode_t1663_0_0_0/* return_type */
	, RuntimeInvoker_Mode_t1663_Int32_t63/* invoker_method */
	, IList_1_t8485_IList_1_get_Item_m43964_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43964_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Mode_t1663_0_0_0;
static ParameterInfo IList_1_t8485_IList_1_set_Item_m43965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Mode_t1663_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43965_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Interpreter/Mode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43965_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8485_IList_1_set_Item_m43965_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43965_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8485_MethodInfos[] =
{
	&IList_1_IndexOf_m43966_MethodInfo,
	&IList_1_Insert_m43967_MethodInfo,
	&IList_1_RemoveAt_m43968_MethodInfo,
	&IList_1_get_Item_m43964_MethodInfo,
	&IList_1_set_Item_m43965_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8485_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8484_il2cpp_TypeInfo,
	&IEnumerable_1_t8486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8485_0_0_0;
extern Il2CppType IList_1_t8485_1_0_0;
struct IList_1_t8485;
extern Il2CppGenericClass IList_1_t8485_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8485_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8485_MethodInfos/* methods */
	, IList_1_t8485_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8485_il2cpp_TypeInfo/* element_class */
	, IList_1_t8485_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8485_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8485_0_0_0/* byval_arg */
	, &IList_1_t8485_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8485_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6592_il2cpp_TypeInfo;

// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"


// T System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>
extern MethodInfo IEnumerator_1_get_Current_m43969_MethodInfo;
static PropertyInfo IEnumerator_1_t6592____Current_PropertyInfo = 
{
	&IEnumerator_1_t6592_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43969_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6592_PropertyInfos[] =
{
	&IEnumerator_1_t6592____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriScheme_t1695_0_0_0;
extern void* RuntimeInvoker_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43969_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43969_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6592_il2cpp_TypeInfo/* declaring_type */
	, &UriScheme_t1695_0_0_0/* return_type */
	, RuntimeInvoker_UriScheme_t1695/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43969_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6592_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43969_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6592_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6592_0_0_0;
extern Il2CppType IEnumerator_1_t6592_1_0_0;
struct IEnumerator_1_t6592;
extern Il2CppGenericClass IEnumerator_1_t6592_GenericClass;
TypeInfo IEnumerator_1_t6592_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6592_MethodInfos/* methods */
	, IEnumerator_1_t6592_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6592_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6592_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6592_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6592_0_0_0/* byval_arg */
	, &IEnumerator_1_t6592_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6592_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_539.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4678_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_539MethodDeclarations.h"

extern TypeInfo UriScheme_t1695_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25503_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriScheme_t1695_m33761_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
 UriScheme_t1695  Array_InternalArray__get_Item_TisUriScheme_t1695_m33761 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25499_MethodInfo;
 void InternalEnumerator_1__ctor_m25499 (InternalEnumerator_1_t4678 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500 (InternalEnumerator_1_t4678 * __this, MethodInfo* method){
	{
		UriScheme_t1695  L_0 = InternalEnumerator_1_get_Current_m25503(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25503_MethodInfo);
		UriScheme_t1695  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriScheme_t1695_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25501_MethodInfo;
 void InternalEnumerator_1_Dispose_m25501 (InternalEnumerator_1_t4678 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25502_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25502 (InternalEnumerator_1_t4678 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
 UriScheme_t1695  InternalEnumerator_1_get_Current_m25503 (InternalEnumerator_1_t4678 * __this, MethodInfo* method){
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
		UriScheme_t1695  L_8 = Array_InternalArray__get_Item_TisUriScheme_t1695_m33761(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriScheme_t1695_m33761_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Uri/UriScheme>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4678____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4678, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4678____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4678, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4678_FieldInfos[] =
{
	&InternalEnumerator_1_t4678____array_0_FieldInfo,
	&InternalEnumerator_1_t4678____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4678____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4678_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4678____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4678_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25503_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4678_PropertyInfos[] =
{
	&InternalEnumerator_1_t4678____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4678____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4678_InternalEnumerator_1__ctor_m25499_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25499_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25499_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25499/* method */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4678_InternalEnumerator_1__ctor_m25499_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25499_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500/* method */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25501_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25501_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25501/* method */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25501_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25502_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25502_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25502/* method */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25502_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t1695_0_0_0;
extern void* RuntimeInvoker_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25503_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25503_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25503/* method */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* declaring_type */
	, &UriScheme_t1695_0_0_0/* return_type */
	, RuntimeInvoker_UriScheme_t1695/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25503_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4678_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25499_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500_MethodInfo,
	&InternalEnumerator_1_Dispose_m25501_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25502_MethodInfo,
	&InternalEnumerator_1_get_Current_m25503_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4678_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25500_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25502_MethodInfo,
	&InternalEnumerator_1_Dispose_m25501_MethodInfo,
	&InternalEnumerator_1_get_Current_m25503_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4678_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6592_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4678_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6592_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4678_0_0_0;
extern Il2CppType InternalEnumerator_1_t4678_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4678_GenericClass;
TypeInfo InternalEnumerator_1_t4678_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4678_MethodInfos/* methods */
	, InternalEnumerator_1_t4678_PropertyInfos/* properties */
	, InternalEnumerator_1_t4678_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4678_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4678_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4678_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4678_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4678_1_0_0/* this_arg */
	, InternalEnumerator_1_t4678_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4678_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4678)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8487_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Uri/UriScheme>
extern MethodInfo ICollection_1_get_Count_m43970_MethodInfo;
static PropertyInfo ICollection_1_t8487____Count_PropertyInfo = 
{
	&ICollection_1_t8487_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43970_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43971_MethodInfo;
static PropertyInfo ICollection_1_t8487____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8487_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43971_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8487_PropertyInfos[] =
{
	&ICollection_1_t8487____Count_PropertyInfo,
	&ICollection_1_t8487____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43970_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_Count()
MethodInfo ICollection_1_get_Count_m43970_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43970_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43971_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43971_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43971_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t1695_0_0_0;
extern Il2CppType UriScheme_t1695_0_0_0;
static ParameterInfo ICollection_1_t8487_ICollection_1_Add_m43972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t1695_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43972_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Add(T)
MethodInfo ICollection_1_Add_m43972_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_UriScheme_t1695/* invoker_method */
	, ICollection_1_t8487_ICollection_1_Add_m43972_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43972_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43973_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Clear()
MethodInfo ICollection_1_Clear_m43973_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43973_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t1695_0_0_0;
static ParameterInfo ICollection_1_t8487_ICollection_1_Contains_m43974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t1695_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43974_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Contains(T)
MethodInfo ICollection_1_Contains_m43974_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UriScheme_t1695/* invoker_method */
	, ICollection_1_t8487_ICollection_1_Contains_m43974_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43974_GenericMethod/* genericMethod */

};
extern Il2CppType UriSchemeU5BU5D_t1696_0_0_0;
extern Il2CppType UriSchemeU5BU5D_t1696_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8487_ICollection_1_CopyTo_m43975_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriSchemeU5BU5D_t1696_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43975_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43975_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8487_ICollection_1_CopyTo_m43975_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43975_GenericMethod/* genericMethod */

};
extern Il2CppType UriScheme_t1695_0_0_0;
static ParameterInfo ICollection_1_t8487_ICollection_1_Remove_m43976_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t1695_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43976_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Remove(T)
MethodInfo ICollection_1_Remove_m43976_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_UriScheme_t1695/* invoker_method */
	, ICollection_1_t8487_ICollection_1_Remove_m43976_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43976_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8487_MethodInfos[] =
{
	&ICollection_1_get_Count_m43970_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43971_MethodInfo,
	&ICollection_1_Add_m43972_MethodInfo,
	&ICollection_1_Clear_m43973_MethodInfo,
	&ICollection_1_Contains_m43974_MethodInfo,
	&ICollection_1_CopyTo_m43975_MethodInfo,
	&ICollection_1_Remove_m43976_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8489_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8487_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8487_0_0_0;
extern Il2CppType ICollection_1_t8487_1_0_0;
struct ICollection_1_t8487;
extern Il2CppGenericClass ICollection_1_t8487_GenericClass;
TypeInfo ICollection_1_t8487_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8487_MethodInfos/* methods */
	, ICollection_1_t8487_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8487_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8487_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8487_0_0_0/* byval_arg */
	, &ICollection_1_t8487_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8487_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>
extern Il2CppType IEnumerator_1_t6592_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43977_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43977_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8489_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6592_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43977_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8489_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43977_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8489_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8489_0_0_0;
extern Il2CppType IEnumerable_1_t8489_1_0_0;
struct IEnumerable_1_t8489;
extern Il2CppGenericClass IEnumerable_1_t8489_GenericClass;
TypeInfo IEnumerable_1_t8489_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8489_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8489_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8489_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8489_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8489_0_0_0/* byval_arg */
	, &IEnumerable_1_t8489_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8489_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8488_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Uri/UriScheme>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Uri/UriScheme>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Uri/UriScheme>
extern MethodInfo IList_1_get_Item_m43978_MethodInfo;
extern MethodInfo IList_1_set_Item_m43979_MethodInfo;
static PropertyInfo IList_1_t8488____Item_PropertyInfo = 
{
	&IList_1_t8488_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43978_MethodInfo/* get */
	, &IList_1_set_Item_m43979_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8488_PropertyInfos[] =
{
	&IList_1_t8488____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriScheme_t1695_0_0_0;
static ParameterInfo IList_1_t8488_IList_1_IndexOf_m43980_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriScheme_t1695_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43980_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Uri/UriScheme>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43980_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8488_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_UriScheme_t1695/* invoker_method */
	, IList_1_t8488_IList_1_IndexOf_m43980_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43980_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriScheme_t1695_0_0_0;
static ParameterInfo IList_1_t8488_IList_1_Insert_m43981_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriScheme_t1695_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43981_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43981_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UriScheme_t1695/* invoker_method */
	, IList_1_t8488_IList_1_Insert_m43981_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43981_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8488_IList_1_RemoveAt_m43982_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43982_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43982_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8488_IList_1_RemoveAt_m43982_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43982_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8488_IList_1_get_Item_m43978_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType UriScheme_t1695_0_0_0;
extern void* RuntimeInvoker_UriScheme_t1695_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43978_GenericMethod;
// T System.Collections.Generic.IList`1<System.Uri/UriScheme>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43978_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8488_il2cpp_TypeInfo/* declaring_type */
	, &UriScheme_t1695_0_0_0/* return_type */
	, RuntimeInvoker_UriScheme_t1695_Int32_t63/* invoker_method */
	, IList_1_t8488_IList_1_get_Item_m43978_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43978_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriScheme_t1695_0_0_0;
static ParameterInfo IList_1_t8488_IList_1_set_Item_m43979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriScheme_t1695_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_UriScheme_t1695 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43979_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43979_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_UriScheme_t1695/* invoker_method */
	, IList_1_t8488_IList_1_set_Item_m43979_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43979_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8488_MethodInfos[] =
{
	&IList_1_IndexOf_m43980_MethodInfo,
	&IList_1_Insert_m43981_MethodInfo,
	&IList_1_RemoveAt_m43982_MethodInfo,
	&IList_1_get_Item_m43978_MethodInfo,
	&IList_1_set_Item_m43979_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8488_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8487_il2cpp_TypeInfo,
	&IEnumerable_1_t8489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8488_0_0_0;
extern Il2CppType IList_1_t8488_1_0_0;
struct IList_1_t8488;
extern Il2CppGenericClass IList_1_t8488_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8488_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8488_MethodInfos/* methods */
	, IList_1_t8488_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8488_il2cpp_TypeInfo/* element_class */
	, IList_1_t8488_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8488_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8488_0_0_0/* byval_arg */
	, &IList_1_t8488_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8488_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6594_il2cpp_TypeInfo;

// System.UriHostNameType
#include "System_System_UriHostNameType.h"


// T System.Collections.Generic.IEnumerator`1<System.UriHostNameType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UriHostNameType>
extern MethodInfo IEnumerator_1_get_Current_m43983_MethodInfo;
static PropertyInfo IEnumerator_1_t6594____Current_PropertyInfo = 
{
	&IEnumerator_1_t6594_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6594_PropertyInfos[] =
{
	&IEnumerator_1_t6594____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriHostNameType_t1698_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1698 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43983_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UriHostNameType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43983_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6594_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1698_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1698/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43983_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6594_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43983_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6594_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6594_0_0_0;
extern Il2CppType IEnumerator_1_t6594_1_0_0;
struct IEnumerator_1_t6594;
extern Il2CppGenericClass IEnumerator_1_t6594_GenericClass;
TypeInfo IEnumerator_1_t6594_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6594_MethodInfos/* methods */
	, IEnumerator_1_t6594_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6594_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6594_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6594_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6594_0_0_0/* byval_arg */
	, &IEnumerator_1_t6594_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6594_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.UriHostNameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_540.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4679_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UriHostNameType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_540MethodDeclarations.h"

extern TypeInfo UriHostNameType_t1698_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25508_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriHostNameType_t1698_m33772_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UriHostNameType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UriHostNameType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUriHostNameType_t1698_m33772 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25504_MethodInfo;
 void InternalEnumerator_1__ctor_m25504 (InternalEnumerator_1_t4679 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UriHostNameType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505 (InternalEnumerator_1_t4679 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25508(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25508_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriHostNameType_t1698_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25506_MethodInfo;
 void InternalEnumerator_1_Dispose_m25506 (InternalEnumerator_1_t4679 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UriHostNameType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25507_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25507 (InternalEnumerator_1_t4679 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UriHostNameType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25508 (InternalEnumerator_1_t4679 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUriHostNameType_t1698_m33772(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriHostNameType_t1698_m33772_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UriHostNameType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4679____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4679, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4679____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4679, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4679_FieldInfos[] =
{
	&InternalEnumerator_1_t4679____array_0_FieldInfo,
	&InternalEnumerator_1_t4679____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4679____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4679_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4679____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4679_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25508_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4679_PropertyInfos[] =
{
	&InternalEnumerator_1_t4679____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4679____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4679_InternalEnumerator_1__ctor_m25504_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25504_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25504_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25504/* method */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4679_InternalEnumerator_1__ctor_m25504_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25504_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UriHostNameType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505/* method */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25506_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriHostNameType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25506_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25506/* method */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25506_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25507_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UriHostNameType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25507_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25507/* method */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25507_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t1698_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1698 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25508_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UriHostNameType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25508_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25508/* method */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1698_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1698/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25508_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4679_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25504_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505_MethodInfo,
	&InternalEnumerator_1_Dispose_m25506_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25507_MethodInfo,
	&InternalEnumerator_1_get_Current_m25508_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4679_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25505_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25507_MethodInfo,
	&InternalEnumerator_1_Dispose_m25506_MethodInfo,
	&InternalEnumerator_1_get_Current_m25508_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4679_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6594_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4679_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6594_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4679_0_0_0;
extern Il2CppType InternalEnumerator_1_t4679_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4679_GenericClass;
TypeInfo InternalEnumerator_1_t4679_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4679_MethodInfos/* methods */
	, InternalEnumerator_1_t4679_PropertyInfos/* properties */
	, InternalEnumerator_1_t4679_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4679_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4679_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4679_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4679_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4679_1_0_0/* this_arg */
	, InternalEnumerator_1_t4679_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4679_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4679)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8490_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UriHostNameType>
extern MethodInfo ICollection_1_get_Count_m43984_MethodInfo;
static PropertyInfo ICollection_1_t8490____Count_PropertyInfo = 
{
	&ICollection_1_t8490_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43984_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43985_MethodInfo;
static PropertyInfo ICollection_1_t8490____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8490_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43985_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8490_PropertyInfos[] =
{
	&ICollection_1_t8490____Count_PropertyInfo,
	&ICollection_1_t8490____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43984_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_Count()
MethodInfo ICollection_1_get_Count_m43984_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43984_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43985_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43985_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43985_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t1698_0_0_0;
extern Il2CppType UriHostNameType_t1698_0_0_0;
static ParameterInfo ICollection_1_t8490_ICollection_1_Add_m43986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t1698_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43986_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Add(T)
MethodInfo ICollection_1_Add_m43986_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8490_ICollection_1_Add_m43986_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m43986_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43987_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::Clear()
MethodInfo ICollection_1_Clear_m43987_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43987_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t1698_0_0_0;
static ParameterInfo ICollection_1_t8490_ICollection_1_Contains_m43988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t1698_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43988_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Contains(T)
MethodInfo ICollection_1_Contains_m43988_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8490_ICollection_1_Contains_m43988_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43988_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameTypeU5BU5D_t5488_0_0_0;
extern Il2CppType UriHostNameTypeU5BU5D_t5488_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8490_ICollection_1_CopyTo_m43989_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameTypeU5BU5D_t5488_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43989_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriHostNameType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43989_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8490_ICollection_1_CopyTo_m43989_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43989_GenericMethod/* genericMethod */

};
extern Il2CppType UriHostNameType_t1698_0_0_0;
static ParameterInfo ICollection_1_t8490_ICollection_1_Remove_m43990_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t1698_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43990_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriHostNameType>::Remove(T)
MethodInfo ICollection_1_Remove_m43990_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8490_ICollection_1_Remove_m43990_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43990_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8490_MethodInfos[] =
{
	&ICollection_1_get_Count_m43984_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43985_MethodInfo,
	&ICollection_1_Add_m43986_MethodInfo,
	&ICollection_1_Clear_m43987_MethodInfo,
	&ICollection_1_Contains_m43988_MethodInfo,
	&ICollection_1_CopyTo_m43989_MethodInfo,
	&ICollection_1_Remove_m43990_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8492_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8490_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8490_0_0_0;
extern Il2CppType ICollection_1_t8490_1_0_0;
struct ICollection_1_t8490;
extern Il2CppGenericClass ICollection_1_t8490_GenericClass;
TypeInfo ICollection_1_t8490_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8490_MethodInfos/* methods */
	, ICollection_1_t8490_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8490_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8490_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8490_0_0_0/* byval_arg */
	, &ICollection_1_t8490_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8490_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriHostNameType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UriHostNameType>
extern Il2CppType IEnumerator_1_t6594_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43991_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriHostNameType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43991_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8492_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6594_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43991_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8492_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43991_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8492_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8492_0_0_0;
extern Il2CppType IEnumerable_1_t8492_1_0_0;
struct IEnumerable_1_t8492;
extern Il2CppGenericClass IEnumerable_1_t8492_GenericClass;
TypeInfo IEnumerable_1_t8492_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8492_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8492_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8492_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8492_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8492_0_0_0/* byval_arg */
	, &IEnumerable_1_t8492_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8492_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8491_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UriHostNameType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UriHostNameType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UriHostNameType>
extern MethodInfo IList_1_get_Item_m43992_MethodInfo;
extern MethodInfo IList_1_set_Item_m43993_MethodInfo;
static PropertyInfo IList_1_t8491____Item_PropertyInfo = 
{
	&IList_1_t8491_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43992_MethodInfo/* get */
	, &IList_1_set_Item_m43993_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8491_PropertyInfos[] =
{
	&IList_1_t8491____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriHostNameType_t1698_0_0_0;
static ParameterInfo IList_1_t8491_IList_1_IndexOf_m43994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t1698_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43994_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UriHostNameType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43994_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8491_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8491_IList_1_IndexOf_m43994_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43994_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriHostNameType_t1698_0_0_0;
static ParameterInfo IList_1_t8491_IList_1_Insert_m43995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t1698_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43995_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43995_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8491_IList_1_Insert_m43995_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43995_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8491_IList_1_RemoveAt_m43996_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43996_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43996_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8491_IList_1_RemoveAt_m43996_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m43996_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8491_IList_1_get_Item_m43992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType UriHostNameType_t1698_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1698_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43992_GenericMethod;
// T System.Collections.Generic.IList`1<System.UriHostNameType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43992_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8491_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1698_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1698_Int32_t63/* invoker_method */
	, IList_1_t8491_IList_1_get_Item_m43992_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43992_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriHostNameType_t1698_0_0_0;
static ParameterInfo IList_1_t8491_IList_1_set_Item_m43993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriHostNameType_t1698_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43993_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriHostNameType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43993_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8491_IList_1_set_Item_m43993_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43993_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8491_MethodInfos[] =
{
	&IList_1_IndexOf_m43994_MethodInfo,
	&IList_1_Insert_m43995_MethodInfo,
	&IList_1_RemoveAt_m43996_MethodInfo,
	&IList_1_get_Item_m43992_MethodInfo,
	&IList_1_set_Item_m43993_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8491_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8490_il2cpp_TypeInfo,
	&IEnumerable_1_t8492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8491_0_0_0;
extern Il2CppType IList_1_t8491_1_0_0;
struct IList_1_t8491;
extern Il2CppGenericClass IList_1_t8491_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8491_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8491_MethodInfos/* methods */
	, IList_1_t8491_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8491_il2cpp_TypeInfo/* element_class */
	, IList_1_t8491_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8491_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8491_0_0_0/* byval_arg */
	, &IList_1_t8491_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8491_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6596_il2cpp_TypeInfo;

// System.UriKind
#include "System_System_UriKind.h"


// T System.Collections.Generic.IEnumerator`1<System.UriKind>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UriKind>
extern MethodInfo IEnumerator_1_get_Current_m43997_MethodInfo;
static PropertyInfo IEnumerator_1_t6596____Current_PropertyInfo = 
{
	&IEnumerator_1_t6596_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43997_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6596_PropertyInfos[] =
{
	&IEnumerator_1_t6596____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriKind_t1699_0_0_0;
extern void* RuntimeInvoker_UriKind_t1699 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43997_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UriKind>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43997_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6596_il2cpp_TypeInfo/* declaring_type */
	, &UriKind_t1699_0_0_0/* return_type */
	, RuntimeInvoker_UriKind_t1699/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m43997_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6596_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43997_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6596_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6596_0_0_0;
extern Il2CppType IEnumerator_1_t6596_1_0_0;
struct IEnumerator_1_t6596;
extern Il2CppGenericClass IEnumerator_1_t6596_GenericClass;
TypeInfo IEnumerator_1_t6596_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6596_MethodInfos/* methods */
	, IEnumerator_1_t6596_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6596_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6596_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6596_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6596_0_0_0/* byval_arg */
	, &IEnumerator_1_t6596_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6596_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.UriKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_541.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4680_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UriKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_541MethodDeclarations.h"

extern TypeInfo UriKind_t1699_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25513_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriKind_t1699_m33783_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UriKind>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UriKind>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUriKind_t1699_m33783 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UriKind>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25509_MethodInfo;
 void InternalEnumerator_1__ctor_m25509 (InternalEnumerator_1_t4680 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UriKind>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510 (InternalEnumerator_1_t4680 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25513(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25513_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriKind_t1699_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25511_MethodInfo;
 void InternalEnumerator_1_Dispose_m25511 (InternalEnumerator_1_t4680 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UriKind>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25512_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25512 (InternalEnumerator_1_t4680 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UriKind>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25513 (InternalEnumerator_1_t4680 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUriKind_t1699_m33783(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriKind_t1699_m33783_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UriKind>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4680____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4680, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4680____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4680, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4680_FieldInfos[] =
{
	&InternalEnumerator_1_t4680____array_0_FieldInfo,
	&InternalEnumerator_1_t4680____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4680____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4680_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4680____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4680_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25513_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4680_PropertyInfos[] =
{
	&InternalEnumerator_1_t4680____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4680____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4680_InternalEnumerator_1__ctor_m25509_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25509_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25509_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25509/* method */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4680_InternalEnumerator_1__ctor_m25509_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25509_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UriKind>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510/* method */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25511_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriKind>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25511_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25511/* method */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25511_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25512_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UriKind>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25512_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25512/* method */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25512_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t1699_0_0_0;
extern void* RuntimeInvoker_UriKind_t1699 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25513_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UriKind>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25513_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25513/* method */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* declaring_type */
	, &UriKind_t1699_0_0_0/* return_type */
	, RuntimeInvoker_UriKind_t1699/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25513_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4680_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25509_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510_MethodInfo,
	&InternalEnumerator_1_Dispose_m25511_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25512_MethodInfo,
	&InternalEnumerator_1_get_Current_m25513_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4680_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25510_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25512_MethodInfo,
	&InternalEnumerator_1_Dispose_m25511_MethodInfo,
	&InternalEnumerator_1_get_Current_m25513_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4680_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6596_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4680_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6596_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4680_0_0_0;
extern Il2CppType InternalEnumerator_1_t4680_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4680_GenericClass;
TypeInfo InternalEnumerator_1_t4680_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4680_MethodInfos/* methods */
	, InternalEnumerator_1_t4680_PropertyInfos/* properties */
	, InternalEnumerator_1_t4680_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4680_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4680_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4680_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4680_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4680_1_0_0/* this_arg */
	, InternalEnumerator_1_t4680_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4680_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4680)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8493_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UriKind>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UriKind>
extern MethodInfo ICollection_1_get_Count_m43998_MethodInfo;
static PropertyInfo ICollection_1_t8493____Count_PropertyInfo = 
{
	&ICollection_1_t8493_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43998_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43999_MethodInfo;
static PropertyInfo ICollection_1_t8493____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8493_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43999_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8493_PropertyInfos[] =
{
	&ICollection_1_t8493____Count_PropertyInfo,
	&ICollection_1_t8493____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43998_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UriKind>::get_Count()
MethodInfo ICollection_1_get_Count_m43998_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43998_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43999_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43999_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43999_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t1699_0_0_0;
extern Il2CppType UriKind_t1699_0_0_0;
static ParameterInfo ICollection_1_t8493_ICollection_1_Add_m44000_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t1699_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44000_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Add(T)
MethodInfo ICollection_1_Add_m44000_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8493_ICollection_1_Add_m44000_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44000_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44001_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::Clear()
MethodInfo ICollection_1_Clear_m44001_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44001_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t1699_0_0_0;
static ParameterInfo ICollection_1_t8493_ICollection_1_Contains_m44002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t1699_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44002_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Contains(T)
MethodInfo ICollection_1_Contains_m44002_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8493_ICollection_1_Contains_m44002_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44002_GenericMethod/* genericMethod */

};
extern Il2CppType UriKindU5BU5D_t5489_0_0_0;
extern Il2CppType UriKindU5BU5D_t5489_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8493_ICollection_1_CopyTo_m44003_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriKindU5BU5D_t5489_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44003_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriKind>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44003_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8493_ICollection_1_CopyTo_m44003_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44003_GenericMethod/* genericMethod */

};
extern Il2CppType UriKind_t1699_0_0_0;
static ParameterInfo ICollection_1_t8493_ICollection_1_Remove_m44004_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t1699_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44004_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriKind>::Remove(T)
MethodInfo ICollection_1_Remove_m44004_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8493_ICollection_1_Remove_m44004_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44004_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8493_MethodInfos[] =
{
	&ICollection_1_get_Count_m43998_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43999_MethodInfo,
	&ICollection_1_Add_m44000_MethodInfo,
	&ICollection_1_Clear_m44001_MethodInfo,
	&ICollection_1_Contains_m44002_MethodInfo,
	&ICollection_1_CopyTo_m44003_MethodInfo,
	&ICollection_1_Remove_m44004_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8495_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8493_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8493_0_0_0;
extern Il2CppType ICollection_1_t8493_1_0_0;
struct ICollection_1_t8493;
extern Il2CppGenericClass ICollection_1_t8493_GenericClass;
TypeInfo ICollection_1_t8493_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8493_MethodInfos/* methods */
	, ICollection_1_t8493_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8493_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8493_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8493_0_0_0/* byval_arg */
	, &ICollection_1_t8493_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8493_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriKind>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UriKind>
extern Il2CppType IEnumerator_1_t6596_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44005_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriKind>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44005_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8495_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6596_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44005_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8495_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44005_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8495_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8495_0_0_0;
extern Il2CppType IEnumerable_1_t8495_1_0_0;
struct IEnumerable_1_t8495;
extern Il2CppGenericClass IEnumerable_1_t8495_GenericClass;
TypeInfo IEnumerable_1_t8495_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8495_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8495_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8495_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8495_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8495_0_0_0/* byval_arg */
	, &IEnumerable_1_t8495_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8495_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8494_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UriKind>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UriKind>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UriKind>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UriKind>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UriKind>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UriKind>
extern MethodInfo IList_1_get_Item_m44006_MethodInfo;
extern MethodInfo IList_1_set_Item_m44007_MethodInfo;
static PropertyInfo IList_1_t8494____Item_PropertyInfo = 
{
	&IList_1_t8494_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44006_MethodInfo/* get */
	, &IList_1_set_Item_m44007_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8494_PropertyInfos[] =
{
	&IList_1_t8494____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriKind_t1699_0_0_0;
static ParameterInfo IList_1_t8494_IList_1_IndexOf_m44008_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriKind_t1699_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44008_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UriKind>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44008_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8494_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8494_IList_1_IndexOf_m44008_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44008_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriKind_t1699_0_0_0;
static ParameterInfo IList_1_t8494_IList_1_Insert_m44009_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriKind_t1699_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44009_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriKind>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44009_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8494_IList_1_Insert_m44009_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44009_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8494_IList_1_RemoveAt_m44010_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44010_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriKind>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44010_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8494_IList_1_RemoveAt_m44010_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44010_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8494_IList_1_get_Item_m44006_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType UriKind_t1699_0_0_0;
extern void* RuntimeInvoker_UriKind_t1699_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44006_GenericMethod;
// T System.Collections.Generic.IList`1<System.UriKind>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44006_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8494_il2cpp_TypeInfo/* declaring_type */
	, &UriKind_t1699_0_0_0/* return_type */
	, RuntimeInvoker_UriKind_t1699_Int32_t63/* invoker_method */
	, IList_1_t8494_IList_1_get_Item_m44006_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44006_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriKind_t1699_0_0_0;
static ParameterInfo IList_1_t8494_IList_1_set_Item_m44007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriKind_t1699_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44007_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriKind>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44007_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8494_IList_1_set_Item_m44007_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44007_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8494_MethodInfos[] =
{
	&IList_1_IndexOf_m44008_MethodInfo,
	&IList_1_Insert_m44009_MethodInfo,
	&IList_1_RemoveAt_m44010_MethodInfo,
	&IList_1_get_Item_m44006_MethodInfo,
	&IList_1_set_Item_m44007_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8494_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8493_il2cpp_TypeInfo,
	&IEnumerable_1_t8495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8494_0_0_0;
extern Il2CppType IList_1_t8494_1_0_0;
struct IList_1_t8494;
extern Il2CppGenericClass IList_1_t8494_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8494_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8494_MethodInfos/* methods */
	, IList_1_t8494_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8494_il2cpp_TypeInfo/* element_class */
	, IList_1_t8494_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8494_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8494_0_0_0/* byval_arg */
	, &IList_1_t8494_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8494_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6598_il2cpp_TypeInfo;

// System.UriPartial
#include "System_System_UriPartial.h"


// T System.Collections.Generic.IEnumerator`1<System.UriPartial>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UriPartial>
extern MethodInfo IEnumerator_1_get_Current_m44011_MethodInfo;
static PropertyInfo IEnumerator_1_t6598____Current_PropertyInfo = 
{
	&IEnumerator_1_t6598_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44011_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6598_PropertyInfos[] =
{
	&IEnumerator_1_t6598____Current_PropertyInfo,
	NULL
};
extern Il2CppType UriPartial_t1700_0_0_0;
extern void* RuntimeInvoker_UriPartial_t1700 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44011_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UriPartial>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44011_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6598_il2cpp_TypeInfo/* declaring_type */
	, &UriPartial_t1700_0_0_0/* return_type */
	, RuntimeInvoker_UriPartial_t1700/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m44011_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6598_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44011_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6598_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6598_0_0_0;
extern Il2CppType IEnumerator_1_t6598_1_0_0;
struct IEnumerator_1_t6598;
extern Il2CppGenericClass IEnumerator_1_t6598_GenericClass;
TypeInfo IEnumerator_1_t6598_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6598_MethodInfos/* methods */
	, IEnumerator_1_t6598_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6598_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6598_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6598_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6598_0_0_0/* byval_arg */
	, &IEnumerator_1_t6598_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6598_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.UriPartial>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_542.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4681_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UriPartial>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_542MethodDeclarations.h"

extern TypeInfo UriPartial_t1700_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25518_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUriPartial_t1700_m33794_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UriPartial>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UriPartial>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUriPartial_t1700_m33794 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25514_MethodInfo;
 void InternalEnumerator_1__ctor_m25514 (InternalEnumerator_1_t4681 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UriPartial>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515 (InternalEnumerator_1_t4681 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25518(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25518_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UriPartial_t1700_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25516_MethodInfo;
 void InternalEnumerator_1_Dispose_m25516 (InternalEnumerator_1_t4681 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UriPartial>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25517_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25517 (InternalEnumerator_1_t4681 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UriPartial>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25518 (InternalEnumerator_1_t4681 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUriPartial_t1700_m33794(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUriPartial_t1700_m33794_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UriPartial>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4681____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4681, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4681____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4681, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4681_FieldInfos[] =
{
	&InternalEnumerator_1_t4681____array_0_FieldInfo,
	&InternalEnumerator_1_t4681____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4681____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4681_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4681____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4681_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25518_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4681_PropertyInfos[] =
{
	&InternalEnumerator_1_t4681____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4681____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4681_InternalEnumerator_1__ctor_m25514_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25514_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25514_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25514/* method */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4681_InternalEnumerator_1__ctor_m25514_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25514_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UriPartial>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515/* method */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25516_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UriPartial>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25516_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25516/* method */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25516_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25517_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UriPartial>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25517_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25517/* method */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25517_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t1700_0_0_0;
extern void* RuntimeInvoker_UriPartial_t1700 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25518_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UriPartial>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25518_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25518/* method */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* declaring_type */
	, &UriPartial_t1700_0_0_0/* return_type */
	, RuntimeInvoker_UriPartial_t1700/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25518_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4681_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25514_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515_MethodInfo,
	&InternalEnumerator_1_Dispose_m25516_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25517_MethodInfo,
	&InternalEnumerator_1_get_Current_m25518_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4681_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25515_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25517_MethodInfo,
	&InternalEnumerator_1_Dispose_m25516_MethodInfo,
	&InternalEnumerator_1_get_Current_m25518_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4681_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6598_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4681_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6598_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4681_0_0_0;
extern Il2CppType InternalEnumerator_1_t4681_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4681_GenericClass;
TypeInfo InternalEnumerator_1_t4681_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4681_MethodInfos/* methods */
	, InternalEnumerator_1_t4681_PropertyInfos/* properties */
	, InternalEnumerator_1_t4681_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4681_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4681_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4681_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4681_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4681_1_0_0/* this_arg */
	, InternalEnumerator_1_t4681_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4681_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4681)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8496_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UriPartial>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UriPartial>
extern MethodInfo ICollection_1_get_Count_m44012_MethodInfo;
static PropertyInfo ICollection_1_t8496____Count_PropertyInfo = 
{
	&ICollection_1_t8496_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44012_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44013_MethodInfo;
static PropertyInfo ICollection_1_t8496____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8496_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44013_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8496_PropertyInfos[] =
{
	&ICollection_1_t8496____Count_PropertyInfo,
	&ICollection_1_t8496____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44012_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UriPartial>::get_Count()
MethodInfo ICollection_1_get_Count_m44012_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44012_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44013_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44013_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44013_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t1700_0_0_0;
extern Il2CppType UriPartial_t1700_0_0_0;
static ParameterInfo ICollection_1_t8496_ICollection_1_Add_m44014_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t1700_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44014_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Add(T)
MethodInfo ICollection_1_Add_m44014_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8496_ICollection_1_Add_m44014_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44014_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44015_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::Clear()
MethodInfo ICollection_1_Clear_m44015_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44015_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t1700_0_0_0;
static ParameterInfo ICollection_1_t8496_ICollection_1_Contains_m44016_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t1700_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44016_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Contains(T)
MethodInfo ICollection_1_Contains_m44016_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8496_ICollection_1_Contains_m44016_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44016_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartialU5BU5D_t5490_0_0_0;
extern Il2CppType UriPartialU5BU5D_t5490_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8496_ICollection_1_CopyTo_m44017_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UriPartialU5BU5D_t5490_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44017_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UriPartial>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44017_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8496_ICollection_1_CopyTo_m44017_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44017_GenericMethod/* genericMethod */

};
extern Il2CppType UriPartial_t1700_0_0_0;
static ParameterInfo ICollection_1_t8496_ICollection_1_Remove_m44018_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t1700_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44018_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UriPartial>::Remove(T)
MethodInfo ICollection_1_Remove_m44018_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8496_ICollection_1_Remove_m44018_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44018_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8496_MethodInfos[] =
{
	&ICollection_1_get_Count_m44012_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44013_MethodInfo,
	&ICollection_1_Add_m44014_MethodInfo,
	&ICollection_1_Clear_m44015_MethodInfo,
	&ICollection_1_Contains_m44016_MethodInfo,
	&ICollection_1_CopyTo_m44017_MethodInfo,
	&ICollection_1_Remove_m44018_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8498_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8496_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8496_0_0_0;
extern Il2CppType ICollection_1_t8496_1_0_0;
struct ICollection_1_t8496;
extern Il2CppGenericClass ICollection_1_t8496_GenericClass;
TypeInfo ICollection_1_t8496_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8496_MethodInfos/* methods */
	, ICollection_1_t8496_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8496_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8496_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8496_0_0_0/* byval_arg */
	, &ICollection_1_t8496_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8496_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriPartial>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UriPartial>
extern Il2CppType IEnumerator_1_t6598_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44019_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UriPartial>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44019_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8498_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6598_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44019_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8498_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44019_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8498_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8498_0_0_0;
extern Il2CppType IEnumerable_1_t8498_1_0_0;
struct IEnumerable_1_t8498;
extern Il2CppGenericClass IEnumerable_1_t8498_GenericClass;
TypeInfo IEnumerable_1_t8498_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8498_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8498_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8498_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8498_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8498_0_0_0/* byval_arg */
	, &IEnumerable_1_t8498_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8498_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8497_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UriPartial>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UriPartial>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UriPartial>
extern MethodInfo IList_1_get_Item_m44020_MethodInfo;
extern MethodInfo IList_1_set_Item_m44021_MethodInfo;
static PropertyInfo IList_1_t8497____Item_PropertyInfo = 
{
	&IList_1_t8497_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44020_MethodInfo/* get */
	, &IList_1_set_Item_m44021_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8497_PropertyInfos[] =
{
	&IList_1_t8497____Item_PropertyInfo,
	NULL
};
extern Il2CppType UriPartial_t1700_0_0_0;
static ParameterInfo IList_1_t8497_IList_1_IndexOf_m44022_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UriPartial_t1700_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44022_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UriPartial>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44022_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8497_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8497_IList_1_IndexOf_m44022_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44022_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriPartial_t1700_0_0_0;
static ParameterInfo IList_1_t8497_IList_1_Insert_m44023_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UriPartial_t1700_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44023_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44023_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8497_IList_1_Insert_m44023_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44023_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8497_IList_1_RemoveAt_m44024_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44024_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44024_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8497_IList_1_RemoveAt_m44024_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44024_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8497_IList_1_get_Item_m44020_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType UriPartial_t1700_0_0_0;
extern void* RuntimeInvoker_UriPartial_t1700_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44020_GenericMethod;
// T System.Collections.Generic.IList`1<System.UriPartial>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44020_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8497_il2cpp_TypeInfo/* declaring_type */
	, &UriPartial_t1700_0_0_0/* return_type */
	, RuntimeInvoker_UriPartial_t1700_Int32_t63/* invoker_method */
	, IList_1_t8497_IList_1_get_Item_m44020_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44020_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UriPartial_t1700_0_0_0;
static ParameterInfo IList_1_t8497_IList_1_set_Item_m44021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UriPartial_t1700_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44021_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UriPartial>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44021_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8497_IList_1_set_Item_m44021_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44021_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8497_MethodInfos[] =
{
	&IList_1_IndexOf_m44022_MethodInfo,
	&IList_1_Insert_m44023_MethodInfo,
	&IList_1_RemoveAt_m44024_MethodInfo,
	&IList_1_get_Item_m44020_MethodInfo,
	&IList_1_set_Item_m44021_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8497_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8496_il2cpp_TypeInfo,
	&IEnumerable_1_t8498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8497_0_0_0;
extern Il2CppType IList_1_t8497_1_0_0;
struct IList_1_t8497;
extern Il2CppGenericClass IList_1_t8497_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8497_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8497_MethodInfos/* methods */
	, IList_1_t8497_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8497_il2cpp_TypeInfo/* element_class */
	, IList_1_t8497_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8497_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8497_0_0_0/* byval_arg */
	, &IList_1_t8497_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8497_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6600_il2cpp_TypeInfo;

// System.SerializableAttribute
#include "mscorlib_System_SerializableAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.SerializableAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.SerializableAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44025_MethodInfo;
static PropertyInfo IEnumerator_1_t6600____Current_PropertyInfo = 
{
	&IEnumerator_1_t6600_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6600_PropertyInfos[] =
{
	&IEnumerator_1_t6600____Current_PropertyInfo,
	NULL
};
extern Il2CppType SerializableAttribute_t1738_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44025_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.SerializableAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44025_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6600_il2cpp_TypeInfo/* declaring_type */
	, &SerializableAttribute_t1738_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44025_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6600_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44025_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6600_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6600_0_0_0;
extern Il2CppType IEnumerator_1_t6600_1_0_0;
struct IEnumerator_1_t6600;
extern Il2CppGenericClass IEnumerator_1_t6600_GenericClass;
TypeInfo IEnumerator_1_t6600_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6600_MethodInfos/* methods */
	, IEnumerator_1_t6600_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6600_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6600_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6600_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6600_0_0_0/* byval_arg */
	, &IEnumerator_1_t6600_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6600_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.SerializableAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_543.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4682_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.SerializableAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_543MethodDeclarations.h"

extern TypeInfo SerializableAttribute_t1738_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25523_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSerializableAttribute_t1738_m33805_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.SerializableAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SerializableAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSerializableAttribute_t1738_m33805(__this, p0, method) (SerializableAttribute_t1738 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.SerializableAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.SerializableAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.SerializableAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.SerializableAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4682____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4682, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4682____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4682, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4682_FieldInfos[] =
{
	&InternalEnumerator_1_t4682____array_0_FieldInfo,
	&InternalEnumerator_1_t4682____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25520_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4682____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4682_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25520_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4682____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4682_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25523_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4682_PropertyInfos[] =
{
	&InternalEnumerator_1_t4682____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4682____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4682_InternalEnumerator_1__ctor_m25519_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25519_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25519_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4682_InternalEnumerator_1__ctor_m25519_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25519_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25520_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.SerializableAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25520_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25520_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25521_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SerializableAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25521_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25521_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25522_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.SerializableAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25522_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25522_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t1738_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25523_GenericMethod;
// T System.Array/InternalEnumerator`1<System.SerializableAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25523_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* declaring_type */
	, &SerializableAttribute_t1738_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25523_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4682_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25519_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25520_MethodInfo,
	&InternalEnumerator_1_Dispose_m25521_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25522_MethodInfo,
	&InternalEnumerator_1_get_Current_m25523_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25522_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25521_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4682_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25520_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25522_MethodInfo,
	&InternalEnumerator_1_Dispose_m25521_MethodInfo,
	&InternalEnumerator_1_get_Current_m25523_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4682_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6600_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4682_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6600_il2cpp_TypeInfo, 7},
};
extern TypeInfo SerializableAttribute_t1738_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4682_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25523_MethodInfo/* Method Usage */,
	&SerializableAttribute_t1738_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSerializableAttribute_t1738_m33805_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4682_0_0_0;
extern Il2CppType InternalEnumerator_1_t4682_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4682_GenericClass;
TypeInfo InternalEnumerator_1_t4682_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4682_MethodInfos/* methods */
	, InternalEnumerator_1_t4682_PropertyInfos/* properties */
	, InternalEnumerator_1_t4682_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4682_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4682_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4682_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4682_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4682_1_0_0/* this_arg */
	, InternalEnumerator_1_t4682_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4682_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4682_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4682)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8499_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.SerializableAttribute>
extern MethodInfo ICollection_1_get_Count_m44026_MethodInfo;
static PropertyInfo ICollection_1_t8499____Count_PropertyInfo = 
{
	&ICollection_1_t8499_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44026_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44027_MethodInfo;
static PropertyInfo ICollection_1_t8499____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8499_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8499_PropertyInfos[] =
{
	&ICollection_1_t8499____Count_PropertyInfo,
	&ICollection_1_t8499____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44026_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44026_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44026_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44027_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44027_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44027_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t1738_0_0_0;
extern Il2CppType SerializableAttribute_t1738_0_0_0;
static ParameterInfo ICollection_1_t8499_ICollection_1_Add_m44028_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t1738_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44028_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44028_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8499_ICollection_1_Add_m44028_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44028_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44029_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44029_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44029_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t1738_0_0_0;
static ParameterInfo ICollection_1_t8499_ICollection_1_Contains_m44030_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t1738_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44030_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44030_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8499_ICollection_1_Contains_m44030_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44030_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttributeU5BU5D_t4975_0_0_0;
extern Il2CppType SerializableAttributeU5BU5D_t4975_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8499_ICollection_1_CopyTo_m44031_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttributeU5BU5D_t4975_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44031_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SerializableAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44031_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8499_ICollection_1_CopyTo_m44031_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44031_GenericMethod/* genericMethod */

};
extern Il2CppType SerializableAttribute_t1738_0_0_0;
static ParameterInfo ICollection_1_t8499_ICollection_1_Remove_m44032_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t1738_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44032_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SerializableAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44032_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8499_ICollection_1_Remove_m44032_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44032_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8499_MethodInfos[] =
{
	&ICollection_1_get_Count_m44026_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44027_MethodInfo,
	&ICollection_1_Add_m44028_MethodInfo,
	&ICollection_1_Clear_m44029_MethodInfo,
	&ICollection_1_Contains_m44030_MethodInfo,
	&ICollection_1_CopyTo_m44031_MethodInfo,
	&ICollection_1_Remove_m44032_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8501_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8499_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8499_0_0_0;
extern Il2CppType ICollection_1_t8499_1_0_0;
struct ICollection_1_t8499;
extern Il2CppGenericClass ICollection_1_t8499_GenericClass;
TypeInfo ICollection_1_t8499_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8499_MethodInfos/* methods */
	, ICollection_1_t8499_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8499_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8499_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8499_0_0_0/* byval_arg */
	, &ICollection_1_t8499_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8499_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SerializableAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.SerializableAttribute>
extern Il2CppType IEnumerator_1_t6600_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44033_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SerializableAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44033_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8501_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6600_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44033_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8501_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44033_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8501_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8501_0_0_0;
extern Il2CppType IEnumerable_1_t8501_1_0_0;
struct IEnumerable_1_t8501;
extern Il2CppGenericClass IEnumerable_1_t8501_GenericClass;
TypeInfo IEnumerable_1_t8501_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8501_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8501_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8501_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8501_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8501_0_0_0/* byval_arg */
	, &IEnumerable_1_t8501_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8501_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8500_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.SerializableAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.SerializableAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.SerializableAttribute>
extern MethodInfo IList_1_get_Item_m44034_MethodInfo;
extern MethodInfo IList_1_set_Item_m44035_MethodInfo;
static PropertyInfo IList_1_t8500____Item_PropertyInfo = 
{
	&IList_1_t8500_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44034_MethodInfo/* get */
	, &IList_1_set_Item_m44035_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8500_PropertyInfos[] =
{
	&IList_1_t8500____Item_PropertyInfo,
	NULL
};
extern Il2CppType SerializableAttribute_t1738_0_0_0;
static ParameterInfo IList_1_t8500_IList_1_IndexOf_m44036_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t1738_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44036_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.SerializableAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44036_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8500_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8500_IList_1_IndexOf_m44036_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44036_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType SerializableAttribute_t1738_0_0_0;
static ParameterInfo IList_1_t8500_IList_1_Insert_m44037_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t1738_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44037_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44037_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8500_IList_1_Insert_m44037_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44037_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8500_IList_1_RemoveAt_m44038_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44038_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44038_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8500_IList_1_RemoveAt_m44038_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44038_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8500_IList_1_get_Item_m44034_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType SerializableAttribute_t1738_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44034_GenericMethod;
// T System.Collections.Generic.IList`1<System.SerializableAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44034_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8500_il2cpp_TypeInfo/* declaring_type */
	, &SerializableAttribute_t1738_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8500_IList_1_get_Item_m44034_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44034_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType SerializableAttribute_t1738_0_0_0;
static ParameterInfo IList_1_t8500_IList_1_set_Item_m44035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SerializableAttribute_t1738_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44035_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SerializableAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44035_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8500_IList_1_set_Item_m44035_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44035_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8500_MethodInfos[] =
{
	&IList_1_IndexOf_m44036_MethodInfo,
	&IList_1_Insert_m44037_MethodInfo,
	&IList_1_RemoveAt_m44038_MethodInfo,
	&IList_1_get_Item_m44034_MethodInfo,
	&IList_1_set_Item_m44035_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8500_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8499_il2cpp_TypeInfo,
	&IEnumerable_1_t8501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8500_0_0_0;
extern Il2CppType IList_1_t8500_1_0_0;
struct IList_1_t8500;
extern Il2CppGenericClass IList_1_t8500_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8500_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8500_MethodInfos/* methods */
	, IList_1_t8500_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8500_il2cpp_TypeInfo/* element_class */
	, IList_1_t8500_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8500_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8500_0_0_0/* byval_arg */
	, &IList_1_t8500_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8500_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6602_il2cpp_TypeInfo;

// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.AttributeUsageAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.AttributeUsageAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44039_MethodInfo;
static PropertyInfo IEnumerator_1_t6602____Current_PropertyInfo = 
{
	&IEnumerator_1_t6602_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44039_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6602_PropertyInfos[] =
{
	&IEnumerator_1_t6602____Current_PropertyInfo,
	NULL
};
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44039_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.AttributeUsageAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44039_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6602_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t324_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44039_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6602_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44039_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6602_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6602_0_0_0;
extern Il2CppType IEnumerator_1_t6602_1_0_0;
struct IEnumerator_1_t6602;
extern Il2CppGenericClass IEnumerator_1_t6602_GenericClass;
TypeInfo IEnumerator_1_t6602_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6602_MethodInfos/* methods */
	, IEnumerator_1_t6602_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6602_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6602_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6602_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6602_0_0_0/* byval_arg */
	, &IEnumerator_1_t6602_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6602_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_544.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4683_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_544MethodDeclarations.h"

extern TypeInfo AttributeUsageAttribute_t324_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25528_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAttributeUsageAttribute_t324_m33816_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.AttributeUsageAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.AttributeUsageAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAttributeUsageAttribute_t324_m33816(__this, p0, method) (AttributeUsageAttribute_t324 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4683____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4683, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4683____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4683, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4683_FieldInfos[] =
{
	&InternalEnumerator_1_t4683____array_0_FieldInfo,
	&InternalEnumerator_1_t4683____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25525_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4683____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4683_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25525_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4683____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4683_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25528_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4683_PropertyInfos[] =
{
	&InternalEnumerator_1_t4683____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4683____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4683_InternalEnumerator_1__ctor_m25524_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25524_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25524_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4683_InternalEnumerator_1__ctor_m25524_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25524_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25525_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25525_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25525_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25526_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25526_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25526_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25527_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25527_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25527_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25528_GenericMethod;
// T System.Array/InternalEnumerator`1<System.AttributeUsageAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25528_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t324_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25528_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4683_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25524_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25525_MethodInfo,
	&InternalEnumerator_1_Dispose_m25526_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25527_MethodInfo,
	&InternalEnumerator_1_get_Current_m25528_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25527_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25526_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4683_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25525_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25527_MethodInfo,
	&InternalEnumerator_1_Dispose_m25526_MethodInfo,
	&InternalEnumerator_1_get_Current_m25528_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4683_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6602_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4683_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6602_il2cpp_TypeInfo, 7},
};
extern TypeInfo AttributeUsageAttribute_t324_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4683_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25528_MethodInfo/* Method Usage */,
	&AttributeUsageAttribute_t324_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAttributeUsageAttribute_t324_m33816_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4683_0_0_0;
extern Il2CppType InternalEnumerator_1_t4683_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4683_GenericClass;
TypeInfo InternalEnumerator_1_t4683_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4683_MethodInfos/* methods */
	, InternalEnumerator_1_t4683_PropertyInfos/* properties */
	, InternalEnumerator_1_t4683_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4683_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4683_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4683_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4683_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4683_1_0_0/* this_arg */
	, InternalEnumerator_1_t4683_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4683_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4683_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4683)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8502_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>
extern MethodInfo ICollection_1_get_Count_m44040_MethodInfo;
static PropertyInfo ICollection_1_t8502____Count_PropertyInfo = 
{
	&ICollection_1_t8502_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44040_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44041_MethodInfo;
static PropertyInfo ICollection_1_t8502____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8502_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44041_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8502_PropertyInfos[] =
{
	&ICollection_1_t8502____Count_PropertyInfo,
	&ICollection_1_t8502____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44040_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44040_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44040_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44041_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44041_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44041_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
static ParameterInfo ICollection_1_t8502_ICollection_1_Add_m44042_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t324_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44042_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44042_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8502_ICollection_1_Add_m44042_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44042_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44043_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44043_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44043_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
static ParameterInfo ICollection_1_t8502_ICollection_1_Contains_m44044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t324_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44044_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44044_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8502_ICollection_1_Contains_m44044_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44044_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttributeU5BU5D_t4976_0_0_0;
extern Il2CppType AttributeUsageAttributeU5BU5D_t4976_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8502_ICollection_1_CopyTo_m44045_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttributeU5BU5D_t4976_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44045_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44045_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8502_ICollection_1_CopyTo_m44045_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44045_GenericMethod/* genericMethod */

};
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
static ParameterInfo ICollection_1_t8502_ICollection_1_Remove_m44046_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t324_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44046_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeUsageAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44046_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8502_ICollection_1_Remove_m44046_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44046_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8502_MethodInfos[] =
{
	&ICollection_1_get_Count_m44040_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44041_MethodInfo,
	&ICollection_1_Add_m44042_MethodInfo,
	&ICollection_1_Clear_m44043_MethodInfo,
	&ICollection_1_Contains_m44044_MethodInfo,
	&ICollection_1_CopyTo_m44045_MethodInfo,
	&ICollection_1_Remove_m44046_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8504_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8502_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8502_0_0_0;
extern Il2CppType ICollection_1_t8502_1_0_0;
struct ICollection_1_t8502;
extern Il2CppGenericClass ICollection_1_t8502_GenericClass;
TypeInfo ICollection_1_t8502_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8502_MethodInfos/* methods */
	, ICollection_1_t8502_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8502_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8502_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8502_0_0_0/* byval_arg */
	, &ICollection_1_t8502_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8502_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeUsageAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.AttributeUsageAttribute>
extern Il2CppType IEnumerator_1_t6602_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44047_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeUsageAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44047_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8504_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6602_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44047_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8504_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44047_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8504_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8504_0_0_0;
extern Il2CppType IEnumerable_1_t8504_1_0_0;
struct IEnumerable_1_t8504;
extern Il2CppGenericClass IEnumerable_1_t8504_GenericClass;
TypeInfo IEnumerable_1_t8504_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8504_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8504_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8504_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8504_0_0_0/* byval_arg */
	, &IEnumerable_1_t8504_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8504_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8503_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.AttributeUsageAttribute>
extern MethodInfo IList_1_get_Item_m44048_MethodInfo;
extern MethodInfo IList_1_set_Item_m44049_MethodInfo;
static PropertyInfo IList_1_t8503____Item_PropertyInfo = 
{
	&IList_1_t8503_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44048_MethodInfo/* get */
	, &IList_1_set_Item_m44049_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8503_PropertyInfos[] =
{
	&IList_1_t8503____Item_PropertyInfo,
	NULL
};
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
static ParameterInfo IList_1_t8503_IList_1_IndexOf_m44050_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t324_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44050_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44050_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8503_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8503_IList_1_IndexOf_m44050_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44050_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
static ParameterInfo IList_1_t8503_IList_1_Insert_m44051_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t324_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44051_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44051_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8503_IList_1_Insert_m44051_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44051_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8503_IList_1_RemoveAt_m44052_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44052_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44052_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8503_IList_1_RemoveAt_m44052_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44052_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8503_IList_1_get_Item_m44048_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44048_GenericMethod;
// T System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44048_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8503_il2cpp_TypeInfo/* declaring_type */
	, &AttributeUsageAttribute_t324_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8503_IList_1_get_Item_m44048_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44048_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType AttributeUsageAttribute_t324_0_0_0;
static ParameterInfo IList_1_t8503_IList_1_set_Item_m44049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AttributeUsageAttribute_t324_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44049_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.AttributeUsageAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44049_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8503_IList_1_set_Item_m44049_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44049_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8503_MethodInfos[] =
{
	&IList_1_IndexOf_m44050_MethodInfo,
	&IList_1_Insert_m44051_MethodInfo,
	&IList_1_RemoveAt_m44052_MethodInfo,
	&IList_1_get_Item_m44048_MethodInfo,
	&IList_1_set_Item_m44049_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8503_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8502_il2cpp_TypeInfo,
	&IEnumerable_1_t8504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8503_0_0_0;
extern Il2CppType IList_1_t8503_1_0_0;
struct IList_1_t8503;
extern Il2CppGenericClass IList_1_t8503_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8503_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8503_MethodInfos/* methods */
	, IList_1_t8503_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8503_il2cpp_TypeInfo/* element_class */
	, IList_1_t8503_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8503_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8503_0_0_0/* byval_arg */
	, &IList_1_t8503_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8503_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6604_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44053_MethodInfo;
static PropertyInfo IEnumerator_1_t6604____Current_PropertyInfo = 
{
	&IEnumerator_1_t6604_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6604_PropertyInfos[] =
{
	&IEnumerator_1_t6604____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44053_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44053_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6604_il2cpp_TypeInfo/* declaring_type */
	, &ComVisibleAttribute_t790_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44053_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6604_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44053_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6604_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6604_0_0_0;
extern Il2CppType IEnumerator_1_t6604_1_0_0;
struct IEnumerator_1_t6604;
extern Il2CppGenericClass IEnumerator_1_t6604_GenericClass;
TypeInfo IEnumerator_1_t6604_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6604_MethodInfos/* methods */
	, IEnumerator_1_t6604_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6604_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6604_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6604_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6604_0_0_0/* byval_arg */
	, &IEnumerator_1_t6604_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6604_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_545.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4684_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_545MethodDeclarations.h"

extern TypeInfo ComVisibleAttribute_t790_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25533_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComVisibleAttribute_t790_m33827_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComVisibleAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComVisibleAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComVisibleAttribute_t790_m33827(__this, p0, method) (ComVisibleAttribute_t790 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4684____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4684, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4684____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4684, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4684_FieldInfos[] =
{
	&InternalEnumerator_1_t4684____array_0_FieldInfo,
	&InternalEnumerator_1_t4684____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25530_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4684____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4684_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25530_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4684____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4684_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25533_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4684_PropertyInfos[] =
{
	&InternalEnumerator_1_t4684____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4684____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4684_InternalEnumerator_1__ctor_m25529_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25529_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25529_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4684_InternalEnumerator_1__ctor_m25529_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25529_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25530_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25530_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25530_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25531_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25531_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25531_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25532_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25532_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25532_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25533_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25533_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* declaring_type */
	, &ComVisibleAttribute_t790_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25533_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4684_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25529_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25530_MethodInfo,
	&InternalEnumerator_1_Dispose_m25531_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25532_MethodInfo,
	&InternalEnumerator_1_get_Current_m25533_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25532_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25531_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4684_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25530_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25532_MethodInfo,
	&InternalEnumerator_1_Dispose_m25531_MethodInfo,
	&InternalEnumerator_1_get_Current_m25533_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4684_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6604_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4684_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6604_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComVisibleAttribute_t790_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4684_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25533_MethodInfo/* Method Usage */,
	&ComVisibleAttribute_t790_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComVisibleAttribute_t790_m33827_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4684_0_0_0;
extern Il2CppType InternalEnumerator_1_t4684_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4684_GenericClass;
TypeInfo InternalEnumerator_1_t4684_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4684_MethodInfos/* methods */
	, InternalEnumerator_1_t4684_PropertyInfos/* properties */
	, InternalEnumerator_1_t4684_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4684_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4684_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4684_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4684_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4684_1_0_0/* this_arg */
	, InternalEnumerator_1_t4684_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4684_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4684_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4684)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8505_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern MethodInfo ICollection_1_get_Count_m44054_MethodInfo;
static PropertyInfo ICollection_1_t8505____Count_PropertyInfo = 
{
	&ICollection_1_t8505_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44054_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44055_MethodInfo;
static PropertyInfo ICollection_1_t8505____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8505_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8505_PropertyInfos[] =
{
	&ICollection_1_t8505____Count_PropertyInfo,
	&ICollection_1_t8505____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44054_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44054_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44054_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44055_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44055_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44055_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
static ParameterInfo ICollection_1_t8505_ICollection_1_Add_m44056_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t790_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44056_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44056_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8505_ICollection_1_Add_m44056_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44056_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44057_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44057_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44057_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
static ParameterInfo ICollection_1_t8505_ICollection_1_Contains_m44058_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t790_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44058_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44058_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8505_ICollection_1_Contains_m44058_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44058_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttributeU5BU5D_t4977_0_0_0;
extern Il2CppType ComVisibleAttributeU5BU5D_t4977_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8505_ICollection_1_CopyTo_m44059_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttributeU5BU5D_t4977_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44059_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44059_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8505_ICollection_1_CopyTo_m44059_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44059_GenericMethod/* genericMethod */

};
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
static ParameterInfo ICollection_1_t8505_ICollection_1_Remove_m44060_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t790_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44060_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComVisibleAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44060_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8505_ICollection_1_Remove_m44060_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44060_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8505_MethodInfos[] =
{
	&ICollection_1_get_Count_m44054_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44055_MethodInfo,
	&ICollection_1_Add_m44056_MethodInfo,
	&ICollection_1_Clear_m44057_MethodInfo,
	&ICollection_1_Contains_m44058_MethodInfo,
	&ICollection_1_CopyTo_m44059_MethodInfo,
	&ICollection_1_Remove_m44060_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8507_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8505_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8505_0_0_0;
extern Il2CppType ICollection_1_t8505_1_0_0;
struct ICollection_1_t8505;
extern Il2CppGenericClass ICollection_1_t8505_GenericClass;
TypeInfo ICollection_1_t8505_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8505_MethodInfos/* methods */
	, ICollection_1_t8505_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8505_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8505_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8505_0_0_0/* byval_arg */
	, &ICollection_1_t8505_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8505_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComVisibleAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern Il2CppType IEnumerator_1_t6604_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44061_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComVisibleAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44061_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8507_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6604_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44061_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8507_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44061_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8507_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8507_0_0_0;
extern Il2CppType IEnumerable_1_t8507_1_0_0;
struct IEnumerable_1_t8507;
extern Il2CppGenericClass IEnumerable_1_t8507_GenericClass;
TypeInfo IEnumerable_1_t8507_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8507_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8507_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8507_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8507_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8507_0_0_0/* byval_arg */
	, &IEnumerable_1_t8507_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8507_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8506_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>
extern MethodInfo IList_1_get_Item_m44062_MethodInfo;
extern MethodInfo IList_1_set_Item_m44063_MethodInfo;
static PropertyInfo IList_1_t8506____Item_PropertyInfo = 
{
	&IList_1_t8506_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44062_MethodInfo/* get */
	, &IList_1_set_Item_m44063_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8506_PropertyInfos[] =
{
	&IList_1_t8506____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
static ParameterInfo IList_1_t8506_IList_1_IndexOf_m44064_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t790_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44064_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44064_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8506_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8506_IList_1_IndexOf_m44064_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44064_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
static ParameterInfo IList_1_t8506_IList_1_Insert_m44065_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t790_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44065_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44065_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8506_IList_1_Insert_m44065_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44065_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8506_IList_1_RemoveAt_m44066_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44066_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44066_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8506_IList_1_RemoveAt_m44066_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44066_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8506_IList_1_get_Item_m44062_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44062_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44062_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8506_il2cpp_TypeInfo/* declaring_type */
	, &ComVisibleAttribute_t790_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8506_IList_1_get_Item_m44062_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44062_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ComVisibleAttribute_t790_0_0_0;
static ParameterInfo IList_1_t8506_IList_1_set_Item_m44063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComVisibleAttribute_t790_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44063_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComVisibleAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44063_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8506_IList_1_set_Item_m44063_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44063_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8506_MethodInfos[] =
{
	&IList_1_IndexOf_m44064_MethodInfo,
	&IList_1_Insert_m44065_MethodInfo,
	&IList_1_RemoveAt_m44066_MethodInfo,
	&IList_1_get_Item_m44062_MethodInfo,
	&IList_1_set_Item_m44063_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8506_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8505_il2cpp_TypeInfo,
	&IEnumerable_1_t8507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8506_0_0_0;
extern Il2CppType IList_1_t8506_1_0_0;
struct IList_1_t8506;
extern Il2CppGenericClass IList_1_t8506_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8506_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8506_MethodInfos/* methods */
	, IList_1_t8506_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8506_il2cpp_TypeInfo/* element_class */
	, IList_1_t8506_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8506_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8506_0_0_0/* byval_arg */
	, &IList_1_t8506_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8506_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6605_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"


// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Int64>
extern MethodInfo IEnumerator_1_get_Current_m44067_MethodInfo;
static PropertyInfo IEnumerator_1_t6605____Current_PropertyInfo = 
{
	&IEnumerator_1_t6605_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6605_PropertyInfos[] =
{
	&IEnumerator_1_t6605____Current_PropertyInfo,
	NULL
};
extern Il2CppType Int64_t67_0_0_0;
extern void* RuntimeInvoker_Int64_t67 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44067_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44067_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6605_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t67_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t67/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m44067_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6605_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44067_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6605_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6605_0_0_0;
extern Il2CppType IEnumerator_1_t6605_1_0_0;
struct IEnumerator_1_t6605;
extern Il2CppGenericClass IEnumerator_1_t6605_GenericClass;
TypeInfo IEnumerator_1_t6605_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6605_MethodInfos/* methods */
	, IEnumerator_1_t6605_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6605_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6605_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6605_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6605_0_0_0/* byval_arg */
	, &IEnumerator_1_t6605_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6605_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_546.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4685_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_546MethodDeclarations.h"

extern TypeInfo Int64_t67_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25538_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInt64_t67_m33838_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
 int64_t Array_InternalArray__get_Item_TisInt64_t67_m33838 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25534_MethodInfo;
 void InternalEnumerator_1__ctor_m25534 (InternalEnumerator_1_t4685 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535 (InternalEnumerator_1_t4685 * __this, MethodInfo* method){
	{
		int64_t L_0 = InternalEnumerator_1_get_Current_m25538(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25538_MethodInfo);
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int64_t67_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25536_MethodInfo;
 void InternalEnumerator_1_Dispose_m25536 (InternalEnumerator_1_t4685 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25537_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25537 (InternalEnumerator_1_t4685 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
 int64_t InternalEnumerator_1_get_Current_m25538 (InternalEnumerator_1_t4685 * __this, MethodInfo* method){
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
		int64_t L_8 = Array_InternalArray__get_Item_TisInt64_t67_m33838(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisInt64_t67_m33838_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Int64>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4685____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4685, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4685____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4685, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4685_FieldInfos[] =
{
	&InternalEnumerator_1_t4685____array_0_FieldInfo,
	&InternalEnumerator_1_t4685____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4685____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4685_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4685____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4685_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25538_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4685_PropertyInfos[] =
{
	&InternalEnumerator_1_t4685____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4685____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4685_InternalEnumerator_1__ctor_m25534_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25534_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25534_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25534/* method */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4685_InternalEnumerator_1__ctor_m25534_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25534_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535/* method */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25536_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25536_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25536/* method */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25536_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25537_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25537_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25537/* method */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25537_GenericMethod/* genericMethod */

};
extern Il2CppType Int64_t67_0_0_0;
extern void* RuntimeInvoker_Int64_t67 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25538_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25538_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25538/* method */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t67_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t67/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25538_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4685_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25534_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535_MethodInfo,
	&InternalEnumerator_1_Dispose_m25536_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25537_MethodInfo,
	&InternalEnumerator_1_get_Current_m25538_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4685_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25535_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25537_MethodInfo,
	&InternalEnumerator_1_Dispose_m25536_MethodInfo,
	&InternalEnumerator_1_get_Current_m25538_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4685_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6605_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4685_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6605_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4685_0_0_0;
extern Il2CppType InternalEnumerator_1_t4685_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4685_GenericClass;
TypeInfo InternalEnumerator_1_t4685_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4685_MethodInfos/* methods */
	, InternalEnumerator_1_t4685_PropertyInfos/* properties */
	, InternalEnumerator_1_t4685_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4685_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4685_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4685_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4685_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4685_1_0_0/* this_arg */
	, InternalEnumerator_1_t4685_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4685_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4685)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8508_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Int64>
extern MethodInfo ICollection_1_get_Count_m44068_MethodInfo;
static PropertyInfo ICollection_1_t8508____Count_PropertyInfo = 
{
	&ICollection_1_t8508_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44069_MethodInfo;
static PropertyInfo ICollection_1_t8508____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8508_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44069_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8508_PropertyInfos[] =
{
	&ICollection_1_t8508____Count_PropertyInfo,
	&ICollection_1_t8508____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44068_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count()
MethodInfo ICollection_1_get_Count_m44068_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44068_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44069_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44069_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44069_GenericMethod/* genericMethod */

};
extern Il2CppType Int64_t67_0_0_0;
extern Il2CppType Int64_t67_0_0_0;
static ParameterInfo ICollection_1_t8508_ICollection_1_Add_m44070_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t67_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int64_t67 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44070_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(T)
MethodInfo ICollection_1_Add_m44070_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int64_t67/* invoker_method */
	, ICollection_1_t8508_ICollection_1_Add_m44070_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44070_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44071_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear()
MethodInfo ICollection_1_Clear_m44071_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44071_GenericMethod/* genericMethod */

};
extern Il2CppType Int64_t67_0_0_0;
static ParameterInfo ICollection_1_t8508_ICollection_1_Contains_m44072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t67_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int64_t67 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44072_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(T)
MethodInfo ICollection_1_Contains_m44072_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int64_t67/* invoker_method */
	, ICollection_1_t8508_ICollection_1_Contains_m44072_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44072_GenericMethod/* genericMethod */

};
extern Il2CppType Int64U5BU5D_t1748_0_0_0;
extern Il2CppType Int64U5BU5D_t1748_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8508_ICollection_1_CopyTo_m44073_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Int64U5BU5D_t1748_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44073_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int64>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44073_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8508_ICollection_1_CopyTo_m44073_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44073_GenericMethod/* genericMethod */

};
extern Il2CppType Int64_t67_0_0_0;
static ParameterInfo ICollection_1_t8508_ICollection_1_Remove_m44074_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t67_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int64_t67 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44074_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(T)
MethodInfo ICollection_1_Remove_m44074_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int64_t67/* invoker_method */
	, ICollection_1_t8508_ICollection_1_Remove_m44074_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44074_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8508_MethodInfos[] =
{
	&ICollection_1_get_Count_m44068_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44069_MethodInfo,
	&ICollection_1_Add_m44070_MethodInfo,
	&ICollection_1_Clear_m44071_MethodInfo,
	&ICollection_1_Contains_m44072_MethodInfo,
	&ICollection_1_CopyTo_m44073_MethodInfo,
	&ICollection_1_Remove_m44074_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8510_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8508_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8510_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8508_0_0_0;
extern Il2CppType ICollection_1_t8508_1_0_0;
struct ICollection_1_t8508;
extern Il2CppGenericClass ICollection_1_t8508_GenericClass;
TypeInfo ICollection_1_t8508_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8508_MethodInfos/* methods */
	, ICollection_1_t8508_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8508_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8508_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8508_0_0_0/* byval_arg */
	, &ICollection_1_t8508_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8508_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
