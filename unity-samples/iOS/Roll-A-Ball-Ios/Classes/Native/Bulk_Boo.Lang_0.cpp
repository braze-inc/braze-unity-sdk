#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "Boo_Lang_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t1126_il2cpp_TypeInfo;
// <Module>
#include "Boo_Lang_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Metadata Definition <Module>
static MethodInfo* U3CModuleU3E_t1126_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CModuleU3E_t1126_0_0_0;
extern Il2CppType U3CModuleU3E_t1126_1_0_0;
struct U3CModuleU3E_t1126;
TypeInfo U3CModuleU3E_t1126_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Module>"/* name */
	, ""/* namespaze */
	, U3CModuleU3E_t1126_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &U3CModuleU3E_t1126_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &U3CModuleU3E_t1126_il2cpp_TypeInfo/* cast_class */
	, &U3CModuleU3E_t1126_0_0_0/* byval_arg */
	, &U3CModuleU3E_t1126_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CModuleU3E_t1126)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_Builtins.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Builtins_t1127_il2cpp_TypeInfo;
// Boo.Lang.Builtins
#include "Boo_Lang_Boo_Lang_BuiltinsMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo StringBuilder_t80_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t88_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t21_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t69_il2cpp_TypeInfo;
extern TypeInfo Boolean_t64_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t62_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern MethodInfo StringBuilder__ctor_m449_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m5238_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m432_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m464_MethodInfo;
extern MethodInfo StringBuilder_Append_m5239_MethodInfo;
extern MethodInfo StringBuilder_Append_m450_MethodInfo;
extern MethodInfo IDisposable_Dispose_m425_MethodInfo;
extern MethodInfo StringBuilder_ToString_m459_MethodInfo;


// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern MethodInfo Builtins_join_m5192_MethodInfo;
 String_t* Builtins_join_m5192 (Object_t * __this/* static, unused */, Object_t * ___enumerable, String_t* ___separator, MethodInfo* method){
	StringBuilder_t80 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t71 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t71 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		StringBuilder_t80 * L_0 = (StringBuilder_t80 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t80_il2cpp_TypeInfo));
		StringBuilder__ctor_m449(L_0, /*hidden argument*/&StringBuilder__ctor_m449_MethodInfo);
		V_0 = L_0;
		NullCheck(___enumerable);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m5238_MethodInfo, ___enumerable);
		V_1 = L_1;
		V_2 = ((Object_t *)IsInst(V_1, InitializedTypeInfo(&IDisposable_t69_il2cpp_TypeInfo)));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			NullCheck(V_1);
			bool L_2 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m432_MethodInfo, V_1);
			if (!L_2)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			NullCheck(V_1);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m464_MethodInfo, V_1);
			NullCheck(V_0);
			StringBuilder_Append_m5239(V_0, L_3, /*hidden argument*/&StringBuilder_Append_m5239_MethodInfo);
			goto IL_0046;
		}

IL_0031:
		{
			NullCheck(V_0);
			StringBuilder_Append_m450(V_0, ___separator, /*hidden argument*/&StringBuilder_Append_m450_MethodInfo);
			NullCheck(V_1);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m464_MethodInfo, V_1);
			NullCheck(V_0);
			StringBuilder_Append_m5239(V_0, L_4, /*hidden argument*/&StringBuilder_Append_m5239_MethodInfo);
		}

IL_0046:
		{
			NullCheck(V_1);
			bool L_5 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m432_MethodInfo, V_1);
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			// IL_0051: leave IL_0063
			leaveInstructions[0] = 0x63; // 1
			THROW_SENTINEL(IL_0063);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0056;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t71 *)e.ex;
		goto IL_0056;
	}

IL_0056:
	{ // begin finally (depth: 1)
		{
			if (!V_2)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			NullCheck(V_2);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m425_MethodInfo, V_2);
		}

IL_0062:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x63:
					goto IL_0063;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_0063:
	{
		NullCheck(V_0);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m459_MethodInfo, V_0);
		return L_6;
	}
}
// Metadata Definition Boo.Lang.Builtins
extern Il2CppType IEnumerable_t88_0_0_0;
extern Il2CppType IEnumerable_t88_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Builtins_t1127_Builtins_join_m5192_ParameterInfos[] = 
{
	{"enumerable", 0, 134217729, &EmptyCustomAttributesCache, &IEnumerable_t88_0_0_0},
	{"separator", 1, 134217730, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
MethodInfo Builtins_join_m5192_MethodInfo = 
{
	"join"/* name */
	, (methodPointerType)&Builtins_join_m5192/* method */
	, &Builtins_t1127_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, Builtins_t1127_Builtins_join_m5192_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Builtins_t1127_MethodInfos[] =
{
	&Builtins_join_m5192_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m460_MethodInfo;
extern MethodInfo Object_Finalize_m416_MethodInfo;
extern MethodInfo Object_GetHashCode_m461_MethodInfo;
extern MethodInfo Object_ToString_m435_MethodInfo;
static MethodInfo* Builtins_t1127_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType Builtins_t1127_0_0_0;
extern Il2CppType Builtins_t1127_1_0_0;
struct Builtins_t1127;
TypeInfo Builtins_t1127_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "Builtins"/* name */
	, "Boo.Lang"/* namespaze */
	, Builtins_t1127_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Builtins_t1127_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Builtins_t1127_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Builtins_t1127_il2cpp_TypeInfo/* cast_class */
	, &Builtins_t1127_0_0_0/* byval_arg */
	, &Builtins_t1127_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Builtins_t1127)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.GenericGenerator`1
#include "Boo_Lang_Boo_Lang_GenericGenerator_1.h"
extern Il2CppGenericContainer GenericGenerator_1_t1128_Il2CppGenericContainer;
extern TypeInfo GenericGenerator_1_t1128_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull GenericGenerator_1_t1128_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &GenericGenerator_1_t1128_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* GenericGenerator_1_t1128_Il2CppGenericParametersArray[1] = 
{
	&GenericGenerator_1_t1128_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo GenericGenerator_1_t1128_il2cpp_TypeInfo;
Il2CppGenericContainer GenericGenerator_1_t1128_Il2CppGenericContainer = { { NULL, NULL }, NULL, &GenericGenerator_1_t1128_il2cpp_TypeInfo, 1, 0, GenericGenerator_1_t1128_Il2CppGenericParametersArray };
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.GenericGenerator`1::.ctor()
MethodInfo GenericGenerator_1__ctor_m5240_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &GenericGenerator_1_t1128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 2/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t21_0_0_0;
// System.Collections.IEnumerator Boo.Lang.GenericGenerator`1::System.Collections.IEnumerable.GetEnumerator()
MethodInfo GenericGenerator_1_System_Collections_IEnumerable_GetEnumerator_m5241_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, NULL/* method */
	, &GenericGenerator_1_t1128_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 3/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_1_t1150_0_0_0;
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.GenericGenerator`1::GetEnumerator()
MethodInfo GenericGenerator_1_GetEnumerator_m5242_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &GenericGenerator_1_t1128_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t1150_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 4/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
// System.String Boo.Lang.GenericGenerator`1::ToString()
MethodInfo GenericGenerator_1_ToString_m5243_MethodInfo = 
{
	"ToString"/* name */
	, NULL/* method */
	, &GenericGenerator_1_t1128_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 5/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* GenericGenerator_1_t1128_MethodInfos[] =
{
	&GenericGenerator_1__ctor_m5240_MethodInfo,
	&GenericGenerator_1_System_Collections_IEnumerable_GetEnumerator_m5241_MethodInfo,
	&GenericGenerator_1_GetEnumerator_m5242_MethodInfo,
	&GenericGenerator_1_ToString_m5243_MethodInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType GenericGenerator_1_t1128_0_0_0;
extern Il2CppType GenericGenerator_1_t1128_1_0_0;
struct GenericGenerator_1_t1128;
TypeInfo GenericGenerator_1_t1128_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericGenerator`1"/* name */
	, "Boo.Lang"/* namespaze */
	, GenericGenerator_1_t1128_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericGenerator_1_t1128_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &GenericGenerator_1_t1128_0_0_0/* byval_arg */
	, &GenericGenerator_1_t1128_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &GenericGenerator_1_t1128_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.GenericGeneratorEnumerator`1
#include "Boo_Lang_Boo_Lang_GenericGeneratorEnumerator_1.h"
extern Il2CppGenericContainer GenericGeneratorEnumerator_1_t1129_Il2CppGenericContainer;
extern TypeInfo GenericGeneratorEnumerator_1_t1129_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull GenericGeneratorEnumerator_1_t1129_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &GenericGeneratorEnumerator_1_t1129_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* GenericGeneratorEnumerator_1_t1129_Il2CppGenericParametersArray[1] = 
{
	&GenericGeneratorEnumerator_1_t1129_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo;
Il2CppGenericContainer GenericGeneratorEnumerator_1_t1129_Il2CppGenericContainer = { { NULL, NULL }, NULL, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo, 1, 0, GenericGeneratorEnumerator_1_t1129_Il2CppGenericParametersArray };
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.GenericGeneratorEnumerator`1::.ctor()
MethodInfo GenericGeneratorEnumerator_1__ctor_m5244_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 6/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
// System.Object Boo.Lang.GenericGeneratorEnumerator`1::System.Collections.IEnumerator.get_Current()
MethodInfo GenericGeneratorEnumerator_1_System_Collections_IEnumerator_get_Current_m5245_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, NULL/* method */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 7/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType GenericGeneratorEnumerator_1_t1129_gp_0_0_0_0;
// T Boo.Lang.GenericGeneratorEnumerator`1::get_Current()
MethodInfo GenericGeneratorEnumerator_1_get_Current_m5246_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* declaring_type */
	, &GenericGeneratorEnumerator_1_t1129_gp_0_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 8/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.GenericGeneratorEnumerator`1::Dispose()
MethodInfo GenericGeneratorEnumerator_1_Dispose_m5247_MethodInfo = 
{
	"Dispose"/* name */
	, NULL/* method */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 9/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1::MoveNext()
MethodInfo GenericGeneratorEnumerator_1_MoveNext_m5248_MethodInfo = 
{
	"MoveNext"/* name */
	, NULL/* method */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 10/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType GenericGeneratorEnumerator_1_t1129_gp_0_0_0_0;
extern Il2CppType GenericGeneratorEnumerator_1_t1129_gp_0_0_0_0;
static ParameterInfo GenericGeneratorEnumerator_1_t1129_GenericGeneratorEnumerator_1_Yield_m5249_ParameterInfos[] = 
{
	{"state", 0, 134217731, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217732, &EmptyCustomAttributesCache, &GenericGeneratorEnumerator_1_t1129_gp_0_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1::Yield(System.Int32,T)
MethodInfo GenericGeneratorEnumerator_1_Yield_m5249_MethodInfo = 
{
	"Yield"/* name */
	, NULL/* method */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, GenericGeneratorEnumerator_1_t1129_GenericGeneratorEnumerator_1_Yield_m5249_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 11/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo GenericGeneratorEnumerator_1_t1129_GenericGeneratorEnumerator_1_YieldDefault_m5250_ParameterInfos[] = 
{
	{"state", 0, 134217733, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1::YieldDefault(System.Int32)
MethodInfo GenericGeneratorEnumerator_1_YieldDefault_m5250_MethodInfo = 
{
	"YieldDefault"/* name */
	, NULL/* method */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, GenericGeneratorEnumerator_1_t1129_GenericGeneratorEnumerator_1_YieldDefault_m5250_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 12/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* GenericGeneratorEnumerator_1_t1129_MethodInfos[] =
{
	&GenericGeneratorEnumerator_1__ctor_m5244_MethodInfo,
	&GenericGeneratorEnumerator_1_System_Collections_IEnumerator_get_Current_m5245_MethodInfo,
	&GenericGeneratorEnumerator_1_get_Current_m5246_MethodInfo,
	&GenericGeneratorEnumerator_1_Dispose_m5247_MethodInfo,
	&GenericGeneratorEnumerator_1_MoveNext_m5248_MethodInfo,
	&GenericGeneratorEnumerator_1_Yield_m5249_MethodInfo,
	&GenericGeneratorEnumerator_1_YieldDefault_m5250_MethodInfo,
	NULL
};
extern MethodInfo GenericGeneratorEnumerator_1_System_Collections_IEnumerator_get_Current_m5245_MethodInfo;
static PropertyInfo GenericGeneratorEnumerator_1_t1129____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &GenericGeneratorEnumerator_1_System_Collections_IEnumerator_get_Current_m5245_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo GenericGeneratorEnumerator_1_get_Current_m5246_MethodInfo;
static PropertyInfo GenericGeneratorEnumerator_1_t1129____Current_PropertyInfo = 
{
	&GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &GenericGeneratorEnumerator_1_get_Current_m5246_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* GenericGeneratorEnumerator_1_t1129_PropertyInfos[] =
{
	&GenericGeneratorEnumerator_1_t1129____System_Collections_IEnumerator_Current_PropertyInfo,
	&GenericGeneratorEnumerator_1_t1129____Current_PropertyInfo,
	NULL
};
extern Il2CppType GenericGeneratorEnumerator_1_t1129_gp_0_0_0_4;
FieldInfo GenericGeneratorEnumerator_1_t1129_____current_0_FieldInfo = 
{
	"_current"/* name */
	, &GenericGeneratorEnumerator_1_t1129_gp_0_0_0_4/* type */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_6;
FieldInfo GenericGeneratorEnumerator_1_t1129_____state_1_FieldInfo = 
{
	"_state"/* name */
	, &Int32_t63_0_0_6/* type */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* GenericGeneratorEnumerator_1_t1129_FieldInfos[] =
{
	&GenericGeneratorEnumerator_1_t1129_____current_0_FieldInfo,
	&GenericGeneratorEnumerator_1_t1129_____state_1_FieldInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType GenericGeneratorEnumerator_1_t1129_0_0_0;
extern Il2CppType GenericGeneratorEnumerator_1_t1129_1_0_0;
struct GenericGeneratorEnumerator_1_t1129;
TypeInfo GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericGeneratorEnumerator`1"/* name */
	, "Boo.Lang"/* namespaze */
	, GenericGeneratorEnumerator_1_t1129_MethodInfos/* methods */
	, GenericGeneratorEnumerator_1_t1129_PropertyInfos/* properties */
	, GenericGeneratorEnumerator_1_t1129_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericGeneratorEnumerator_1_t1129_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &GenericGeneratorEnumerator_1_t1129_0_0_0/* byval_arg */
	, &GenericGeneratorEnumerator_1_t1129_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &GenericGeneratorEnumerator_1_t1129_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.List`1/<GetEnumerator>c__Iterator6
#include "Boo_Lang_Boo_Lang_List_1_U3CGetEnumeratorU3Ec__Iterator6.h"
extern Il2CppGenericContainer U3CGetEnumeratorU3Ec__Iterator6_t1130_Il2CppGenericContainer;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t1130_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull U3CGetEnumeratorU3Ec__Iterator6_t1130_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &U3CGetEnumeratorU3Ec__Iterator6_t1130_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* U3CGetEnumeratorU3Ec__Iterator6_t1130_Il2CppGenericParametersArray[1] = 
{
	&U3CGetEnumeratorU3Ec__Iterator6_t1130_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo;
Il2CppGenericContainer U3CGetEnumeratorU3Ec__Iterator6_t1130_Il2CppGenericContainer = { { NULL, NULL }, NULL, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo, 1, 0, U3CGetEnumeratorU3Ec__Iterator6_t1130_Il2CppGenericParametersArray };
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1/<GetEnumerator>c__Iterator6::.ctor()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6__ctor_m5251_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 58/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t1130_gp_0_0_0_0;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252;
// T Boo.Lang.List`1/<GetEnumerator>c__Iterator6::System.Collections.Generic.IEnumerator<T>.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<T>.get_Current"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* declaring_type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_gp_0_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 59/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253;
// System.Object Boo.Lang.List`1/<GetEnumerator>c__Iterator6::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 60/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1/<GetEnumerator>c__Iterator6::MoveNext()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_MoveNext_m5254_MethodInfo = 
{
	"MoveNext"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 61/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t62_0_0_0;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m5255;
// System.Void Boo.Lang.List`1/<GetEnumerator>c__Iterator6::Dispose()
MethodInfo U3CGetEnumeratorU3Ec__Iterator6_Dispose_m5255_MethodInfo = 
{
	"Dispose"/* name */
	, NULL/* method */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m5255/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 62/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator6_t1130_MethodInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator6__ctor_m5251_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_MoveNext_m5254_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_Dispose_m5255_MethodInfo,
	NULL
};
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252_MethodInfo;
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<T>.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253_MethodInfo;
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetEnumeratorU3Ec__Iterator6_t1130_PropertyInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CoriginalCountU3E__0_0_FieldInfo = 
{
	"<originalCount>__0"/* name */
	, &Int32_t63_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TU5BU5D_t1153_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CoriginalItemsU3E__1_1_FieldInfo = 
{
	"<originalItems>__1"/* name */
	, &TU5BU5D_t1153_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CiU3E__2_2_FieldInfo = 
{
	"<i>__2"/* name */
	, &Int32_t63_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____$PC_3_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t63_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t1130_gp_0_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____$current_4_FieldInfo = 
{
	"$current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_gp_0_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t1154_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CU3Ef__this_5_FieldInfo = 
{
	"<>f__this"/* name */
	, &List_1_t1154_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetEnumeratorU3Ec__Iterator6_t1130_FieldInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CoriginalCountU3E__0_0_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CoriginalItemsU3E__1_1_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CiU3E__2_2_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____$PC_3_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____$current_4_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator6_t1130____U3CU3Ef__this_5_FieldInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t1130_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator6_t1130_1_0_0;
struct U3CGetEnumeratorU3Ec__Iterator6_t1130;
extern TypeInfo List_1_t1131_il2cpp_TypeInfo;
TypeInfo U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetEnumerator>c__Iterator6"/* name */
	, ""/* namespaze */
	, U3CGetEnumeratorU3Ec__Iterator6_t1130_MethodInfos/* methods */
	, U3CGetEnumeratorU3Ec__Iterator6_t1130_PropertyInfos/* properties */
	, U3CGetEnumeratorU3Ec__Iterator6_t1130_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, &List_1_t1131_il2cpp_TypeInfo/* nested_in */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_0_0_0/* byval_arg */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &U3CGetEnumeratorU3Ec__Iterator6_t1130_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
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
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern TypeInfo CompilerGeneratedAttribute_t89_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m492_MethodInfo;
void U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t89 * tmp;
		tmp = (CompilerGeneratedAttribute_t89 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t89_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m492(tmp, &CompilerGeneratedAttribute__ctor_m492_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo DebuggerHiddenAttribute_t90_il2cpp_TypeInfo;
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern MethodInfo DebuggerHiddenAttribute__ctor_m493_MethodInfo;
void U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m5255(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252 = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m5252
};
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253 = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_System_Collections_IEnumerator_get_Current_m5253
};
CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator6_t1130__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m5255 = {
1,
NULL,
&U3CGetEnumeratorU3Ec__Iterator6_t1130_CustomAttributesCacheGenerator_U3CGetEnumeratorU3Ec__Iterator6_Dispose_m5255
};
// Boo.Lang.List`1
#include "Boo_Lang_Boo_Lang_List_1.h"
extern Il2CppGenericContainer List_1_t1131_Il2CppGenericContainer;
extern TypeInfo List_1_t1131_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull List_1_t1131_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &List_1_t1131_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* List_1_t1131_Il2CppGenericParametersArray[1] = 
{
	&List_1_t1131_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
Il2CppGenericContainer List_1_t1131_Il2CppGenericContainer = { { NULL, NULL }, NULL, &List_1_t1131_il2cpp_TypeInfo, 1, 0, List_1_t1131_Il2CppGenericParametersArray };
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::.ctor()
MethodInfo List_1__ctor_m5256_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 13/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::.cctor()
MethodInfo List_1__cctor_m5257_MethodInfo = 
{
	".cctor"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 14/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5258_ParameterInfos[] = 
{
	{"item", 0, 134217734, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.Generic.ICollection<T>.Add(T)
MethodInfo List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5258_MethodInfo = 
{
	"System.Collections.Generic.ICollection<T>.Add"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5258_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 15/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t21_0_0_0;
// System.Collections.IEnumerator Boo.Lang.List`1::System.Collections.IEnumerable.GetEnumerator()
MethodInfo List_1_System_Collections_IEnumerable_GetEnumerator_m5259_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t21_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 16/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_Generic_IListU3CTU3E_Insert_m5260_ParameterInfos[] = 
{
	{"index", 0, 134217735, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217736, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
MethodInfo List_1_System_Collections_Generic_IListU3CTU3E_Insert_m5260_MethodInfo = 
{
	"System.Collections.Generic.IList<T>.Insert"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_Generic_IListU3CTU3E_Insert_m5260_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 17/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m5261_ParameterInfos[] = 
{
	{"index", 0, 134217737, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
MethodInfo List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m5261_MethodInfo = 
{
	"System.Collections.Generic.IList<T>.RemoveAt"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m5261_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 18/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m5262_ParameterInfos[] = 
{
	{"item", 0, 134217738, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::System.Collections.Generic.ICollection<T>.Remove(T)
MethodInfo List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m5262_MethodInfo = 
{
	"System.Collections.Generic.ICollection<T>.Remove"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m5262_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 19/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_Add_m5263_ParameterInfos[] = 
{
	{"value", 0, 134217739, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
// System.Int32 Boo.Lang.List`1::System.Collections.IList.Add(System.Object)
MethodInfo List_1_System_Collections_IList_Add_m5263_MethodInfo = 
{
	"System.Collections.IList.Add"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_Add_m5263_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 20/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_Insert_m5264_ParameterInfos[] = 
{
	{"index", 0, 134217740, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217741, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.Insert(System.Int32,System.Object)
MethodInfo List_1_System_Collections_IList_Insert_m5264_MethodInfo = 
{
	"System.Collections.IList.Insert"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_Insert_m5264_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 31/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 21/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_Remove_m5265_ParameterInfos[] = 
{
	{"value", 0, 134217742, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.Remove(System.Object)
MethodInfo List_1_System_Collections_IList_Remove_m5265_MethodInfo = 
{
	"System.Collections.IList.Remove"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_Remove_m5265_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 32/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 22/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_IndexOf_m5266_ParameterInfos[] = 
{
	{"value", 0, 134217743, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
// System.Int32 Boo.Lang.List`1::System.Collections.IList.IndexOf(System.Object)
MethodInfo List_1_System_Collections_IList_IndexOf_m5266_MethodInfo = 
{
	"System.Collections.IList.IndexOf"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_IndexOf_m5266_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 30/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 23/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_Contains_m5267_ParameterInfos[] = 
{
	{"value", 0, 134217744, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::System.Collections.IList.Contains(System.Object)
MethodInfo List_1_System_Collections_IList_Contains_m5267_MethodInfo = 
{
	"System.Collections.IList.Contains"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_Contains_m5267_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 24/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_get_Item_m5268_ParameterInfos[] = 
{
	{"index", 0, 134217745, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
// System.Object Boo.Lang.List`1::System.Collections.IList.get_Item(System.Int32)
MethodInfo List_1_System_Collections_IList_get_Item_m5268_MethodInfo = 
{
	"System.Collections.IList.get_Item"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_get_Item_m5268_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 25/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_set_Item_m5269_ParameterInfos[] = 
{
	{"index", 0, 134217746, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217747, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.set_Item(System.Int32,System.Object)
MethodInfo List_1_System_Collections_IList_set_Item_m5269_MethodInfo = 
{
	"System.Collections.IList.set_Item"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_set_Item_m5269_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 26/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_IList_RemoveAt_m5270_ParameterInfos[] = 
{
	{"index", 0, 134217748, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.IList.RemoveAt(System.Int32)
MethodInfo List_1_System_Collections_IList_RemoveAt_m5270_MethodInfo = 
{
	"System.Collections.IList.RemoveAt"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_IList_RemoveAt_m5270_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 33/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 27/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::System.Collections.IList.get_IsFixedSize()
MethodInfo List_1_System_Collections_IList_get_IsFixedSize_m5271_MethodInfo = 
{
	"System.Collections.IList.get_IsFixedSize"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 28/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_System_Collections_ICollection_CopyTo_m5272_ParameterInfos[] = 
{
	{"array", 0, 134217749, &EmptyCustomAttributesCache, &Array_t_0_0_0},
	{"index", 1, 134217750, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
MethodInfo List_1_System_Collections_ICollection_CopyTo_m5272_MethodInfo = 
{
	"System.Collections.ICollection.CopyTo"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_System_Collections_ICollection_CopyTo_m5272_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 29/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
// System.Int32 Boo.Lang.List`1::get_Count()
MethodInfo List_1_get_Count_m5273_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 30/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_1_t1156_0_0_0;
extern CustomAttributesCache List_1_t1131__CustomAttributeCache_List_1_GetEnumerator_m5274;
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1::GetEnumerator()
MethodInfo List_1_GetEnumerator_m5274_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t1156_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &List_1_t1131__CustomAttributeCache_List_1_GetEnumerator_m5274/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 31/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TU5BU5D_t1157_0_0_0;
extern Il2CppType TU5BU5D_t1157_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_CopyTo_m5275_ParameterInfos[] = 
{
	{"target", 0, 134217751, &EmptyCustomAttributesCache, &TU5BU5D_t1157_0_0_0},
	{"index", 1, 134217752, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::CopyTo(T[],System.Int32)
MethodInfo List_1_CopyTo_m5275_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_CopyTo_m5275_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 32/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::get_IsSynchronized()
MethodInfo List_1_get_IsSynchronized_m5276_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 33/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
// System.Object Boo.Lang.List`1::get_SyncRoot()
MethodInfo List_1_get_SyncRoot_m5277_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 34/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::get_IsReadOnly()
MethodInfo List_1_get_IsReadOnly_m5278_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 35/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_get_Item_m5279_ParameterInfos[] = 
{
	{"index", 0, 134217753, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
// T Boo.Lang.List`1::get_Item(System.Int32)
MethodInfo List_1_get_Item_m5279_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t1131_gp_0_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_get_Item_m5279_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 36/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_set_Item_m5280_ParameterInfos[] = 
{
	{"index", 0, 134217754, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217755, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::set_Item(System.Int32,T)
MethodInfo List_1_set_Item_m5280_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_set_Item_m5280_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 37/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_Push_m5281_ParameterInfos[] = 
{
	{"item", 0, 134217756, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType List_1_t1158_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Push(T)
MethodInfo List_1_Push_m5281_MethodInfo = 
{
	"Push"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t1158_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Push_m5281_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 38/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_Add_m5282_ParameterInfos[] = 
{
	{"item", 0, 134217757, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType List_1_t1158_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Add(T)
MethodInfo List_1_Add_m5282_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t1158_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Add_m5282_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 34/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 39/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
// System.String Boo.Lang.List`1::ToString()
MethodInfo List_1_ToString_m5283_MethodInfo = 
{
	"ToString"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 40/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_Join_m5284_ParameterInfos[] = 
{
	{"separator", 0, 134217758, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
// System.String Boo.Lang.List`1::Join(System.String)
MethodInfo List_1_Join_m5284_MethodInfo = 
{
	"Join"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Join_m5284_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 41/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
// System.Int32 Boo.Lang.List`1::GetHashCode()
MethodInfo List_1_GetHashCode_m5285_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 42/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_Equals_m5286_ParameterInfos[] = 
{
	{"other", 0, 134217759, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::Equals(System.Object)
MethodInfo List_1_Equals_m5286_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Equals_m5286_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 43/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1158_0_0_0;
extern Il2CppType List_1_t1158_0_0_0;
static ParameterInfo List_1_t1131_List_1_Equals_m5287_ParameterInfos[] = 
{
	{"other", 0, 134217760, &EmptyCustomAttributesCache, &List_1_t1158_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::Equals(Boo.Lang.List`1<T>)
MethodInfo List_1_Equals_m5287_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Equals_m5287_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 44/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::Clear()
MethodInfo List_1_Clear_m5288_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 45/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_Contains_m5289_ParameterInfos[] = 
{
	{"item", 0, 134217761, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::Contains(T)
MethodInfo List_1_Contains_m5289_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Contains_m5289_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 46/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_IndexOf_m5290_ParameterInfos[] = 
{
	{"item", 0, 134217762, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
// System.Int32 Boo.Lang.List`1::IndexOf(T)
MethodInfo List_1_IndexOf_m5290_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_IndexOf_m5290_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 47/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_Insert_m5291_ParameterInfos[] = 
{
	{"index", 0, 134217763, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217764, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType List_1_t1158_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Insert(System.Int32,T)
MethodInfo List_1_Insert_m5291_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t1158_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Insert_m5291_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 48/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_Remove_m5292_ParameterInfos[] = 
{
	{"item", 0, 134217765, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType List_1_t1158_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::Remove(T)
MethodInfo List_1_Remove_m5292_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t1158_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Remove_m5292_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 49/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_RemoveAt_m5293_ParameterInfos[] = 
{
	{"index", 0, 134217766, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType List_1_t1158_0_0_0;
// Boo.Lang.List`1<T> Boo.Lang.List`1::RemoveAt(System.Int32)
MethodInfo List_1_RemoveAt_m5293_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t1158_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_RemoveAt_m5293_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 50/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_EnsureCapacity_m5294_ParameterInfos[] = 
{
	{"minCapacity", 0, 134217767, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::EnsureCapacity(System.Int32)
MethodInfo List_1_EnsureCapacity_m5294_MethodInfo = 
{
	"EnsureCapacity"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_EnsureCapacity_m5294_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 51/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_NewArray_m5295_ParameterInfos[] = 
{
	{"minCapacity", 0, 134217768, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType TU5BU5D_t1157_0_0_0;
// T[] Boo.Lang.List`1::NewArray(System.Int32)
MethodInfo List_1_NewArray_m5295_MethodInfo = 
{
	"NewArray"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &TU5BU5D_t1157_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_NewArray_m5295_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 52/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_InnerRemoveAt_m5296_ParameterInfos[] = 
{
	{"index", 0, 134217769, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
// System.Void Boo.Lang.List`1::InnerRemoveAt(System.Int32)
MethodInfo List_1_InnerRemoveAt_m5296_MethodInfo = 
{
	"InnerRemoveAt"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_InnerRemoveAt_m5296_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 53/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
static ParameterInfo List_1_t1131_List_1_InnerRemove_m5297_ParameterInfos[] = 
{
	{"item", 0, 134217770, &EmptyCustomAttributesCache, &List_1_t1131_gp_0_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
// System.Boolean Boo.Lang.List`1::InnerRemove(T)
MethodInfo List_1_InnerRemove_m5297_MethodInfo = 
{
	"InnerRemove"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_InnerRemove_m5297_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 54/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_CheckIndex_m5298_ParameterInfos[] = 
{
	{"index", 0, 134217771, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
// System.Int32 Boo.Lang.List`1::CheckIndex(System.Int32)
MethodInfo List_1_CheckIndex_m5298_MethodInfo = 
{
	"CheckIndex"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_CheckIndex_m5298_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 55/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo List_1_t1131_List_1_NormalizeIndex_m5299_ParameterInfos[] = 
{
	{"index", 0, 134217772, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
// System.Int32 Boo.Lang.List`1::NormalizeIndex(System.Int32)
MethodInfo List_1_NormalizeIndex_m5299_MethodInfo = 
{
	"NormalizeIndex"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_NormalizeIndex_m5299_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 56/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo List_1_t1131_List_1_Coerce_m5300_ParameterInfos[] = 
{
	{"value", 0, 134217773, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType List_1_t1131_gp_0_0_0_0;
// T Boo.Lang.List`1::Coerce(System.Object)
MethodInfo List_1_Coerce_m5300_MethodInfo = 
{
	"Coerce"/* name */
	, NULL/* method */
	, &List_1_t1131_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t1131_gp_0_0_0_0/* return_type */
	, NULL/* invoker_method */
	, List_1_t1131_List_1_Coerce_m5300_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 57/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* List_1_t1131_MethodInfos[] =
{
	&List_1__ctor_m5256_MethodInfo,
	&List_1__cctor_m5257_MethodInfo,
	&List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5258_MethodInfo,
	&List_1_System_Collections_IEnumerable_GetEnumerator_m5259_MethodInfo,
	&List_1_System_Collections_Generic_IListU3CTU3E_Insert_m5260_MethodInfo,
	&List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m5261_MethodInfo,
	&List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m5262_MethodInfo,
	&List_1_System_Collections_IList_Add_m5263_MethodInfo,
	&List_1_System_Collections_IList_Insert_m5264_MethodInfo,
	&List_1_System_Collections_IList_Remove_m5265_MethodInfo,
	&List_1_System_Collections_IList_IndexOf_m5266_MethodInfo,
	&List_1_System_Collections_IList_Contains_m5267_MethodInfo,
	&List_1_System_Collections_IList_get_Item_m5268_MethodInfo,
	&List_1_System_Collections_IList_set_Item_m5269_MethodInfo,
	&List_1_System_Collections_IList_RemoveAt_m5270_MethodInfo,
	&List_1_System_Collections_IList_get_IsFixedSize_m5271_MethodInfo,
	&List_1_System_Collections_ICollection_CopyTo_m5272_MethodInfo,
	&List_1_get_Count_m5273_MethodInfo,
	&List_1_GetEnumerator_m5274_MethodInfo,
	&List_1_CopyTo_m5275_MethodInfo,
	&List_1_get_IsSynchronized_m5276_MethodInfo,
	&List_1_get_SyncRoot_m5277_MethodInfo,
	&List_1_get_IsReadOnly_m5278_MethodInfo,
	&List_1_get_Item_m5279_MethodInfo,
	&List_1_set_Item_m5280_MethodInfo,
	&List_1_Push_m5281_MethodInfo,
	&List_1_Add_m5282_MethodInfo,
	&List_1_ToString_m5283_MethodInfo,
	&List_1_Join_m5284_MethodInfo,
	&List_1_GetHashCode_m5285_MethodInfo,
	&List_1_Equals_m5286_MethodInfo,
	&List_1_Equals_m5287_MethodInfo,
	&List_1_Clear_m5288_MethodInfo,
	&List_1_Contains_m5289_MethodInfo,
	&List_1_IndexOf_m5290_MethodInfo,
	&List_1_Insert_m5291_MethodInfo,
	&List_1_Remove_m5292_MethodInfo,
	&List_1_RemoveAt_m5293_MethodInfo,
	&List_1_EnsureCapacity_m5294_MethodInfo,
	&List_1_NewArray_m5295_MethodInfo,
	&List_1_InnerRemoveAt_m5296_MethodInfo,
	&List_1_InnerRemove_m5297_MethodInfo,
	&List_1_CheckIndex_m5298_MethodInfo,
	&List_1_NormalizeIndex_m5299_MethodInfo,
	&List_1_Coerce_m5300_MethodInfo,
	NULL
};
extern MethodInfo List_1_System_Collections_IList_get_Item_m5268_MethodInfo;
extern MethodInfo List_1_System_Collections_IList_set_Item_m5269_MethodInfo;
static PropertyInfo List_1_t1131____System_Collections_IList_Item_PropertyInfo = 
{
	&List_1_t1131_il2cpp_TypeInfo/* parent */
	, "System.Collections.IList.Item"/* name */
	, &List_1_System_Collections_IList_get_Item_m5268_MethodInfo/* get */
	, &List_1_System_Collections_IList_set_Item_m5269_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_System_Collections_IList_get_IsFixedSize_m5271_MethodInfo;
static PropertyInfo List_1_t1131____System_Collections_IList_IsFixedSize_PropertyInfo = 
{
	&List_1_t1131_il2cpp_TypeInfo/* parent */
	, "System.Collections.IList.IsFixedSize"/* name */
	, &List_1_System_Collections_IList_get_IsFixedSize_m5271_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_Count_m5273_MethodInfo;
static PropertyInfo List_1_t1131____Count_PropertyInfo = 
{
	&List_1_t1131_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &List_1_get_Count_m5273_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_IsSynchronized_m5276_MethodInfo;
static PropertyInfo List_1_t1131____IsSynchronized_PropertyInfo = 
{
	&List_1_t1131_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &List_1_get_IsSynchronized_m5276_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_SyncRoot_m5277_MethodInfo;
static PropertyInfo List_1_t1131____SyncRoot_PropertyInfo = 
{
	&List_1_t1131_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &List_1_get_SyncRoot_m5277_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_IsReadOnly_m5278_MethodInfo;
static PropertyInfo List_1_t1131____IsReadOnly_PropertyInfo = 
{
	&List_1_t1131_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &List_1_get_IsReadOnly_m5278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo List_1_get_Item_m5279_MethodInfo;
extern MethodInfo List_1_set_Item_m5280_MethodInfo;
static PropertyInfo List_1_t1131____Item_PropertyInfo = 
{
	&List_1_t1131_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &List_1_get_Item_m5279_MethodInfo/* get */
	, &List_1_set_Item_m5280_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* List_1_t1131_PropertyInfos[] =
{
	&List_1_t1131____System_Collections_IList_Item_PropertyInfo,
	&List_1_t1131____System_Collections_IList_IsFixedSize_PropertyInfo,
	&List_1_t1131____Count_PropertyInfo,
	&List_1_t1131____IsSynchronized_PropertyInfo,
	&List_1_t1131____SyncRoot_PropertyInfo,
	&List_1_t1131____IsReadOnly_PropertyInfo,
	&List_1_t1131____Item_PropertyInfo,
	NULL
};
extern Il2CppType TU5BU5D_t1157_0_0_49;
FieldInfo List_1_t1131____EmptyArray_0_FieldInfo = 
{
	"EmptyArray"/* name */
	, &TU5BU5D_t1157_0_0_49/* type */
	, &List_1_t1131_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TU5BU5D_t1157_0_0_4;
FieldInfo List_1_t1131_____items_1_FieldInfo = 
{
	"_items"/* name */
	, &TU5BU5D_t1157_0_0_4/* type */
	, &List_1_t1131_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_4;
FieldInfo List_1_t1131_____count_2_FieldInfo = 
{
	"_count"/* name */
	, &Int32_t63_0_0_4/* type */
	, &List_1_t1131_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* List_1_t1131_FieldInfos[] =
{
	&List_1_t1131____EmptyArray_0_FieldInfo,
	&List_1_t1131_____items_1_FieldInfo,
	&List_1_t1131_____count_2_FieldInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType List_1_t1131_0_0_0;
extern Il2CppType List_1_t1131_1_0_0;
struct List_1_t1131;
TypeInfo List_1_t1131_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "List`1"/* name */
	, "Boo.Lang"/* namespaze */
	, List_1_t1131_MethodInfos/* methods */
	, List_1_t1131_PropertyInfos/* properties */
	, List_1_t1131_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &List_1_t1131_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &List_1_t1131_0_0_0/* byval_arg */
	, &List_1_t1131_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &List_1_t1131_Il2CppGenericContainer/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, NULL/* pinvoke_delegate_wrapper */
	, NULL/* marshal_to_native_func */
	, NULL/* marshal_from_native_func */
	, NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
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
	, 45/* method_count */
	, 7/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
extern TypeInfo DefaultMemberAttribute_t102_il2cpp_TypeInfo;
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern MethodInfo DefaultMemberAttribute__ctor_m537_MethodInfo;
void List_1_t1131_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t102 * tmp;
		tmp = (DefaultMemberAttribute_t102 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t102_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m537(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m537_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void List_1_t1131_CustomAttributesCacheGenerator_List_1_GetEnumerator_m5274(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache List_1_t1131__CustomAttributeCache = {
1,
NULL,
&List_1_t1131_CustomAttributesCacheGenerator
};
CustomAttributesCache List_1_t1131__CustomAttributeCache_List_1_GetEnumerator_m5274 = {
1,
NULL,
&List_1_t1131_CustomAttributesCacheGenerator_List_1_GetEnumerator_m5274
};
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DispatcherFactory_t1133_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCacheMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern MethodInfo DispatcherFactory__ctor_m5193_MethodInfo;
 void DispatcherFactory__ctor_m5193 (DispatcherFactory_t1133 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern MethodInfo DispatcherFactory_Invoke_m5194_MethodInfo;
 Dispatcher_t1132 * DispatcherFactory_Invoke_m5194 (DispatcherFactory_t1133 * __this, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		DispatcherFactory_Invoke_m5194((DispatcherFactory_t1133 *)__this->___prev_9, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Dispatcher_t1132 * (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Dispatcher_t1132 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
Dispatcher_t1132 * pinvoke_delegate_wrapper_DispatcherFactory_t1133(Il2CppObject* delegate)
{
	typedef methodPointerType (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation and marshaling of return value back from native representation
	methodPointerType _return_value = _il2cpp_pinvoke_func();
	Dispatcher_t1132 * __return_value_unmarshaled = { 0 };
	extern TypeInfo Dispatcher_t1132_il2cpp_TypeInfo;
	__return_value_unmarshaled = il2cpp_codegen_marshal_function_ptr_to_delegate<Dispatcher_t1132>(_return_value, &Dispatcher_t1132_il2cpp_TypeInfo);

	return __return_value_unmarshaled;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DispatcherFactory_BeginInvoke_m5195_MethodInfo;
 Object_t * DispatcherFactory_BeginInvoke_m5195 (DispatcherFactory_t1133 * __this, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern MethodInfo DispatcherFactory_EndInvoke_m5196_MethodInfo;
 Dispatcher_t1132 * DispatcherFactory_EndInvoke_m5196 (DispatcherFactory_t1133 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Dispatcher_t1132 *)__result;
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t107_0_0_0;
extern Il2CppType IntPtr_t107_0_0_0;
static ParameterInfo DispatcherFactory_t1133_DispatcherFactory__ctor_m5193_ParameterInfos[] = 
{
	{"object", 0, 134217776, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217777, &EmptyCustomAttributesCache, &IntPtr_t107_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_IntPtr_t107 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
MethodInfo DispatcherFactory__ctor_m5193_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DispatcherFactory__ctor_m5193/* method */
	, &DispatcherFactory_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_IntPtr_t107/* invoker_method */
	, DispatcherFactory_t1133_DispatcherFactory__ctor_m5193_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 66/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
MethodInfo DispatcherFactory_Invoke_m5194_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&DispatcherFactory_Invoke_m5194/* method */
	, &DispatcherFactory_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 67/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType AsyncCallback_t473_0_0_0;
extern Il2CppType AsyncCallback_t473_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo DispatcherFactory_t1133_DispatcherFactory_BeginInvoke_m5195_ParameterInfos[] = 
{
	{"callback", 0, 134217778, &EmptyCustomAttributesCache, &AsyncCallback_t473_0_0_0},
	{"object", 1, 134217779, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t472_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
MethodInfo DispatcherFactory_BeginInvoke_m5195_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&DispatcherFactory_BeginInvoke_m5195/* method */
	, &DispatcherFactory_t1133_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t472_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, DispatcherFactory_t1133_DispatcherFactory_BeginInvoke_m5195_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 68/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t472_0_0_0;
extern Il2CppType IAsyncResult_t472_0_0_0;
static ParameterInfo DispatcherFactory_t1133_DispatcherFactory_EndInvoke_m5196_ParameterInfos[] = 
{
	{"result", 0, 134217780, &EmptyCustomAttributesCache, &IAsyncResult_t472_0_0_0},
};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
MethodInfo DispatcherFactory_EndInvoke_m5196_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&DispatcherFactory_EndInvoke_m5196/* method */
	, &DispatcherFactory_t1133_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, DispatcherFactory_t1133_DispatcherFactory_EndInvoke_m5196_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 69/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DispatcherFactory_t1133_MethodInfos[] =
{
	&DispatcherFactory__ctor_m5193_MethodInfo,
	&DispatcherFactory_Invoke_m5194_MethodInfo,
	&DispatcherFactory_BeginInvoke_m5195_MethodInfo,
	&DispatcherFactory_EndInvoke_m5196_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m3541_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m3542_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m3543_MethodInfo;
extern MethodInfo Delegate_Clone_m3544_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m3545_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m3546_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m3547_MethodInfo;
static MethodInfo* DispatcherFactory_t1133_VTable[] =
{
	&MulticastDelegate_Equals_m3541_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&MulticastDelegate_GetHashCode_m3542_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&MulticastDelegate_GetObjectData_m3543_MethodInfo,
	&Delegate_Clone_m3544_MethodInfo,
	&MulticastDelegate_GetObjectData_m3543_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3545_MethodInfo,
	&MulticastDelegate_CombineImpl_m3546_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3547_MethodInfo,
	&DispatcherFactory_Invoke_m5194_MethodInfo,
	&DispatcherFactory_BeginInvoke_m5195_MethodInfo,
	&DispatcherFactory_EndInvoke_m5196_MethodInfo,
};
extern TypeInfo ICloneable_t742_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t292_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DispatcherFactory_t1133_InterfacesOffsets[] = 
{
	{ &ICloneable_t742_il2cpp_TypeInfo, 4},
	{ &ISerializable_t292_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType DispatcherFactory_t1133_0_0_0;
extern Il2CppType DispatcherFactory_t1133_1_0_0;
extern TypeInfo MulticastDelegate_t594_il2cpp_TypeInfo;
struct DispatcherFactory_t1133;
extern TypeInfo DispatcherCache_t1135_il2cpp_TypeInfo;
TypeInfo DispatcherFactory_t1133_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "DispatcherFactory"/* name */
	, ""/* namespaze */
	, DispatcherFactory_t1133_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t594_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &DispatcherCache_t1135_il2cpp_TypeInfo/* nested_in */
	, &DispatcherFactory_t1133_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DispatcherFactory_t1133_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DispatcherFactory_t1133_il2cpp_TypeInfo/* cast_class */
	, &DispatcherFactory_t1133_0_0_0/* byval_arg */
	, &DispatcherFactory_t1133_1_0_0/* this_arg */
	, DispatcherFactory_t1133_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_DispatcherFactory_t1133/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DispatcherFactory_t1133)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0.h"
#ifndef _MSC_VER
#else
#endif
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherCache_0MethodDeclarations.h"

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13.h"
extern TypeInfo DispatcherKey_t1136_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t1134_il2cpp_TypeInfo;
extern TypeInfo Dispatcher_t1132_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKeyMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_13MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern MethodInfo Object__ctor_m448_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m5301_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m5302_MethodInfo;
extern MethodInfo Monitor_Enter_m5303_MethodInfo;
extern MethodInfo Dictionary_2_Add_m5304_MethodInfo;
extern MethodInfo Monitor_Exit_m5305_MethodInfo;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern MethodInfo DispatcherCache__ctor_m5197_MethodInfo;
 void DispatcherCache__ctor_m5197 (DispatcherCache_t1135 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern MethodInfo DispatcherCache__cctor_m5198_MethodInfo;
 void DispatcherCache__cctor_m5198 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t1136_il2cpp_TypeInfo));
		Dictionary_2_t1134 * L_0 = (Dictionary_2_t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dictionary_2_t1134_il2cpp_TypeInfo));
		Dictionary_2__ctor_m5301(L_0, (((DispatcherKey_t1136_StaticFields*)InitializedTypeInfo(&DispatcherKey_t1136_il2cpp_TypeInfo)->static_fields)->___EqualityComparer_0), /*hidden argument*/&Dictionary_2__ctor_m5301_MethodInfo);
		((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0 = L_0;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern MethodInfo DispatcherCache_Get_m5199_MethodInfo;
 Dispatcher_t1132 * DispatcherCache_Get_m5199 (DispatcherCache_t1135 * __this, DispatcherKey_t1136 * ___key, DispatcherFactory_t1133 * ___factory, MethodInfo* method){
	Dispatcher_t1132 * V_0 = {0};
	Dictionary_2_t1134 * V_1 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t71 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t71 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo));
		NullCheck((((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0));
		bool L_0 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t1136 *, Dispatcher_t1132 ** >::Invoke(&Dictionary_2_TryGetValue_m5302_MethodInfo, (((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0), ___key, (&V_0));
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo));
		V_1 = (((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0);
		Monitor_Enter_m5303(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Enter_m5303_MethodInfo);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo));
			NullCheck((((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0));
			bool L_1 = (bool)VirtFuncInvoker2< bool, DispatcherKey_t1136 *, Dispatcher_t1132 ** >::Invoke(&Dictionary_2_TryGetValue_m5302_MethodInfo, (((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0), ___key, (&V_0));
			if (L_1)
			{
				goto IL_0043;
			}
		}

IL_0030:
		{
			NullCheck(___factory);
			Dispatcher_t1132 * L_2 = (Dispatcher_t1132 *)VirtFuncInvoker0< Dispatcher_t1132 * >::Invoke(&DispatcherFactory_Invoke_m5194_MethodInfo, ___factory);
			V_0 = L_2;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo));
			NullCheck((((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0));
			VirtActionInvoker2< DispatcherKey_t1136 *, Dispatcher_t1132 * >::Invoke(&Dictionary_2_Add_m5304_MethodInfo, (((DispatcherCache_t1135_StaticFields*)InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo)->static_fields)->____cache_0), ___key, V_0);
		}

IL_0043:
		{
			// IL_0043: leave IL_004f
			leaveInstructions[0] = 0x4F; // 1
			THROW_SENTINEL(IL_004f);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0048;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t71 *)e.ex;
		goto IL_0048;
	}

IL_0048:
	{ // begin finally (depth: 1)
		Monitor_Exit_m5305(NULL /*static, unused*/, V_1, /*hidden argument*/&Monitor_Exit_m5305_MethodInfo);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x4F:
				goto IL_004f;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_004f:
	{
		return V_0;
	}
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
extern Il2CppType Dictionary_2_t1134_0_0_17;
FieldInfo DispatcherCache_t1135_____cache_0_FieldInfo = 
{
	"_cache"/* name */
	, &Dictionary_2_t1134_0_0_17/* type */
	, &DispatcherCache_t1135_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherCache_t1135_StaticFields, ____cache_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DispatcherCache_t1135_FieldInfos[] =
{
	&DispatcherCache_t1135_____cache_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
MethodInfo DispatcherCache__ctor_m5197_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DispatcherCache__ctor_m5197/* method */
	, &DispatcherCache_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 63/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
MethodInfo DispatcherCache__cctor_m5198_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&DispatcherCache__cctor_m5198/* method */
	, &DispatcherCache_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 64/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType DispatcherKey_t1136_0_0_0;
extern Il2CppType DispatcherKey_t1136_0_0_0;
extern Il2CppType DispatcherFactory_t1133_0_0_0;
static ParameterInfo DispatcherCache_t1135_DispatcherCache_Get_m5199_ParameterInfos[] = 
{
	{"key", 0, 134217774, &EmptyCustomAttributesCache, &DispatcherKey_t1136_0_0_0},
	{"factory", 1, 134217775, &EmptyCustomAttributesCache, &DispatcherFactory_t1133_0_0_0},
};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
MethodInfo DispatcherCache_Get_m5199_MethodInfo = 
{
	"Get"/* name */
	, (methodPointerType)&DispatcherCache_Get_m5199/* method */
	, &DispatcherCache_t1135_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, DispatcherCache_t1135_DispatcherCache_Get_m5199_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 65/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DispatcherCache_t1135_MethodInfos[] =
{
	&DispatcherCache__ctor_m5197_MethodInfo,
	&DispatcherCache__cctor_m5198_MethodInfo,
	&DispatcherCache_Get_m5199_MethodInfo,
	NULL
};
extern TypeInfo DispatcherFactory_t1133_il2cpp_TypeInfo;
static TypeInfo* DispatcherCache_t1135_il2cpp_TypeInfo__nestedTypes[2] =
{
	&DispatcherFactory_t1133_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* DispatcherCache_t1135_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType DispatcherCache_t1135_0_0_0;
extern Il2CppType DispatcherCache_t1135_1_0_0;
struct DispatcherCache_t1135;
TypeInfo DispatcherCache_t1135_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "DispatcherCache"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, DispatcherCache_t1135_MethodInfos/* methods */
	, NULL/* properties */
	, DispatcherCache_t1135_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, DispatcherCache_t1135_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &DispatcherCache_t1135_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DispatcherCache_t1135_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DispatcherCache_t1135_il2cpp_TypeInfo/* cast_class */
	, &DispatcherCache_t1135_0_0_0/* byval_arg */
	, &DispatcherCache_t1135_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DispatcherCache_t1135)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(DispatcherCache_t1135_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo _EqualityComparer_t1137_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherKey__MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t63_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Type_GetHashCode_m5306_MethodInfo;
extern MethodInfo String_GetHashCode_m1461_MethodInfo;
extern MethodInfo String_op_Inequality_m511_MethodInfo;


// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
extern MethodInfo _EqualityComparer__ctor_m5200_MethodInfo;
 void _EqualityComparer__ctor_m5200 (_EqualityComparer_t1137 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_GetHashCode_m5201_MethodInfo;
 int32_t _EqualityComparer_GetHashCode_m5201 (_EqualityComparer_t1137 * __this, DispatcherKey_t1136 * ___key, MethodInfo* method){
	{
		NullCheck(___key);
		Type_t * L_0 = (___key->____type_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Type_GetHashCode_m5306_MethodInfo, L_0);
		NullCheck(___key);
		String_t* L_2 = (___key->____name_2);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m1461_MethodInfo, L_2);
		NullCheck(___key);
		TypeU5BU5D_t146* L_4 = (___key->____arguments_3);
		NullCheck(L_4);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))));
	}
}
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
extern MethodInfo _EqualityComparer_Equals_m5202_MethodInfo;
 bool _EqualityComparer_Equals_m5202 (_EqualityComparer_t1137 * __this, DispatcherKey_t1136 * ___x, DispatcherKey_t1136 * ___y, MethodInfo* method){
	int32_t V_0 = 0;
	{
		NullCheck(___x);
		Type_t * L_0 = (___x->____type_1);
		NullCheck(___y);
		Type_t * L_1 = (___y->____type_1);
		if ((((Type_t *)L_0) == ((Type_t *)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		NullCheck(___x);
		TypeU5BU5D_t146* L_2 = (___x->____arguments_3);
		NullCheck(L_2);
		NullCheck(___y);
		TypeU5BU5D_t146* L_3 = (___y->____arguments_3);
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		return 0;
	}

IL_002a:
	{
		NullCheck(___x);
		String_t* L_4 = (___x->____name_2);
		NullCheck(___y);
		String_t* L_5 = (___y->____name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_6 = String_op_Inequality_m511(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&String_op_Inequality_m511_MethodInfo);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		V_0 = 0;
		goto IL_0064;
	}

IL_0049:
	{
		NullCheck(___x);
		TypeU5BU5D_t146* L_7 = (___x->____arguments_3);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, V_0);
		int32_t L_8 = V_0;
		NullCheck(___y);
		TypeU5BU5D_t146* L_9 = (___y->____arguments_3);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, V_0);
		int32_t L_10 = V_0;
		if ((((Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_7, L_8))) == ((Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_9, L_10)))))
		{
			goto IL_0060;
		}
	}
	{
		return 0;
	}

IL_0060:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_0064:
	{
		NullCheck(___x);
		TypeU5BU5D_t146* L_11 = (___x->____arguments_3);
		NullCheck(L_11);
		if ((((int32_t)V_0) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		return 1;
	}
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::.ctor()
MethodInfo _EqualityComparer__ctor_m5200_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&_EqualityComparer__ctor_m5200/* method */
	, &_EqualityComparer_t1137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 72/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType DispatcherKey_t1136_0_0_0;
static ParameterInfo _EqualityComparer_t1137__EqualityComparer_GetHashCode_m5201_ParameterInfos[] = 
{
	{"key", 0, 134217784, &EmptyCustomAttributesCache, &DispatcherKey_t1136_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::GetHashCode(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
MethodInfo _EqualityComparer_GetHashCode_m5201_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&_EqualityComparer_GetHashCode_m5201/* method */
	, &_EqualityComparer_t1137_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, _EqualityComparer_t1137__EqualityComparer_GetHashCode_m5201_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 73/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType DispatcherKey_t1136_0_0_0;
extern Il2CppType DispatcherKey_t1136_0_0_0;
static ParameterInfo _EqualityComparer_t1137__EqualityComparer_Equals_m5202_ParameterInfos[] = 
{
	{"x", 0, 134217785, &EmptyCustomAttributesCache, &DispatcherKey_t1136_0_0_0},
	{"y", 1, 134217786, &EmptyCustomAttributesCache, &DispatcherKey_t1136_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.DynamicDispatching.DispatcherKey/_EqualityComparer::Equals(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherKey)
MethodInfo _EqualityComparer_Equals_m5202_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&_EqualityComparer_Equals_m5202/* method */
	, &_EqualityComparer_t1137_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, _EqualityComparer_t1137__EqualityComparer_Equals_m5202_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 74/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* _EqualityComparer_t1137_MethodInfos[] =
{
	&_EqualityComparer__ctor_m5200_MethodInfo,
	&_EqualityComparer_GetHashCode_m5201_MethodInfo,
	&_EqualityComparer_Equals_m5202_MethodInfo,
	NULL
};
static MethodInfo* _EqualityComparer_t1137_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&_EqualityComparer_Equals_m5202_MethodInfo,
	&_EqualityComparer_GetHashCode_m5201_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t1138_il2cpp_TypeInfo;
static TypeInfo* _EqualityComparer_t1137_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t1138_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair _EqualityComparer_t1137_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t1138_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType _EqualityComparer_t1137_0_0_0;
extern Il2CppType _EqualityComparer_t1137_1_0_0;
struct _EqualityComparer_t1137;
TypeInfo _EqualityComparer_t1137_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "_EqualityComparer"/* name */
	, ""/* namespaze */
	, _EqualityComparer_t1137_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* nested_in */
	, &_EqualityComparer_t1137_il2cpp_TypeInfo/* element_class */
	, _EqualityComparer_t1137_InterfacesTypeInfos/* implemented_interfaces */
	, _EqualityComparer_t1137_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &_EqualityComparer_t1137_il2cpp_TypeInfo/* cast_class */
	, &_EqualityComparer_t1137_0_0_0/* byval_arg */
	, &_EqualityComparer_t1137_1_0_0/* this_arg */
	, _EqualityComparer_t1137_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (_EqualityComparer_t1137)/* instance_size */
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
	, false/* is_generic */
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
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
extern MethodInfo DispatcherKey__ctor_m5203_MethodInfo;
 void DispatcherKey__ctor_m5203 (DispatcherKey_t1136 * __this, Type_t * ___type, String_t* ___name, TypeU5BU5D_t146* ___arguments, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		__this->____type_1 = ___type;
		__this->____name_2 = ___name;
		__this->____arguments_3 = ___arguments;
		return;
	}
}
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
extern MethodInfo DispatcherKey__cctor_m5204_MethodInfo;
 void DispatcherKey__cctor_m5204 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		_EqualityComparer_t1137 * L_0 = (_EqualityComparer_t1137 *)il2cpp_codegen_object_new (InitializedTypeInfo(&_EqualityComparer_t1137_il2cpp_TypeInfo));
		_EqualityComparer__ctor_m5200(L_0, /*hidden argument*/&_EqualityComparer__ctor_m5200_MethodInfo);
		((DispatcherKey_t1136_StaticFields*)InitializedTypeInfo(&DispatcherKey_t1136_il2cpp_TypeInfo)->static_fields)->___EqualityComparer_0 = L_0;
		return;
	}
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
extern Il2CppType IEqualityComparer_1_t1138_0_0_54;
FieldInfo DispatcherKey_t1136____EqualityComparer_0_FieldInfo = 
{
	"EqualityComparer"/* name */
	, &IEqualityComparer_1_t1138_0_0_54/* type */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t1136_StaticFields, ___EqualityComparer_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Type_t_0_0_33;
FieldInfo DispatcherKey_t1136_____type_1_FieldInfo = 
{
	"_type"/* name */
	, &Type_t_0_0_33/* type */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t1136, ____type_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_33;
FieldInfo DispatcherKey_t1136_____name_2_FieldInfo = 
{
	"_name"/* name */
	, &String_t_0_0_33/* type */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t1136, ____name_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeU5BU5D_t146_0_0_33;
FieldInfo DispatcherKey_t1136_____arguments_3_FieldInfo = 
{
	"_arguments"/* name */
	, &TypeU5BU5D_t146_0_0_33/* type */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* parent */
	, offsetof(DispatcherKey_t1136, ____arguments_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DispatcherKey_t1136_FieldInfos[] =
{
	&DispatcherKey_t1136____EqualityComparer_0_FieldInfo,
	&DispatcherKey_t1136_____type_1_FieldInfo,
	&DispatcherKey_t1136_____name_2_FieldInfo,
	&DispatcherKey_t1136_____arguments_3_FieldInfo,
	NULL
};
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType TypeU5BU5D_t146_0_0_0;
extern Il2CppType TypeU5BU5D_t146_0_0_0;
static ParameterInfo DispatcherKey_t1136_DispatcherKey__ctor_m5203_ParameterInfos[] = 
{
	{"type", 0, 134217781, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"name", 1, 134217782, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"arguments", 2, 134217783, &EmptyCustomAttributesCache, &TypeU5BU5D_t146_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.ctor(System.Type,System.String,System.Type[])
MethodInfo DispatcherKey__ctor_m5203_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DispatcherKey__ctor_m5203/* method */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Object_t_Object_t/* invoker_method */
	, DispatcherKey_t1136_DispatcherKey__ctor_m5203_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 70/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherKey::.cctor()
MethodInfo DispatcherKey__cctor_m5204_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&DispatcherKey__cctor_m5204/* method */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 71/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DispatcherKey_t1136_MethodInfos[] =
{
	&DispatcherKey__ctor_m5203_MethodInfo,
	&DispatcherKey__cctor_m5204_MethodInfo,
	NULL
};
extern TypeInfo _EqualityComparer_t1137_il2cpp_TypeInfo;
static TypeInfo* DispatcherKey_t1136_il2cpp_TypeInfo__nestedTypes[2] =
{
	&_EqualityComparer_t1137_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* DispatcherKey_t1136_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType DispatcherKey_t1136_1_0_0;
struct DispatcherKey_t1136;
TypeInfo DispatcherKey_t1136_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "DispatcherKey"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, DispatcherKey_t1136_MethodInfos/* methods */
	, NULL/* properties */
	, DispatcherKey_t1136_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, DispatcherKey_t1136_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DispatcherKey_t1136_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DispatcherKey_t1136_il2cpp_TypeInfo/* cast_class */
	, &DispatcherKey_t1136_0_0_0/* byval_arg */
	, &DispatcherKey_t1136_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DispatcherKey_t1136)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(DispatcherKey_t1136_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NumericPromotions_t1139_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_NumericPromotioMethodDeclarations.h"



// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.NumericPromotions
static MethodInfo* NumericPromotions_t1139_MethodInfos[] =
{
	NULL
};
static MethodInfo* NumericPromotions_t1139_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType NumericPromotions_t1139_0_0_0;
extern Il2CppType NumericPromotions_t1139_1_0_0;
struct NumericPromotions_t1139;
TypeInfo NumericPromotions_t1139_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "NumericPromotions"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, NumericPromotions_t1139_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &NumericPromotions_t1139_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NumericPromotions_t1139_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &NumericPromotions_t1139_il2cpp_TypeInfo/* cast_class */
	, &NumericPromotions_t1139_0_0_0/* byval_arg */
	, &NumericPromotions_t1139_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NumericPromotions_t1139)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistry.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtensionRegistry_t1141_il2cpp_TypeInfo;
// Boo.Lang.Runtime.ExtensionRegistry
#include "Boo_Lang_Boo_Lang_Runtime_ExtensionRegistryMethodDeclarations.h"

// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_gen.h"
extern TypeInfo List_1_t1140_il2cpp_TypeInfo;
// Boo.Lang.List`1<System.Reflection.MemberInfo>
#include "Boo_Lang_Boo_Lang_List_1_genMethodDeclarations.h"
extern MethodInfo List_1__ctor_m5307_MethodInfo;


// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
extern MethodInfo ExtensionRegistry__ctor_m5205_MethodInfo;
 void ExtensionRegistry__ctor_m5205 (ExtensionRegistry_t1141 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t1140_il2cpp_TypeInfo));
		List_1_t1140 * L_0 = (List_1_t1140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t1140_il2cpp_TypeInfo));
		List_1__ctor_m5307(L_0, /*hidden argument*/&List_1__ctor_m5307_MethodInfo);
		__this->____extensions_0 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m448(L_1, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		__this->____classLock_1 = L_1;
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
extern MethodInfo ExtensionRegistry_get_Extensions_m5206_MethodInfo;
 Object_t* ExtensionRegistry_get_Extensions_m5206 (ExtensionRegistry_t1141 * __this, MethodInfo* method){
	{
		List_1_t1140 * L_0 = (__this->____extensions_0);
		return L_0;
	}
}
// Metadata Definition Boo.Lang.Runtime.ExtensionRegistry
extern Il2CppType List_1_t1140_0_0_1;
FieldInfo ExtensionRegistry_t1141_____extensions_0_FieldInfo = 
{
	"_extensions"/* name */
	, &List_1_t1140_0_0_1/* type */
	, &ExtensionRegistry_t1141_il2cpp_TypeInfo/* parent */
	, offsetof(ExtensionRegistry_t1141, ____extensions_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_1;
FieldInfo ExtensionRegistry_t1141_____classLock_1_FieldInfo = 
{
	"_classLock"/* name */
	, &Object_t_0_0_1/* type */
	, &ExtensionRegistry_t1141_il2cpp_TypeInfo/* parent */
	, offsetof(ExtensionRegistry_t1141, ____classLock_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExtensionRegistry_t1141_FieldInfos[] =
{
	&ExtensionRegistry_t1141_____extensions_0_FieldInfo,
	&ExtensionRegistry_t1141_____classLock_1_FieldInfo,
	NULL
};
static PropertyInfo ExtensionRegistry_t1141____Extensions_PropertyInfo = 
{
	&ExtensionRegistry_t1141_il2cpp_TypeInfo/* parent */
	, "Extensions"/* name */
	, &ExtensionRegistry_get_Extensions_m5206_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExtensionRegistry_t1141_PropertyInfos[] =
{
	&ExtensionRegistry_t1141____Extensions_PropertyInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.ExtensionRegistry::.ctor()
MethodInfo ExtensionRegistry__ctor_m5205_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExtensionRegistry__ctor_m5205/* method */
	, &ExtensionRegistry_t1141_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 75/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerable_1_t1142_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.ExtensionRegistry::get_Extensions()
MethodInfo ExtensionRegistry_get_Extensions_m5206_MethodInfo = 
{
	"get_Extensions"/* name */
	, (methodPointerType)&ExtensionRegistry_get_Extensions_m5206/* method */
	, &ExtensionRegistry_t1141_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t1142_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 76/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExtensionRegistry_t1141_MethodInfos[] =
{
	&ExtensionRegistry__ctor_m5205_MethodInfo,
	&ExtensionRegistry_get_Extensions_m5206_MethodInfo,
	NULL
};
static MethodInfo* ExtensionRegistry_t1141_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType ExtensionRegistry_t1141_0_0_0;
extern Il2CppType ExtensionRegistry_t1141_1_0_0;
struct ExtensionRegistry_t1141;
TypeInfo ExtensionRegistry_t1141_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExtensionRegistry"/* name */
	, "Boo.Lang.Runtime"/* namespaze */
	, ExtensionRegistry_t1141_MethodInfos/* methods */
	, ExtensionRegistry_t1141_PropertyInfos/* properties */
	, ExtensionRegistry_t1141_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ExtensionRegistry_t1141_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ExtensionRegistry_t1141_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExtensionRegistry_t1141_il2cpp_TypeInfo/* cast_class */
	, &ExtensionRegistry_t1141_0_0_0/* byval_arg */
	, &ExtensionRegistry_t1141_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExtensionRegistry_t1141)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICoercible_t1159_il2cpp_TypeInfo;



// System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type)
// Metadata Definition Boo.Lang.Runtime.ICoercible
extern Il2CppType Type_t_0_0_0;
static ParameterInfo ICoercible_t1159_ICoercible_Coerce_m5308_ParameterInfos[] = 
{
	{"to", 0, 134217787, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.ICoercible::Coerce(System.Type)
MethodInfo ICoercible_Coerce_m5308_MethodInfo = 
{
	"Coerce"/* name */
	, NULL/* method */
	, &ICoercible_t1159_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ICoercible_t1159_ICoercible_Coerce_m5308_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 77/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ICoercible_t1159_MethodInfos[] =
{
	&ICoercible_Coerce_m5308_MethodInfo,
	NULL
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType ICoercible_t1159_0_0_0;
extern Il2CppType ICoercible_t1159_1_0_0;
struct ICoercible_t1159;
TypeInfo ICoercible_t1159_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICoercible"/* name */
	, "Boo.Lang.Runtime"/* namespaze */
	, ICoercible_t1159_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICoercible_t1159_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICoercible_t1159_il2cpp_TypeInfo/* cast_class */
	, &ICoercible_t1159_0_0_0/* byval_arg */
	, &ICoercible_t1159_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMet.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CGetExtensionMetMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
extern TypeInfo IEnumerator_1_t1145_il2cpp_TypeInfo;
extern TypeInfo RuntimeServices_t441_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t1142_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t1143_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t196_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t1160_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t198_il2cpp_TypeInfo;
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// Boo.Lang.Runtime.RuntimeServices
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m490_MethodInfo;
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m5309_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m5310_MethodInfo;
extern MethodInfo MemberInfo_get_MemberType_m5311_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
 void U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207 (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208_MethodInfo;
 MethodInfo_t198 * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208 (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * __this, MethodInfo* method){
	{
		MethodInfo_t198 * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209_MethodInfo;
 Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209 (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * __this, MethodInfo* method){
	{
		MethodInfo_t198 * L_0 = (__this->___$current_3);
		return L_0;
	}
}
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210_MethodInfo;
 Object_t * U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210 (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * __this, MethodInfo* method){
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211_MethodInfo, __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
 Object_t* U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211 (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * __this, MethodInfo* method){
	{
		int32_t* L_0 = &(__this->___$PC_2);
		int32_t L_1 = Interlocked_CompareExchange_m490(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m490_MethodInfo);
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
		U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * L_2 = (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207(L_2, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207_MethodInfo);
		return L_2;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m5212_MethodInfo;
 bool U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m5212 (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t leaveInstructions[1] = {0};
	Exception_t71 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t71 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
		V_1 = 0;
		if (V_0 == 0)
		{
			goto IL_0023;
		}
		if (V_0 == 1)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c2;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		NullCheck((((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->____extensions_3));
		Object_t* L_1 = ExtensionRegistry_get_Extensions_m5206((((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->____extensions_3), /*hidden argument*/&ExtensionRegistry_get_Extensions_m5206_MethodInfo);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m5309_MethodInfo, L_1);
		__this->___U3C$s_49U3E__0_0 = L_2;
		V_0 = ((int32_t)-3);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			if (((uint32_t)(V_0-1)) == 0)
			{
				goto IL_008d;
			}
		}

IL_0047:
		{
			goto IL_008d;
		}

IL_004c:
		{
			Object_t* L_3 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_3);
			MemberInfo_t196 * L_4 = (MemberInfo_t196 *)InterfaceFuncInvoker0< MemberInfo_t196 * >::Invoke(&IEnumerator_1_get_Current_m5310_MethodInfo, L_3);
			__this->___U3CmemberU3E__1_1 = L_4;
			MemberInfo_t196 * L_5 = (__this->___U3CmemberU3E__1_1);
			NullCheck(L_5);
			int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MemberInfo_get_MemberType_m5311_MethodInfo, L_5);
			if ((((uint32_t)L_6) != ((uint32_t)8)))
			{
				goto IL_008d;
			}
		}

IL_006e:
		{
			MemberInfo_t196 * L_7 = (__this->___U3CmemberU3E__1_1);
			__this->___$current_3 = ((MethodInfo_t198 *)Castclass(L_7, InitializedTypeInfo(&MethodInfo_t198_il2cpp_TypeInfo)));
			__this->___$PC_2 = 1;
			V_1 = 1;
			// IL_0088: leave IL_00c4
			leaveInstructions[0] = 0xC4; // 1
			THROW_SENTINEL(IL_00c4);
			// finally target depth: 1
		}

IL_008d:
		{
			Object_t* L_8 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m432_MethodInfo, L_8);
			if (L_9)
			{
				goto IL_004c;
			}
		}

IL_009d:
		{
			// IL_009d: leave IL_00bb
			leaveInstructions[0] = 0xBB; // 1
			THROW_SENTINEL(IL_00bb);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00a2;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t71 *)e.ex;
		goto IL_00a2;
	}

IL_00a2:
	{ // begin finally (depth: 1)
		{
			if (!V_1)
			{
				goto IL_00a6;
			}
		}

IL_00a5:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_00a6:
		{
			Object_t* L_10 = (__this->___U3C$s_49U3E__0_0);
			if (L_10)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_00af:
		{
			Object_t* L_11 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m425_MethodInfo, L_11);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0xC4:
					goto IL_00c4;
				case 0xBB:
					goto IL_00bb;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_00bb:
	{
		__this->___$PC_2 = (-1);
	}

IL_00c2:
	{
		return 0;
	}

IL_00c4:
	{
		return 1;
	}
	// Dead block : IL_00c6: ldloc.2
}
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
extern MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213_MethodInfo;
 void U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213 (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * __this, MethodInfo* method){
	uint32_t V_0 = 0;
	int32_t leaveInstructions[1] = {0};
	Exception_t71 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t71 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___$PC_2);
		V_0 = L_0;
		__this->___$PC_2 = (-1);
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
		__last_unhandled_exception = (Exception_t71 *)e.ex;
		goto IL_0026;
	}

IL_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_1 = (__this->___U3C$s_49U3E__0_0);
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
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_002f:
		{
			Object_t* L_2 = (__this->___U3C$s_49U3E__0_0);
			NullCheck(L_2);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m425_MethodInfo, L_2);
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
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
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
// Metadata Definition Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
extern Il2CppType IEnumerator_1_t1143_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144____U3C$s_49U3E__0_0_FieldInfo = 
{
	"<$s_49>__0"/* name */
	, &IEnumerator_1_t1143_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1144, ___U3C$s_49U3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MemberInfo_t196_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144____U3CmemberU3E__1_1_FieldInfo = 
{
	"<member>__1"/* name */
	, &MemberInfo_t196_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1144, ___U3CmemberU3E__1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144____$PC_2_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t63_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1144, ___$PC_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MethodInfo_t198_0_0_3;
FieldInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144____$current_3_FieldInfo = 
{
	"$current"/* name */
	, &MethodInfo_t198_0_0_3/* type */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1144, ___$current_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t1144_FieldInfos[] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144____U3C$s_49U3E__0_0_FieldInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144____U3CmemberU3E__1_1_FieldInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144____$PC_2_FieldInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144____$current_3_FieldInfo,
	NULL
};
static PropertyInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144____System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_Current_PropertyInfo = 
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.Current"/* name */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t1144_PropertyInfos[] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144____System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_Current_PropertyInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::.ctor()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 98/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType MethodInfo_t198_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t198_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 99/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209;
// System.Object Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 100/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t21_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210;
// System.Collections.IEnumerator Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.IEnumerable.GetEnumerator()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t21_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 101/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_1_t1145_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211_MethodInfo = 
{
	"System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t1145_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 102/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::MoveNext()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m5212_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m5212/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 103/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213;
// System.Void Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::Dispose()
MethodInfo U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213/* method */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 104/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t1144_MethodInfos[] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m5212_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213_MethodInfo,
	NULL
};
static MethodInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t1144_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_MoveNext_m5212_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211_MethodInfo,
	&U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208_MethodInfo,
};
extern TypeInfo IEnumerable_1_t1148_il2cpp_TypeInfo;
static TypeInfo* U3CGetExtensionMethodsU3Ec__IteratorC_t1144_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerable_1_t1148_il2cpp_TypeInfo,
	&IEnumerator_1_t1145_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CGetExtensionMethodsU3Ec__IteratorC_t1144_InterfacesOffsets[] = 
{
	{ &IEnumerable_t88_il2cpp_TypeInfo, 4},
	{ &IEnumerator_t21_il2cpp_TypeInfo, 5},
	{ &IDisposable_t69_il2cpp_TypeInfo, 7},
	{ &IEnumerable_1_t1148_il2cpp_TypeInfo, 8},
	{ &IEnumerator_1_t1145_il2cpp_TypeInfo, 9},
};
void U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t89 * tmp;
		tmp = (CompilerGeneratedAttribute_t89 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t89_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m492(tmp, &CompilerGeneratedAttribute__ctor_m492_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211
};
CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213 = {
1,
NULL,
&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_CustomAttributesCacheGenerator_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CGetExtensionMethodsU3Ec__IteratorC_t1144_0_0_0;
extern Il2CppType U3CGetExtensionMethodsU3Ec__IteratorC_t1144_1_0_0;
struct U3CGetExtensionMethodsU3Ec__IteratorC_t1144;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_m5208;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerator_get_Current_m5209;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_IEnumerable_GetEnumerator_m5210;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m5211;
extern CustomAttributesCache U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache_U3CGetExtensionMethodsU3Ec__IteratorC_Dispose_m5213;
TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetExtensionMethods>c__IteratorC"/* name */
	, ""/* namespaze */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t1144_MethodInfos/* methods */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t1144_PropertyInfos/* properties */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t1144_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* nested_in */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* element_class */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t1144_InterfacesTypeInfos/* implemented_interfaces */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t1144_VTable/* vtable */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144__CustomAttributeCache/* custom_attributes_cache */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo/* cast_class */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_0_0_0/* byval_arg */
	, &U3CGetExtensionMethodsU3Ec__IteratorC_t1144_1_0_0/* this_arg */
	, U3CGetExtensionMethodsU3Ec__IteratorC_t1144_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetExtensionMethodsU3Ec__IteratorC_t1144)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 5/* interfaces_count */
	, 5/* interface_offsets_count */

};
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__Ano.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CCoerceU3Ec__AnoMethodDeclarations.h"

extern MethodInfo RuntimeServices_CreateCoerceDispatcher_m5220_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D__ctor_m5214_MethodInfo;
 void U3CCoerceU3Ec__AnonStorey1D__ctor_m5214 (U3CCoerceU3Ec__AnonStorey1D_t1146 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
extern MethodInfo U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5215_MethodInfo;
 Dispatcher_t1132 * U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5215 (U3CCoerceU3Ec__AnonStorey1D_t1146 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___value_0);
		Type_t * L_1 = (__this->___toType_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		Dispatcher_t1132 * L_2 = RuntimeServices_CreateCoerceDispatcher_m5220(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&RuntimeServices_CreateCoerceDispatcher_m5220_MethodInfo);
		return L_2;
	}
}
// Metadata Definition Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CCoerceU3Ec__AnonStorey1D_t1146____value_0_FieldInfo = 
{
	"value"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCoerceU3Ec__AnonStorey1D_t1146, ___value_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Type_t_0_0_3;
FieldInfo U3CCoerceU3Ec__AnonStorey1D_t1146____toType_1_FieldInfo = 
{
	"toType"/* name */
	, &Type_t_0_0_3/* type */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo/* parent */
	, offsetof(U3CCoerceU3Ec__AnonStorey1D_t1146, ___toType_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CCoerceU3Ec__AnonStorey1D_t1146_FieldInfos[] =
{
	&U3CCoerceU3Ec__AnonStorey1D_t1146____value_0_FieldInfo,
	&U3CCoerceU3Ec__AnonStorey1D_t1146____toType_1_FieldInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::.ctor()
MethodInfo U3CCoerceU3Ec__AnonStorey1D__ctor_m5214_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CCoerceU3Ec__AnonStorey1D__ctor_m5214/* method */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 105/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices/<Coerce>c__AnonStorey1D::<>m__15()
MethodInfo U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5215_MethodInfo = 
{
	"<>m__15"/* name */
	, (methodPointerType)&U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5215/* method */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 106/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CCoerceU3Ec__AnonStorey1D_t1146_MethodInfos[] =
{
	&U3CCoerceU3Ec__AnonStorey1D__ctor_m5214_MethodInfo,
	&U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5215_MethodInfo,
	NULL
};
static MethodInfo* U3CCoerceU3Ec__AnonStorey1D_t1146_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
void U3CCoerceU3Ec__AnonStorey1D_t1146_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t89 * tmp;
		tmp = (CompilerGeneratedAttribute_t89 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t89_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m492(tmp, &CompilerGeneratedAttribute__ctor_m492_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CCoerceU3Ec__AnonStorey1D_t1146__CustomAttributeCache = {
1,
NULL,
&U3CCoerceU3Ec__AnonStorey1D_t1146_CustomAttributesCacheGenerator
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CCoerceU3Ec__AnonStorey1D_t1146_0_0_0;
extern Il2CppType U3CCoerceU3Ec__AnonStorey1D_t1146_1_0_0;
struct U3CCoerceU3Ec__AnonStorey1D_t1146;
extern CustomAttributesCache U3CCoerceU3Ec__AnonStorey1D_t1146__CustomAttributeCache;
TypeInfo U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<Coerce>c__AnonStorey1D"/* name */
	, ""/* namespaze */
	, U3CCoerceU3Ec__AnonStorey1D_t1146_MethodInfos/* methods */
	, NULL/* properties */
	, U3CCoerceU3Ec__AnonStorey1D_t1146_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* nested_in */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CCoerceU3Ec__AnonStorey1D_t1146_VTable/* vtable */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146__CustomAttributeCache/* custom_attributes_cache */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo/* cast_class */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_0_0_0/* byval_arg */
	, &U3CCoerceU3Ec__AnonStorey1D_t1146_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CCoerceU3Ec__AnonStorey1D_t1146)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitCon.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo;
// Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices_U3CEmitImplicitConMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
extern TypeInfo ObjectU5BU5D_t112_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t307_il2cpp_TypeInfo;
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
extern MethodInfo MethodBase_Invoke_m1284_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5216_MethodInfo;
 void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5216 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147 * __this, MethodInfo* method){
	{
		Object__ctor_m448(__this, /*hidden argument*/&Object__ctor_m448_MethodInfo);
		return;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
extern MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217_MethodInfo;
 Object_t * U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217 (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147 * __this, Object_t * ___target, ObjectU5BU5D_t112* ___args, MethodInfo* method){
	{
		MethodInfo_t198 * L_0 = (__this->___method_0);
		ObjectU5BU5D_t112* L_1 = ((ObjectU5BU5D_t112*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t112_il2cpp_TypeInfo), 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, ___target);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)___target;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t112* >::Invoke(&MethodBase_Invoke_m1284_MethodInfo, L_0, NULL, L_1);
		return L_2;
	}
}
// Metadata Definition Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E
extern Il2CppType MethodInfo_t198_0_0_3;
FieldInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147____method_0_FieldInfo = 
{
	"method"/* name */
	, &MethodInfo_t198_0_0_3/* type */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo/* parent */
	, offsetof(U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147, ___method_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_FieldInfos[] =
{
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147____method_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::.ctor()
MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5216_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5216/* method */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 107/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t112_0_0_0;
extern Il2CppType ObjectU5BU5D_t112_0_0_0;
static ParameterInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217_ParameterInfos[] = 
{
	{"target", 0, 134217825, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217826, &EmptyCustomAttributesCache, &ObjectU5BU5D_t112_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices/<EmitImplicitConversionDispatcher>c__AnonStorey1E::<>m__16(System.Object,System.Object[])
MethodInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217_MethodInfo = 
{
	"<>m__16"/* name */
	, (methodPointerType)&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217/* method */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 108/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_MethodInfos[] =
{
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5216_MethodInfo,
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217_MethodInfo,
	NULL
};
static MethodInfo* U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
void U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t89 * tmp;
		tmp = (CompilerGeneratedAttribute_t89 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t89_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m492(tmp, &CompilerGeneratedAttribute__ctor_m492_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147__CustomAttributeCache = {
1,
NULL,
&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_CustomAttributesCacheGenerator
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_0_0_0;
extern Il2CppType U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_1_0_0;
struct U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147;
extern CustomAttributesCache U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147__CustomAttributeCache;
TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "<EmitImplicitConversionDispatcher>c__AnonStorey1E"/* name */
	, ""/* namespaze */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_MethodInfos/* methods */
	, NULL/* properties */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* nested_in */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_VTable/* vtable */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147__CustomAttributeCache/* custom_attributes_cache */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo/* cast_class */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_0_0_0/* byval_arg */
	, &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147)/* instance_size */
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
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo TypeU5BU5D_t146_il2cpp_TypeInfo;
extern TypeInfo TypeCode_t1161_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t116_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t85_il2cpp_TypeInfo;
extern TypeInfo Decimal_t5_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t1162_il2cpp_TypeInfo;
extern TypeInfo Double_t91_il2cpp_TypeInfo;
extern TypeInfo Single_t66_il2cpp_TypeInfo;
extern TypeInfo UInt64_t1057_il2cpp_TypeInfo;
extern TypeInfo Int64_t67_il2cpp_TypeInfo;
extern TypeInfo UInt32_t1009_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t1163_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t296_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t1067_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t1068_il2cpp_TypeInfo;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_DispatcherMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
extern Il2CppType RuntimeServices_t441_0_0_0;
extern Il2CppType Dispatcher_t1132_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m441_MethodInfo;
extern MethodInfo Object_GetType_m440_MethodInfo;
extern MethodInfo RuntimeServices_GetDispatcher_m5219_MethodInfo;
extern MethodInfo Dispatcher_Invoke_m5235_MethodInfo;
extern MethodInfo Type_IsInstanceOfType_m5312_MethodInfo;
extern MethodInfo RuntimeServices_IdentityDispatcher_m5225_MethodInfo;
extern MethodInfo Dispatcher__ctor_m5234_MethodInfo;
extern MethodInfo RuntimeServices_CoercibleDispatcher_m5224_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m5222_MethodInfo;
extern MethodInfo RuntimeServices_EmitPromotionDispatcher_m5221_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionOperator_m5231_MethodInfo;
extern MethodInfo RuntimeServices_EmitImplicitConversionDispatcher_m5223_MethodInfo;
extern MethodInfo Type_GetTypeCode_m5313_MethodInfo;
extern MethodInfo String_Concat_m1148_MethodInfo;
extern MethodInfo Type_GetMethod_m5314_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m5315_MethodInfo;
extern MethodInfo RuntimeServices_IsPromotableNumeric_m5230_MethodInfo;
extern MethodInfo ICoercible_Coerce_m5308_MethodInfo;
extern MethodInfo String_Concat_m419_MethodInfo;
extern MethodInfo String_Concat_m420_MethodInfo;
extern MethodInfo RuntimeServices_IsNumeric_m5226_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m5229_MethodInfo;
extern MethodInfo RuntimeServices_ArrayEqualityImpl_m5227_MethodInfo;
extern MethodInfo Array_get_Rank_m5316_MethodInfo;
extern MethodInfo ArgumentException__ctor_m586_MethodInfo;
extern MethodInfo Array_get_Length_m1819_MethodInfo;
extern MethodInfo Array_GetValue_m5317_MethodInfo;
extern MethodInfo RuntimeServices_EqualityOperator_m1878_MethodInfo;
extern MethodInfo RuntimeServices_GetConvertTypeCode_m5228_MethodInfo;
extern MethodInfo IConvertible_ToDecimal_m5318_MethodInfo;
extern MethodInfo Decimal_op_Equality_m5319_MethodInfo;
extern MethodInfo IConvertible_ToDouble_m5320_MethodInfo;
extern MethodInfo IConvertible_ToSingle_m5321_MethodInfo;
extern MethodInfo IConvertible_ToUInt64_m5322_MethodInfo;
extern MethodInfo IConvertible_ToInt64_m5323_MethodInfo;
extern MethodInfo IConvertible_ToUInt32_m5324_MethodInfo;
extern MethodInfo IConvertible_ToInt32_m5325_MethodInfo;
extern MethodInfo Type_GetMethods_m5326_MethodInfo;
extern MethodInfo RuntimeServices_FindImplicitConversionMethod_m5233_MethodInfo;
extern MethodInfo RuntimeServices_GetExtensionMethods_m5232_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m5327_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m5328_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m1147_MethodInfo;
extern MethodInfo MethodInfo_get_ReturnType_m1283_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m5088_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m5089_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m1419_MethodInfo;


// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern MethodInfo RuntimeServices__cctor_m5218_MethodInfo;
 void RuntimeServices__cctor_m5218 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->___NoArguments_0 = ((ObjectU5BU5D_t112*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t112_il2cpp_TypeInfo), 0));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m441(NULL /*static, unused*/, LoadTypeToken(&RuntimeServices_t441_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m441_MethodInfo);
		((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->___RuntimeServicesType_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo));
		DispatcherCache_t1135 * L_1 = (DispatcherCache_t1135 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherCache_t1135_il2cpp_TypeInfo));
		DispatcherCache__ctor_m5197(L_1, /*hidden argument*/&DispatcherCache__ctor_m5197_MethodInfo);
		((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->____cache_2 = L_1;
		ExtensionRegistry_t1141 * L_2 = (ExtensionRegistry_t1141 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtensionRegistry_t1141_il2cpp_TypeInfo));
		ExtensionRegistry__ctor_m5205(L_2, /*hidden argument*/&ExtensionRegistry__ctor_m5205_MethodInfo);
		((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->____extensions_3 = L_2;
		bool L_3 = 1;
		Object_t * L_4 = Box(InitializedTypeInfo(&Boolean_t64_il2cpp_TypeInfo), &L_3);
		((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->___True_4 = L_4;
		return;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
 Dispatcher_t1132 * RuntimeServices_GetDispatcher_m5219 (Object_t * __this/* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t146* ___cacheKeyTypes, DispatcherFactory_t1133 * ___factory, MethodInfo* method){
	Type_t * V_0 = {0};
	DispatcherKey_t1136 * V_1 = {0};
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	{
		Type_t * L_0 = ((Type_t *)IsInst(___target, InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)));
		G_B1_0 = L_0;
		if (L_0)
		{
			G_B2_0 = L_0;
			goto IL_0013;
		}
	}
	{
		NullCheck(___target);
		Type_t * L_1 = Object_GetType_m440(___target, /*hidden argument*/&Object_GetType_m440_MethodInfo);
		G_B2_0 = L_1;
	}

IL_0013:
	{
		V_0 = G_B2_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DispatcherKey_t1136_il2cpp_TypeInfo));
		DispatcherKey_t1136 * L_2 = (DispatcherKey_t1136 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherKey_t1136_il2cpp_TypeInfo));
		DispatcherKey__ctor_m5203(L_2, V_0, ___cacheKeyName, ___cacheKeyTypes, /*hidden argument*/&DispatcherKey__ctor_m5203_MethodInfo);
		V_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		NullCheck((((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->____cache_2));
		Dispatcher_t1132 * L_3 = DispatcherCache_Get_m5199((((RuntimeServices_t441_StaticFields*)InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo)->static_fields)->____cache_2), V_1, ___factory, /*hidden argument*/&DispatcherCache_Get_m5199_MethodInfo);
		return L_3;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern MethodInfo RuntimeServices_Coerce_m1767_MethodInfo;
 Object_t * RuntimeServices_Coerce_m1767 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method){
	ObjectU5BU5D_t112* V_0 = {0};
	Dispatcher_t1132 * V_1 = {0};
	U3CCoerceU3Ec__AnonStorey1D_t1146 * V_2 = {0};
	{
		U3CCoerceU3Ec__AnonStorey1D_t1146 * L_0 = (U3CCoerceU3Ec__AnonStorey1D_t1146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo));
		U3CCoerceU3Ec__AnonStorey1D__ctor_m5214(L_0, /*hidden argument*/&U3CCoerceU3Ec__AnonStorey1D__ctor_m5214_MethodInfo);
		V_2 = L_0;
		NullCheck(V_2);
		V_2->___value_0 = ___value;
		NullCheck(V_2);
		V_2->___toType_1 = ___toType;
		NullCheck(V_2);
		Object_t * L_1 = (V_2->___value_0);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		return NULL;
	}

IL_0021:
	{
		ObjectU5BU5D_t112* L_2 = ((ObjectU5BU5D_t112*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t112_il2cpp_TypeInfo), 1));
		NullCheck(V_2);
		Type_t * L_3 = (V_2->___toType_1);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		V_0 = L_2;
		NullCheck(V_2);
		Object_t * L_4 = (V_2->___value_0);
		TypeU5BU5D_t146* L_5 = ((TypeU5BU5D_t146*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t146_il2cpp_TypeInfo), 1));
		NullCheck(V_2);
		Type_t * L_6 = (V_2->___toType_1);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 0)) = (Type_t *)L_6;
		IntPtr_t107 L_7 = { &U3CCoerceU3Ec__AnonStorey1D_U3CU3Em__15_m5215_MethodInfo };
		DispatcherFactory_t1133 * L_8 = (DispatcherFactory_t1133 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DispatcherFactory_t1133_il2cpp_TypeInfo));
		DispatcherFactory__ctor_m5193(L_8, V_2, L_7, /*hidden argument*/&DispatcherFactory__ctor_m5193_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		Dispatcher_t1132 * L_9 = RuntimeServices_GetDispatcher_m5219(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral484, L_5, L_8, /*hidden argument*/&RuntimeServices_GetDispatcher_m5219_MethodInfo);
		V_1 = L_9;
		NullCheck(V_2);
		Object_t * L_10 = (V_2->___value_0);
		NullCheck(V_1);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t112* >::Invoke(&Dispatcher_Invoke_m5235_MethodInfo, V_1, L_10, V_0);
		return L_11;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
 Dispatcher_t1132 * RuntimeServices_CreateCoerceDispatcher_m5220 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___toType, MethodInfo* method){
	Type_t * V_0 = {0};
	MethodInfo_t198 * V_1 = {0};
	{
		NullCheck(___toType);
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Type_IsInstanceOfType_m5312_MethodInfo, ___toType, ___value);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		IntPtr_t107 L_1 = { &RuntimeServices_IdentityDispatcher_m5225_MethodInfo };
		Dispatcher_t1132 * L_2 = (Dispatcher_t1132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1132_il2cpp_TypeInfo));
		Dispatcher__ctor_m5234(L_2, NULL, L_1, /*hidden argument*/&Dispatcher__ctor_m5234_MethodInfo);
		return L_2;
	}

IL_0019:
	{
		if (!((Object_t *)IsInst(___value, InitializedTypeInfo(&ICoercible_t1159_il2cpp_TypeInfo))))
		{
			goto IL_0031;
		}
	}
	{
		IntPtr_t107 L_3 = { &RuntimeServices_CoercibleDispatcher_m5224_MethodInfo };
		Dispatcher_t1132 * L_4 = (Dispatcher_t1132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1132_il2cpp_TypeInfo));
		Dispatcher__ctor_m5234(L_4, NULL, L_3, /*hidden argument*/&Dispatcher__ctor_m5234_MethodInfo);
		return L_4;
	}

IL_0031:
	{
		NullCheck(___value);
		Type_t * L_5 = Object_GetType_m440(___value, /*hidden argument*/&Object_GetType_m440_MethodInfo);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_6 = RuntimeServices_IsPromotableNumeric_m5222(NULL /*static, unused*/, V_0, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m5222_MethodInfo);
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_IsPromotableNumeric_m5222(NULL /*static, unused*/, ___toType, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m5222_MethodInfo);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		Dispatcher_t1132 * L_8 = RuntimeServices_EmitPromotionDispatcher_m5221(NULL /*static, unused*/, V_0, ___toType, /*hidden argument*/&RuntimeServices_EmitPromotionDispatcher_m5221_MethodInfo);
		return L_8;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		MethodInfo_t198 * L_9 = RuntimeServices_FindImplicitConversionOperator_m5231(NULL /*static, unused*/, V_0, ___toType, /*hidden argument*/&RuntimeServices_FindImplicitConversionOperator_m5231_MethodInfo);
		V_1 = L_9;
		if (V_1)
		{
			goto IL_0071;
		}
	}
	{
		IntPtr_t107 L_10 = { &RuntimeServices_IdentityDispatcher_m5225_MethodInfo };
		Dispatcher_t1132 * L_11 = (Dispatcher_t1132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1132_il2cpp_TypeInfo));
		Dispatcher__ctor_m5234(L_11, NULL, L_10, /*hidden argument*/&Dispatcher__ctor_m5234_MethodInfo);
		return L_11;
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		Dispatcher_t1132 * L_12 = RuntimeServices_EmitImplicitConversionDispatcher_m5223(NULL /*static, unused*/, V_1, /*hidden argument*/&RuntimeServices_EmitImplicitConversionDispatcher_m5223_MethodInfo);
		return L_12;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
 Dispatcher_t1132 * RuntimeServices_EmitPromotionDispatcher_m5221 (Object_t * __this/* static, unused */, Type_t * ___fromType, Type_t * ___toType, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m441(NULL /*static, unused*/, LoadTypeToken(&Dispatcher_t1132_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m441_MethodInfo);
		Type_t * L_1 = Type_GetTypeFromHandle_m441(NULL /*static, unused*/, LoadTypeToken(&NumericPromotions_t1139_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m441_MethodInfo);
		ObjectU5BU5D_t112* L_2 = ((ObjectU5BU5D_t112*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t112_il2cpp_TypeInfo), 4));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral485);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)(String_t*) &_stringLiteral485;
		ObjectU5BU5D_t112* L_3 = L_2;
		int32_t L_4 = Type_GetTypeCode_m5313(NULL /*static, unused*/, ___fromType, /*hidden argument*/&Type_GetTypeCode_m5313_MethodInfo);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&TypeCode_t1161_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t112* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral486);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)(String_t*) &_stringLiteral486;
		ObjectU5BU5D_t112* L_8 = L_7;
		int32_t L_9 = Type_GetTypeCode_m5313(NULL /*static, unused*/, ___toType, /*hidden argument*/&Type_GetTypeCode_m5313_MethodInfo);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&TypeCode_t1161_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Concat_m1148(NULL /*static, unused*/, L_8, /*hidden argument*/&String_Concat_m1148_MethodInfo);
		NullCheck(L_1);
		MethodInfo_t198 * L_13 = (MethodInfo_t198 *)VirtFuncInvoker1< MethodInfo_t198 *, String_t* >::Invoke(&Type_GetMethod_m5314_MethodInfo, L_1, L_12);
		Delegate_t730 * L_14 = Delegate_CreateDelegate_m5315(NULL /*static, unused*/, L_0, L_13, /*hidden argument*/&Delegate_CreateDelegate_m5315_MethodInfo);
		return ((Dispatcher_t1132 *)Castclass(L_14, InitializedTypeInfo(&Dispatcher_t1132_il2cpp_TypeInfo)));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
 bool RuntimeServices_IsPromotableNumeric_m5222 (Object_t * __this/* static, unused */, Type_t * ___fromType, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_0 = Type_GetTypeCode_m5313(NULL /*static, unused*/, ___fromType, /*hidden argument*/&Type_GetTypeCode_m5313_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_1 = RuntimeServices_IsPromotableNumeric_m5230(NULL /*static, unused*/, L_0, /*hidden argument*/&RuntimeServices_IsPromotableNumeric_m5230_MethodInfo);
		return L_1;
	}
}
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
 Dispatcher_t1132 * RuntimeServices_EmitImplicitConversionDispatcher_m5223 (Object_t * __this/* static, unused */, MethodInfo_t198 * ___method, MethodInfo* method){
	U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147 * V_0 = {0};
	{
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147 * L_0 = (U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo));
		U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5216(L_0, /*hidden argument*/&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E__ctor_m5216_MethodInfo);
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___method_0 = ___method;
		IntPtr_t107 L_1 = { &U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_U3CU3Em__16_m5217_MethodInfo };
		Dispatcher_t1132 * L_2 = (Dispatcher_t1132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Dispatcher_t1132_il2cpp_TypeInfo));
		Dispatcher__ctor_m5234(L_2, V_0, L_1, /*hidden argument*/&Dispatcher__ctor_m5234_MethodInfo);
		return L_2;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
 Object_t * RuntimeServices_CoercibleDispatcher_m5224 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t112* ___args, MethodInfo* method){
	{
		NullCheck(___args);
		IL2CPP_ARRAY_BOUNDS_CHECK(___args, 0);
		int32_t L_0 = 0;
		NullCheck(((Object_t *)Castclass(___o, InitializedTypeInfo(&ICoercible_t1159_il2cpp_TypeInfo))));
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Type_t * >::Invoke(&ICoercible_Coerce_m5308_MethodInfo, ((Object_t *)Castclass(___o, InitializedTypeInfo(&ICoercible_t1159_il2cpp_TypeInfo))), ((Type_t *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(___args, L_0)), InitializedTypeInfo(&Type_t_il2cpp_TypeInfo))));
		return L_1;
	}
}
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
 Object_t * RuntimeServices_IdentityDispatcher_m5225 (Object_t * __this/* static, unused */, Object_t * ___o, ObjectU5BU5D_t112* ___args, MethodInfo* method){
	{
		return ___o;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
 bool RuntimeServices_IsNumeric_m5226 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method){
	int32_t V_0 = {0};
	{
		V_0 = ___code;
		if (((int32_t)(V_0-5)) == 0)
		{
			goto IL_003d;
		}
		if (((int32_t)(V_0-5)) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)(V_0-5)) == 2)
		{
			goto IL_003f;
		}
		if (((int32_t)(V_0-5)) == 3)
		{
			goto IL_0045;
		}
		if (((int32_t)(V_0-5)) == 4)
		{
			goto IL_0041;
		}
		if (((int32_t)(V_0-5)) == 5)
		{
			goto IL_0047;
		}
		if (((int32_t)(V_0-5)) == 6)
		{
			goto IL_0043;
		}
		if (((int32_t)(V_0-5)) == 7)
		{
			goto IL_0049;
		}
		if (((int32_t)(V_0-5)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)(V_0-5)) == 9)
		{
			goto IL_004d;
		}
		if (((int32_t)(V_0-5)) == 10)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0051;
	}

IL_003b:
	{
		return 1;
	}

IL_003d:
	{
		return 1;
	}

IL_003f:
	{
		return 1;
	}

IL_0041:
	{
		return 1;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 0;
	}
}
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern MethodInfo RuntimeServices_op_Addition_m1864_MethodInfo;
 String_t* RuntimeServices_op_Addition_m1864 (Object_t * __this/* static, unused */, String_t* ___lhs, String_t* ___rhs, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = String_Concat_m419(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&String_Concat_m419_MethodInfo);
		return L_0;
	}
}
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.Object)
extern MethodInfo RuntimeServices_op_Addition_m1934_MethodInfo;
 String_t* RuntimeServices_op_Addition_m1934 (Object_t * __this/* static, unused */, String_t* ___lhs, Object_t * ___rhs, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = String_Concat_m420(NULL /*static, unused*/, ___lhs, ___rhs, /*hidden argument*/&String_Concat_m420_MethodInfo);
		return L_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
 bool RuntimeServices_EqualityOperator_m1878 (Object_t * __this/* static, unused */, Object_t * ___lhs, Object_t * ___rhs, MethodInfo* method){
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	Array_t * V_2 = {0};
	Array_t * V_3 = {0};
	int32_t G_B15_0 = 0;
	{
		if ((((Object_t *)___lhs) != ((Object_t *)___rhs)))
		{
			goto IL_0009;
		}
	}
	{
		return 1;
	}

IL_0009:
	{
		if (___lhs)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck(___rhs);
		bool L_0 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m460_MethodInfo, ___rhs, ___lhs);
		return L_0;
	}

IL_0017:
	{
		if (___rhs)
		{
			goto IL_0025;
		}
	}
	{
		NullCheck(___lhs);
		bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m460_MethodInfo, ___lhs, ___rhs);
		return L_1;
	}

IL_0025:
	{
		NullCheck(___lhs);
		Type_t * L_2 = Object_GetType_m440(___lhs, /*hidden argument*/&Object_GetType_m440_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_3 = Type_GetTypeCode_m5313(NULL /*static, unused*/, L_2, /*hidden argument*/&Type_GetTypeCode_m5313_MethodInfo);
		V_0 = L_3;
		NullCheck(___rhs);
		Type_t * L_4 = Object_GetType_m440(___rhs, /*hidden argument*/&Object_GetType_m440_MethodInfo);
		int32_t L_5 = Type_GetTypeCode_m5313(NULL /*static, unused*/, L_4, /*hidden argument*/&Type_GetTypeCode_m5313_MethodInfo);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_6 = RuntimeServices_IsNumeric_m5226(NULL /*static, unused*/, V_0, /*hidden argument*/&RuntimeServices_IsNumeric_m5226_MethodInfo);
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_IsNumeric_m5226(NULL /*static, unused*/, V_1, /*hidden argument*/&RuntimeServices_IsNumeric_m5226_MethodInfo);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_8 = RuntimeServices_EqualityOperator_m5229(NULL /*static, unused*/, ___lhs, V_0, ___rhs, V_1, /*hidden argument*/&RuntimeServices_EqualityOperator_m5229_MethodInfo);
		return L_8;
	}

IL_005d:
	{
		V_2 = ((Array_t *)IsInst(___lhs, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		if (!V_2)
		{
			goto IL_007f;
		}
	}
	{
		V_3 = ((Array_t *)IsInst(___rhs, InitializedTypeInfo(&Array_t_il2cpp_TypeInfo)));
		if (!V_3)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_9 = RuntimeServices_ArrayEqualityImpl_m5227(NULL /*static, unused*/, V_2, V_3, /*hidden argument*/&RuntimeServices_ArrayEqualityImpl_m5227_MethodInfo);
		return L_9;
	}

IL_007f:
	{
		NullCheck(___lhs);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m460_MethodInfo, ___lhs, ___rhs);
		if (L_10)
		{
			goto IL_0094;
		}
	}
	{
		NullCheck(___rhs);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m460_MethodInfo, ___rhs, ___lhs);
		G_B15_0 = ((int32_t)(L_11));
		goto IL_0095;
	}

IL_0094:
	{
		G_B15_0 = 1;
	}

IL_0095:
	{
		return G_B15_0;
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
 bool RuntimeServices_ArrayEqualityImpl_m5227 (Object_t * __this/* static, unused */, Array_t * ___lhs, Array_t * ___rhs, MethodInfo* method){
	int32_t V_0 = 0;
	{
		NullCheck(___lhs);
		int32_t L_0 = Array_get_Rank_m5316(___lhs, /*hidden argument*/&Array_get_Rank_m5316_MethodInfo);
		if ((((uint32_t)L_0) != ((uint32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		NullCheck(___rhs);
		int32_t L_1 = Array_get_Rank_m5316(___rhs, /*hidden argument*/&Array_get_Rank_m5316_MethodInfo);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t116 * L_2 = (ArgumentException_t116 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t116_il2cpp_TypeInfo));
		ArgumentException__ctor_m586(L_2, (String_t*) &_stringLiteral487, /*hidden argument*/&ArgumentException__ctor_m586_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0023:
	{
		NullCheck(___lhs);
		int32_t L_3 = Array_get_Length_m1819(___lhs, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		NullCheck(___rhs);
		int32_t L_4 = Array_get_Length_m1819(___rhs, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		V_0 = 0;
		goto IL_005b;
	}

IL_003d:
	{
		NullCheck(___lhs);
		Object_t * L_5 = Array_GetValue_m5317(___lhs, V_0, /*hidden argument*/&Array_GetValue_m5317_MethodInfo);
		NullCheck(___rhs);
		Object_t * L_6 = Array_GetValue_m5317(___rhs, V_0, /*hidden argument*/&Array_GetValue_m5317_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		bool L_7 = RuntimeServices_EqualityOperator_m1878(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&RuntimeServices_EqualityOperator_m1878_MethodInfo);
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		return 0;
	}

IL_0057:
	{
		V_0 = ((int32_t)(V_0+1));
	}

IL_005b:
	{
		NullCheck(___lhs);
		int32_t L_8 = Array_get_Length_m1819(___lhs, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		if ((((int32_t)V_0) < ((int32_t)L_8)))
		{
			goto IL_003d;
		}
	}
	{
		return 1;
	}
}
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
 int32_t RuntimeServices_GetConvertTypeCode_m5228 (Object_t * __this/* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, MethodInfo* method){
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)15))))
		{
			goto IL_0010;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)15))))
		{
			goto IL_0013;
		}
	}

IL_0010:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0013:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)14))))
		{
			goto IL_0023;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)14))))
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		return (int32_t)(((int32_t)14));
	}

IL_0026:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)13))))
		{
			goto IL_0036;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)13))))
		{
			goto IL_0039;
		}
	}

IL_0036:
	{
		return (int32_t)(((int32_t)13));
	}

IL_0039:
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)12))))
		{
			goto IL_0065;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)5)))
		{
			goto IL_005f;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)7)))
		{
			goto IL_005f;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_0062;
		}
	}

IL_005f:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0062:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0065:
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)12))))
		{
			goto IL_0091;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)5)))
		{
			goto IL_008b;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)7)))
		{
			goto IL_008b;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)9))))
		{
			goto IL_008b;
		}
	}
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_008e;
		}
	}

IL_008b:
	{
		return (int32_t)(((int32_t)11));
	}

IL_008e:
	{
		return (int32_t)(((int32_t)12));
	}

IL_0091:
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)((int32_t)11))))
		{
			goto IL_00a1;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)11))))
		{
			goto IL_00a4;
		}
	}

IL_00a1:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00a4:
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)10))))
		{
			goto IL_00c8;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)5)))
		{
			goto IL_00c2;
		}
	}
	{
		if ((((int32_t)___rhsTypeCode) == ((int32_t)7)))
		{
			goto IL_00c2;
		}
	}
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)9))))
		{
			goto IL_00c5;
		}
	}

IL_00c2:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00c5:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00c8:
	{
		if ((((uint32_t)___rhsTypeCode) != ((uint32_t)((int32_t)10))))
		{
			goto IL_00ec;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)5)))
		{
			goto IL_00e6;
		}
	}
	{
		if ((((int32_t)___lhsTypeCode) == ((int32_t)7)))
		{
			goto IL_00e6;
		}
	}
	{
		if ((((uint32_t)___lhsTypeCode) != ((uint32_t)((int32_t)9))))
		{
			goto IL_00e9;
		}
	}

IL_00e6:
	{
		return (int32_t)(((int32_t)11));
	}

IL_00e9:
	{
		return (int32_t)(((int32_t)10));
	}

IL_00ec:
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
 bool RuntimeServices_EqualityOperator_m5229 (Object_t * __this/* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, MethodInfo* method){
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = {0};
	{
		V_0 = ((Object_t *)Castclass(___lhs, InitializedTypeInfo(&IConvertible_t85_il2cpp_TypeInfo)));
		V_1 = ((Object_t *)Castclass(___rhs, InitializedTypeInfo(&IConvertible_t85_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		int32_t L_0 = RuntimeServices_GetConvertTypeCode_m5228(NULL /*static, unused*/, ___lhsTypeCode, ___rhsTypeCode, /*hidden argument*/&RuntimeServices_GetConvertTypeCode_m5228_MethodInfo);
		V_2 = L_0;
		if (((int32_t)(V_2-((int32_t)10))) == 0)
		{
			goto IL_0094;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 1)
		{
			goto IL_0083;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 2)
		{
			goto IL_0072;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 3)
		{
			goto IL_0061;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 4)
		{
			goto IL_0050;
		}
		if (((int32_t)(V_2-((int32_t)10))) == 5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00a5;
	}

IL_003c:
	{
		NullCheck(V_0);
		Decimal_t5  L_1 = (Decimal_t5 )InterfaceFuncInvoker1< Decimal_t5 , Object_t * >::Invoke(&IConvertible_ToDecimal_m5318_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		Decimal_t5  L_2 = (Decimal_t5 )InterfaceFuncInvoker1< Decimal_t5 , Object_t * >::Invoke(&IConvertible_ToDecimal_m5318_MethodInfo, V_1, (Object_t *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Decimal_t5_il2cpp_TypeInfo));
		bool L_3 = Decimal_op_Equality_m5319(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Decimal_op_Equality_m5319_MethodInfo);
		return L_3;
	}

IL_0050:
	{
		NullCheck(V_0);
		double L_4 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m5320_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		double L_5 = (double)InterfaceFuncInvoker1< double, Object_t * >::Invoke(&IConvertible_ToDouble_m5320_MethodInfo, V_1, (Object_t *)NULL);
		return ((((double)L_4) == ((double)L_5))? 1 : 0);
	}

IL_0061:
	{
		NullCheck(V_0);
		float L_6 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m5321_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		float L_7 = (float)InterfaceFuncInvoker1< float, Object_t * >::Invoke(&IConvertible_ToSingle_m5321_MethodInfo, V_1, (Object_t *)NULL);
		return ((((float)L_6) == ((float)L_7))? 1 : 0);
	}

IL_0072:
	{
		NullCheck(V_0);
		uint64_t L_8 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m5322_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		uint64_t L_9 = (uint64_t)InterfaceFuncInvoker1< uint64_t, Object_t * >::Invoke(&IConvertible_ToUInt64_m5322_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int64_t)L_8) == ((int64_t)L_9))? 1 : 0);
	}

IL_0083:
	{
		NullCheck(V_0);
		int64_t L_10 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m5323_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		int64_t L_11 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(&IConvertible_ToInt64_m5323_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int64_t)L_10) == ((int64_t)L_11))? 1 : 0);
	}

IL_0094:
	{
		NullCheck(V_0);
		uint32_t L_12 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m5324_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		uint32_t L_13 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(&IConvertible_ToUInt32_m5324_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
	}

IL_00a5:
	{
		NullCheck(V_0);
		int32_t L_14 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m5325_MethodInfo, V_0, (Object_t *)NULL);
		NullCheck(V_1);
		int32_t L_15 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IConvertible_ToInt32_m5325_MethodInfo, V_1, (Object_t *)NULL);
		return ((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}
}
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
 bool RuntimeServices_IsPromotableNumeric_m5230 (Object_t * __this/* static, unused */, int32_t ___code, MethodInfo* method){
	int32_t V_0 = {0};
	{
		V_0 = ___code;
		if (((int32_t)(V_0-3)) == 0)
		{
			goto IL_0057;
		}
		if (((int32_t)(V_0-3)) == 1)
		{
			goto IL_005b;
		}
		if (((int32_t)(V_0-3)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)(V_0-3)) == 3)
		{
			goto IL_0043;
		}
		if (((int32_t)(V_0-3)) == 4)
		{
			goto IL_0047;
		}
		if (((int32_t)(V_0-3)) == 5)
		{
			goto IL_004d;
		}
		if (((int32_t)(V_0-3)) == 6)
		{
			goto IL_0049;
		}
		if (((int32_t)(V_0-3)) == 7)
		{
			goto IL_004f;
		}
		if (((int32_t)(V_0-3)) == 8)
		{
			goto IL_004b;
		}
		if (((int32_t)(V_0-3)) == 9)
		{
			goto IL_0051;
		}
		if (((int32_t)(V_0-3)) == 10)
		{
			goto IL_0053;
		}
		if (((int32_t)(V_0-3)) == 11)
		{
			goto IL_0055;
		}
		if (((int32_t)(V_0-3)) == 12)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005d;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		return 1;
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		return 1;
	}

IL_004b:
	{
		return 1;
	}

IL_004d:
	{
		return 1;
	}

IL_004f:
	{
		return 1;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 1;
	}

IL_0055:
	{
		return 1;
	}

IL_0057:
	{
		return 1;
	}

IL_0059:
	{
		return 1;
	}

IL_005b:
	{
		return 1;
	}

IL_005d:
	{
		return 0;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
 MethodInfo_t198 * RuntimeServices_FindImplicitConversionOperator_m5231 (Object_t * __this/* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method){
	int32_t V_0 = {0};
	MethodInfo_t198 * G_B3_0 = {0};
	MethodInfo_t198 * G_B1_0 = {0};
	MethodInfo_t198 * G_B2_0 = {0};
	{
		NullCheck(___from);
		MethodInfoU5BU5D_t1163* L_0 = (MethodInfoU5BU5D_t1163*)VirtFuncInvoker1< MethodInfoU5BU5D_t1163*, int32_t >::Invoke(&Type_GetMethods_m5326_MethodInfo, ___from, ((int32_t)88));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		MethodInfo_t198 * L_1 = RuntimeServices_FindImplicitConversionMethod_m5233(NULL /*static, unused*/, (Object_t*)(Object_t*)L_0, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m5233_MethodInfo);
		MethodInfo_t198 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0038;
		}
	}
	{
		NullCheck(___to);
		MethodInfoU5BU5D_t1163* L_3 = (MethodInfoU5BU5D_t1163*)VirtFuncInvoker1< MethodInfoU5BU5D_t1163*, int32_t >::Invoke(&Type_GetMethods_m5326_MethodInfo, ___to, ((int32_t)88));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		MethodInfo_t198 * L_4 = RuntimeServices_FindImplicitConversionMethod_m5233(NULL /*static, unused*/, (Object_t*)(Object_t*)L_3, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m5233_MethodInfo);
		MethodInfo_t198 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RuntimeServices_t441_il2cpp_TypeInfo));
		Object_t* L_6 = RuntimeServices_GetExtensionMethods_m5232(NULL /*static, unused*/, /*hidden argument*/&RuntimeServices_GetExtensionMethods_m5232_MethodInfo);
		MethodInfo_t198 * L_7 = RuntimeServices_FindImplicitConversionMethod_m5233(NULL /*static, unused*/, L_6, ___from, ___to, /*hidden argument*/&RuntimeServices_FindImplicitConversionMethod_m5233_MethodInfo);
		G_B3_0 = L_7;
	}

IL_0038:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
 Object_t* RuntimeServices_GetExtensionMethods_m5232 (Object_t * __this/* static, unused */, MethodInfo* method){
	U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * V_0 = {0};
	{
		U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * L_0 = (U3CGetExtensionMethodsU3Ec__IteratorC_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo));
		U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207(L_0, /*hidden argument*/&U3CGetExtensionMethodsU3Ec__IteratorC__ctor_m5207_MethodInfo);
		V_0 = L_0;
		U3CGetExtensionMethodsU3Ec__IteratorC_t1144 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___$PC_2 = ((int32_t)-2);
		return L_1;
	}
}
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
 MethodInfo_t198 * RuntimeServices_FindImplicitConversionMethod_m5233 (Object_t * __this/* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, MethodInfo* method){
	MethodInfo_t198 * V_0 = {0};
	Object_t* V_1 = {0};
	ParameterInfoU5BU5D_t1067* V_2 = {0};
	MethodInfo_t198 * V_3 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t71 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t71 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		NullCheck(___candidates);
		Object_t* L_0 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(&IEnumerable_1_GetEnumerator_m5327_MethodInfo, ___candidates);
		V_1 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_000c:
		{
			NullCheck(V_1);
			MethodInfo_t198 * L_1 = (MethodInfo_t198 *)InterfaceFuncInvoker0< MethodInfo_t198 * >::Invoke(&IEnumerator_1_get_Current_m5328_MethodInfo, V_1);
			V_0 = L_1;
			NullCheck(V_0);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m1147_MethodInfo, V_0);
			IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
			bool L_3 = String_op_Inequality_m511(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral488, /*hidden argument*/&String_op_Inequality_m511_MethodInfo);
			if (!L_3)
			{
				goto IL_002d;
			}
		}

IL_0028:
		{
			goto IL_0072;
		}

IL_002d:
		{
			NullCheck(V_0);
			Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m1283_MethodInfo, V_0);
			if ((((Type_t *)L_4) == ((Type_t *)___to)))
			{
				goto IL_003e;
			}
		}

IL_0039:
		{
			goto IL_0072;
		}

IL_003e:
		{
			NullCheck(V_0);
			ParameterInfoU5BU5D_t1067* L_5 = (ParameterInfoU5BU5D_t1067*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1067* >::Invoke(&MethodBase_GetParameters_m5088_MethodInfo, V_0);
			V_2 = L_5;
			NullCheck(V_2);
			if ((((int32_t)(((int32_t)(((Array_t *)V_2)->max_length)))) == ((int32_t)1)))
			{
				goto IL_0053;
			}
		}

IL_004e:
		{
			goto IL_0072;
		}

IL_0053:
		{
			NullCheck(V_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(V_2, 0);
			int32_t L_6 = 0;
			NullCheck((*(ParameterInfo_t1068 **)(ParameterInfo_t1068 **)SZArrayLdElema(V_2, L_6)));
			Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m5089_MethodInfo, (*(ParameterInfo_t1068 **)(ParameterInfo_t1068 **)SZArrayLdElema(V_2, L_6)));
			NullCheck(L_7);
			bool L_8 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m1419_MethodInfo, L_7, ___from);
			if (L_8)
			{
				goto IL_006b;
			}
		}

IL_0066:
		{
			goto IL_0072;
		}

IL_006b:
		{
			V_3 = V_0;
			// IL_006d: leave IL_008f
			leaveInstructions[0] = 0x8F; // 1
			THROW_SENTINEL(IL_008f);
			// finally target depth: 1
		}

IL_0072:
		{
			NullCheck(V_1);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m432_MethodInfo, V_1);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_007d:
		{
			// IL_007d: leave IL_008d
			leaveInstructions[0] = 0x8D; // 1
			THROW_SENTINEL(IL_008d);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0082;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t71 *)e.ex;
		goto IL_0082;
	}

IL_0082:
	{ // begin finally (depth: 1)
		{
			if (V_1)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
				case 0x8D:
					goto IL_008d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}

IL_0086:
		{
			NullCheck(V_1);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m425_MethodInfo, V_1);
			// finally node depth: 1
			switch (leaveInstructions[0])
			{
				case 0x8F:
					goto IL_008f;
				case 0x8D:
					goto IL_008d;
				default:
				{
					#if IL2CPP_DEBUG
					assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
					#endif
					Exception_t71 * _tmp_exception_local = __last_unhandled_exception;
					__last_unhandled_exception = 0;
					il2cpp_codegen_raise_exception(_tmp_exception_local);
				}
			}
		}
	} // end finally (depth: 1)

IL_008d:
	{
		return (MethodInfo_t198 *)NULL;
	}

IL_008f:
	{
		return V_3;
	}
}
// Metadata Definition Boo.Lang.Runtime.RuntimeServices
extern Il2CppType ObjectU5BU5D_t112_0_0_49;
FieldInfo RuntimeServices_t441____NoArguments_0_FieldInfo = 
{
	"NoArguments"/* name */
	, &ObjectU5BU5D_t112_0_0_49/* type */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t441_StaticFields, ___NoArguments_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Type_t_0_0_49;
FieldInfo RuntimeServices_t441____RuntimeServicesType_1_FieldInfo = 
{
	"RuntimeServicesType"/* name */
	, &Type_t_0_0_49/* type */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t441_StaticFields, ___RuntimeServicesType_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DispatcherCache_t1135_0_0_49;
FieldInfo RuntimeServices_t441_____cache_2_FieldInfo = 
{
	"_cache"/* name */
	, &DispatcherCache_t1135_0_0_49/* type */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t441_StaticFields, ____cache_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ExtensionRegistry_t1141_0_0_49;
FieldInfo RuntimeServices_t441_____extensions_3_FieldInfo = 
{
	"_extensions"/* name */
	, &ExtensionRegistry_t1141_0_0_49/* type */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t441_StaticFields, ____extensions_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_49;
FieldInfo RuntimeServices_t441____True_4_FieldInfo = 
{
	"True"/* name */
	, &Object_t_0_0_49/* type */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* parent */
	, offsetof(RuntimeServices_t441_StaticFields, ___True_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RuntimeServices_t441_FieldInfos[] =
{
	&RuntimeServices_t441____NoArguments_0_FieldInfo,
	&RuntimeServices_t441____RuntimeServicesType_1_FieldInfo,
	&RuntimeServices_t441_____cache_2_FieldInfo,
	&RuntimeServices_t441_____extensions_3_FieldInfo,
	&RuntimeServices_t441____True_4_FieldInfo,
	NULL
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
MethodInfo RuntimeServices__cctor_m5218_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&RuntimeServices__cctor_m5218/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 78/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType TypeU5BU5D_t146_0_0_0;
extern Il2CppType DispatcherFactory_t1133_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_GetDispatcher_m5219_ParameterInfos[] = 
{
	{"target", 0, 134217788, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"cacheKeyName", 1, 134217789, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"cacheKeyTypes", 2, 134217790, &EmptyCustomAttributesCache, &TypeU5BU5D_t146_0_0_0},
	{"factory", 3, 134217791, &EmptyCustomAttributesCache, &DispatcherFactory_t1133_0_0_0},
};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
MethodInfo RuntimeServices_GetDispatcher_m5219_MethodInfo = 
{
	"GetDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_GetDispatcher_m5219/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_GetDispatcher_m5219_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 79/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_Coerce_m1767_ParameterInfos[] = 
{
	{"value", 0, 134217792, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"toType", 1, 134217793, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
MethodInfo RuntimeServices_Coerce_m1767_MethodInfo = 
{
	"Coerce"/* name */
	, (methodPointerType)&RuntimeServices_Coerce_m1767/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_Coerce_m1767_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 80/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_CreateCoerceDispatcher_m5220_ParameterInfos[] = 
{
	{"value", 0, 134217794, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"toType", 1, 134217795, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
MethodInfo RuntimeServices_CreateCoerceDispatcher_m5220_MethodInfo = 
{
	"CreateCoerceDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_CreateCoerceDispatcher_m5220/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_CreateCoerceDispatcher_m5220_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 81/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_EmitPromotionDispatcher_m5221_ParameterInfos[] = 
{
	{"fromType", 0, 134217796, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"toType", 1, 134217797, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
MethodInfo RuntimeServices_EmitPromotionDispatcher_m5221_MethodInfo = 
{
	"EmitPromotionDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_EmitPromotionDispatcher_m5221/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_EmitPromotionDispatcher_m5221_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 82/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_IsPromotableNumeric_m5222_ParameterInfos[] = 
{
	{"fromType", 0, 134217798, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
MethodInfo RuntimeServices_IsPromotableNumeric_m5222_MethodInfo = 
{
	"IsPromotableNumeric"/* name */
	, (methodPointerType)&RuntimeServices_IsPromotableNumeric_m5222/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_IsPromotableNumeric_m5222_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 83/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType MethodInfo_t198_0_0_0;
extern Il2CppType MethodInfo_t198_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_EmitImplicitConversionDispatcher_m5223_ParameterInfos[] = 
{
	{"method", 0, 134217799, &EmptyCustomAttributesCache, &MethodInfo_t198_0_0_0},
};
extern Il2CppType Dispatcher_t1132_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
MethodInfo RuntimeServices_EmitImplicitConversionDispatcher_m5223_MethodInfo = 
{
	"EmitImplicitConversionDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_EmitImplicitConversionDispatcher_m5223/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Dispatcher_t1132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_EmitImplicitConversionDispatcher_m5223_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 84/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t112_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_CoercibleDispatcher_m5224_ParameterInfos[] = 
{
	{"o", 0, 134217800, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217801, &EmptyCustomAttributesCache, &ObjectU5BU5D_t112_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
MethodInfo RuntimeServices_CoercibleDispatcher_m5224_MethodInfo = 
{
	"CoercibleDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_CoercibleDispatcher_m5224/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_CoercibleDispatcher_m5224_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 85/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t112_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_IdentityDispatcher_m5225_ParameterInfos[] = 
{
	{"o", 0, 134217802, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217803, &EmptyCustomAttributesCache, &ObjectU5BU5D_t112_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
MethodInfo RuntimeServices_IdentityDispatcher_m5225_MethodInfo = 
{
	"IdentityDispatcher"/* name */
	, (methodPointerType)&RuntimeServices_IdentityDispatcher_m5225/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_IdentityDispatcher_m5225_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 86/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TypeCode_t1161_0_0_0;
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_IsNumeric_m5226_ParameterInfos[] = 
{
	{"code", 0, 134217804, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
MethodInfo RuntimeServices_IsNumeric_m5226_MethodInfo = 
{
	"IsNumeric"/* name */
	, (methodPointerType)&RuntimeServices_IsNumeric_m5226/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_IsNumeric_m5226_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 87/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_op_Addition_m1864_ParameterInfos[] = 
{
	{"lhs", 0, 134217805, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"rhs", 1, 134217806, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
MethodInfo RuntimeServices_op_Addition_m1864_MethodInfo = 
{
	"op_Addition"/* name */
	, (methodPointerType)&RuntimeServices_op_Addition_m1864/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_op_Addition_m1864_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 88/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_op_Addition_m1934_ParameterInfos[] = 
{
	{"lhs", 0, 134217807, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"rhs", 1, 134217808, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.Object)
MethodInfo RuntimeServices_op_Addition_m1934_MethodInfo = 
{
	"op_Addition"/* name */
	, (methodPointerType)&RuntimeServices_op_Addition_m1934/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_op_Addition_m1934_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 89/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_EqualityOperator_m1878_ParameterInfos[] = 
{
	{"lhs", 0, 134217809, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"rhs", 1, 134217810, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
MethodInfo RuntimeServices_EqualityOperator_m1878_MethodInfo = 
{
	"EqualityOperator"/* name */
	, (methodPointerType)&RuntimeServices_EqualityOperator_m1878/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_EqualityOperator_m1878_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 90/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_ArrayEqualityImpl_m5227_ParameterInfos[] = 
{
	{"lhs", 0, 134217811, &EmptyCustomAttributesCache, &Array_t_0_0_0},
	{"rhs", 1, 134217812, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
MethodInfo RuntimeServices_ArrayEqualityImpl_m5227_MethodInfo = 
{
	"ArrayEqualityImpl"/* name */
	, (methodPointerType)&RuntimeServices_ArrayEqualityImpl_m5227/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_ArrayEqualityImpl_m5227_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 91/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TypeCode_t1161_0_0_0;
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_GetConvertTypeCode_m5228_ParameterInfos[] = 
{
	{"lhsTypeCode", 0, 134217813, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
	{"rhsTypeCode", 1, 134217814, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType TypeCode_t1161_0_0_0;
extern void* RuntimeInvoker_TypeCode_t1161_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
MethodInfo RuntimeServices_GetConvertTypeCode_m5228_MethodInfo = 
{
	"GetConvertTypeCode"/* name */
	, (methodPointerType)&RuntimeServices_GetConvertTypeCode_m5228/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t1161_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t1161_Int32_t63_Int32_t63/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_GetConvertTypeCode_m5228_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 92/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType TypeCode_t1161_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_EqualityOperator_m5229_ParameterInfos[] = 
{
	{"lhs", 0, 134217815, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"lhsTypeCode", 1, 134217816, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
	{"rhs", 2, 134217817, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"rhsTypeCode", 3, 134217818, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t_Int32_t63_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
MethodInfo RuntimeServices_EqualityOperator_m5229_MethodInfo = 
{
	"EqualityOperator"/* name */
	, (methodPointerType)&RuntimeServices_EqualityOperator_m5229/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t_Int32_t63_Object_t_Int32_t63/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_EqualityOperator_m5229_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 93/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TypeCode_t1161_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_IsPromotableNumeric_m5230_ParameterInfos[] = 
{
	{"code", 0, 134217819, &EmptyCustomAttributesCache, &TypeCode_t1161_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
MethodInfo RuntimeServices_IsPromotableNumeric_m5230_MethodInfo = 
{
	"IsPromotableNumeric"/* name */
	, (methodPointerType)&RuntimeServices_IsPromotableNumeric_m5230/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_IsPromotableNumeric_m5230_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 94/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_FindImplicitConversionOperator_m5231_ParameterInfos[] = 
{
	{"from", 0, 134217820, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"to", 1, 134217821, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType MethodInfo_t198_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
MethodInfo RuntimeServices_FindImplicitConversionOperator_m5231_MethodInfo = 
{
	"FindImplicitConversionOperator"/* name */
	, (methodPointerType)&RuntimeServices_FindImplicitConversionOperator_m5231/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t198_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_FindImplicitConversionOperator_m5231_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 95/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerable_1_t1148_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache RuntimeServices_t441__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m5232;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
MethodInfo RuntimeServices_GetExtensionMethods_m5232_MethodInfo = 
{
	"GetExtensionMethods"/* name */
	, (methodPointerType)&RuntimeServices_GetExtensionMethods_m5232/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t1148_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &RuntimeServices_t441__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m5232/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 96/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerable_1_t1148_0_0_0;
extern Il2CppType IEnumerable_1_t1148_0_0_0;
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo RuntimeServices_t441_RuntimeServices_FindImplicitConversionMethod_m5233_ParameterInfos[] = 
{
	{"candidates", 0, 134217822, &EmptyCustomAttributesCache, &IEnumerable_1_t1148_0_0_0},
	{"from", 1, 134217823, &EmptyCustomAttributesCache, &Type_t_0_0_0},
	{"to", 2, 134217824, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType MethodInfo_t198_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
MethodInfo RuntimeServices_FindImplicitConversionMethod_m5233_MethodInfo = 
{
	"FindImplicitConversionMethod"/* name */
	, (methodPointerType)&RuntimeServices_FindImplicitConversionMethod_m5233/* method */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t198_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, RuntimeServices_t441_RuntimeServices_FindImplicitConversionMethod_m5233_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 97/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RuntimeServices_t441_MethodInfos[] =
{
	&RuntimeServices__cctor_m5218_MethodInfo,
	&RuntimeServices_GetDispatcher_m5219_MethodInfo,
	&RuntimeServices_Coerce_m1767_MethodInfo,
	&RuntimeServices_CreateCoerceDispatcher_m5220_MethodInfo,
	&RuntimeServices_EmitPromotionDispatcher_m5221_MethodInfo,
	&RuntimeServices_IsPromotableNumeric_m5222_MethodInfo,
	&RuntimeServices_EmitImplicitConversionDispatcher_m5223_MethodInfo,
	&RuntimeServices_CoercibleDispatcher_m5224_MethodInfo,
	&RuntimeServices_IdentityDispatcher_m5225_MethodInfo,
	&RuntimeServices_IsNumeric_m5226_MethodInfo,
	&RuntimeServices_op_Addition_m1864_MethodInfo,
	&RuntimeServices_op_Addition_m1934_MethodInfo,
	&RuntimeServices_EqualityOperator_m1878_MethodInfo,
	&RuntimeServices_ArrayEqualityImpl_m5227_MethodInfo,
	&RuntimeServices_GetConvertTypeCode_m5228_MethodInfo,
	&RuntimeServices_EqualityOperator_m5229_MethodInfo,
	&RuntimeServices_IsPromotableNumeric_m5230_MethodInfo,
	&RuntimeServices_FindImplicitConversionOperator_m5231_MethodInfo,
	&RuntimeServices_GetExtensionMethods_m5232_MethodInfo,
	&RuntimeServices_FindImplicitConversionMethod_m5233_MethodInfo,
	NULL
};
extern TypeInfo U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo;
extern TypeInfo U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo;
extern TypeInfo U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo;
static TypeInfo* RuntimeServices_t441_il2cpp_TypeInfo__nestedTypes[4] =
{
	&U3CGetExtensionMethodsU3Ec__IteratorC_t1144_il2cpp_TypeInfo,
	&U3CCoerceU3Ec__AnonStorey1D_t1146_il2cpp_TypeInfo,
	&U3CEmitImplicitConversionDispatcherU3Ec__AnonStorey1E_t1147_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* RuntimeServices_t441_VTable[] =
{
	&Object_Equals_m460_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&Object_GetHashCode_m461_MethodInfo,
	&Object_ToString_m435_MethodInfo,
};
void RuntimeServices_t441_CustomAttributesCacheGenerator_RuntimeServices_GetExtensionMethods_m5232(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t90 * tmp;
		tmp = (DebuggerHiddenAttribute_t90 *)il2cpp_codegen_object_new (&DebuggerHiddenAttribute_t90_il2cpp_TypeInfo);
		DebuggerHiddenAttribute__ctor_m493(tmp, &DebuggerHiddenAttribute__ctor_m493_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache RuntimeServices_t441__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m5232 = {
1,
NULL,
&RuntimeServices_t441_CustomAttributesCacheGenerator_RuntimeServices_GetExtensionMethods_m5232
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType RuntimeServices_t441_1_0_0;
struct RuntimeServices_t441;
extern CustomAttributesCache RuntimeServices_t441__CustomAttributeCache_RuntimeServices_GetExtensionMethods_m5232;
TypeInfo RuntimeServices_t441_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "RuntimeServices"/* name */
	, "Boo.Lang.Runtime"/* namespaze */
	, RuntimeServices_t441_MethodInfos/* methods */
	, NULL/* properties */
	, RuntimeServices_t441_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, RuntimeServices_t441_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, RuntimeServices_t441_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RuntimeServices_t441_il2cpp_TypeInfo/* cast_class */
	, &RuntimeServices_t441_0_0_0/* byval_arg */
	, &RuntimeServices_t441_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RuntimeServices_t441)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(RuntimeServices_t441_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 20/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 3/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
 void Dispatcher__ctor_m5234 (Dispatcher_t1132 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
 Object_t * Dispatcher_Invoke_m5235 (Dispatcher_t1132 * __this, Object_t * ___target, ObjectU5BU5D_t112* ___args, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		Dispatcher_Invoke_m5235((Dispatcher_t1132 *)__this->___prev_9,___target, ___args, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___target, ObjectU5BU5D_t112* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___target, ObjectU5BU5D_t112* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t112* ___args, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___target, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
Object_t * pinvoke_delegate_wrapper_Dispatcher_t1132(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t112* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t *, Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___target' to native representation
	Object_t * ____target_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____target_marshaled, ____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___target' native representation

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern MethodInfo Dispatcher_BeginInvoke_m5236_MethodInfo;
 Object_t * Dispatcher_BeginInvoke_m5236 (Dispatcher_t1132 * __this, Object_t * ___target, ObjectU5BU5D_t112* ___args, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = ___target;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern MethodInfo Dispatcher_EndInvoke_m5237_MethodInfo;
 Object_t * Dispatcher_EndInvoke_m5237 (Dispatcher_t1132 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition Boo.Lang.Runtime.DynamicDispatching.Dispatcher
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t107_0_0_0;
static ParameterInfo Dispatcher_t1132_Dispatcher__ctor_m5234_ParameterInfos[] = 
{
	{"object", 0, 134217827, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217828, &EmptyCustomAttributesCache, &IntPtr_t107_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_IntPtr_t107 (MethodInfo* method, void* obj, void** args);
// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
MethodInfo Dispatcher__ctor_m5234_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Dispatcher__ctor_m5234/* method */
	, &Dispatcher_t1132_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_IntPtr_t107/* invoker_method */
	, Dispatcher_t1132_Dispatcher__ctor_m5234_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 109/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t112_0_0_0;
static ParameterInfo Dispatcher_t1132_Dispatcher_Invoke_m5235_ParameterInfos[] = 
{
	{"target", 0, 134217829, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217830, &EmptyCustomAttributesCache, &ObjectU5BU5D_t112_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
MethodInfo Dispatcher_Invoke_m5235_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Dispatcher_Invoke_m5235/* method */
	, &Dispatcher_t1132_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, Dispatcher_t1132_Dispatcher_Invoke_m5235_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 110/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType ObjectU5BU5D_t112_0_0_0;
extern Il2CppType AsyncCallback_t473_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Dispatcher_t1132_Dispatcher_BeginInvoke_m5236_ParameterInfos[] = 
{
	{"target", 0, 134217831, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"args", 1, 134217832, &EmptyCustomAttributesCache, &ObjectU5BU5D_t112_0_0_0},
	{"callback", 2, 134217833, &EmptyCustomAttributesCache, &AsyncCallback_t473_0_0_0},
	{"object", 3, 134217834, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t472_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
MethodInfo Dispatcher_BeginInvoke_m5236_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Dispatcher_BeginInvoke_m5236/* method */
	, &Dispatcher_t1132_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t472_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Dispatcher_t1132_Dispatcher_BeginInvoke_m5236_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 111/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t472_0_0_0;
static ParameterInfo Dispatcher_t1132_Dispatcher_EndInvoke_m5237_ParameterInfos[] = 
{
	{"result", 0, 134217835, &EmptyCustomAttributesCache, &IAsyncResult_t472_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
MethodInfo Dispatcher_EndInvoke_m5237_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Dispatcher_EndInvoke_m5237/* method */
	, &Dispatcher_t1132_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Dispatcher_t1132_Dispatcher_EndInvoke_m5237_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 112/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Dispatcher_t1132_MethodInfos[] =
{
	&Dispatcher__ctor_m5234_MethodInfo,
	&Dispatcher_Invoke_m5235_MethodInfo,
	&Dispatcher_BeginInvoke_m5236_MethodInfo,
	&Dispatcher_EndInvoke_m5237_MethodInfo,
	NULL
};
static MethodInfo* Dispatcher_t1132_VTable[] =
{
	&MulticastDelegate_Equals_m3541_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&MulticastDelegate_GetHashCode_m3542_MethodInfo,
	&Object_ToString_m435_MethodInfo,
	&MulticastDelegate_GetObjectData_m3543_MethodInfo,
	&Delegate_Clone_m3544_MethodInfo,
	&MulticastDelegate_GetObjectData_m3543_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3545_MethodInfo,
	&MulticastDelegate_CombineImpl_m3546_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3547_MethodInfo,
	&Dispatcher_Invoke_m5235_MethodInfo,
	&Dispatcher_BeginInvoke_m5236_MethodInfo,
	&Dispatcher_EndInvoke_m5237_MethodInfo,
};
static Il2CppInterfaceOffsetPair Dispatcher_t1132_InterfacesOffsets[] = 
{
	{ &ICloneable_t742_il2cpp_TypeInfo, 4},
	{ &ISerializable_t292_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Boo_Lang_dll_Image;
extern Il2CppType Dispatcher_t1132_1_0_0;
struct Dispatcher_t1132;
TypeInfo Dispatcher_t1132_il2cpp_TypeInfo = 
{
	&g_Boo_Lang_dll_Image/* image */
	, NULL/* gc_desc */
	, "Dispatcher"/* name */
	, "Boo.Lang.Runtime.DynamicDispatching"/* namespaze */
	, Dispatcher_t1132_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t594_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Dispatcher_t1132_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Dispatcher_t1132_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Dispatcher_t1132_il2cpp_TypeInfo/* cast_class */
	, &Dispatcher_t1132_0_0_0/* byval_arg */
	, &Dispatcher_t1132_1_0_0/* this_arg */
	, Dispatcher_t1132_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_Dispatcher_t1132/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Dispatcher_t1132)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
