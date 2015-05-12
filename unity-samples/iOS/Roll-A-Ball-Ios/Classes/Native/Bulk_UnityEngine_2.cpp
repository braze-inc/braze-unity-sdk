#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
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
extern TypeInfo LocalUser_t821_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Void
#include "mscorlib_System_Void.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
extern TypeInfo UserProfileU5BU5D_t820_il2cpp_TypeInfo;
extern TypeInfo UserProfile_t947_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern MethodInfo UserProfile__ctor_m4880_MethodInfo;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern MethodInfo LocalUser__ctor_m4875_MethodInfo;
 void LocalUser__ctor_m4875 (LocalUser_t821 * __this, MethodInfo* method){
	{
		UserProfile__ctor_m4880(__this, /*hidden argument*/&UserProfile__ctor_m4880_MethodInfo);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t956*)((UserProfileU5BU5D_t820*)SZArrayNew(InitializedTypeInfo(&UserProfileU5BU5D_t820_il2cpp_TypeInfo), 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern MethodInfo LocalUser_SetFriends_m4876_MethodInfo;
 void LocalUser_SetFriends_m4876 (LocalUser_t821 * __this, IUserProfileU5BU5D_t956* ___friends, MethodInfo* method){
	{
		__this->___m_Friends_5 = ___friends;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern MethodInfo LocalUser_SetAuthenticated_m4877_MethodInfo;
 void LocalUser_SetAuthenticated_m4877 (LocalUser_t821 * __this, bool ___value, MethodInfo* method){
	{
		__this->___m_Authenticated_6 = ___value;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern MethodInfo LocalUser_SetUnderage_m4878_MethodInfo;
 void LocalUser_SetUnderage_m4878 (LocalUser_t821 * __this, bool ___value, MethodInfo* method){
	{
		__this->___m_Underage_7 = ___value;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern MethodInfo LocalUser_get_authenticated_m4879_MethodInfo;
 bool LocalUser_get_authenticated_m4879 (LocalUser_t821 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
// Metadata Definition UnityEngine.SocialPlatforms.Impl.LocalUser
extern Il2CppType IUserProfileU5BU5D_t956_0_0_1;
FieldInfo LocalUser_t821____m_Friends_5_FieldInfo = 
{
	"m_Friends"/* name */
	, &IUserProfileU5BU5D_t956_0_0_1/* type */
	, &LocalUser_t821_il2cpp_TypeInfo/* parent */
	, offsetof(LocalUser_t821, ___m_Friends_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo LocalUser_t821____m_Authenticated_6_FieldInfo = 
{
	"m_Authenticated"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &LocalUser_t821_il2cpp_TypeInfo/* parent */
	, offsetof(LocalUser_t821, ___m_Authenticated_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo LocalUser_t821____m_Underage_7_FieldInfo = 
{
	"m_Underage"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &LocalUser_t821_il2cpp_TypeInfo/* parent */
	, offsetof(LocalUser_t821, ___m_Underage_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* LocalUser_t821_FieldInfos[] =
{
	&LocalUser_t821____m_Friends_5_FieldInfo,
	&LocalUser_t821____m_Authenticated_6_FieldInfo,
	&LocalUser_t821____m_Underage_7_FieldInfo,
	NULL
};
static PropertyInfo LocalUser_t821____authenticated_PropertyInfo = 
{
	&LocalUser_t821_il2cpp_TypeInfo/* parent */
	, "authenticated"/* name */
	, &LocalUser_get_authenticated_m4879_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* LocalUser_t821_PropertyInfos[] =
{
	&LocalUser_t821____authenticated_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
MethodInfo LocalUser__ctor_m4875_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LocalUser__ctor_m4875/* method */
	, &LocalUser_t821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1442/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IUserProfileU5BU5D_t956_0_0_0;
extern Il2CppType IUserProfileU5BU5D_t956_0_0_0;
static ParameterInfo LocalUser_t821_LocalUser_SetFriends_m4876_ParameterInfos[] = 
{
	{"friends", 0, 134219359, &EmptyCustomAttributesCache, &IUserProfileU5BU5D_t956_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
MethodInfo LocalUser_SetFriends_m4876_MethodInfo = 
{
	"SetFriends"/* name */
	, (methodPointerType)&LocalUser_SetFriends_m4876/* method */
	, &LocalUser_t821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, LocalUser_t821_LocalUser_SetFriends_m4876_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1443/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
static ParameterInfo LocalUser_t821_LocalUser_SetAuthenticated_m4877_ParameterInfos[] = 
{
	{"value", 0, 134219360, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_SByte_t75 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
MethodInfo LocalUser_SetAuthenticated_m4877_MethodInfo = 
{
	"SetAuthenticated"/* name */
	, (methodPointerType)&LocalUser_SetAuthenticated_m4877/* method */
	, &LocalUser_t821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_SByte_t75/* invoker_method */
	, LocalUser_t821_LocalUser_SetAuthenticated_m4877_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1444/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
static ParameterInfo LocalUser_t821_LocalUser_SetUnderage_m4878_ParameterInfos[] = 
{
	{"value", 0, 134219361, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_SByte_t75 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
MethodInfo LocalUser_SetUnderage_m4878_MethodInfo = 
{
	"SetUnderage"/* name */
	, (methodPointerType)&LocalUser_SetUnderage_m4878/* method */
	, &LocalUser_t821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_SByte_t75/* invoker_method */
	, LocalUser_t821_LocalUser_SetUnderage_m4878_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1445/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
MethodInfo LocalUser_get_authenticated_m4879_MethodInfo = 
{
	"get_authenticated"/* name */
	, (methodPointerType)&LocalUser_get_authenticated_m4879/* method */
	, &LocalUser_t821_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1446/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LocalUser_t821_MethodInfos[] =
{
	&LocalUser__ctor_m4875_MethodInfo,
	&LocalUser_SetFriends_m4876_MethodInfo,
	&LocalUser_SetAuthenticated_m4877_MethodInfo,
	&LocalUser_SetUnderage_m4878_MethodInfo,
	&LocalUser_get_authenticated_m4879_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m517_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo Object_GetHashCode_m518_MethodInfo;
extern MethodInfo UserProfile_ToString_m4882_MethodInfo;
extern MethodInfo UserProfile_get_userName_m4886_MethodInfo;
extern MethodInfo UserProfile_get_id_m4887_MethodInfo;
extern MethodInfo UserProfile_get_isFriend_m4888_MethodInfo;
extern MethodInfo UserProfile_get_state_m4889_MethodInfo;
static MethodInfo* LocalUser_t821_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&UserProfile_ToString_m4882_MethodInfo,
	&UserProfile_get_userName_m4886_MethodInfo,
	&UserProfile_get_id_m4887_MethodInfo,
	&UserProfile_get_isFriend_m4888_MethodInfo,
	&UserProfile_get_state_m4889_MethodInfo,
	&LocalUser_get_authenticated_m4879_MethodInfo,
};
extern TypeInfo ILocalUser_t824_il2cpp_TypeInfo;
extern TypeInfo IUserProfile_t1017_il2cpp_TypeInfo;
static TypeInfo* LocalUser_t821_InterfacesTypeInfos[] = 
{
	&ILocalUser_t824_il2cpp_TypeInfo,
	&IUserProfile_t1017_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair LocalUser_t821_InterfacesOffsets[] = 
{
	{ &IUserProfile_t1017_il2cpp_TypeInfo, 4},
	{ &ILocalUser_t824_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType LocalUser_t821_0_0_0;
extern Il2CppType LocalUser_t821_1_0_0;
struct LocalUser_t821;
TypeInfo LocalUser_t821_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "LocalUser"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, LocalUser_t821_MethodInfos/* methods */
	, LocalUser_t821_PropertyInfos/* properties */
	, LocalUser_t821_FieldInfos/* fields */
	, NULL/* events */
	, &UserProfile_t947_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &LocalUser_t821_il2cpp_TypeInfo/* element_class */
	, LocalUser_t821_InterfacesTypeInfos/* implemented_interfaces */
	, LocalUser_t821_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LocalUser_t821_il2cpp_TypeInfo/* cast_class */
	, &LocalUser_t821_0_0_0/* byval_arg */
	, &LocalUser_t821_1_0_0/* this_arg */
	, LocalUser_t821_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LocalUser_t821)/* instance_size */
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
	, 5/* method_count */
	, 1/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo Texture2D_t571_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t96_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t74_il2cpp_TypeInfo;
extern TypeInfo UserState_t963_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Object__ctor_m499_MethodInfo;
extern MethodInfo Texture2D__ctor_m4090_MethodInfo;
extern MethodInfo String_Concat_m1254_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
 void UserProfile__ctor_m4880 (UserProfile_t947 * __this, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral432;
		__this->___m_ID_1 = (String_t*) &_stringLiteral332;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t571 * L_0 = (Texture2D_t571 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Texture2D_t571_il2cpp_TypeInfo));
		Texture2D__ctor_m4090(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/&Texture2D__ctor_m4090_MethodInfo);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern MethodInfo UserProfile__ctor_m4881_MethodInfo;
 void UserProfile__ctor_m4881 (UserProfile_t947 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t571 * ___image, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		__this->___m_UserName_0 = ___name;
		__this->___m_ID_1 = ___id;
		__this->___m_IsFriend_2 = ___friend;
		__this->___m_State_3 = ___state;
		__this->___m_Image_4 = ___image;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
 String_t* UserProfile_ToString_m4882 (UserProfile_t947 * __this, MethodInfo* method){
	{
		ObjectU5BU5D_t96* L_0 = ((ObjectU5BU5D_t96*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t96_il2cpp_TypeInfo), 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_id_m4887_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t96* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&UserProfile_get_userName_m4886_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t96* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&UserProfile_get_isFriend_m4888_MethodInfo, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t96* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&UserProfile_get_state_m4889_MethodInfo, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&UserState_t963_il2cpp_TypeInfo), &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m1254(NULL /*static, unused*/, L_11, /*hidden argument*/&String_Concat_m1254_MethodInfo);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern MethodInfo UserProfile_SetUserName_m4883_MethodInfo;
 void UserProfile_SetUserName_m4883 (UserProfile_t947 * __this, String_t* ___name, MethodInfo* method){
	{
		__this->___m_UserName_0 = ___name;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern MethodInfo UserProfile_SetUserID_m4884_MethodInfo;
 void UserProfile_SetUserID_m4884 (UserProfile_t947 * __this, String_t* ___id, MethodInfo* method){
	{
		__this->___m_ID_1 = ___id;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern MethodInfo UserProfile_SetImage_m4885_MethodInfo;
 void UserProfile_SetImage_m4885 (UserProfile_t947 * __this, Texture2D_t571 * ___image, MethodInfo* method){
	{
		__this->___m_Image_4 = ___image;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
 String_t* UserProfile_get_userName_m4886 (UserProfile_t947 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
 String_t* UserProfile_get_id_m4887 (UserProfile_t947 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
 bool UserProfile_get_isFriend_m4888 (UserProfile_t947 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
 int32_t UserProfile_get_state_m4889 (UserProfile_t947 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
// Metadata Definition UnityEngine.SocialPlatforms.Impl.UserProfile
extern Il2CppType String_t_0_0_4;
FieldInfo UserProfile_t947____m_UserName_0_FieldInfo = 
{
	"m_UserName"/* name */
	, &String_t_0_0_4/* type */
	, &UserProfile_t947_il2cpp_TypeInfo/* parent */
	, offsetof(UserProfile_t947, ___m_UserName_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_4;
FieldInfo UserProfile_t947____m_ID_1_FieldInfo = 
{
	"m_ID"/* name */
	, &String_t_0_0_4/* type */
	, &UserProfile_t947_il2cpp_TypeInfo/* parent */
	, offsetof(UserProfile_t947, ___m_ID_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_4;
FieldInfo UserProfile_t947____m_IsFriend_2_FieldInfo = 
{
	"m_IsFriend"/* name */
	, &Boolean_t74_0_0_4/* type */
	, &UserProfile_t947_il2cpp_TypeInfo/* parent */
	, offsetof(UserProfile_t947, ___m_IsFriend_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserState_t963_0_0_4;
FieldInfo UserProfile_t947____m_State_3_FieldInfo = 
{
	"m_State"/* name */
	, &UserState_t963_0_0_4/* type */
	, &UserProfile_t947_il2cpp_TypeInfo/* parent */
	, offsetof(UserProfile_t947, ___m_State_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Texture2D_t571_0_0_4;
FieldInfo UserProfile_t947____m_Image_4_FieldInfo = 
{
	"m_Image"/* name */
	, &Texture2D_t571_0_0_4/* type */
	, &UserProfile_t947_il2cpp_TypeInfo/* parent */
	, offsetof(UserProfile_t947, ___m_Image_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UserProfile_t947_FieldInfos[] =
{
	&UserProfile_t947____m_UserName_0_FieldInfo,
	&UserProfile_t947____m_ID_1_FieldInfo,
	&UserProfile_t947____m_IsFriend_2_FieldInfo,
	&UserProfile_t947____m_State_3_FieldInfo,
	&UserProfile_t947____m_Image_4_FieldInfo,
	NULL
};
static PropertyInfo UserProfile_t947____userName_PropertyInfo = 
{
	&UserProfile_t947_il2cpp_TypeInfo/* parent */
	, "userName"/* name */
	, &UserProfile_get_userName_m4886_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo UserProfile_t947____id_PropertyInfo = 
{
	&UserProfile_t947_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &UserProfile_get_id_m4887_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo UserProfile_t947____isFriend_PropertyInfo = 
{
	&UserProfile_t947_il2cpp_TypeInfo/* parent */
	, "isFriend"/* name */
	, &UserProfile_get_isFriend_m4888_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo UserProfile_t947____state_PropertyInfo = 
{
	&UserProfile_t947_il2cpp_TypeInfo/* parent */
	, "state"/* name */
	, &UserProfile_get_state_m4889_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* UserProfile_t947_PropertyInfos[] =
{
	&UserProfile_t947____userName_PropertyInfo,
	&UserProfile_t947____id_PropertyInfo,
	&UserProfile_t947____isFriend_PropertyInfo,
	&UserProfile_t947____state_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
MethodInfo UserProfile__ctor_m4880_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserProfile__ctor_m4880/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1447/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
extern Il2CppType UserState_t963_0_0_0;
extern Il2CppType UserState_t963_0_0_0;
extern Il2CppType Texture2D_t571_0_0_0;
extern Il2CppType Texture2D_t571_0_0_0;
static ParameterInfo UserProfile_t947_UserProfile__ctor_m4881_ParameterInfos[] = 
{
	{"name", 0, 134219362, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"id", 1, 134219363, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"friend", 2, 134219364, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
	{"state", 3, 134219365, &EmptyCustomAttributesCache, &UserState_t963_0_0_0},
	{"image", 4, 134219366, &EmptyCustomAttributesCache, &Texture2D_t571_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_SByte_t75_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
MethodInfo UserProfile__ctor_m4881_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserProfile__ctor_m4881/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_SByte_t75_Int32_t73_Object_t/* invoker_method */
	, UserProfile_t947_UserProfile__ctor_m4881_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1448/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
MethodInfo UserProfile_ToString_m4882_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&UserProfile_ToString_m4882/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1449/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UserProfile_t947_UserProfile_SetUserName_m4883_ParameterInfos[] = 
{
	{"name", 0, 134219367, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
MethodInfo UserProfile_SetUserName_m4883_MethodInfo = 
{
	"SetUserName"/* name */
	, (methodPointerType)&UserProfile_SetUserName_m4883/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UserProfile_t947_UserProfile_SetUserName_m4883_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1450/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UserProfile_t947_UserProfile_SetUserID_m4884_ParameterInfos[] = 
{
	{"id", 0, 134219368, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
MethodInfo UserProfile_SetUserID_m4884_MethodInfo = 
{
	"SetUserID"/* name */
	, (methodPointerType)&UserProfile_SetUserID_m4884/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UserProfile_t947_UserProfile_SetUserID_m4884_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1451/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Texture2D_t571_0_0_0;
static ParameterInfo UserProfile_t947_UserProfile_SetImage_m4885_ParameterInfos[] = 
{
	{"image", 0, 134219369, &EmptyCustomAttributesCache, &Texture2D_t571_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
MethodInfo UserProfile_SetImage_m4885_MethodInfo = 
{
	"SetImage"/* name */
	, (methodPointerType)&UserProfile_SetImage_m4885/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UserProfile_t947_UserProfile_SetImage_m4885_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1452/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
MethodInfo UserProfile_get_userName_m4886_MethodInfo = 
{
	"get_userName"/* name */
	, (methodPointerType)&UserProfile_get_userName_m4886/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1453/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
MethodInfo UserProfile_get_id_m4887_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&UserProfile_get_id_m4887/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1454/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
MethodInfo UserProfile_get_isFriend_m4888_MethodInfo = 
{
	"get_isFriend"/* name */
	, (methodPointerType)&UserProfile_get_isFriend_m4888/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1455/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UserState_t963_0_0_0;
extern void* RuntimeInvoker_UserState_t963 (MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
MethodInfo UserProfile_get_state_m4889_MethodInfo = 
{
	"get_state"/* name */
	, (methodPointerType)&UserProfile_get_state_m4889/* method */
	, &UserProfile_t947_il2cpp_TypeInfo/* declaring_type */
	, &UserState_t963_0_0_0/* return_type */
	, RuntimeInvoker_UserState_t963/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1456/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UserProfile_t947_MethodInfos[] =
{
	&UserProfile__ctor_m4880_MethodInfo,
	&UserProfile__ctor_m4881_MethodInfo,
	&UserProfile_ToString_m4882_MethodInfo,
	&UserProfile_SetUserName_m4883_MethodInfo,
	&UserProfile_SetUserID_m4884_MethodInfo,
	&UserProfile_SetImage_m4885_MethodInfo,
	&UserProfile_get_userName_m4886_MethodInfo,
	&UserProfile_get_id_m4887_MethodInfo,
	&UserProfile_get_isFriend_m4888_MethodInfo,
	&UserProfile_get_state_m4889_MethodInfo,
	NULL
};
static MethodInfo* UserProfile_t947_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&UserProfile_ToString_m4882_MethodInfo,
	&UserProfile_get_userName_m4886_MethodInfo,
	&UserProfile_get_id_m4887_MethodInfo,
	&UserProfile_get_isFriend_m4888_MethodInfo,
	&UserProfile_get_state_m4889_MethodInfo,
};
static TypeInfo* UserProfile_t947_InterfacesTypeInfos[] = 
{
	&IUserProfile_t1017_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair UserProfile_t947_InterfacesOffsets[] = 
{
	{ &IUserProfile_t1017_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UserProfile_t947_0_0_0;
extern Il2CppType UserProfile_t947_1_0_0;
struct UserProfile_t947;
TypeInfo UserProfile_t947_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserProfile"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, UserProfile_t947_MethodInfos/* methods */
	, UserProfile_t947_PropertyInfos/* properties */
	, UserProfile_t947_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UserProfile_t947_il2cpp_TypeInfo/* element_class */
	, UserProfile_t947_InterfacesTypeInfos/* implemented_interfaces */
	, UserProfile_t947_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UserProfile_t947_il2cpp_TypeInfo/* cast_class */
	, &UserProfile_t947_0_0_0/* byval_arg */
	, &UserProfile_t947_1_0_0/* this_arg */
	, UserProfile_t947_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserProfile_t947)/* instance_size */
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
	, 10/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Achievement_t949_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
extern TypeInfo Void_t72_il2cpp_TypeInfo;
extern TypeInfo Double_t106_il2cpp_TypeInfo;
extern TypeInfo DateTime_t850_il2cpp_TypeInfo;
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
extern MethodInfo Achievement_set_id_m4895_MethodInfo;
extern MethodInfo Achievement_set_percentCompleted_m4897_MethodInfo;
extern MethodInfo Achievement__ctor_m4891_MethodInfo;
extern MethodInfo Achievement_get_id_m4894_MethodInfo;
extern MethodInfo Achievement_get_percentCompleted_m4896_MethodInfo;
extern MethodInfo Achievement_get_completed_m4898_MethodInfo;
extern MethodInfo Achievement_get_hidden_m4899_MethodInfo;
extern MethodInfo Achievement_get_lastReportedDate_m4900_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern MethodInfo Achievement__ctor_m4890_MethodInfo;
 void Achievement__ctor_m4890 (Achievement_t949 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t850  ___lastReportedDate, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m4895_MethodInfo, __this, ___id);
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m4897_MethodInfo, __this, ___percentCompleted);
		__this->___m_Completed_0 = ___completed;
		__this->___m_Hidden_1 = ___hidden;
		__this->___m_LastReportedDate_2 = ___lastReportedDate;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
 void Achievement__ctor_m4891 (Achievement_t949 * __this, String_t* ___id, double ___percent, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Achievement_set_id_m4895_MethodInfo, __this, ___id);
		VirtActionInvoker1< double >::Invoke(&Achievement_set_percentCompleted_m4897_MethodInfo, __this, ___percent);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t850_il2cpp_TypeInfo));
		__this->___m_LastReportedDate_2 = (((DateTime_t850_StaticFields*)InitializedTypeInfo(&DateTime_t850_il2cpp_TypeInfo)->static_fields)->___MinValue_3);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern MethodInfo Achievement__ctor_m4892_MethodInfo;
 void Achievement__ctor_m4892 (Achievement_t949 * __this, MethodInfo* method){
	{
		Achievement__ctor_m4891(__this, (String_t*) &_stringLiteral434, (0.0), /*hidden argument*/&Achievement__ctor_m4891_MethodInfo);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern MethodInfo Achievement_ToString_m4893_MethodInfo;
 String_t* Achievement_ToString_m4893 (Achievement_t949 * __this, MethodInfo* method){
	{
		ObjectU5BU5D_t96* L_0 = ((ObjectU5BU5D_t96*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t96_il2cpp_TypeInfo), ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Achievement_get_id_m4894_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t96* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(&Achievement_get_percentCompleted_m4896_MethodInfo, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Double_t106_il2cpp_TypeInfo), &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t96* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_completed_m4898_MethodInfo, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t96* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Achievement_get_hidden_m4899_MethodInfo, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t96* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_18 = L_17;
		DateTime_t850  L_19 = (DateTime_t850 )VirtFuncInvoker0< DateTime_t850  >::Invoke(&Achievement_get_lastReportedDate_m4900_MethodInfo, __this);
		DateTime_t850  L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&DateTime_t850_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m1254(NULL /*static, unused*/, L_18, /*hidden argument*/&String_Concat_m1254_MethodInfo);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
 String_t* Achievement_get_id_m4894 (Achievement_t949 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
 void Achievement_set_id_m4895 (Achievement_t949 * __this, String_t* ___value, MethodInfo* method){
	{
		__this->___U3CidU3Ek__BackingField_3 = ___value;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
 double Achievement_get_percentCompleted_m4896 (Achievement_t949 * __this, MethodInfo* method){
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
 void Achievement_set_percentCompleted_m4897 (Achievement_t949 * __this, double ___value, MethodInfo* method){
	{
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = ___value;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
 bool Achievement_get_completed_m4898 (Achievement_t949 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
 bool Achievement_get_hidden_m4899 (Achievement_t949 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
 DateTime_t850  Achievement_get_lastReportedDate_m4900 (Achievement_t949 * __this, MethodInfo* method){
	{
		DateTime_t850  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Achievement
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo Achievement_t949____m_Completed_0_FieldInfo = 
{
	"m_Completed"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &Achievement_t949_il2cpp_TypeInfo/* parent */
	, offsetof(Achievement_t949, ___m_Completed_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo Achievement_t949____m_Hidden_1_FieldInfo = 
{
	"m_Hidden"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &Achievement_t949_il2cpp_TypeInfo/* parent */
	, offsetof(Achievement_t949, ___m_Hidden_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DateTime_t850_0_0_1;
FieldInfo Achievement_t949____m_LastReportedDate_2_FieldInfo = 
{
	"m_LastReportedDate"/* name */
	, &DateTime_t850_0_0_1/* type */
	, &Achievement_t949_il2cpp_TypeInfo/* parent */
	, offsetof(Achievement_t949, ___m_LastReportedDate_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_U3CidU3Ek__BackingField;
FieldInfo Achievement_t949____U3CidU3Ek__BackingField_3_FieldInfo = 
{
	"<id>k__BackingField"/* name */
	, &String_t_0_0_1/* type */
	, &Achievement_t949_il2cpp_TypeInfo/* parent */
	, offsetof(Achievement_t949, ___U3CidU3Ek__BackingField_3)/* data */
	, &Achievement_t949__CustomAttributeCache_U3CidU3Ek__BackingField/* custom_attributes_cache */

};
extern Il2CppType Double_t106_0_0_1;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_U3CpercentCompletedU3Ek__BackingField;
FieldInfo Achievement_t949____U3CpercentCompletedU3Ek__BackingField_4_FieldInfo = 
{
	"<percentCompleted>k__BackingField"/* name */
	, &Double_t106_0_0_1/* type */
	, &Achievement_t949_il2cpp_TypeInfo/* parent */
	, offsetof(Achievement_t949, ___U3CpercentCompletedU3Ek__BackingField_4)/* data */
	, &Achievement_t949__CustomAttributeCache_U3CpercentCompletedU3Ek__BackingField/* custom_attributes_cache */

};
static FieldInfo* Achievement_t949_FieldInfos[] =
{
	&Achievement_t949____m_Completed_0_FieldInfo,
	&Achievement_t949____m_Hidden_1_FieldInfo,
	&Achievement_t949____m_LastReportedDate_2_FieldInfo,
	&Achievement_t949____U3CidU3Ek__BackingField_3_FieldInfo,
	&Achievement_t949____U3CpercentCompletedU3Ek__BackingField_4_FieldInfo,
	NULL
};
static PropertyInfo Achievement_t949____id_PropertyInfo = 
{
	&Achievement_t949_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &Achievement_get_id_m4894_MethodInfo/* get */
	, &Achievement_set_id_m4895_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Achievement_t949____percentCompleted_PropertyInfo = 
{
	&Achievement_t949_il2cpp_TypeInfo/* parent */
	, "percentCompleted"/* name */
	, &Achievement_get_percentCompleted_m4896_MethodInfo/* get */
	, &Achievement_set_percentCompleted_m4897_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Achievement_t949____completed_PropertyInfo = 
{
	&Achievement_t949_il2cpp_TypeInfo/* parent */
	, "completed"/* name */
	, &Achievement_get_completed_m4898_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Achievement_t949____hidden_PropertyInfo = 
{
	&Achievement_t949_il2cpp_TypeInfo/* parent */
	, "hidden"/* name */
	, &Achievement_get_hidden_m4899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Achievement_t949____lastReportedDate_PropertyInfo = 
{
	&Achievement_t949_il2cpp_TypeInfo/* parent */
	, "lastReportedDate"/* name */
	, &Achievement_get_lastReportedDate_m4900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Achievement_t949_PropertyInfos[] =
{
	&Achievement_t949____id_PropertyInfo,
	&Achievement_t949____percentCompleted_PropertyInfo,
	&Achievement_t949____completed_PropertyInfo,
	&Achievement_t949____hidden_PropertyInfo,
	&Achievement_t949____lastReportedDate_PropertyInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Double_t106_0_0_0;
extern Il2CppType Double_t106_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
extern Il2CppType DateTime_t850_0_0_0;
extern Il2CppType DateTime_t850_0_0_0;
static ParameterInfo Achievement_t949_Achievement__ctor_m4890_ParameterInfos[] = 
{
	{"id", 0, 134219370, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"percentCompleted", 1, 134219371, &EmptyCustomAttributesCache, &Double_t106_0_0_0},
	{"completed", 2, 134219372, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
	{"hidden", 3, 134219373, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
	{"lastReportedDate", 4, 134219374, &EmptyCustomAttributesCache, &DateTime_t850_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Double_t106_SByte_t75_SByte_t75_DateTime_t850 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
MethodInfo Achievement__ctor_m4890_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m4890/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Double_t106_SByte_t75_SByte_t75_DateTime_t850/* invoker_method */
	, Achievement_t949_Achievement__ctor_m4890_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1457/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Double_t106_0_0_0;
static ParameterInfo Achievement_t949_Achievement__ctor_m4891_ParameterInfos[] = 
{
	{"id", 0, 134219375, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"percent", 1, 134219376, &EmptyCustomAttributesCache, &Double_t106_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Double_t106 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
MethodInfo Achievement__ctor_m4891_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m4891/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Double_t106/* invoker_method */
	, Achievement_t949_Achievement__ctor_m4891_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1458/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
MethodInfo Achievement__ctor_m4892_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m4892/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1459/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
MethodInfo Achievement_ToString_m4893_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Achievement_ToString_m4893/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1460/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_get_id_m4894;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
MethodInfo Achievement_get_id_m4894_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&Achievement_get_id_m4894/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &Achievement_t949__CustomAttributeCache_Achievement_get_id_m4894/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1461/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Achievement_t949_Achievement_set_id_m4895_ParameterInfos[] = 
{
	{"value", 0, 134219377, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_set_id_m4895;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
MethodInfo Achievement_set_id_m4895_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&Achievement_set_id_m4895/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, Achievement_t949_Achievement_set_id_m4895_ParameterInfos/* parameters */
	, &Achievement_t949__CustomAttributeCache_Achievement_set_id_m4895/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1462/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Double_t106_0_0_0;
extern void* RuntimeInvoker_Double_t106 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_get_percentCompleted_m4896;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
MethodInfo Achievement_get_percentCompleted_m4896_MethodInfo = 
{
	"get_percentCompleted"/* name */
	, (methodPointerType)&Achievement_get_percentCompleted_m4896/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Double_t106_0_0_0/* return_type */
	, RuntimeInvoker_Double_t106/* invoker_method */
	, NULL/* parameters */
	, &Achievement_t949__CustomAttributeCache_Achievement_get_percentCompleted_m4896/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1463/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Double_t106_0_0_0;
static ParameterInfo Achievement_t949_Achievement_set_percentCompleted_m4897_ParameterInfos[] = 
{
	{"value", 0, 134219378, &EmptyCustomAttributesCache, &Double_t106_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Double_t106 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_set_percentCompleted_m4897;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
MethodInfo Achievement_set_percentCompleted_m4897_MethodInfo = 
{
	"set_percentCompleted"/* name */
	, (methodPointerType)&Achievement_set_percentCompleted_m4897/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Double_t106/* invoker_method */
	, Achievement_t949_Achievement_set_percentCompleted_m4897_ParameterInfos/* parameters */
	, &Achievement_t949__CustomAttributeCache_Achievement_set_percentCompleted_m4897/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1464/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
MethodInfo Achievement_get_completed_m4898_MethodInfo = 
{
	"get_completed"/* name */
	, (methodPointerType)&Achievement_get_completed_m4898/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1465/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
MethodInfo Achievement_get_hidden_m4899_MethodInfo = 
{
	"get_hidden"/* name */
	, (methodPointerType)&Achievement_get_hidden_m4899/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1466/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType DateTime_t850_0_0_0;
extern void* RuntimeInvoker_DateTime_t850 (MethodInfo* method, void* obj, void** args);
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
MethodInfo Achievement_get_lastReportedDate_m4900_MethodInfo = 
{
	"get_lastReportedDate"/* name */
	, (methodPointerType)&Achievement_get_lastReportedDate_m4900/* method */
	, &Achievement_t949_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t850_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t850/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1467/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Achievement_t949_MethodInfos[] =
{
	&Achievement__ctor_m4890_MethodInfo,
	&Achievement__ctor_m4891_MethodInfo,
	&Achievement__ctor_m4892_MethodInfo,
	&Achievement_ToString_m4893_MethodInfo,
	&Achievement_get_id_m4894_MethodInfo,
	&Achievement_set_id_m4895_MethodInfo,
	&Achievement_get_percentCompleted_m4896_MethodInfo,
	&Achievement_set_percentCompleted_m4897_MethodInfo,
	&Achievement_get_completed_m4898_MethodInfo,
	&Achievement_get_hidden_m4899_MethodInfo,
	&Achievement_get_lastReportedDate_m4900_MethodInfo,
	NULL
};
static MethodInfo* Achievement_t949_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Achievement_ToString_m4893_MethodInfo,
	&Achievement_get_id_m4894_MethodInfo,
	&Achievement_set_id_m4895_MethodInfo,
	&Achievement_get_percentCompleted_m4896_MethodInfo,
	&Achievement_set_percentCompleted_m4897_MethodInfo,
	&Achievement_get_completed_m4898_MethodInfo,
	&Achievement_get_hidden_m4899_MethodInfo,
	&Achievement_get_lastReportedDate_m4900_MethodInfo,
};
extern TypeInfo IAchievement_t830_il2cpp_TypeInfo;
static TypeInfo* Achievement_t949_InterfacesTypeInfos[] = 
{
	&IAchievement_t830_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Achievement_t949_InterfacesOffsets[] = 
{
	{ &IAchievement_t830_il2cpp_TypeInfo, 4},
};
extern TypeInfo CompilerGeneratedAttribute_t104_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m556_MethodInfo;
void Achievement_t949_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Achievement_t949_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Achievement_t949_CustomAttributesCacheGenerator_Achievement_get_id_m4894(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Achievement_t949_CustomAttributesCacheGenerator_Achievement_set_id_m4895(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Achievement_t949_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m4896(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Achievement_t949_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m4897(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache Achievement_t949__CustomAttributeCache_U3CidU3Ek__BackingField = {
1,
NULL,
&Achievement_t949_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField
};
CustomAttributesCache Achievement_t949__CustomAttributeCache_U3CpercentCompletedU3Ek__BackingField = {
1,
NULL,
&Achievement_t949_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField
};
CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_get_id_m4894 = {
1,
NULL,
&Achievement_t949_CustomAttributesCacheGenerator_Achievement_get_id_m4894
};
CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_set_id_m4895 = {
1,
NULL,
&Achievement_t949_CustomAttributesCacheGenerator_Achievement_set_id_m4895
};
CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_get_percentCompleted_m4896 = {
1,
NULL,
&Achievement_t949_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m4896
};
CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_set_percentCompleted_m4897 = {
1,
NULL,
&Achievement_t949_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m4897
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType Achievement_t949_0_0_0;
extern Il2CppType Achievement_t949_1_0_0;
struct Achievement_t949;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_U3CidU3Ek__BackingField;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_U3CpercentCompletedU3Ek__BackingField;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_get_id_m4894;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_set_id_m4895;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_get_percentCompleted_m4896;
extern CustomAttributesCache Achievement_t949__CustomAttributeCache_Achievement_set_percentCompleted_m4897;
TypeInfo Achievement_t949_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Achievement"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Achievement_t949_MethodInfos/* methods */
	, Achievement_t949_PropertyInfos/* properties */
	, Achievement_t949_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Achievement_t949_il2cpp_TypeInfo/* element_class */
	, Achievement_t949_InterfacesTypeInfos/* implemented_interfaces */
	, Achievement_t949_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Achievement_t949_il2cpp_TypeInfo/* cast_class */
	, &Achievement_t949_0_0_0/* byval_arg */
	, &Achievement_t949_1_0_0/* this_arg */
	, Achievement_t949_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Achievement_t949)/* instance_size */
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
	, 11/* method_count */
	, 5/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AchievementDescription_t948_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"

extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern MethodInfo AchievementDescription_set_id_m4905_MethodInfo;
extern MethodInfo AchievementDescription_get_id_m4904_MethodInfo;
extern MethodInfo AchievementDescription_get_title_m4906_MethodInfo;
extern MethodInfo AchievementDescription_get_achievedDescription_m4907_MethodInfo;
extern MethodInfo AchievementDescription_get_unachievedDescription_m4908_MethodInfo;
extern MethodInfo AchievementDescription_get_points_m4910_MethodInfo;
extern MethodInfo AchievementDescription_get_hidden_m4909_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern MethodInfo AchievementDescription__ctor_m4901_MethodInfo;
 void AchievementDescription__ctor_m4901 (AchievementDescription_t948 * __this, String_t* ___id, String_t* ___title, Texture2D_t571 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&AchievementDescription_set_id_m4905_MethodInfo, __this, ___id);
		__this->___m_Title_0 = ___title;
		__this->___m_Image_1 = ___image;
		__this->___m_AchievedDescription_2 = ___achievedDescription;
		__this->___m_UnachievedDescription_3 = ___unachievedDescription;
		__this->___m_Hidden_4 = ___hidden;
		__this->___m_Points_5 = ___points;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern MethodInfo AchievementDescription_ToString_m4902_MethodInfo;
 String_t* AchievementDescription_ToString_m4902 (AchievementDescription_t948 * __this, MethodInfo* method){
	{
		ObjectU5BU5D_t96* L_0 = ((ObjectU5BU5D_t96*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t96_il2cpp_TypeInfo), ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_id_m4904_MethodInfo, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t96* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_title_m4906_MethodInfo, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t96* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_achievedDescription_m4907_MethodInfo, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t96* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&AchievementDescription_get_unachievedDescription_m4908_MethodInfo, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t96* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&AchievementDescription_get_points_m4910_MethodInfo, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t96* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral433);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral433;
		ObjectU5BU5D_t96* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&AchievementDescription_get_hidden_m4909_MethodInfo, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m1254(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m1254_MethodInfo);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern MethodInfo AchievementDescription_SetImage_m4903_MethodInfo;
 void AchievementDescription_SetImage_m4903 (AchievementDescription_t948 * __this, Texture2D_t571 * ___image, MethodInfo* method){
	{
		__this->___m_Image_1 = ___image;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
 String_t* AchievementDescription_get_id_m4904 (AchievementDescription_t948 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
 void AchievementDescription_set_id_m4905 (AchievementDescription_t948 * __this, String_t* ___value, MethodInfo* method){
	{
		__this->___U3CidU3Ek__BackingField_6 = ___value;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
 String_t* AchievementDescription_get_title_m4906 (AchievementDescription_t948 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
 String_t* AchievementDescription_get_achievedDescription_m4907 (AchievementDescription_t948 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
 String_t* AchievementDescription_get_unachievedDescription_m4908 (AchievementDescription_t948 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
 bool AchievementDescription_get_hidden_m4909 (AchievementDescription_t948 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
 int32_t AchievementDescription_get_points_m4910 (AchievementDescription_t948 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// Metadata Definition UnityEngine.SocialPlatforms.Impl.AchievementDescription
extern Il2CppType String_t_0_0_1;
FieldInfo AchievementDescription_t948____m_Title_0_FieldInfo = 
{
	"m_Title"/* name */
	, &String_t_0_0_1/* type */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, offsetof(AchievementDescription_t948, ___m_Title_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Texture2D_t571_0_0_1;
FieldInfo AchievementDescription_t948____m_Image_1_FieldInfo = 
{
	"m_Image"/* name */
	, &Texture2D_t571_0_0_1/* type */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, offsetof(AchievementDescription_t948, ___m_Image_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo AchievementDescription_t948____m_AchievedDescription_2_FieldInfo = 
{
	"m_AchievedDescription"/* name */
	, &String_t_0_0_1/* type */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, offsetof(AchievementDescription_t948, ___m_AchievedDescription_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo AchievementDescription_t948____m_UnachievedDescription_3_FieldInfo = 
{
	"m_UnachievedDescription"/* name */
	, &String_t_0_0_1/* type */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, offsetof(AchievementDescription_t948, ___m_UnachievedDescription_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo AchievementDescription_t948____m_Hidden_4_FieldInfo = 
{
	"m_Hidden"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, offsetof(AchievementDescription_t948, ___m_Hidden_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo AchievementDescription_t948____m_Points_5_FieldInfo = 
{
	"m_Points"/* name */
	, &Int32_t73_0_0_1/* type */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, offsetof(AchievementDescription_t948, ___m_Points_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_U3CidU3Ek__BackingField;
FieldInfo AchievementDescription_t948____U3CidU3Ek__BackingField_6_FieldInfo = 
{
	"<id>k__BackingField"/* name */
	, &String_t_0_0_1/* type */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, offsetof(AchievementDescription_t948, ___U3CidU3Ek__BackingField_6)/* data */
	, &AchievementDescription_t948__CustomAttributeCache_U3CidU3Ek__BackingField/* custom_attributes_cache */

};
static FieldInfo* AchievementDescription_t948_FieldInfos[] =
{
	&AchievementDescription_t948____m_Title_0_FieldInfo,
	&AchievementDescription_t948____m_Image_1_FieldInfo,
	&AchievementDescription_t948____m_AchievedDescription_2_FieldInfo,
	&AchievementDescription_t948____m_UnachievedDescription_3_FieldInfo,
	&AchievementDescription_t948____m_Hidden_4_FieldInfo,
	&AchievementDescription_t948____m_Points_5_FieldInfo,
	&AchievementDescription_t948____U3CidU3Ek__BackingField_6_FieldInfo,
	NULL
};
static PropertyInfo AchievementDescription_t948____id_PropertyInfo = 
{
	&AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &AchievementDescription_get_id_m4904_MethodInfo/* get */
	, &AchievementDescription_set_id_m4905_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo AchievementDescription_t948____title_PropertyInfo = 
{
	&AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, "title"/* name */
	, &AchievementDescription_get_title_m4906_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo AchievementDescription_t948____achievedDescription_PropertyInfo = 
{
	&AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, "achievedDescription"/* name */
	, &AchievementDescription_get_achievedDescription_m4907_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo AchievementDescription_t948____unachievedDescription_PropertyInfo = 
{
	&AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, "unachievedDescription"/* name */
	, &AchievementDescription_get_unachievedDescription_m4908_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo AchievementDescription_t948____hidden_PropertyInfo = 
{
	&AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, "hidden"/* name */
	, &AchievementDescription_get_hidden_m4909_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo AchievementDescription_t948____points_PropertyInfo = 
{
	&AchievementDescription_t948_il2cpp_TypeInfo/* parent */
	, "points"/* name */
	, &AchievementDescription_get_points_m4910_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* AchievementDescription_t948_PropertyInfos[] =
{
	&AchievementDescription_t948____id_PropertyInfo,
	&AchievementDescription_t948____title_PropertyInfo,
	&AchievementDescription_t948____achievedDescription_PropertyInfo,
	&AchievementDescription_t948____unachievedDescription_PropertyInfo,
	&AchievementDescription_t948____hidden_PropertyInfo,
	&AchievementDescription_t948____points_PropertyInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Texture2D_t571_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo AchievementDescription_t948_AchievementDescription__ctor_m4901_ParameterInfos[] = 
{
	{"id", 0, 134219379, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"title", 1, 134219380, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"image", 2, 134219381, &EmptyCustomAttributesCache, &Texture2D_t571_0_0_0},
	{"achievedDescription", 3, 134219382, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"unachievedDescription", 4, 134219383, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"hidden", 5, 134219384, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
	{"points", 6, 134219385, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t_Object_t_Object_t_SByte_t75_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
MethodInfo AchievementDescription__ctor_m4901_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AchievementDescription__ctor_m4901/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t_Object_t_Object_t_Object_t_SByte_t75_Int32_t73/* invoker_method */
	, AchievementDescription_t948_AchievementDescription__ctor_m4901_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 7/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1468/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
MethodInfo AchievementDescription_ToString_m4902_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&AchievementDescription_ToString_m4902/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1469/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Texture2D_t571_0_0_0;
static ParameterInfo AchievementDescription_t948_AchievementDescription_SetImage_m4903_ParameterInfos[] = 
{
	{"image", 0, 134219386, &EmptyCustomAttributesCache, &Texture2D_t571_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
MethodInfo AchievementDescription_SetImage_m4903_MethodInfo = 
{
	"SetImage"/* name */
	, (methodPointerType)&AchievementDescription_SetImage_m4903/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, AchievementDescription_t948_AchievementDescription_SetImage_m4903_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1470/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_AchievementDescription_get_id_m4904;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
MethodInfo AchievementDescription_get_id_m4904_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&AchievementDescription_get_id_m4904/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &AchievementDescription_t948__CustomAttributeCache_AchievementDescription_get_id_m4904/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1471/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo AchievementDescription_t948_AchievementDescription_set_id_m4905_ParameterInfos[] = 
{
	{"value", 0, 134219387, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_AchievementDescription_set_id_m4905;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
MethodInfo AchievementDescription_set_id_m4905_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&AchievementDescription_set_id_m4905/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, AchievementDescription_t948_AchievementDescription_set_id_m4905_ParameterInfos/* parameters */
	, &AchievementDescription_t948__CustomAttributeCache_AchievementDescription_set_id_m4905/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1472/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
MethodInfo AchievementDescription_get_title_m4906_MethodInfo = 
{
	"get_title"/* name */
	, (methodPointerType)&AchievementDescription_get_title_m4906/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1473/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
MethodInfo AchievementDescription_get_achievedDescription_m4907_MethodInfo = 
{
	"get_achievedDescription"/* name */
	, (methodPointerType)&AchievementDescription_get_achievedDescription_m4907/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1474/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
MethodInfo AchievementDescription_get_unachievedDescription_m4908_MethodInfo = 
{
	"get_unachievedDescription"/* name */
	, (methodPointerType)&AchievementDescription_get_unachievedDescription_m4908/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1475/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
MethodInfo AchievementDescription_get_hidden_m4909_MethodInfo = 
{
	"get_hidden"/* name */
	, (methodPointerType)&AchievementDescription_get_hidden_m4909/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1476/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
MethodInfo AchievementDescription_get_points_m4910_MethodInfo = 
{
	"get_points"/* name */
	, (methodPointerType)&AchievementDescription_get_points_m4910/* method */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1477/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* AchievementDescription_t948_MethodInfos[] =
{
	&AchievementDescription__ctor_m4901_MethodInfo,
	&AchievementDescription_ToString_m4902_MethodInfo,
	&AchievementDescription_SetImage_m4903_MethodInfo,
	&AchievementDescription_get_id_m4904_MethodInfo,
	&AchievementDescription_set_id_m4905_MethodInfo,
	&AchievementDescription_get_title_m4906_MethodInfo,
	&AchievementDescription_get_achievedDescription_m4907_MethodInfo,
	&AchievementDescription_get_unachievedDescription_m4908_MethodInfo,
	&AchievementDescription_get_hidden_m4909_MethodInfo,
	&AchievementDescription_get_points_m4910_MethodInfo,
	NULL
};
static MethodInfo* AchievementDescription_t948_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&AchievementDescription_ToString_m4902_MethodInfo,
	&AchievementDescription_get_id_m4904_MethodInfo,
	&AchievementDescription_set_id_m4905_MethodInfo,
	&AchievementDescription_get_title_m4906_MethodInfo,
	&AchievementDescription_get_achievedDescription_m4907_MethodInfo,
	&AchievementDescription_get_unachievedDescription_m4908_MethodInfo,
	&AchievementDescription_get_hidden_m4909_MethodInfo,
	&AchievementDescription_get_points_m4910_MethodInfo,
};
extern TypeInfo IAchievementDescription_t1012_il2cpp_TypeInfo;
static TypeInfo* AchievementDescription_t948_InterfacesTypeInfos[] = 
{
	&IAchievementDescription_t1012_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair AchievementDescription_t948_InterfacesOffsets[] = 
{
	{ &IAchievementDescription_t1012_il2cpp_TypeInfo, 4},
};
void AchievementDescription_t948_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void AchievementDescription_t948_CustomAttributesCacheGenerator_AchievementDescription_get_id_m4904(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void AchievementDescription_t948_CustomAttributesCacheGenerator_AchievementDescription_set_id_m4905(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_U3CidU3Ek__BackingField = {
1,
NULL,
&AchievementDescription_t948_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField
};
CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_AchievementDescription_get_id_m4904 = {
1,
NULL,
&AchievementDescription_t948_CustomAttributesCacheGenerator_AchievementDescription_get_id_m4904
};
CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_AchievementDescription_set_id_m4905 = {
1,
NULL,
&AchievementDescription_t948_CustomAttributesCacheGenerator_AchievementDescription_set_id_m4905
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType AchievementDescription_t948_0_0_0;
extern Il2CppType AchievementDescription_t948_1_0_0;
struct AchievementDescription_t948;
extern CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_U3CidU3Ek__BackingField;
extern CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_AchievementDescription_get_id_m4904;
extern CustomAttributesCache AchievementDescription_t948__CustomAttributeCache_AchievementDescription_set_id_m4905;
TypeInfo AchievementDescription_t948_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AchievementDescription"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, AchievementDescription_t948_MethodInfos/* methods */
	, AchievementDescription_t948_PropertyInfos/* properties */
	, AchievementDescription_t948_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* element_class */
	, AchievementDescription_t948_InterfacesTypeInfos/* implemented_interfaces */
	, AchievementDescription_t948_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &AchievementDescription_t948_il2cpp_TypeInfo/* cast_class */
	, &AchievementDescription_t948_0_0_0/* byval_arg */
	, &AchievementDescription_t948_1_0_0/* this_arg */
	, AchievementDescription_t948_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AchievementDescription_t948)/* instance_size */
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
	, 10/* method_count */
	, 6/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Score_t950_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"
extern TypeInfo Int64_t77_il2cpp_TypeInfo;
extern MethodInfo DateTime_get_Now_m5083_MethodInfo;
extern MethodInfo Score__ctor_m4912_MethodInfo;
extern MethodInfo Score_set_leaderboardID_m4915_MethodInfo;
extern MethodInfo Score_set_value_m4917_MethodInfo;
extern MethodInfo Score_get_value_m4916_MethodInfo;
extern MethodInfo Score_get_leaderboardID_m4914_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern MethodInfo Score__ctor_m4911_MethodInfo;
 void Score__ctor_m4911 (Score_t950 * __this, String_t* ___leaderboardID, int64_t ___value, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t850_il2cpp_TypeInfo));
		DateTime_t850  L_0 = DateTime_get_Now_m5083(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m5083_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		Score__ctor_m4912(__this, ___leaderboardID, ___value, (String_t*) &_stringLiteral332, L_0, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), (-1), /*hidden argument*/&Score__ctor_m4912_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
 void Score__ctor_m4912 (Score_t950 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t850  ___date, String_t* ___formattedValue, int32_t ___rank, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Score_set_leaderboardID_m4915_MethodInfo, __this, ___leaderboardID);
		VirtActionInvoker1< int64_t >::Invoke(&Score_set_value_m4917_MethodInfo, __this, ___value);
		__this->___m_UserID_2 = ___userID;
		__this->___m_Date_0 = ___date;
		__this->___m_FormattedValue_1 = ___formattedValue;
		__this->___m_Rank_3 = ___rank;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern MethodInfo Score_ToString_m4913_MethodInfo;
 String_t* Score_ToString_m4913 (Score_t950 * __this, MethodInfo* method){
	{
		ObjectU5BU5D_t96* L_0 = ((ObjectU5BU5D_t96*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t96_il2cpp_TypeInfo), ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral435);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral435;
		ObjectU5BU5D_t96* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t96* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral436);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral436;
		ObjectU5BU5D_t96* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Score_get_value_m4916_MethodInfo, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int64_t77_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t96* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral437);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral437;
		ObjectU5BU5D_t96* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Score_get_leaderboardID_m4914_MethodInfo, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t96* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral438);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral438;
		ObjectU5BU5D_t96* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t96* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral439);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral439;
		ObjectU5BU5D_t96* L_17 = L_16;
		DateTime_t850  L_18 = (__this->___m_Date_0);
		DateTime_t850  L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&DateTime_t850_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m1254(NULL /*static, unused*/, L_17, /*hidden argument*/&String_Concat_m1254_MethodInfo);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
 String_t* Score_get_leaderboardID_m4914 (Score_t950 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
 void Score_set_leaderboardID_m4915 (Score_t950 * __this, String_t* ___value, MethodInfo* method){
	{
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = ___value;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
 int64_t Score_get_value_m4916 (Score_t950 * __this, MethodInfo* method){
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
 void Score_set_value_m4917 (Score_t950 * __this, int64_t ___value, MethodInfo* method){
	{
		__this->___U3CvalueU3Ek__BackingField_5 = ___value;
		return;
	}
}
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Score
extern Il2CppType DateTime_t850_0_0_1;
FieldInfo Score_t950____m_Date_0_FieldInfo = 
{
	"m_Date"/* name */
	, &DateTime_t850_0_0_1/* type */
	, &Score_t950_il2cpp_TypeInfo/* parent */
	, offsetof(Score_t950, ___m_Date_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Score_t950____m_FormattedValue_1_FieldInfo = 
{
	"m_FormattedValue"/* name */
	, &String_t_0_0_1/* type */
	, &Score_t950_il2cpp_TypeInfo/* parent */
	, offsetof(Score_t950, ___m_FormattedValue_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Score_t950____m_UserID_2_FieldInfo = 
{
	"m_UserID"/* name */
	, &String_t_0_0_1/* type */
	, &Score_t950_il2cpp_TypeInfo/* parent */
	, offsetof(Score_t950, ___m_UserID_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo Score_t950____m_Rank_3_FieldInfo = 
{
	"m_Rank"/* name */
	, &Int32_t73_0_0_1/* type */
	, &Score_t950_il2cpp_TypeInfo/* parent */
	, offsetof(Score_t950, ___m_Rank_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache Score_t950__CustomAttributeCache_U3CleaderboardIDU3Ek__BackingField;
FieldInfo Score_t950____U3CleaderboardIDU3Ek__BackingField_4_FieldInfo = 
{
	"<leaderboardID>k__BackingField"/* name */
	, &String_t_0_0_1/* type */
	, &Score_t950_il2cpp_TypeInfo/* parent */
	, offsetof(Score_t950, ___U3CleaderboardIDU3Ek__BackingField_4)/* data */
	, &Score_t950__CustomAttributeCache_U3CleaderboardIDU3Ek__BackingField/* custom_attributes_cache */

};
extern Il2CppType Int64_t77_0_0_1;
extern CustomAttributesCache Score_t950__CustomAttributeCache_U3CvalueU3Ek__BackingField;
FieldInfo Score_t950____U3CvalueU3Ek__BackingField_5_FieldInfo = 
{
	"<value>k__BackingField"/* name */
	, &Int64_t77_0_0_1/* type */
	, &Score_t950_il2cpp_TypeInfo/* parent */
	, offsetof(Score_t950, ___U3CvalueU3Ek__BackingField_5)/* data */
	, &Score_t950__CustomAttributeCache_U3CvalueU3Ek__BackingField/* custom_attributes_cache */

};
static FieldInfo* Score_t950_FieldInfos[] =
{
	&Score_t950____m_Date_0_FieldInfo,
	&Score_t950____m_FormattedValue_1_FieldInfo,
	&Score_t950____m_UserID_2_FieldInfo,
	&Score_t950____m_Rank_3_FieldInfo,
	&Score_t950____U3CleaderboardIDU3Ek__BackingField_4_FieldInfo,
	&Score_t950____U3CvalueU3Ek__BackingField_5_FieldInfo,
	NULL
};
static PropertyInfo Score_t950____leaderboardID_PropertyInfo = 
{
	&Score_t950_il2cpp_TypeInfo/* parent */
	, "leaderboardID"/* name */
	, &Score_get_leaderboardID_m4914_MethodInfo/* get */
	, &Score_set_leaderboardID_m4915_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Score_t950____value_PropertyInfo = 
{
	&Score_t950_il2cpp_TypeInfo/* parent */
	, "value"/* name */
	, &Score_get_value_m4916_MethodInfo/* get */
	, &Score_set_value_m4917_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Score_t950_PropertyInfos[] =
{
	&Score_t950____leaderboardID_PropertyInfo,
	&Score_t950____value_PropertyInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int64_t77_0_0_0;
extern Il2CppType Int64_t77_0_0_0;
static ParameterInfo Score_t950_Score__ctor_m4911_ParameterInfos[] = 
{
	{"leaderboardID", 0, 134219388, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"value", 1, 134219389, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int64_t77 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
MethodInfo Score__ctor_m4911_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Score__ctor_m4911/* method */
	, &Score_t950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int64_t77/* invoker_method */
	, Score_t950_Score__ctor_m4911_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1478/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int64_t77_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType DateTime_t850_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo Score_t950_Score__ctor_m4912_ParameterInfos[] = 
{
	{"leaderboardID", 0, 134219390, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"value", 1, 134219391, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
	{"userID", 2, 134219392, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"date", 3, 134219393, &EmptyCustomAttributesCache, &DateTime_t850_0_0_0},
	{"formattedValue", 4, 134219394, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"rank", 5, 134219395, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int64_t77_Object_t_DateTime_t850_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
MethodInfo Score__ctor_m4912_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Score__ctor_m4912/* method */
	, &Score_t950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int64_t77_Object_t_DateTime_t850_Object_t_Int32_t73/* invoker_method */
	, Score_t950_Score__ctor_m4912_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1479/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
MethodInfo Score_ToString_m4913_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Score_ToString_m4913/* method */
	, &Score_t950_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1480/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_get_leaderboardID_m4914;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
MethodInfo Score_get_leaderboardID_m4914_MethodInfo = 
{
	"get_leaderboardID"/* name */
	, (methodPointerType)&Score_get_leaderboardID_m4914/* method */
	, &Score_t950_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &Score_t950__CustomAttributeCache_Score_get_leaderboardID_m4914/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1481/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Score_t950_Score_set_leaderboardID_m4915_ParameterInfos[] = 
{
	{"value", 0, 134219396, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_set_leaderboardID_m4915;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
MethodInfo Score_set_leaderboardID_m4915_MethodInfo = 
{
	"set_leaderboardID"/* name */
	, (methodPointerType)&Score_set_leaderboardID_m4915/* method */
	, &Score_t950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, Score_t950_Score_set_leaderboardID_m4915_ParameterInfos/* parameters */
	, &Score_t950__CustomAttributeCache_Score_set_leaderboardID_m4915/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1482/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int64_t77_0_0_0;
extern void* RuntimeInvoker_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_get_value_m4916;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
MethodInfo Score_get_value_m4916_MethodInfo = 
{
	"get_value"/* name */
	, (methodPointerType)&Score_get_value_m4916/* method */
	, &Score_t950_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t77_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t77/* invoker_method */
	, NULL/* parameters */
	, &Score_t950__CustomAttributeCache_Score_get_value_m4916/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1483/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int64_t77_0_0_0;
static ParameterInfo Score_t950_Score_set_value_m4917_ParameterInfos[] = 
{
	{"value", 0, 134219397, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_set_value_m4917;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
MethodInfo Score_set_value_m4917_MethodInfo = 
{
	"set_value"/* name */
	, (methodPointerType)&Score_set_value_m4917/* method */
	, &Score_t950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int64_t77/* invoker_method */
	, Score_t950_Score_set_value_m4917_ParameterInfos/* parameters */
	, &Score_t950__CustomAttributeCache_Score_set_value_m4917/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1484/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Score_t950_MethodInfos[] =
{
	&Score__ctor_m4911_MethodInfo,
	&Score__ctor_m4912_MethodInfo,
	&Score_ToString_m4913_MethodInfo,
	&Score_get_leaderboardID_m4914_MethodInfo,
	&Score_set_leaderboardID_m4915_MethodInfo,
	&Score_get_value_m4916_MethodInfo,
	&Score_set_value_m4917_MethodInfo,
	NULL
};
static MethodInfo* Score_t950_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Score_ToString_m4913_MethodInfo,
	&Score_get_leaderboardID_m4914_MethodInfo,
	&Score_set_leaderboardID_m4915_MethodInfo,
	&Score_get_value_m4916_MethodInfo,
	&Score_set_value_m4917_MethodInfo,
};
extern TypeInfo IScore_t957_il2cpp_TypeInfo;
static TypeInfo* Score_t950_InterfacesTypeInfos[] = 
{
	&IScore_t957_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Score_t950_InterfacesOffsets[] = 
{
	{ &IScore_t957_il2cpp_TypeInfo, 4},
};
void Score_t950_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Score_t950_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Score_t950_CustomAttributesCacheGenerator_Score_get_leaderboardID_m4914(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Score_t950_CustomAttributesCacheGenerator_Score_set_leaderboardID_m4915(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Score_t950_CustomAttributesCacheGenerator_Score_get_value_m4916(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Score_t950_CustomAttributesCacheGenerator_Score_set_value_m4917(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache Score_t950__CustomAttributeCache_U3CleaderboardIDU3Ek__BackingField = {
1,
NULL,
&Score_t950_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField
};
CustomAttributesCache Score_t950__CustomAttributeCache_U3CvalueU3Ek__BackingField = {
1,
NULL,
&Score_t950_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField
};
CustomAttributesCache Score_t950__CustomAttributeCache_Score_get_leaderboardID_m4914 = {
1,
NULL,
&Score_t950_CustomAttributesCacheGenerator_Score_get_leaderboardID_m4914
};
CustomAttributesCache Score_t950__CustomAttributeCache_Score_set_leaderboardID_m4915 = {
1,
NULL,
&Score_t950_CustomAttributesCacheGenerator_Score_set_leaderboardID_m4915
};
CustomAttributesCache Score_t950__CustomAttributeCache_Score_get_value_m4916 = {
1,
NULL,
&Score_t950_CustomAttributesCacheGenerator_Score_get_value_m4916
};
CustomAttributesCache Score_t950__CustomAttributeCache_Score_set_value_m4917 = {
1,
NULL,
&Score_t950_CustomAttributesCacheGenerator_Score_set_value_m4917
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType Score_t950_0_0_0;
extern Il2CppType Score_t950_1_0_0;
struct Score_t950;
extern CustomAttributesCache Score_t950__CustomAttributeCache_U3CleaderboardIDU3Ek__BackingField;
extern CustomAttributesCache Score_t950__CustomAttributeCache_U3CvalueU3Ek__BackingField;
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_get_leaderboardID_m4914;
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_set_leaderboardID_m4915;
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_get_value_m4916;
extern CustomAttributesCache Score_t950__CustomAttributeCache_Score_set_value_m4917;
TypeInfo Score_t950_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Score"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Score_t950_MethodInfos/* methods */
	, Score_t950_PropertyInfos/* properties */
	, Score_t950_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Score_t950_il2cpp_TypeInfo/* element_class */
	, Score_t950_InterfacesTypeInfos/* implemented_interfaces */
	, Score_t950_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Score_t950_il2cpp_TypeInfo/* cast_class */
	, &Score_t950_0_0_0/* byval_arg */
	, &Score_t950_1_0_0/* this_arg */
	, Score_t950_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Score_t950)/* instance_size */
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
	, 7/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Leaderboard_t833_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
extern TypeInfo Range_t959_il2cpp_TypeInfo;
extern TypeInfo UserScope_t964_il2cpp_TypeInfo;
extern TypeInfo TimeScope_t965_il2cpp_TypeInfo;
extern TypeInfo ScoreU5BU5D_t1015_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t3_il2cpp_TypeInfo;
extern TypeInfo UInt32_t1020_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"
extern MethodInfo Leaderboard_set_id_m4926_MethodInfo;
extern MethodInfo Range__ctor_m4939_MethodInfo;
extern MethodInfo Leaderboard_set_range_m4930_MethodInfo;
extern MethodInfo Leaderboard_set_userScope_m4928_MethodInfo;
extern MethodInfo Leaderboard_set_timeScope_m4932_MethodInfo;
extern MethodInfo Leaderboard_get_id_m4925_MethodInfo;
extern MethodInfo Leaderboard_get_range_m4929_MethodInfo;
extern MethodInfo Leaderboard_get_userScope_m4927_MethodInfo;
extern MethodInfo Leaderboard_get_timeScope_m4931_MethodInfo;


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern MethodInfo Leaderboard__ctor_m4918_MethodInfo;
 void Leaderboard__ctor_m4918 (Leaderboard_t833 * __this, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		VirtActionInvoker1< String_t* >::Invoke(&Leaderboard_set_id_m4926_MethodInfo, __this, (String_t*) &_stringLiteral440);
		Range_t959  L_0 = {0};
		Range__ctor_m4939(&L_0, 1, ((int32_t)10), /*hidden argument*/&Range__ctor_m4939_MethodInfo);
		VirtActionInvoker1< Range_t959  >::Invoke(&Leaderboard_set_range_m4930_MethodInfo, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_userScope_m4928_MethodInfo, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(&Leaderboard_set_timeScope_m4932_MethodInfo, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t950 * L_1 = (Score_t950 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Score_t950_il2cpp_TypeInfo));
		Score__ctor_m4911(L_1, (String_t*) &_stringLiteral440, (((int64_t)0)), /*hidden argument*/&Score__ctor_m4911_MethodInfo);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t958*)((ScoreU5BU5D_t1015*)SZArrayNew(InitializedTypeInfo(&ScoreU5BU5D_t1015_il2cpp_TypeInfo), 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral440;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t3*)SZArrayNew(InitializedTypeInfo(&StringU5BU5D_t3_il2cpp_TypeInfo), 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern MethodInfo Leaderboard_ToString_m4919_MethodInfo;
 String_t* Leaderboard_ToString_m4919 (Leaderboard_t833 * __this, MethodInfo* method){
	Range_t959  V_0 = {0};
	Range_t959  V_1 = {0};
	{
		ObjectU5BU5D_t96* L_0 = ((ObjectU5BU5D_t96*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t96_il2cpp_TypeInfo), ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral441);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral441;
		ObjectU5BU5D_t96* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Leaderboard_get_id_m4925_MethodInfo, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t96* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral442);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral442;
		ObjectU5BU5D_t96* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t96* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral443);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral443;
		ObjectU5BU5D_t96* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&Boolean_t74_il2cpp_TypeInfo), &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t96* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral444);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral444;
		ObjectU5BU5D_t96* L_12 = L_11;
		Range_t959  L_13 = (Range_t959 )VirtFuncInvoker0< Range_t959  >::Invoke(&Leaderboard_get_range_m4929_MethodInfo, __this);
		V_0 = L_13;
		NullCheck((&V_0));
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t96* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral80);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral80;
		ObjectU5BU5D_t96* L_18 = L_17;
		Range_t959  L_19 = (Range_t959 )VirtFuncInvoker0< Range_t959  >::Invoke(&Leaderboard_get_range_m4929_MethodInfo, __this);
		V_1 = L_19;
		NullCheck((&V_1));
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t96* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral445);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral445;
		ObjectU5BU5D_t96* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(InitializedTypeInfo(&UInt32_t1020_il2cpp_TypeInfo), &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t96* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral446);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral446;
		ObjectU5BU5D_t96* L_29 = L_28;
		IScoreU5BU5D_t958* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t96* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral447);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral447;
		ObjectU5BU5D_t96* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_userScope_m4927_MethodInfo, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&UserScope_t964_il2cpp_TypeInfo), &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t96* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral448);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral448;
		ObjectU5BU5D_t96* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Leaderboard_get_timeScope_m4931_MethodInfo, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(InitializedTypeInfo(&TimeScope_t965_il2cpp_TypeInfo), &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t96* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral449);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral449;
		ObjectU5BU5D_t96* L_44 = L_43;
		StringU5BU5D_t3* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Concat_m1254(NULL /*static, unused*/, L_44, /*hidden argument*/&String_Concat_m1254_MethodInfo);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern MethodInfo Leaderboard_SetLocalUserScore_m4920_MethodInfo;
 void Leaderboard_SetLocalUserScore_m4920 (Leaderboard_t833 * __this, Object_t * ___score, MethodInfo* method){
	{
		__this->___m_LocalUserScore_1 = ___score;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern MethodInfo Leaderboard_SetMaxRange_m4921_MethodInfo;
 void Leaderboard_SetMaxRange_m4921 (Leaderboard_t833 * __this, uint32_t ___maxRange, MethodInfo* method){
	{
		__this->___m_MaxRange_2 = ___maxRange;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern MethodInfo Leaderboard_SetScores_m4922_MethodInfo;
 void Leaderboard_SetScores_m4922 (Leaderboard_t833 * __this, IScoreU5BU5D_t958* ___scores, MethodInfo* method){
	{
		__this->___m_Scores_3 = ___scores;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern MethodInfo Leaderboard_SetTitle_m4923_MethodInfo;
 void Leaderboard_SetTitle_m4923 (Leaderboard_t833 * __this, String_t* ___title, MethodInfo* method){
	{
		__this->___m_Title_4 = ___title;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern MethodInfo Leaderboard_GetUserFilter_m4924_MethodInfo;
 StringU5BU5D_t3* Leaderboard_GetUserFilter_m4924 (Leaderboard_t833 * __this, MethodInfo* method){
	{
		StringU5BU5D_t3* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
 String_t* Leaderboard_get_id_m4925 (Leaderboard_t833 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
 void Leaderboard_set_id_m4926 (Leaderboard_t833 * __this, String_t* ___value, MethodInfo* method){
	{
		__this->___U3CidU3Ek__BackingField_6 = ___value;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
 int32_t Leaderboard_get_userScope_m4927 (Leaderboard_t833 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
 void Leaderboard_set_userScope_m4928 (Leaderboard_t833 * __this, int32_t ___value, MethodInfo* method){
	{
		__this->___U3CuserScopeU3Ek__BackingField_7 = ___value;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
 Range_t959  Leaderboard_get_range_m4929 (Leaderboard_t833 * __this, MethodInfo* method){
	{
		Range_t959  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
 void Leaderboard_set_range_m4930 (Leaderboard_t833 * __this, Range_t959  ___value, MethodInfo* method){
	{
		__this->___U3CrangeU3Ek__BackingField_8 = ___value;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
 int32_t Leaderboard_get_timeScope_m4931 (Leaderboard_t833 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
 void Leaderboard_set_timeScope_m4932 (Leaderboard_t833 * __this, int32_t ___value, MethodInfo* method){
	{
		__this->___U3CtimeScopeU3Ek__BackingField_9 = ___value;
		return;
	}
}
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Leaderboard
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo Leaderboard_t833____m_Loading_0_FieldInfo = 
{
	"m_Loading"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___m_Loading_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IScore_t957_0_0_1;
FieldInfo Leaderboard_t833____m_LocalUserScore_1_FieldInfo = 
{
	"m_LocalUserScore"/* name */
	, &IScore_t957_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___m_LocalUserScore_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UInt32_t1020_0_0_1;
FieldInfo Leaderboard_t833____m_MaxRange_2_FieldInfo = 
{
	"m_MaxRange"/* name */
	, &UInt32_t1020_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___m_MaxRange_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IScoreU5BU5D_t958_0_0_1;
FieldInfo Leaderboard_t833____m_Scores_3_FieldInfo = 
{
	"m_Scores"/* name */
	, &IScoreU5BU5D_t958_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___m_Scores_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Leaderboard_t833____m_Title_4_FieldInfo = 
{
	"m_Title"/* name */
	, &String_t_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___m_Title_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t3_0_0_1;
FieldInfo Leaderboard_t833____m_UserIDs_5_FieldInfo = 
{
	"m_UserIDs"/* name */
	, &StringU5BU5D_t3_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___m_UserIDs_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CidU3Ek__BackingField;
FieldInfo Leaderboard_t833____U3CidU3Ek__BackingField_6_FieldInfo = 
{
	"<id>k__BackingField"/* name */
	, &String_t_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___U3CidU3Ek__BackingField_6)/* data */
	, &Leaderboard_t833__CustomAttributeCache_U3CidU3Ek__BackingField/* custom_attributes_cache */

};
extern Il2CppType UserScope_t964_0_0_1;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CuserScopeU3Ek__BackingField;
FieldInfo Leaderboard_t833____U3CuserScopeU3Ek__BackingField_7_FieldInfo = 
{
	"<userScope>k__BackingField"/* name */
	, &UserScope_t964_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___U3CuserScopeU3Ek__BackingField_7)/* data */
	, &Leaderboard_t833__CustomAttributeCache_U3CuserScopeU3Ek__BackingField/* custom_attributes_cache */

};
extern Il2CppType Range_t959_0_0_1;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CrangeU3Ek__BackingField;
FieldInfo Leaderboard_t833____U3CrangeU3Ek__BackingField_8_FieldInfo = 
{
	"<range>k__BackingField"/* name */
	, &Range_t959_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___U3CrangeU3Ek__BackingField_8)/* data */
	, &Leaderboard_t833__CustomAttributeCache_U3CrangeU3Ek__BackingField/* custom_attributes_cache */

};
extern Il2CppType TimeScope_t965_0_0_1;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CtimeScopeU3Ek__BackingField;
FieldInfo Leaderboard_t833____U3CtimeScopeU3Ek__BackingField_9_FieldInfo = 
{
	"<timeScope>k__BackingField"/* name */
	, &TimeScope_t965_0_0_1/* type */
	, &Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, offsetof(Leaderboard_t833, ___U3CtimeScopeU3Ek__BackingField_9)/* data */
	, &Leaderboard_t833__CustomAttributeCache_U3CtimeScopeU3Ek__BackingField/* custom_attributes_cache */

};
static FieldInfo* Leaderboard_t833_FieldInfos[] =
{
	&Leaderboard_t833____m_Loading_0_FieldInfo,
	&Leaderboard_t833____m_LocalUserScore_1_FieldInfo,
	&Leaderboard_t833____m_MaxRange_2_FieldInfo,
	&Leaderboard_t833____m_Scores_3_FieldInfo,
	&Leaderboard_t833____m_Title_4_FieldInfo,
	&Leaderboard_t833____m_UserIDs_5_FieldInfo,
	&Leaderboard_t833____U3CidU3Ek__BackingField_6_FieldInfo,
	&Leaderboard_t833____U3CuserScopeU3Ek__BackingField_7_FieldInfo,
	&Leaderboard_t833____U3CrangeU3Ek__BackingField_8_FieldInfo,
	&Leaderboard_t833____U3CtimeScopeU3Ek__BackingField_9_FieldInfo,
	NULL
};
static PropertyInfo Leaderboard_t833____id_PropertyInfo = 
{
	&Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &Leaderboard_get_id_m4925_MethodInfo/* get */
	, &Leaderboard_set_id_m4926_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Leaderboard_t833____userScope_PropertyInfo = 
{
	&Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, "userScope"/* name */
	, &Leaderboard_get_userScope_m4927_MethodInfo/* get */
	, &Leaderboard_set_userScope_m4928_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Leaderboard_t833____range_PropertyInfo = 
{
	&Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, "range"/* name */
	, &Leaderboard_get_range_m4929_MethodInfo/* get */
	, &Leaderboard_set_range_m4930_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Leaderboard_t833____timeScope_PropertyInfo = 
{
	&Leaderboard_t833_il2cpp_TypeInfo/* parent */
	, "timeScope"/* name */
	, &Leaderboard_get_timeScope_m4931_MethodInfo/* get */
	, &Leaderboard_set_timeScope_m4932_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Leaderboard_t833_PropertyInfos[] =
{
	&Leaderboard_t833____id_PropertyInfo,
	&Leaderboard_t833____userScope_PropertyInfo,
	&Leaderboard_t833____range_PropertyInfo,
	&Leaderboard_t833____timeScope_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
MethodInfo Leaderboard__ctor_m4918_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Leaderboard__ctor_m4918/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1485/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
MethodInfo Leaderboard_ToString_m4919_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Leaderboard_ToString_m4919/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1486/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IScore_t957_0_0_0;
extern Il2CppType IScore_t957_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_SetLocalUserScore_m4920_ParameterInfos[] = 
{
	{"score", 0, 134219398, &EmptyCustomAttributesCache, &IScore_t957_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
MethodInfo Leaderboard_SetLocalUserScore_m4920_MethodInfo = 
{
	"SetLocalUserScore"/* name */
	, (methodPointerType)&Leaderboard_SetLocalUserScore_m4920/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, Leaderboard_t833_Leaderboard_SetLocalUserScore_m4920_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1487/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UInt32_t1020_0_0_0;
extern Il2CppType UInt32_t1020_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_SetMaxRange_m4921_ParameterInfos[] = 
{
	{"maxRange", 0, 134219399, &EmptyCustomAttributesCache, &UInt32_t1020_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
MethodInfo Leaderboard_SetMaxRange_m4921_MethodInfo = 
{
	"SetMaxRange"/* name */
	, (methodPointerType)&Leaderboard_SetMaxRange_m4921/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, Leaderboard_t833_Leaderboard_SetMaxRange_m4921_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1488/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IScoreU5BU5D_t958_0_0_0;
extern Il2CppType IScoreU5BU5D_t958_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_SetScores_m4922_ParameterInfos[] = 
{
	{"scores", 0, 134219400, &EmptyCustomAttributesCache, &IScoreU5BU5D_t958_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
MethodInfo Leaderboard_SetScores_m4922_MethodInfo = 
{
	"SetScores"/* name */
	, (methodPointerType)&Leaderboard_SetScores_m4922/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, Leaderboard_t833_Leaderboard_SetScores_m4922_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1489/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_SetTitle_m4923_ParameterInfos[] = 
{
	{"title", 0, 134219401, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
MethodInfo Leaderboard_SetTitle_m4923_MethodInfo = 
{
	"SetTitle"/* name */
	, (methodPointerType)&Leaderboard_SetTitle_m4923/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, Leaderboard_t833_Leaderboard_SetTitle_m4923_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1490/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StringU5BU5D_t3_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
MethodInfo Leaderboard_GetUserFilter_m4924_MethodInfo = 
{
	"GetUserFilter"/* name */
	, (methodPointerType)&Leaderboard_GetUserFilter_m4924/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t3_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1491/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_id_m4925;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
MethodInfo Leaderboard_get_id_m4925_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&Leaderboard_get_id_m4925/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_get_id_m4925/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1492/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_set_id_m4926_ParameterInfos[] = 
{
	{"value", 0, 134219402, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_id_m4926;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
MethodInfo Leaderboard_set_id_m4926_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&Leaderboard_set_id_m4926/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, Leaderboard_t833_Leaderboard_set_id_m4926_ParameterInfos/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_set_id_m4926/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1493/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UserScope_t964_0_0_0;
extern void* RuntimeInvoker_UserScope_t964 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_userScope_m4927;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
MethodInfo Leaderboard_get_userScope_m4927_MethodInfo = 
{
	"get_userScope"/* name */
	, (methodPointerType)&Leaderboard_get_userScope_m4927/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &UserScope_t964_0_0_0/* return_type */
	, RuntimeInvoker_UserScope_t964/* invoker_method */
	, NULL/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_get_userScope_m4927/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1494/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UserScope_t964_0_0_0;
extern Il2CppType UserScope_t964_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_set_userScope_m4928_ParameterInfos[] = 
{
	{"value", 0, 134219403, &EmptyCustomAttributesCache, &UserScope_t964_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_userScope_m4928;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
MethodInfo Leaderboard_set_userScope_m4928_MethodInfo = 
{
	"set_userScope"/* name */
	, (methodPointerType)&Leaderboard_set_userScope_m4928/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, Leaderboard_t833_Leaderboard_set_userScope_m4928_ParameterInfos/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_set_userScope_m4928/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1495/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Range_t959_0_0_0;
extern void* RuntimeInvoker_Range_t959 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_range_m4929;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
MethodInfo Leaderboard_get_range_m4929_MethodInfo = 
{
	"get_range"/* name */
	, (methodPointerType)&Leaderboard_get_range_m4929/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Range_t959_0_0_0/* return_type */
	, RuntimeInvoker_Range_t959/* invoker_method */
	, NULL/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_get_range_m4929/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1496/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Range_t959_0_0_0;
extern Il2CppType Range_t959_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_set_range_m4930_ParameterInfos[] = 
{
	{"value", 0, 134219404, &EmptyCustomAttributesCache, &Range_t959_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Range_t959 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_range_m4930;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
MethodInfo Leaderboard_set_range_m4930_MethodInfo = 
{
	"set_range"/* name */
	, (methodPointerType)&Leaderboard_set_range_m4930/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Range_t959/* invoker_method */
	, Leaderboard_t833_Leaderboard_set_range_m4930_ParameterInfos/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_set_range_m4930/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1497/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TimeScope_t965_0_0_0;
extern void* RuntimeInvoker_TimeScope_t965 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_timeScope_m4931;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
MethodInfo Leaderboard_get_timeScope_m4931_MethodInfo = 
{
	"get_timeScope"/* name */
	, (methodPointerType)&Leaderboard_get_timeScope_m4931/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &TimeScope_t965_0_0_0/* return_type */
	, RuntimeInvoker_TimeScope_t965/* invoker_method */
	, NULL/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_get_timeScope_m4931/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1498/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TimeScope_t965_0_0_0;
extern Il2CppType TimeScope_t965_0_0_0;
static ParameterInfo Leaderboard_t833_Leaderboard_set_timeScope_m4932_ParameterInfos[] = 
{
	{"value", 0, 134219405, &EmptyCustomAttributesCache, &TimeScope_t965_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_timeScope_m4932;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
MethodInfo Leaderboard_set_timeScope_m4932_MethodInfo = 
{
	"set_timeScope"/* name */
	, (methodPointerType)&Leaderboard_set_timeScope_m4932/* method */
	, &Leaderboard_t833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, Leaderboard_t833_Leaderboard_set_timeScope_m4932_ParameterInfos/* parameters */
	, &Leaderboard_t833__CustomAttributeCache_Leaderboard_set_timeScope_m4932/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1499/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Leaderboard_t833_MethodInfos[] =
{
	&Leaderboard__ctor_m4918_MethodInfo,
	&Leaderboard_ToString_m4919_MethodInfo,
	&Leaderboard_SetLocalUserScore_m4920_MethodInfo,
	&Leaderboard_SetMaxRange_m4921_MethodInfo,
	&Leaderboard_SetScores_m4922_MethodInfo,
	&Leaderboard_SetTitle_m4923_MethodInfo,
	&Leaderboard_GetUserFilter_m4924_MethodInfo,
	&Leaderboard_get_id_m4925_MethodInfo,
	&Leaderboard_set_id_m4926_MethodInfo,
	&Leaderboard_get_userScope_m4927_MethodInfo,
	&Leaderboard_set_userScope_m4928_MethodInfo,
	&Leaderboard_get_range_m4929_MethodInfo,
	&Leaderboard_set_range_m4930_MethodInfo,
	&Leaderboard_get_timeScope_m4931_MethodInfo,
	&Leaderboard_set_timeScope_m4932_MethodInfo,
	NULL
};
static MethodInfo* Leaderboard_t833_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Leaderboard_ToString_m4919_MethodInfo,
	&Leaderboard_get_id_m4925_MethodInfo,
	&Leaderboard_get_userScope_m4927_MethodInfo,
	&Leaderboard_get_range_m4929_MethodInfo,
	&Leaderboard_get_timeScope_m4931_MethodInfo,
	&Leaderboard_set_id_m4926_MethodInfo,
	&Leaderboard_set_userScope_m4928_MethodInfo,
	&Leaderboard_set_range_m4930_MethodInfo,
	&Leaderboard_set_timeScope_m4932_MethodInfo,
};
extern TypeInfo ILeaderboard_t829_il2cpp_TypeInfo;
static TypeInfo* Leaderboard_t833_InterfacesTypeInfos[] = 
{
	&ILeaderboard_t829_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Leaderboard_t833_InterfacesOffsets[] = 
{
	{ &ILeaderboard_t829_il2cpp_TypeInfo, 4},
};
void Leaderboard_t833_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_id_m4925(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_id_m4926(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m4927(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m4928(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_range_m4929(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_range_m4930(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m4931(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m4932(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CidU3Ek__BackingField = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CuserScopeU3Ek__BackingField = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CrangeU3Ek__BackingField = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CtimeScopeU3Ek__BackingField = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_id_m4925 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_id_m4925
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_id_m4926 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_id_m4926
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_userScope_m4927 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m4927
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_userScope_m4928 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m4928
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_range_m4929 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_range_m4929
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_range_m4930 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_range_m4930
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_timeScope_m4931 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m4931
};
CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_timeScope_m4932 = {
1,
NULL,
&Leaderboard_t833_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m4932
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType Leaderboard_t833_0_0_0;
extern Il2CppType Leaderboard_t833_1_0_0;
struct Leaderboard_t833;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CidU3Ek__BackingField;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CuserScopeU3Ek__BackingField;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CrangeU3Ek__BackingField;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_U3CtimeScopeU3Ek__BackingField;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_id_m4925;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_id_m4926;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_userScope_m4927;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_userScope_m4928;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_range_m4929;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_range_m4930;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_get_timeScope_m4931;
extern CustomAttributesCache Leaderboard_t833__CustomAttributeCache_Leaderboard_set_timeScope_m4932;
TypeInfo Leaderboard_t833_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Leaderboard"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Leaderboard_t833_MethodInfos/* methods */
	, Leaderboard_t833_PropertyInfos/* properties */
	, Leaderboard_t833_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Leaderboard_t833_il2cpp_TypeInfo/* element_class */
	, Leaderboard_t833_InterfacesTypeInfos/* implemented_interfaces */
	, Leaderboard_t833_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Leaderboard_t833_il2cpp_TypeInfo/* cast_class */
	, &Leaderboard_t833_0_0_0/* byval_arg */
	, &Leaderboard_t833_1_0_0/* this_arg */
	, Leaderboard_t833_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Leaderboard_t833)/* instance_size */
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
	, 15/* method_count */
	, 4/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HitInfo_t960_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
extern MethodInfo GameObject_SendMessage_m4654_MethodInfo;
extern MethodInfo Object_op_Equality_m1193_MethodInfo;
extern MethodInfo Object_op_Inequality_m1203_MethodInfo;


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern MethodInfo HitInfo_SendMessage_m4933_MethodInfo;
 void HitInfo_SendMessage_m4933 (HitInfo_t960 * __this, String_t* ___name, MethodInfo* method){
	{
		GameObject_t154 * L_0 = (__this->___target_0);
		NullCheck(L_0);
		GameObject_SendMessage_m4654(L_0, ___name, NULL, 1, /*hidden argument*/&GameObject_SendMessage_m4654_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_Compare_m4934_MethodInfo;
 bool HitInfo_Compare_m4934 (Object_t * __this/* static, unused */, HitInfo_t960  ___lhs, HitInfo_t960  ___rhs, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		NullCheck((&___lhs));
		GameObject_t154 * L_0 = ((&___lhs)->___target_0);
		NullCheck((&___rhs));
		GameObject_t154 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m1193(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m1193_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck((&___lhs));
		Camera_t186 * L_3 = ((&___lhs)->___camera_1);
		NullCheck((&___rhs));
		Camera_t186 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m1193(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Object_op_Equality_m1193_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern MethodInfo HitInfo_op_Implicit_m4935_MethodInfo;
 bool HitInfo_op_Implicit_m4935 (Object_t * __this/* static, unused */, HitInfo_t960  ___exists, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		NullCheck((&___exists));
		GameObject_t154 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m1203(NULL /*static, unused*/, L_0, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Inequality_m1203_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((&___exists));
		Camera_t186 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m1203(NULL /*static, unused*/, L_2, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Inequality_m1203_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.SendMouseEvents/HitInfo
extern Il2CppType GameObject_t154_0_0_6;
FieldInfo HitInfo_t960____target_0_FieldInfo = 
{
	"target"/* name */
	, &GameObject_t154_0_0_6/* type */
	, &HitInfo_t960_il2cpp_TypeInfo/* parent */
	, offsetof(HitInfo_t960, ___target_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Camera_t186_0_0_6;
FieldInfo HitInfo_t960____camera_1_FieldInfo = 
{
	"camera"/* name */
	, &Camera_t186_0_0_6/* type */
	, &HitInfo_t960_il2cpp_TypeInfo/* parent */
	, offsetof(HitInfo_t960, ___camera_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* HitInfo_t960_FieldInfos[] =
{
	&HitInfo_t960____target_0_FieldInfo,
	&HitInfo_t960____camera_1_FieldInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
static ParameterInfo HitInfo_t960_HitInfo_SendMessage_m4933_ParameterInfos[] = 
{
	{"name", 0, 134219410, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
MethodInfo HitInfo_SendMessage_m4933_MethodInfo = 
{
	"SendMessage"/* name */
	, (methodPointerType)&HitInfo_SendMessage_m4933/* method */
	, &HitInfo_t960_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, HitInfo_t960_HitInfo_SendMessage_m4933_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1503/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType HitInfo_t960_0_0_0;
extern Il2CppType HitInfo_t960_0_0_0;
extern Il2CppType HitInfo_t960_0_0_0;
static ParameterInfo HitInfo_t960_HitInfo_Compare_m4934_ParameterInfos[] = 
{
	{"lhs", 0, 134219411, &EmptyCustomAttributesCache, &HitInfo_t960_0_0_0},
	{"rhs", 1, 134219412, &EmptyCustomAttributesCache, &HitInfo_t960_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_HitInfo_t960_HitInfo_t960 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
MethodInfo HitInfo_Compare_m4934_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&HitInfo_Compare_m4934/* method */
	, &HitInfo_t960_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_HitInfo_t960_HitInfo_t960/* invoker_method */
	, HitInfo_t960_HitInfo_Compare_m4934_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1504/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType HitInfo_t960_0_0_0;
static ParameterInfo HitInfo_t960_HitInfo_op_Implicit_m4935_ParameterInfos[] = 
{
	{"exists", 0, 134219413, &EmptyCustomAttributesCache, &HitInfo_t960_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_HitInfo_t960 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
MethodInfo HitInfo_op_Implicit_m4935_MethodInfo = 
{
	"op_Implicit"/* name */
	, (methodPointerType)&HitInfo_op_Implicit_m4935/* method */
	, &HitInfo_t960_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_HitInfo_t960/* invoker_method */
	, HitInfo_t960_HitInfo_op_Implicit_m4935_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1505/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* HitInfo_t960_MethodInfos[] =
{
	&HitInfo_SendMessage_m4933_MethodInfo,
	&HitInfo_Compare_m4934_MethodInfo,
	&HitInfo_op_Implicit_m4935_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
static MethodInfo* HitInfo_t960_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType HitInfo_t960_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern TypeInfo SendMouseEvents_t962_il2cpp_TypeInfo;
TypeInfo HitInfo_t960_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "HitInfo"/* name */
	, ""/* namespaze */
	, HitInfo_t960_MethodInfos/* methods */
	, NULL/* properties */
	, HitInfo_t960_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* nested_in */
	, &HitInfo_t960_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, HitInfo_t960_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &HitInfo_t960_il2cpp_TypeInfo/* cast_class */
	, &HitInfo_t960_0_0_0/* byval_arg */
	, &HitInfo_t960_1_0_0/* this_arg */
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
	, sizeof (HitInfo_t960)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, true/* valuetype */
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
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
extern TypeInfo HitInfoU5BU5D_t961_il2cpp_TypeInfo;
extern TypeInfo Input_t463_il2cpp_TypeInfo;
extern TypeInfo CameraU5BU5D_t890_il2cpp_TypeInfo;
extern TypeInfo Camera_t186_il2cpp_TypeInfo;
extern TypeInfo Vector3_t202_il2cpp_TypeInfo;
extern TypeInfo Mathf_t455_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
extern MethodInfo Input_get_mousePosition_m2093_MethodInfo;
extern MethodInfo Camera_get_allCamerasCount_m4585_MethodInfo;
extern MethodInfo Camera_GetAllCameras_m4586_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m4576_MethodInfo;
extern MethodInfo Camera_get_pixelRect_m4575_MethodInfo;
extern MethodInfo Rect_Contains_m4423_MethodInfo;
extern MethodInfo Component_GetComponent_TisGUILayer_t842_m5169_MethodInfo;
extern MethodInfo Object_op_Implicit_m1876_MethodInfo;
extern MethodInfo GUILayer_HitTest_m4101_MethodInfo;
extern MethodInfo Component_get_gameObject_m1178_MethodInfo;
extern MethodInfo Camera_get_eventMask_m4573_MethodInfo;
extern MethodInfo Camera_ScreenPointToRay_m2092_MethodInfo;
extern MethodInfo Ray_get_direction_m3448_MethodInfo;
extern MethodInfo Mathf_Approximately_m3426_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m3445_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m3446_MethodInfo;
extern MethodInfo Mathf_Abs_m1960_MethodInfo;
extern MethodInfo Camera_get_cullingMask_m3458_MethodInfo;
extern MethodInfo Camera_RaycastTry_m4590_MethodInfo;
extern MethodInfo Camera_get_clearFlags_m4581_MethodInfo;
extern MethodInfo Camera_RaycastTry2D_m4592_MethodInfo;
extern MethodInfo SendMouseEvents_SendEvents_m4938_MethodInfo;
extern MethodInfo Input_GetMouseButtonDown_m3403_MethodInfo;
extern MethodInfo Input_GetMouseButton_m3442_MethodInfo;
struct Component_t276;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.GUILayer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_23.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t276;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
 Object_t * Component_GetComponent_TisObject_t_m1564_gshared (Component_t276 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m1564(__this, method) (Object_t *)Component_GetComponent_TisObject_t_m1564_gshared((Component_t276 *)__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t842_m5169(__this, method) (GUILayer_t842 *)Component_GetComponent_TisObject_t_m1564_gshared((Component_t276 *)__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern MethodInfo SendMouseEvents__cctor_m4936_MethodInfo;
 void SendMouseEvents__cctor_m4936 (Object_t * __this/* static, unused */, MethodInfo* method){
	HitInfo_t960  V_0 = {0};
	HitInfo_t960  V_1 = {0};
	HitInfo_t960  V_2 = {0};
	HitInfo_t960  V_3 = {0};
	HitInfo_t960  V_4 = {0};
	HitInfo_t960  V_5 = {0};
	HitInfo_t960  V_6 = {0};
	HitInfo_t960  V_7 = {0};
	HitInfo_t960  V_8 = {0};
	{
		HitInfoU5BU5D_t961* L_0 = ((HitInfoU5BU5D_t961*)SZArrayNew(InitializedTypeInfo(&HitInfoU5BU5D_t961_il2cpp_TypeInfo), 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_0));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_0, 0)) = V_0;
		HitInfoU5BU5D_t961* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_1));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_1, 1)) = V_1;
		HitInfoU5BU5D_t961* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_2));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_2, 2)) = V_2;
		((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3 = L_2;
		HitInfoU5BU5D_t961* L_3 = ((HitInfoU5BU5D_t961*)SZArrayNew(InitializedTypeInfo(&HitInfoU5BU5D_t961_il2cpp_TypeInfo), 3));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_3));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_3, 0)) = V_3;
		HitInfoU5BU5D_t961* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_4));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_4, 1)) = V_4;
		HitInfoU5BU5D_t961* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_5));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_5, 2)) = V_5;
		((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4 = L_5;
		HitInfoU5BU5D_t961* L_6 = ((HitInfoU5BU5D_t961*)SZArrayNew(InitializedTypeInfo(&HitInfoU5BU5D_t961_il2cpp_TypeInfo), 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_6));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_6, 0)) = V_6;
		HitInfoU5BU5D_t961* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_7));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_7, 1)) = V_7;
		HitInfoU5BU5D_t961* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_8));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema(L_8, 2)) = V_8;
		((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5 = L_8;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern MethodInfo SendMouseEvents_DoSendMouseEvents_m4937_MethodInfo;
 void SendMouseEvents_DoSendMouseEvents_m4937 (Object_t * __this/* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, MethodInfo* method){
	Vector3_t202  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t186 * V_3 = {0};
	CameraU5BU5D_t890* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t442  V_6 = {0};
	GUILayer_t842 * V_7 = {0};
	GUIElement_t841 * V_8 = {0};
	Ray_t445  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t154 * V_12 = {0};
	GameObject_t154 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t960  V_15 = {0};
	Vector3_t202  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t463_il2cpp_TypeInfo));
		Vector3_t202  L_0 = Input_get_mousePosition_m2093(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m2093_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m4585(NULL /*static, unused*/, /*hidden argument*/&Camera_get_allCamerasCount_m4585_MethodInfo);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		if (!(((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6));
		if ((((int32_t)(((int32_t)(((Array_t *)(((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6))->max_length)))) == ((int32_t)V_1)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t890*)SZArrayNew(InitializedTypeInfo(&CameraU5BU5D_t890_il2cpp_TypeInfo), V_1));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		Camera_GetAllCameras_m4586(NULL /*static, unused*/, (((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6), /*hidden argument*/&Camera_GetAllCameras_m4586_MethodInfo);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), V_2);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_15));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), V_2)) = V_15;
		V_2 = ((int32_t)(V_2+1));
	}

IL_005e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)(((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5))->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		if (___mouseUsed)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		V_4 = (((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_Cameras_6);
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		NullCheck(V_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_4, V_5);
		int32_t L_2 = V_5;
		V_3 = (*(Camera_t186 **)(Camera_t186 **)SZArrayLdElema(V_4, L_2));
		bool L_3 = Object_op_Equality_m1193(NULL /*static, unused*/, V_3, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Equality_m1193_MethodInfo);
		if (L_3)
		{
			goto IL_00a9;
		}
	}
	{
		if (!___skipRTCameras)
		{
			goto IL_00ae;
		}
	}
	{
		NullCheck(V_3);
		RenderTexture_t839 * L_4 = Camera_get_targetTexture_m4576(V_3, /*hidden argument*/&Camera_get_targetTexture_m4576_MethodInfo);
		bool L_5 = Object_op_Inequality_m1203(NULL /*static, unused*/, L_4, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Inequality_m1203_MethodInfo);
		if (!L_5)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		NullCheck(V_3);
		Rect_t442  L_6 = Camera_get_pixelRect_m4575(V_3, /*hidden argument*/&Camera_get_pixelRect_m4575_MethodInfo);
		V_6 = L_6;
		bool L_7 = Rect_Contains_m4423((&V_6), V_0, /*hidden argument*/&Rect_Contains_m4423_MethodInfo);
		if (L_7)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		NullCheck(V_3);
		GUILayer_t842 * L_8 = Component_GetComponent_TisGUILayer_t842_m5169(V_3, /*hidden argument*/&Component_GetComponent_TisGUILayer_t842_m5169_MethodInfo);
		V_7 = L_8;
		bool L_9 = Object_op_Implicit_m1876(NULL /*static, unused*/, V_7, /*hidden argument*/&Object_op_Implicit_m1876_MethodInfo);
		if (!L_9)
		{
			goto IL_0141;
		}
	}
	{
		NullCheck(V_7);
		GUIElement_t841 * L_10 = GUILayer_HitTest_m4101(V_7, V_0, /*hidden argument*/&GUILayer_HitTest_m4101_MethodInfo);
		V_8 = L_10;
		bool L_11 = Object_op_Implicit_m1876(NULL /*static, unused*/, V_8, /*hidden argument*/&Object_op_Implicit_m1876_MethodInfo);
		if (!L_11)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0);
		NullCheck(V_8);
		GameObject_t154 * L_12 = Component_get_gameObject_m1178(V_8, /*hidden argument*/&Component_get_gameObject_m1178_MethodInfo);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0))->___target_0 = L_12;
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0))->___camera_1 = V_3;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0))->___target_0 = (GameObject_t154 *)NULL;
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 0))->___camera_1 = (Camera_t186 *)NULL;
	}

IL_0141:
	{
		NullCheck(V_3);
		int32_t L_13 = Camera_get_eventMask_m4573(V_3, /*hidden argument*/&Camera_get_eventMask_m4573_MethodInfo);
		if (L_13)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		NullCheck(V_3);
		Ray_t445  L_14 = Camera_ScreenPointToRay_m2092(V_3, V_0, /*hidden argument*/&Camera_ScreenPointToRay_m2092_MethodInfo);
		V_9 = L_14;
		Vector3_t202  L_15 = Ray_get_direction_m3448((&V_9), /*hidden argument*/&Ray_get_direction_m3448_MethodInfo);
		V_16 = L_15;
		NullCheck((&V_16));
		float L_16 = ((&V_16)->___z_3);
		V_10 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		bool L_17 = Mathf_Approximately_m3426(NULL /*static, unused*/, (0.0f), V_10, /*hidden argument*/&Mathf_Approximately_m3426_MethodInfo);
		if (!L_17)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		NullCheck(V_3);
		float L_18 = Camera_get_farClipPlane_m3445(V_3, /*hidden argument*/&Camera_get_farClipPlane_m3445_MethodInfo);
		NullCheck(V_3);
		float L_19 = Camera_get_nearClipPlane_m3446(V_3, /*hidden argument*/&Camera_get_nearClipPlane_m3446_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		float L_20 = fabsf(((float)((float)((float)(L_18-L_19))/(float)V_10)));
		G_B23_0 = L_20;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		NullCheck(V_3);
		int32_t L_21 = Camera_get_cullingMask_m3458(V_3, /*hidden argument*/&Camera_get_cullingMask_m3458_MethodInfo);
		NullCheck(V_3);
		int32_t L_22 = Camera_get_eventMask_m4573(V_3, /*hidden argument*/&Camera_get_eventMask_m4573_MethodInfo);
		NullCheck(V_3);
		GameObject_t154 * L_23 = Camera_RaycastTry_m4590(V_3, V_9, V_11, ((int32_t)((int32_t)L_21&(int32_t)L_22)), /*hidden argument*/&Camera_RaycastTry_m4590_MethodInfo);
		V_12 = L_23;
		bool L_24 = Object_op_Inequality_m1203(NULL /*static, unused*/, V_12, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Inequality_m1203_MethodInfo);
		if (!L_24)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1))->___target_0 = V_12;
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1))->___camera_1 = V_3;
		goto IL_0226;
	}

IL_01ec:
	{
		NullCheck(V_3);
		int32_t L_25 = Camera_get_clearFlags_m4581(V_3, /*hidden argument*/&Camera_get_clearFlags_m4581_MethodInfo);
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		NullCheck(V_3);
		int32_t L_26 = Camera_get_clearFlags_m4581(V_3, /*hidden argument*/&Camera_get_clearFlags_m4581_MethodInfo);
		if ((((uint32_t)L_26) != ((uint32_t)2)))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1))->___target_0 = (GameObject_t154 *)NULL;
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 1))->___camera_1 = (Camera_t186 *)NULL;
	}

IL_0226:
	{
		NullCheck(V_3);
		int32_t L_27 = Camera_get_cullingMask_m3458(V_3, /*hidden argument*/&Camera_get_cullingMask_m3458_MethodInfo);
		NullCheck(V_3);
		int32_t L_28 = Camera_get_eventMask_m4573(V_3, /*hidden argument*/&Camera_get_eventMask_m4573_MethodInfo);
		NullCheck(V_3);
		GameObject_t154 * L_29 = Camera_RaycastTry2D_m4592(V_3, V_9, V_11, ((int32_t)((int32_t)L_27&(int32_t)L_28)), /*hidden argument*/&Camera_RaycastTry2D_m4592_MethodInfo);
		V_13 = L_29;
		bool L_30 = Object_op_Inequality_m1203(NULL /*static, unused*/, V_13, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Inequality_m1203_MethodInfo);
		if (!L_30)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2))->___target_0 = V_13;
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2))->___camera_1 = V_3;
		goto IL_02ae;
	}

IL_0274:
	{
		NullCheck(V_3);
		int32_t L_31 = Camera_get_clearFlags_m4581(V_3, /*hidden argument*/&Camera_get_clearFlags_m4581_MethodInfo);
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		NullCheck(V_3);
		int32_t L_32 = Camera_get_clearFlags_m4581(V_3, /*hidden argument*/&Camera_get_clearFlags_m4581_MethodInfo);
		if ((((uint32_t)L_32) != ((uint32_t)2)))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2))->___target_0 = (GameObject_t154 *)NULL;
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2);
		NullCheck(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2)));
		((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), 2))->___camera_1 = (Camera_t186 *)NULL;
	}

IL_02ae:
	{
		V_5 = ((int32_t)(V_5+1));
	}

IL_02b4:
	{
		NullCheck(V_4);
		if ((((int32_t)V_5) < ((int32_t)(((int32_t)(((Array_t *)V_4)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), V_14);
		SendMouseEvents_SendEvents_m4938(NULL /*static, unused*/, V_14, (*(HitInfo_t960 *)((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5), V_14))), /*hidden argument*/&SendMouseEvents_SendEvents_m4938_MethodInfo);
		V_14 = ((int32_t)(V_14+1));
	}

IL_02e5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5));
		if ((((int32_t)V_14) < ((int32_t)(((int32_t)(((Array_t *)(((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_CurrentHit_5))->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
 void SendMouseEvents_SendEvents_m4938 (Object_t * __this/* static, unused */, int32_t ___i, HitInfo_t960  ___hit, MethodInfo* method){
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t960  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t463_il2cpp_TypeInfo));
		bool L_0 = Input_GetMouseButtonDown_m3403(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonDown_m3403_MethodInfo);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m3442(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButton_m3442_MethodInfo);
		V_1 = L_1;
		if (!V_0)
		{
			goto IL_004a;
		}
	}
	{
		bool L_2 = HitInfo_op_Implicit_m4935(NULL /*static, unused*/, ___hit, /*hidden argument*/&HitInfo_op_Implicit_m4935_MethodInfo);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i)) = ___hit;
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		HitInfo_SendMessage_m4933(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i)), (String_t*) &_stringLiteral450, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		if (V_1)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		bool L_3 = HitInfo_op_Implicit_m4935(NULL /*static, unused*/, (*(HitInfo_t960 *)((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i))), /*hidden argument*/&HitInfo_op_Implicit_m4935_MethodInfo);
		if (!L_3)
		{
			goto IL_00c8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		bool L_4 = HitInfo_Compare_m4934(NULL /*static, unused*/, ___hit, (*(HitInfo_t960 *)((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i))), /*hidden argument*/&HitInfo_Compare_m4934_MethodInfo);
		if (!L_4)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		HitInfo_SendMessage_m4933(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i)), (String_t*) &_stringLiteral451, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		HitInfo_SendMessage_m4933(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i)), (String_t*) &_stringLiteral452, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		Initobj (&HitInfo_t960_il2cpp_TypeInfo, (&V_2));
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i)) = V_2;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		bool L_5 = HitInfo_op_Implicit_m4935(NULL /*static, unused*/, (*(HitInfo_t960 *)((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i))), /*hidden argument*/&HitInfo_op_Implicit_m4935_MethodInfo);
		if (!L_5)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i);
		HitInfo_SendMessage_m4933(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_MouseDownHit_4), ___i)), (String_t*) &_stringLiteral453, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
	}

IL_00fc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i);
		bool L_6 = HitInfo_Compare_m4934(NULL /*static, unused*/, ___hit, (*(HitInfo_t960 *)((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i))), /*hidden argument*/&HitInfo_Compare_m4934_MethodInfo);
		if (!L_6)
		{
			goto IL_0133;
		}
	}
	{
		bool L_7 = HitInfo_op_Implicit_m4935(NULL /*static, unused*/, ___hit, /*hidden argument*/&HitInfo_op_Implicit_m4935_MethodInfo);
		if (!L_7)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m4933((&___hit), (String_t*) &_stringLiteral454, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i);
		bool L_8 = HitInfo_op_Implicit_m4935(NULL /*static, unused*/, (*(HitInfo_t960 *)((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i))), /*hidden argument*/&HitInfo_op_Implicit_m4935_MethodInfo);
		if (!L_8)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i);
		HitInfo_SendMessage_m4933(((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i)), (String_t*) &_stringLiteral455, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
	}

IL_0162:
	{
		bool L_9 = HitInfo_op_Implicit_m4935(NULL /*static, unused*/, ___hit, /*hidden argument*/&HitInfo_op_Implicit_m4935_MethodInfo);
		if (!L_9)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m4933((&___hit), (String_t*) &_stringLiteral456, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
		HitInfo_SendMessage_m4933((&___hit), (String_t*) &_stringLiteral454, /*hidden argument*/&HitInfo_SendMessage_m4933_MethodInfo);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo));
		NullCheck((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3));
		IL2CPP_ARRAY_BOUNDS_CHECK((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i);
		*((HitInfo_t960 *)(HitInfo_t960 *)SZArrayLdElema((((SendMouseEvents_t962_StaticFields*)InitializedTypeInfo(&SendMouseEvents_t962_il2cpp_TypeInfo)->static_fields)->___m_LastHit_3), ___i)) = ___hit;
		return;
	}
}
// Metadata Definition UnityEngine.SendMouseEvents
extern Il2CppType Int32_t73_0_0_32849;
FieldInfo SendMouseEvents_t962____m_HitIndexGUI_0_FieldInfo = 
{
	"m_HitIndexGUI"/* name */
	, &Int32_t73_0_0_32849/* type */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_32849;
FieldInfo SendMouseEvents_t962____m_HitIndexPhysics3D_1_FieldInfo = 
{
	"m_HitIndexPhysics3D"/* name */
	, &Int32_t73_0_0_32849/* type */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_32849;
FieldInfo SendMouseEvents_t962____m_HitIndexPhysics2D_2_FieldInfo = 
{
	"m_HitIndexPhysics2D"/* name */
	, &Int32_t73_0_0_32849/* type */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType HitInfoU5BU5D_t961_0_0_49;
FieldInfo SendMouseEvents_t962____m_LastHit_3_FieldInfo = 
{
	"m_LastHit"/* name */
	, &HitInfoU5BU5D_t961_0_0_49/* type */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* parent */
	, offsetof(SendMouseEvents_t962_StaticFields, ___m_LastHit_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType HitInfoU5BU5D_t961_0_0_49;
FieldInfo SendMouseEvents_t962____m_MouseDownHit_4_FieldInfo = 
{
	"m_MouseDownHit"/* name */
	, &HitInfoU5BU5D_t961_0_0_49/* type */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* parent */
	, offsetof(SendMouseEvents_t962_StaticFields, ___m_MouseDownHit_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType HitInfoU5BU5D_t961_0_0_49;
FieldInfo SendMouseEvents_t962____m_CurrentHit_5_FieldInfo = 
{
	"m_CurrentHit"/* name */
	, &HitInfoU5BU5D_t961_0_0_49/* type */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* parent */
	, offsetof(SendMouseEvents_t962_StaticFields, ___m_CurrentHit_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType CameraU5BU5D_t890_0_0_17;
FieldInfo SendMouseEvents_t962____m_Cameras_6_FieldInfo = 
{
	"m_Cameras"/* name */
	, &CameraU5BU5D_t890_0_0_17/* type */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* parent */
	, offsetof(SendMouseEvents_t962_StaticFields, ___m_Cameras_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SendMouseEvents_t962_FieldInfos[] =
{
	&SendMouseEvents_t962____m_HitIndexGUI_0_FieldInfo,
	&SendMouseEvents_t962____m_HitIndexPhysics3D_1_FieldInfo,
	&SendMouseEvents_t962____m_HitIndexPhysics2D_2_FieldInfo,
	&SendMouseEvents_t962____m_LastHit_3_FieldInfo,
	&SendMouseEvents_t962____m_MouseDownHit_4_FieldInfo,
	&SendMouseEvents_t962____m_CurrentHit_5_FieldInfo,
	&SendMouseEvents_t962____m_Cameras_6_FieldInfo,
	NULL
};
static const int32_t SendMouseEvents_t962____m_HitIndexGUI_0_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry SendMouseEvents_t962____m_HitIndexGUI_0_DefaultValue = 
{
	&SendMouseEvents_t962____m_HitIndexGUI_0_FieldInfo/* field */
	, { (char*)&SendMouseEvents_t962____m_HitIndexGUI_0_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t SendMouseEvents_t962____m_HitIndexPhysics3D_1_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry SendMouseEvents_t962____m_HitIndexPhysics3D_1_DefaultValue = 
{
	&SendMouseEvents_t962____m_HitIndexPhysics3D_1_FieldInfo/* field */
	, { (char*)&SendMouseEvents_t962____m_HitIndexPhysics3D_1_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t SendMouseEvents_t962____m_HitIndexPhysics2D_2_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry SendMouseEvents_t962____m_HitIndexPhysics2D_2_DefaultValue = 
{
	&SendMouseEvents_t962____m_HitIndexPhysics2D_2_FieldInfo/* field */
	, { (char*)&SendMouseEvents_t962____m_HitIndexPhysics2D_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* SendMouseEvents_t962_FieldDefaultValues[] = 
{
	&SendMouseEvents_t962____m_HitIndexGUI_0_DefaultValue,
	&SendMouseEvents_t962____m_HitIndexPhysics3D_1_DefaultValue,
	&SendMouseEvents_t962____m_HitIndexPhysics2D_2_DefaultValue,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents::.cctor()
MethodInfo SendMouseEvents__cctor_m4936_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&SendMouseEvents__cctor_m4936/* method */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1500/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo SendMouseEvents_t962_SendMouseEvents_DoSendMouseEvents_m4937_ParameterInfos[] = 
{
	{"mouseUsed", 0, 134219406, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"skipRTCameras", 1, 134219407, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
MethodInfo SendMouseEvents_DoSendMouseEvents_m4937_MethodInfo = 
{
	"DoSendMouseEvents"/* name */
	, (methodPointerType)&SendMouseEvents_DoSendMouseEvents_m4937/* method */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, SendMouseEvents_t962_SendMouseEvents_DoSendMouseEvents_m4937_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1501/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType HitInfo_t960_0_0_0;
static ParameterInfo SendMouseEvents_t962_SendMouseEvents_SendEvents_m4938_ParameterInfos[] = 
{
	{"i", 0, 134219408, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"hit", 1, 134219409, &EmptyCustomAttributesCache, &HitInfo_t960_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_HitInfo_t960 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
MethodInfo SendMouseEvents_SendEvents_m4938_MethodInfo = 
{
	"SendEvents"/* name */
	, (methodPointerType)&SendMouseEvents_SendEvents_m4938/* method */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_HitInfo_t960/* invoker_method */
	, SendMouseEvents_t962_SendMouseEvents_SendEvents_m4938_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1502/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SendMouseEvents_t962_MethodInfos[] =
{
	&SendMouseEvents__cctor_m4936_MethodInfo,
	&SendMouseEvents_DoSendMouseEvents_m4937_MethodInfo,
	&SendMouseEvents_SendEvents_m4938_MethodInfo,
	NULL
};
extern TypeInfo HitInfo_t960_il2cpp_TypeInfo;
static TypeInfo* SendMouseEvents_t962_il2cpp_TypeInfo__nestedTypes[2] =
{
	&HitInfo_t960_il2cpp_TypeInfo,
	NULL
};
extern MethodInfo Object_ToString_m498_MethodInfo;
static MethodInfo* SendMouseEvents_t962_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SendMouseEvents_t962_0_0_0;
extern Il2CppType SendMouseEvents_t962_1_0_0;
struct SendMouseEvents_t962;
TypeInfo SendMouseEvents_t962_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SendMouseEvents"/* name */
	, "UnityEngine"/* namespaze */
	, SendMouseEvents_t962_MethodInfos/* methods */
	, NULL/* properties */
	, SendMouseEvents_t962_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, SendMouseEvents_t962_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SendMouseEvents_t962_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SendMouseEvents_t962_il2cpp_TypeInfo/* cast_class */
	, &SendMouseEvents_t962_0_0_0/* byval_arg */
	, &SendMouseEvents_t962_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, SendMouseEvents_t962_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SendMouseEvents_t962)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(SendMouseEvents_t962_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 7/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ISocialPlatform_t1019_il2cpp_TypeInfo;

// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_0.h"


// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
// Metadata Definition UnityEngine.SocialPlatforms.ISocialPlatform
extern Il2CppType ILocalUser_t824_0_0_0;
extern Il2CppType ILocalUser_t824_0_0_0;
extern Il2CppType Action_1_t814_0_0_0;
extern Il2CppType Action_1_t814_0_0_0;
static ParameterInfo ISocialPlatform_t1019_ISocialPlatform_Authenticate_m5170_ParameterInfos[] = 
{
	{"user", 0, 134219414, &EmptyCustomAttributesCache, &ILocalUser_t824_0_0_0},
	{"callback", 1, 134219415, &EmptyCustomAttributesCache, &Action_1_t814_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
MethodInfo ISocialPlatform_Authenticate_m5170_MethodInfo = 
{
	"Authenticate"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, ISocialPlatform_t1019_ISocialPlatform_Authenticate_m5170_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1506/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ILocalUser_t824_0_0_0;
extern Il2CppType Action_1_t814_0_0_0;
static ParameterInfo ISocialPlatform_t1019_ISocialPlatform_LoadFriends_m5171_ParameterInfos[] = 
{
	{"user", 0, 134219416, &EmptyCustomAttributesCache, &ILocalUser_t824_0_0_0},
	{"callback", 1, 134219417, &EmptyCustomAttributesCache, &Action_1_t814_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
MethodInfo ISocialPlatform_LoadFriends_m5171_MethodInfo = 
{
	"LoadFriends"/* name */
	, NULL/* method */
	, &ISocialPlatform_t1019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, ISocialPlatform_t1019_ISocialPlatform_LoadFriends_m5171_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1507/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ISocialPlatform_t1019_MethodInfos[] =
{
	&ISocialPlatform_Authenticate_m5170_MethodInfo,
	&ISocialPlatform_LoadFriends_m5171_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType ISocialPlatform_t1019_0_0_0;
extern Il2CppType ISocialPlatform_t1019_1_0_0;
struct ISocialPlatform_t1019;
TypeInfo ISocialPlatform_t1019_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ISocialPlatform"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, ISocialPlatform_t1019_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ISocialPlatform_t1019_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ISocialPlatform_t1019_il2cpp_TypeInfo/* cast_class */
	, &ISocialPlatform_t1019_0_0_0/* byval_arg */
	, &ISocialPlatform_t1019_1_0_0/* this_arg */
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



// System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated()
// Metadata Definition UnityEngine.SocialPlatforms.ILocalUser
extern MethodInfo ILocalUser_get_authenticated_m5078_MethodInfo;
static PropertyInfo ILocalUser_t824____authenticated_PropertyInfo = 
{
	&ILocalUser_t824_il2cpp_TypeInfo/* parent */
	, "authenticated"/* name */
	, &ILocalUser_get_authenticated_m5078_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ILocalUser_t824_PropertyInfos[] =
{
	&ILocalUser_t824____authenticated_PropertyInfo,
	NULL
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated()
MethodInfo ILocalUser_get_authenticated_m5078_MethodInfo = 
{
	"get_authenticated"/* name */
	, NULL/* method */
	, &ILocalUser_t824_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1508/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ILocalUser_t824_MethodInfos[] =
{
	&ILocalUser_get_authenticated_m5078_MethodInfo,
	NULL
};
static TypeInfo* ILocalUser_t824_InterfacesTypeInfos[] = 
{
	&IUserProfile_t1017_il2cpp_TypeInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType ILocalUser_t824_1_0_0;
struct ILocalUser_t824;
TypeInfo ILocalUser_t824_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ILocalUser"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, ILocalUser_t824_MethodInfos/* methods */
	, ILocalUser_t824_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ILocalUser_t824_il2cpp_TypeInfo/* element_class */
	, ILocalUser_t824_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ILocalUser_t824_il2cpp_TypeInfo/* cast_class */
	, &ILocalUser_t824_0_0_0/* byval_arg */
	, &ILocalUser_t824_1_0_0/* this_arg */
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
	, 1/* property_count */
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
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



// Metadata Definition UnityEngine.SocialPlatforms.UserState
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo UserState_t963____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &UserState_t963_il2cpp_TypeInfo/* parent */
	, offsetof(UserState_t963, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserState_t963_0_0_32854;
FieldInfo UserState_t963____Online_2_FieldInfo = 
{
	"Online"/* name */
	, &UserState_t963_0_0_32854/* type */
	, &UserState_t963_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserState_t963_0_0_32854;
FieldInfo UserState_t963____OnlineAndAway_3_FieldInfo = 
{
	"OnlineAndAway"/* name */
	, &UserState_t963_0_0_32854/* type */
	, &UserState_t963_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserState_t963_0_0_32854;
FieldInfo UserState_t963____OnlineAndBusy_4_FieldInfo = 
{
	"OnlineAndBusy"/* name */
	, &UserState_t963_0_0_32854/* type */
	, &UserState_t963_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserState_t963_0_0_32854;
FieldInfo UserState_t963____Offline_5_FieldInfo = 
{
	"Offline"/* name */
	, &UserState_t963_0_0_32854/* type */
	, &UserState_t963_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserState_t963_0_0_32854;
FieldInfo UserState_t963____Playing_6_FieldInfo = 
{
	"Playing"/* name */
	, &UserState_t963_0_0_32854/* type */
	, &UserState_t963_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UserState_t963_FieldInfos[] =
{
	&UserState_t963____value___1_FieldInfo,
	&UserState_t963____Online_2_FieldInfo,
	&UserState_t963____OnlineAndAway_3_FieldInfo,
	&UserState_t963____OnlineAndBusy_4_FieldInfo,
	&UserState_t963____Offline_5_FieldInfo,
	&UserState_t963____Playing_6_FieldInfo,
	NULL
};
static const int32_t UserState_t963____Online_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UserState_t963____Online_2_DefaultValue = 
{
	&UserState_t963____Online_2_FieldInfo/* field */
	, { (char*)&UserState_t963____Online_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UserState_t963____OnlineAndAway_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UserState_t963____OnlineAndAway_3_DefaultValue = 
{
	&UserState_t963____OnlineAndAway_3_FieldInfo/* field */
	, { (char*)&UserState_t963____OnlineAndAway_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UserState_t963____OnlineAndBusy_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UserState_t963____OnlineAndBusy_4_DefaultValue = 
{
	&UserState_t963____OnlineAndBusy_4_FieldInfo/* field */
	, { (char*)&UserState_t963____OnlineAndBusy_4_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UserState_t963____Offline_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry UserState_t963____Offline_5_DefaultValue = 
{
	&UserState_t963____Offline_5_FieldInfo/* field */
	, { (char*)&UserState_t963____Offline_5_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UserState_t963____Playing_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry UserState_t963____Playing_6_DefaultValue = 
{
	&UserState_t963____Playing_6_FieldInfo/* field */
	, { (char*)&UserState_t963____Playing_6_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UserState_t963_FieldDefaultValues[] = 
{
	&UserState_t963____Online_2_DefaultValue,
	&UserState_t963____OnlineAndAway_3_DefaultValue,
	&UserState_t963____OnlineAndBusy_4_DefaultValue,
	&UserState_t963____Offline_5_DefaultValue,
	&UserState_t963____Playing_6_DefaultValue,
	NULL
};
static MethodInfo* UserState_t963_MethodInfos[] =
{
	NULL
};
extern MethodInfo Enum_Equals_m532_MethodInfo;
extern MethodInfo Enum_GetHashCode_m533_MethodInfo;
extern MethodInfo Enum_ToString_m534_MethodInfo;
extern MethodInfo Enum_ToString_m535_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m536_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m537_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m538_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m539_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m540_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m541_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m542_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m543_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m544_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m545_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m546_MethodInfo;
extern MethodInfo Enum_ToString_m547_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m548_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m549_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m550_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m551_MethodInfo;
extern MethodInfo Enum_CompareTo_m552_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m553_MethodInfo;
static MethodInfo* UserState_t963_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
extern TypeInfo IFormattable_t99_il2cpp_TypeInfo;
extern TypeInfo IConvertible_t100_il2cpp_TypeInfo;
extern TypeInfo IComparable_t101_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UserState_t963_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UserState_t963_1_0_0;
extern TypeInfo Enum_t98_il2cpp_TypeInfo;
TypeInfo UserState_t963_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserState"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, UserState_t963_MethodInfos/* methods */
	, NULL/* properties */
	, UserState_t963_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UserState_t963_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &UserState_t963_0_0_0/* byval_arg */
	, &UserState_t963_1_0_0/* this_arg */
	, UserState_t963_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UserState_t963_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserState_t963)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition UnityEngine.SocialPlatforms.IUserProfile
static MethodInfo* IUserProfile_t1017_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType IUserProfile_t1017_0_0_0;
extern Il2CppType IUserProfile_t1017_1_0_0;
struct IUserProfile_t1017;
TypeInfo IUserProfile_t1017_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IUserProfile"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IUserProfile_t1017_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IUserProfile_t1017_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IUserProfile_t1017_il2cpp_TypeInfo/* cast_class */
	, &IUserProfile_t1017_0_0_0/* byval_arg */
	, &IUserProfile_t1017_1_0_0/* this_arg */
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
	, 0/* method_count */
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



// Metadata Definition UnityEngine.SocialPlatforms.IAchievement
static MethodInfo* IAchievement_t830_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType IAchievement_t830_0_0_0;
extern Il2CppType IAchievement_t830_1_0_0;
struct IAchievement_t830;
TypeInfo IAchievement_t830_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IAchievement"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IAchievement_t830_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IAchievement_t830_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IAchievement_t830_il2cpp_TypeInfo/* cast_class */
	, &IAchievement_t830_0_0_0/* byval_arg */
	, &IAchievement_t830_1_0_0/* this_arg */
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
	, 0/* method_count */
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



// Metadata Definition UnityEngine.SocialPlatforms.IAchievementDescription
static MethodInfo* IAchievementDescription_t1012_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType IAchievementDescription_t1012_0_0_0;
extern Il2CppType IAchievementDescription_t1012_1_0_0;
struct IAchievementDescription_t1012;
TypeInfo IAchievementDescription_t1012_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IAchievementDescription"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IAchievementDescription_t1012_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IAchievementDescription_t1012_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IAchievementDescription_t1012_il2cpp_TypeInfo/* cast_class */
	, &IAchievementDescription_t1012_0_0_0/* byval_arg */
	, &IAchievementDescription_t1012_1_0_0/* this_arg */
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
	, 0/* method_count */
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



// Metadata Definition UnityEngine.SocialPlatforms.IScore
static MethodInfo* IScore_t957_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType IScore_t957_1_0_0;
struct IScore_t957;
TypeInfo IScore_t957_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IScore"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, IScore_t957_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IScore_t957_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IScore_t957_il2cpp_TypeInfo/* cast_class */
	, &IScore_t957_0_0_0/* byval_arg */
	, &IScore_t957_1_0_0/* this_arg */
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
	, 0/* method_count */
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
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



// Metadata Definition UnityEngine.SocialPlatforms.UserScope
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo UserScope_t964____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &UserScope_t964_il2cpp_TypeInfo/* parent */
	, offsetof(UserScope_t964, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserScope_t964_0_0_32854;
FieldInfo UserScope_t964____Global_2_FieldInfo = 
{
	"Global"/* name */
	, &UserScope_t964_0_0_32854/* type */
	, &UserScope_t964_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UserScope_t964_0_0_32854;
FieldInfo UserScope_t964____FriendsOnly_3_FieldInfo = 
{
	"FriendsOnly"/* name */
	, &UserScope_t964_0_0_32854/* type */
	, &UserScope_t964_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UserScope_t964_FieldInfos[] =
{
	&UserScope_t964____value___1_FieldInfo,
	&UserScope_t964____Global_2_FieldInfo,
	&UserScope_t964____FriendsOnly_3_FieldInfo,
	NULL
};
static const int32_t UserScope_t964____Global_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UserScope_t964____Global_2_DefaultValue = 
{
	&UserScope_t964____Global_2_FieldInfo/* field */
	, { (char*)&UserScope_t964____Global_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UserScope_t964____FriendsOnly_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UserScope_t964____FriendsOnly_3_DefaultValue = 
{
	&UserScope_t964____FriendsOnly_3_FieldInfo/* field */
	, { (char*)&UserScope_t964____FriendsOnly_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UserScope_t964_FieldDefaultValues[] = 
{
	&UserScope_t964____Global_2_DefaultValue,
	&UserScope_t964____FriendsOnly_3_DefaultValue,
	NULL
};
static MethodInfo* UserScope_t964_MethodInfos[] =
{
	NULL
};
static MethodInfo* UserScope_t964_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
static Il2CppInterfaceOffsetPair UserScope_t964_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UserScope_t964_1_0_0;
TypeInfo UserScope_t964_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserScope"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, UserScope_t964_MethodInfos/* methods */
	, NULL/* properties */
	, UserScope_t964_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UserScope_t964_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &UserScope_t964_0_0_0/* byval_arg */
	, &UserScope_t964_1_0_0/* this_arg */
	, UserScope_t964_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UserScope_t964_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserScope_t964)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



// Metadata Definition UnityEngine.SocialPlatforms.TimeScope
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo TimeScope_t965____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &TimeScope_t965_il2cpp_TypeInfo/* parent */
	, offsetof(TimeScope_t965, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TimeScope_t965_0_0_32854;
FieldInfo TimeScope_t965____Today_2_FieldInfo = 
{
	"Today"/* name */
	, &TimeScope_t965_0_0_32854/* type */
	, &TimeScope_t965_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TimeScope_t965_0_0_32854;
FieldInfo TimeScope_t965____Week_3_FieldInfo = 
{
	"Week"/* name */
	, &TimeScope_t965_0_0_32854/* type */
	, &TimeScope_t965_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TimeScope_t965_0_0_32854;
FieldInfo TimeScope_t965____AllTime_4_FieldInfo = 
{
	"AllTime"/* name */
	, &TimeScope_t965_0_0_32854/* type */
	, &TimeScope_t965_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TimeScope_t965_FieldInfos[] =
{
	&TimeScope_t965____value___1_FieldInfo,
	&TimeScope_t965____Today_2_FieldInfo,
	&TimeScope_t965____Week_3_FieldInfo,
	&TimeScope_t965____AllTime_4_FieldInfo,
	NULL
};
static const int32_t TimeScope_t965____Today_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry TimeScope_t965____Today_2_DefaultValue = 
{
	&TimeScope_t965____Today_2_FieldInfo/* field */
	, { (char*)&TimeScope_t965____Today_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TimeScope_t965____Week_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry TimeScope_t965____Week_3_DefaultValue = 
{
	&TimeScope_t965____Week_3_FieldInfo/* field */
	, { (char*)&TimeScope_t965____Week_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TimeScope_t965____AllTime_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry TimeScope_t965____AllTime_4_DefaultValue = 
{
	&TimeScope_t965____AllTime_4_FieldInfo/* field */
	, { (char*)&TimeScope_t965____AllTime_4_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* TimeScope_t965_FieldDefaultValues[] = 
{
	&TimeScope_t965____Today_2_DefaultValue,
	&TimeScope_t965____Week_3_DefaultValue,
	&TimeScope_t965____AllTime_4_DefaultValue,
	NULL
};
static MethodInfo* TimeScope_t965_MethodInfos[] =
{
	NULL
};
static MethodInfo* TimeScope_t965_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
static Il2CppInterfaceOffsetPair TimeScope_t965_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TimeScope_t965_1_0_0;
TypeInfo TimeScope_t965_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TimeScope"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, TimeScope_t965_MethodInfos/* methods */
	, NULL/* properties */
	, TimeScope_t965_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TimeScope_t965_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &TimeScope_t965_0_0_0/* byval_arg */
	, &TimeScope_t965_1_0_0/* this_arg */
	, TimeScope_t965_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, TimeScope_t965_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TimeScope_t965)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
 void Range__ctor_m4939 (Range_t959 * __this, int32_t ___fromValue, int32_t ___valueCount, MethodInfo* method){
	{
		__this->___from_0 = ___fromValue;
		__this->___count_1 = ___valueCount;
		return;
	}
}
// Metadata Definition UnityEngine.SocialPlatforms.Range
extern Il2CppType Int32_t73_0_0_6;
FieldInfo Range_t959____from_0_FieldInfo = 
{
	"from"/* name */
	, &Int32_t73_0_0_6/* type */
	, &Range_t959_il2cpp_TypeInfo/* parent */
	, offsetof(Range_t959, ___from_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo Range_t959____count_1_FieldInfo = 
{
	"count"/* name */
	, &Int32_t73_0_0_6/* type */
	, &Range_t959_il2cpp_TypeInfo/* parent */
	, offsetof(Range_t959, ___count_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Range_t959_FieldInfos[] =
{
	&Range_t959____from_0_FieldInfo,
	&Range_t959____count_1_FieldInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo Range_t959_Range__ctor_m4939_ParameterInfos[] = 
{
	{"fromValue", 0, 134219418, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"valueCount", 1, 134219419, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
MethodInfo Range__ctor_m4939_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Range__ctor_m4939/* method */
	, &Range_t959_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, Range_t959_Range__ctor_m4939_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1509/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Range_t959_MethodInfos[] =
{
	&Range__ctor_m4939_MethodInfo,
	NULL
};
static MethodInfo* Range_t959_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType Range_t959_1_0_0;
TypeInfo Range_t959_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Range"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, Range_t959_MethodInfos/* methods */
	, NULL/* properties */
	, Range_t959_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Range_t959_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Range_t959_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Range_t959_il2cpp_TypeInfo/* cast_class */
	, &Range_t959_0_0_0/* byval_arg */
	, &Range_t959_1_0_0/* this_arg */
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
	, sizeof (Range_t959)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof(Range_t959 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, true/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
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



// System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id()
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope()
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range()
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope()
// Metadata Definition UnityEngine.SocialPlatforms.ILeaderboard
extern MethodInfo ILeaderboard_get_id_m5071_MethodInfo;
static PropertyInfo ILeaderboard_t829____id_PropertyInfo = 
{
	&ILeaderboard_t829_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &ILeaderboard_get_id_m5071_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ILeaderboard_get_userScope_m5074_MethodInfo;
static PropertyInfo ILeaderboard_t829____userScope_PropertyInfo = 
{
	&ILeaderboard_t829_il2cpp_TypeInfo/* parent */
	, "userScope"/* name */
	, &ILeaderboard_get_userScope_m5074_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ILeaderboard_get_range_m5073_MethodInfo;
static PropertyInfo ILeaderboard_t829____range_PropertyInfo = 
{
	&ILeaderboard_t829_il2cpp_TypeInfo/* parent */
	, "range"/* name */
	, &ILeaderboard_get_range_m5073_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ILeaderboard_get_timeScope_m5072_MethodInfo;
static PropertyInfo ILeaderboard_t829____timeScope_PropertyInfo = 
{
	&ILeaderboard_t829_il2cpp_TypeInfo/* parent */
	, "timeScope"/* name */
	, &ILeaderboard_get_timeScope_m5072_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ILeaderboard_t829_PropertyInfos[] =
{
	&ILeaderboard_t829____id_PropertyInfo,
	&ILeaderboard_t829____userScope_PropertyInfo,
	&ILeaderboard_t829____range_PropertyInfo,
	&ILeaderboard_t829____timeScope_PropertyInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id()
MethodInfo ILeaderboard_get_id_m5071_MethodInfo = 
{
	"get_id"/* name */
	, NULL/* method */
	, &ILeaderboard_t829_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1510/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UserScope_t964_0_0_0;
extern void* RuntimeInvoker_UserScope_t964 (MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope()
MethodInfo ILeaderboard_get_userScope_m5074_MethodInfo = 
{
	"get_userScope"/* name */
	, NULL/* method */
	, &ILeaderboard_t829_il2cpp_TypeInfo/* declaring_type */
	, &UserScope_t964_0_0_0/* return_type */
	, RuntimeInvoker_UserScope_t964/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1511/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Range_t959_0_0_0;
extern void* RuntimeInvoker_Range_t959 (MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range()
MethodInfo ILeaderboard_get_range_m5073_MethodInfo = 
{
	"get_range"/* name */
	, NULL/* method */
	, &ILeaderboard_t829_il2cpp_TypeInfo/* declaring_type */
	, &Range_t959_0_0_0/* return_type */
	, RuntimeInvoker_Range_t959/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1512/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TimeScope_t965_0_0_0;
extern void* RuntimeInvoker_TimeScope_t965 (MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope()
MethodInfo ILeaderboard_get_timeScope_m5072_MethodInfo = 
{
	"get_timeScope"/* name */
	, NULL/* method */
	, &ILeaderboard_t829_il2cpp_TypeInfo/* declaring_type */
	, &TimeScope_t965_0_0_0/* return_type */
	, RuntimeInvoker_TimeScope_t965/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1513/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ILeaderboard_t829_MethodInfos[] =
{
	&ILeaderboard_get_id_m5071_MethodInfo,
	&ILeaderboard_get_userScope_m5074_MethodInfo,
	&ILeaderboard_get_range_m5073_MethodInfo,
	&ILeaderboard_get_timeScope_m5072_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType ILeaderboard_t829_0_0_0;
extern Il2CppType ILeaderboard_t829_1_0_0;
struct ILeaderboard_t829;
TypeInfo ILeaderboard_t829_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ILeaderboard"/* name */
	, "UnityEngine.SocialPlatforms"/* namespaze */
	, ILeaderboard_t829_MethodInfos/* methods */
	, ILeaderboard_t829_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ILeaderboard_t829_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ILeaderboard_t829_il2cpp_TypeInfo/* cast_class */
	, &ILeaderboard_t829_0_0_0/* byval_arg */
	, &ILeaderboard_t829_1_0_0/* this_arg */
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
	, 4/* method_count */
	, 4/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttribute_t966_il2cpp_TypeInfo;
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m1459_MethodInfo;


// System.Void UnityEngine.PropertyAttribute::.ctor()
extern MethodInfo PropertyAttribute__ctor_m4940_MethodInfo;
 void PropertyAttribute__ctor_m4940 (PropertyAttribute_t966 * __this, MethodInfo* method){
	{
		Attribute__ctor_m1459(__this, /*hidden argument*/&Attribute__ctor_m1459_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.PropertyAttribute
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.PropertyAttribute::.ctor()
MethodInfo PropertyAttribute__ctor_m4940_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PropertyAttribute__ctor_m4940/* method */
	, &PropertyAttribute_t966_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1514/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PropertyAttribute_t966_MethodInfos[] =
{
	&PropertyAttribute__ctor_m4940_MethodInfo,
	NULL
};
extern MethodInfo Attribute_Equals_m1464_MethodInfo;
extern MethodInfo Attribute_GetHashCode_m1465_MethodInfo;
static MethodInfo* PropertyAttribute_t966_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern TypeInfo _Attribute_t336_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair PropertyAttribute_t966_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
extern TypeInfo AttributeUsageAttribute_t337_il2cpp_TypeInfo;
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern MethodInfo AttributeUsageAttribute__ctor_m1466_MethodInfo;
extern MethodInfo AttributeUsageAttribute_set_Inherited_m5162_MethodInfo;
extern MethodInfo AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo;
void PropertyAttribute_t966_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 256, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m5162(tmp, true, &AttributeUsageAttribute_set_Inherited_m5162_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache PropertyAttribute_t966__CustomAttributeCache = {
1,
NULL,
&PropertyAttribute_t966_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType PropertyAttribute_t966_0_0_0;
extern Il2CppType PropertyAttribute_t966_1_0_0;
extern TypeInfo Attribute_t226_il2cpp_TypeInfo;
struct PropertyAttribute_t966;
extern CustomAttributesCache PropertyAttribute_t966__CustomAttributeCache;
TypeInfo PropertyAttribute_t966_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PropertyAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, PropertyAttribute_t966_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Attribute_t226_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PropertyAttribute_t966_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PropertyAttribute_t966_VTable/* vtable */
	, &PropertyAttribute_t966__CustomAttributeCache/* custom_attributes_cache */
	, &PropertyAttribute_t966_il2cpp_TypeInfo/* cast_class */
	, &PropertyAttribute_t966_0_0_0/* byval_arg */
	, &PropertyAttribute_t966_1_0_0/* this_arg */
	, PropertyAttribute_t966_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PropertyAttribute_t966)/* instance_size */
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
	, 1/* interface_offsets_count */

};
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TooltipAttribute_t769_il2cpp_TypeInfo;
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern MethodInfo TooltipAttribute__ctor_m3813_MethodInfo;
 void TooltipAttribute__ctor_m3813 (TooltipAttribute_t769 * __this, String_t* ___tooltip, MethodInfo* method){
	{
		PropertyAttribute__ctor_m4940(__this, /*hidden argument*/&PropertyAttribute__ctor_m4940_MethodInfo);
		__this->___tooltip_0 = ___tooltip;
		return;
	}
}
// Metadata Definition UnityEngine.TooltipAttribute
extern Il2CppType String_t_0_0_38;
FieldInfo TooltipAttribute_t769____tooltip_0_FieldInfo = 
{
	"tooltip"/* name */
	, &String_t_0_0_38/* type */
	, &TooltipAttribute_t769_il2cpp_TypeInfo/* parent */
	, offsetof(TooltipAttribute_t769, ___tooltip_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TooltipAttribute_t769_FieldInfos[] =
{
	&TooltipAttribute_t769____tooltip_0_FieldInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TooltipAttribute_t769_TooltipAttribute__ctor_m3813_ParameterInfos[] = 
{
	{"tooltip", 0, 134219420, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
MethodInfo TooltipAttribute__ctor_m3813_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TooltipAttribute__ctor_m3813/* method */
	, &TooltipAttribute_t769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, TooltipAttribute_t769_TooltipAttribute__ctor_m3813_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1515/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TooltipAttribute_t769_MethodInfos[] =
{
	&TooltipAttribute__ctor_m3813_MethodInfo,
	NULL
};
static MethodInfo* TooltipAttribute_t769_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair TooltipAttribute_t769_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void TooltipAttribute_t769_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 256, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m5162(tmp, true, &AttributeUsageAttribute_set_Inherited_m5162_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache TooltipAttribute_t769__CustomAttributeCache = {
1,
NULL,
&TooltipAttribute_t769_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TooltipAttribute_t769_0_0_0;
extern Il2CppType TooltipAttribute_t769_1_0_0;
struct TooltipAttribute_t769;
extern CustomAttributesCache TooltipAttribute_t769__CustomAttributeCache;
TypeInfo TooltipAttribute_t769_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TooltipAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, TooltipAttribute_t769_MethodInfos/* methods */
	, NULL/* properties */
	, TooltipAttribute_t769_FieldInfos/* fields */
	, NULL/* events */
	, &PropertyAttribute_t966_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TooltipAttribute_t769_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TooltipAttribute_t769_VTable/* vtable */
	, &TooltipAttribute_t769__CustomAttributeCache/* custom_attributes_cache */
	, &TooltipAttribute_t769_il2cpp_TypeInfo/* cast_class */
	, &TooltipAttribute_t769_0_0_0/* byval_arg */
	, &TooltipAttribute_t769_1_0_0/* this_arg */
	, TooltipAttribute_t769_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TooltipAttribute_t769)/* instance_size */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SpaceAttribute_t765_il2cpp_TypeInfo;
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern MethodInfo SpaceAttribute__ctor_m3762_MethodInfo;
 void SpaceAttribute__ctor_m3762 (SpaceAttribute_t765 * __this, float ___height, MethodInfo* method){
	{
		PropertyAttribute__ctor_m4940(__this, /*hidden argument*/&PropertyAttribute__ctor_m4940_MethodInfo);
		__this->___height_0 = ___height;
		return;
	}
}
// Metadata Definition UnityEngine.SpaceAttribute
extern Il2CppType Single_t76_0_0_38;
FieldInfo SpaceAttribute_t765____height_0_FieldInfo = 
{
	"height"/* name */
	, &Single_t76_0_0_38/* type */
	, &SpaceAttribute_t765_il2cpp_TypeInfo/* parent */
	, offsetof(SpaceAttribute_t765, ___height_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SpaceAttribute_t765_FieldInfos[] =
{
	&SpaceAttribute_t765____height_0_FieldInfo,
	NULL
};
extern Il2CppType Single_t76_0_0_0;
extern Il2CppType Single_t76_0_0_0;
static ParameterInfo SpaceAttribute_t765_SpaceAttribute__ctor_m3762_ParameterInfos[] = 
{
	{"height", 0, 134219421, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
MethodInfo SpaceAttribute__ctor_m3762_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SpaceAttribute__ctor_m3762/* method */
	, &SpaceAttribute_t765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Single_t76/* invoker_method */
	, SpaceAttribute_t765_SpaceAttribute__ctor_m3762_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1516/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SpaceAttribute_t765_MethodInfos[] =
{
	&SpaceAttribute__ctor_m3762_MethodInfo,
	NULL
};
static MethodInfo* SpaceAttribute_t765_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair SpaceAttribute_t765_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void SpaceAttribute_t765_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 256, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m5162(tmp, true, &AttributeUsageAttribute_set_Inherited_m5162_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, true, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache SpaceAttribute_t765__CustomAttributeCache = {
1,
NULL,
&SpaceAttribute_t765_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SpaceAttribute_t765_0_0_0;
extern Il2CppType SpaceAttribute_t765_1_0_0;
struct SpaceAttribute_t765;
extern CustomAttributesCache SpaceAttribute_t765__CustomAttributeCache;
TypeInfo SpaceAttribute_t765_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SpaceAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SpaceAttribute_t765_MethodInfos/* methods */
	, NULL/* properties */
	, SpaceAttribute_t765_FieldInfos/* fields */
	, NULL/* events */
	, &PropertyAttribute_t966_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SpaceAttribute_t765_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SpaceAttribute_t765_VTable/* vtable */
	, &SpaceAttribute_t765__CustomAttributeCache/* custom_attributes_cache */
	, &SpaceAttribute_t765_il2cpp_TypeInfo/* cast_class */
	, &SpaceAttribute_t765_0_0_0/* byval_arg */
	, &SpaceAttribute_t765_1_0_0/* this_arg */
	, SpaceAttribute_t765_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SpaceAttribute_t765)/* instance_size */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RangeAttribute_t730_il2cpp_TypeInfo;
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern MethodInfo RangeAttribute__ctor_m3508_MethodInfo;
 void RangeAttribute__ctor_m3508 (RangeAttribute_t730 * __this, float ___min, float ___max, MethodInfo* method){
	{
		PropertyAttribute__ctor_m4940(__this, /*hidden argument*/&PropertyAttribute__ctor_m4940_MethodInfo);
		__this->___min_0 = ___min;
		__this->___max_1 = ___max;
		return;
	}
}
// Metadata Definition UnityEngine.RangeAttribute
extern Il2CppType Single_t76_0_0_38;
FieldInfo RangeAttribute_t730____min_0_FieldInfo = 
{
	"min"/* name */
	, &Single_t76_0_0_38/* type */
	, &RangeAttribute_t730_il2cpp_TypeInfo/* parent */
	, offsetof(RangeAttribute_t730, ___min_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_38;
FieldInfo RangeAttribute_t730____max_1_FieldInfo = 
{
	"max"/* name */
	, &Single_t76_0_0_38/* type */
	, &RangeAttribute_t730_il2cpp_TypeInfo/* parent */
	, offsetof(RangeAttribute_t730, ___max_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RangeAttribute_t730_FieldInfos[] =
{
	&RangeAttribute_t730____min_0_FieldInfo,
	&RangeAttribute_t730____max_1_FieldInfo,
	NULL
};
extern Il2CppType Single_t76_0_0_0;
extern Il2CppType Single_t76_0_0_0;
static ParameterInfo RangeAttribute_t730_RangeAttribute__ctor_m3508_ParameterInfos[] = 
{
	{"min", 0, 134219422, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
	{"max", 1, 134219423, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Single_t76_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
MethodInfo RangeAttribute__ctor_m3508_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RangeAttribute__ctor_m3508/* method */
	, &RangeAttribute_t730_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Single_t76_Single_t76/* invoker_method */
	, RangeAttribute_t730_RangeAttribute__ctor_m3508_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1517/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RangeAttribute_t730_MethodInfos[] =
{
	&RangeAttribute__ctor_m3508_MethodInfo,
	NULL
};
static MethodInfo* RangeAttribute_t730_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair RangeAttribute_t730_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void RangeAttribute_t730_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 256, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m5162(tmp, true, &AttributeUsageAttribute_set_Inherited_m5162_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache RangeAttribute_t730__CustomAttributeCache = {
1,
NULL,
&RangeAttribute_t730_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType RangeAttribute_t730_0_0_0;
extern Il2CppType RangeAttribute_t730_1_0_0;
struct RangeAttribute_t730;
extern CustomAttributesCache RangeAttribute_t730__CustomAttributeCache;
TypeInfo RangeAttribute_t730_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "RangeAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, RangeAttribute_t730_MethodInfos/* methods */
	, NULL/* properties */
	, RangeAttribute_t730_FieldInfos/* fields */
	, NULL/* events */
	, &PropertyAttribute_t966_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &RangeAttribute_t730_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, RangeAttribute_t730_VTable/* vtable */
	, &RangeAttribute_t730__CustomAttributeCache/* custom_attributes_cache */
	, &RangeAttribute_t730_il2cpp_TypeInfo/* cast_class */
	, &RangeAttribute_t730_0_0_0/* byval_arg */
	, &RangeAttribute_t730_1_0_0/* this_arg */
	, RangeAttribute_t730_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RangeAttribute_t730)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAreaAttribute_t775_il2cpp_TypeInfo;
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern MethodInfo TextAreaAttribute__ctor_m3840_MethodInfo;
 void TextAreaAttribute__ctor_m3840 (TextAreaAttribute_t775 * __this, int32_t ___minLines, int32_t ___maxLines, MethodInfo* method){
	{
		PropertyAttribute__ctor_m4940(__this, /*hidden argument*/&PropertyAttribute__ctor_m4940_MethodInfo);
		__this->___minLines_0 = ___minLines;
		__this->___maxLines_1 = ___maxLines;
		return;
	}
}
// Metadata Definition UnityEngine.TextAreaAttribute
extern Il2CppType Int32_t73_0_0_38;
FieldInfo TextAreaAttribute_t775____minLines_0_FieldInfo = 
{
	"minLines"/* name */
	, &Int32_t73_0_0_38/* type */
	, &TextAreaAttribute_t775_il2cpp_TypeInfo/* parent */
	, offsetof(TextAreaAttribute_t775, ___minLines_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_38;
FieldInfo TextAreaAttribute_t775____maxLines_1_FieldInfo = 
{
	"maxLines"/* name */
	, &Int32_t73_0_0_38/* type */
	, &TextAreaAttribute_t775_il2cpp_TypeInfo/* parent */
	, offsetof(TextAreaAttribute_t775, ___maxLines_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextAreaAttribute_t775_FieldInfos[] =
{
	&TextAreaAttribute_t775____minLines_0_FieldInfo,
	&TextAreaAttribute_t775____maxLines_1_FieldInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo TextAreaAttribute_t775_TextAreaAttribute__ctor_m3840_ParameterInfos[] = 
{
	{"minLines", 0, 134219424, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"maxLines", 1, 134219425, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
MethodInfo TextAreaAttribute__ctor_m3840_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextAreaAttribute__ctor_m3840/* method */
	, &TextAreaAttribute_t775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, TextAreaAttribute_t775_TextAreaAttribute__ctor_m3840_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1518/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TextAreaAttribute_t775_MethodInfos[] =
{
	&TextAreaAttribute__ctor_m3840_MethodInfo,
	NULL
};
static MethodInfo* TextAreaAttribute_t775_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair TextAreaAttribute_t775_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void TextAreaAttribute_t775_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 256, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m5162(tmp, true, &AttributeUsageAttribute_set_Inherited_m5162_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache TextAreaAttribute_t775__CustomAttributeCache = {
1,
NULL,
&TextAreaAttribute_t775_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextAreaAttribute_t775_0_0_0;
extern Il2CppType TextAreaAttribute_t775_1_0_0;
struct TextAreaAttribute_t775;
extern CustomAttributesCache TextAreaAttribute_t775__CustomAttributeCache;
TypeInfo TextAreaAttribute_t775_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextAreaAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, TextAreaAttribute_t775_MethodInfos/* methods */
	, NULL/* properties */
	, TextAreaAttribute_t775_FieldInfos/* fields */
	, NULL/* events */
	, &PropertyAttribute_t966_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TextAreaAttribute_t775_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextAreaAttribute_t775_VTable/* vtable */
	, &TextAreaAttribute_t775__CustomAttributeCache/* custom_attributes_cache */
	, &TextAreaAttribute_t775_il2cpp_TypeInfo/* cast_class */
	, &TextAreaAttribute_t775_0_0_0/* byval_arg */
	, &TextAreaAttribute_t775_1_0_0/* this_arg */
	, TextAreaAttribute_t775_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextAreaAttribute_t775)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SelectionBaseAttribute_t767_il2cpp_TypeInfo;
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern MethodInfo SelectionBaseAttribute__ctor_m3789_MethodInfo;
 void SelectionBaseAttribute__ctor_m3789 (SelectionBaseAttribute_t767 * __this, MethodInfo* method){
	{
		Attribute__ctor_m1459(__this, /*hidden argument*/&Attribute__ctor_m1459_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.SelectionBaseAttribute
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
MethodInfo SelectionBaseAttribute__ctor_m3789_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SelectionBaseAttribute__ctor_m3789/* method */
	, &SelectionBaseAttribute_t767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1519/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SelectionBaseAttribute_t767_MethodInfos[] =
{
	&SelectionBaseAttribute__ctor_m3789_MethodInfo,
	NULL
};
static MethodInfo* SelectionBaseAttribute_t767_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair SelectionBaseAttribute_t767_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void SelectionBaseAttribute_t767_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 4, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m5162(tmp, true, &AttributeUsageAttribute_set_Inherited_m5162_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache SelectionBaseAttribute_t767__CustomAttributeCache = {
1,
NULL,
&SelectionBaseAttribute_t767_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SelectionBaseAttribute_t767_0_0_0;
extern Il2CppType SelectionBaseAttribute_t767_1_0_0;
struct SelectionBaseAttribute_t767;
extern CustomAttributesCache SelectionBaseAttribute_t767__CustomAttributeCache;
TypeInfo SelectionBaseAttribute_t767_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SelectionBaseAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SelectionBaseAttribute_t767_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Attribute_t226_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SelectionBaseAttribute_t767_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SelectionBaseAttribute_t767_VTable/* vtable */
	, &SelectionBaseAttribute_t767__CustomAttributeCache/* custom_attributes_cache */
	, &SelectionBaseAttribute_t767_il2cpp_TypeInfo/* cast_class */
	, &SelectionBaseAttribute_t767_0_0_0/* byval_arg */
	, &SelectionBaseAttribute_t767_1_0_0/* this_arg */
	, SelectionBaseAttribute_t767_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SelectionBaseAttribute_t767)/* instance_size */
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
	, 1/* interface_offsets_count */

};
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderState_t967_il2cpp_TypeInfo;
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern MethodInfo SliderState__ctor_m4941_MethodInfo;
 void SliderState__ctor_m4941 (SliderState_t967 * __this, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.SliderState
extern Il2CppType Single_t76_0_0_6;
FieldInfo SliderState_t967____dragStartPos_0_FieldInfo = 
{
	"dragStartPos"/* name */
	, &Single_t76_0_0_6/* type */
	, &SliderState_t967_il2cpp_TypeInfo/* parent */
	, offsetof(SliderState_t967, ___dragStartPos_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_6;
FieldInfo SliderState_t967____dragStartValue_1_FieldInfo = 
{
	"dragStartValue"/* name */
	, &Single_t76_0_0_6/* type */
	, &SliderState_t967_il2cpp_TypeInfo/* parent */
	, offsetof(SliderState_t967, ___dragStartValue_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo SliderState_t967____isDragging_2_FieldInfo = 
{
	"isDragging"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &SliderState_t967_il2cpp_TypeInfo/* parent */
	, offsetof(SliderState_t967, ___isDragging_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SliderState_t967_FieldInfos[] =
{
	&SliderState_t967____dragStartPos_0_FieldInfo,
	&SliderState_t967____dragStartValue_1_FieldInfo,
	&SliderState_t967____isDragging_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SliderState::.ctor()
MethodInfo SliderState__ctor_m4941_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SliderState__ctor_m4941/* method */
	, &SliderState_t967_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1520/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SliderState_t967_MethodInfos[] =
{
	&SliderState__ctor_m4941_MethodInfo,
	NULL
};
static MethodInfo* SliderState_t967_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SliderState_t967_0_0_0;
extern Il2CppType SliderState_t967_1_0_0;
struct SliderState_t967;
TypeInfo SliderState_t967_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SliderState"/* name */
	, "UnityEngine"/* namespaze */
	, SliderState_t967_MethodInfos/* methods */
	, NULL/* properties */
	, SliderState_t967_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SliderState_t967_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SliderState_t967_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SliderState_t967_il2cpp_TypeInfo/* cast_class */
	, &SliderState_t967_0_0_0/* byval_arg */
	, &SliderState_t967_1_0_0/* this_arg */
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
	, sizeof (SliderState_t967)/* instance_size */
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
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SliderHandler_t968_il2cpp_TypeInfo;
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandlerMethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
extern TypeInfo GUI_t459_il2cpp_TypeInfo;
extern TypeInfo GUIUtility_t863_il2cpp_TypeInfo;
extern TypeInfo GUIContent_t757_il2cpp_TypeInfo;
extern TypeInfo Vector2_t198_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Rect_t442_il2cpp_TypeInfo;
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClockMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
extern MethodInfo SliderHandler_CurrentEventType_m4948_MethodInfo;
extern MethodInfo SliderHandler_OnMouseDown_m4944_MethodInfo;
extern MethodInfo SliderHandler_OnMouseDrag_m4945_MethodInfo;
extern MethodInfo SliderHandler_OnMouseUp_m4946_MethodInfo;
extern MethodInfo SliderHandler_OnRepaint_m4947_MethodInfo;
extern MethodInfo SliderHandler_CurrentEvent_m4954_MethodInfo;
extern MethodInfo Event_get_mousePosition_m4366_MethodInfo;
extern MethodInfo Rect_Contains_m2074_MethodInfo;
extern MethodInfo SliderHandler_IsEmptySlider_m4950_MethodInfo;
extern MethodInfo GUI_set_scrollTroughSide_m4118_MethodInfo;
extern MethodInfo GUIUtility_set_hotControl_m4210_MethodInfo;
extern MethodInfo Event_Use_m4374_MethodInfo;
extern MethodInfo SliderHandler_ThumbSelectionRect_m4957_MethodInfo;
extern MethodInfo SliderHandler_ClampedCurrentValue_m4963_MethodInfo;
extern MethodInfo SliderHandler_StartDraggingWithValue_m4958_MethodInfo;
extern MethodInfo GUI_set_changed_m1975_MethodInfo;
extern MethodInfo SliderHandler_SupportsPageMovements_m4951_MethodInfo;
extern MethodInfo SliderHandler_SliderState_m4959_MethodInfo;
extern MethodInfo SystemClock_get_now_m4993_MethodInfo;
extern MethodInfo DateTime_AddMilliseconds_m5085_MethodInfo;
extern MethodInfo GUI_set_nextScrollStepTime_m4116_MethodInfo;
extern MethodInfo SliderHandler_CurrentScrollTroughSide_m4949_MethodInfo;
extern MethodInfo SliderHandler_PageMovementValue_m4952_MethodInfo;
extern MethodInfo SliderHandler_ValueForCurrentMousePosition_m4955_MethodInfo;
extern MethodInfo SliderHandler_Clamp_m4956_MethodInfo;
extern MethodInfo GUIUtility_get_hotControl_m4209_MethodInfo;
extern MethodInfo SliderHandler_MousePosition_m4964_MethodInfo;
extern MethodInfo SliderHandler_ValuesPerPixel_m4965_MethodInfo;
extern MethodInfo GUIStyle_Draw_m4339_MethodInfo;
extern MethodInfo SliderHandler_ThumbRect_m4960_MethodInfo;
extern MethodInfo GUI_get_scrollTroughSide_m4117_MethodInfo;
extern MethodInfo GUI_InternalRepaintEditorWindow_m4135_MethodInfo;
extern MethodInfo GUI_get_nextScrollStepTime_m4115_MethodInfo;
extern MethodInfo DateTime_op_LessThan_m5172_MethodInfo;
extern MethodInfo Event_GetTypeForControl_m4365_MethodInfo;
extern MethodInfo Rect_get_x_m2058_MethodInfo;
extern MethodInfo Rect_get_y_m2061_MethodInfo;
extern MethodInfo GUI_get_usePageScrollbars_m4133_MethodInfo;
extern MethodInfo SliderHandler_PageUpMovementBound_m4953_MethodInfo;
extern MethodInfo Rect_get_xMax_m3631_MethodInfo;
extern MethodInfo Rect_get_yMax_m3633_MethodInfo;
extern MethodInfo Event_get_current_m4371_MethodInfo;
extern MethodInfo Rect_get_width_m2065_MethodInfo;
extern MethodInfo Rect_get_height_m2066_MethodInfo;
extern MethodInfo SliderHandler_MinValue_m4968_MethodInfo;
extern MethodInfo SliderHandler_MaxValue_m4967_MethodInfo;
extern MethodInfo Mathf_Clamp_m1974_MethodInfo;
extern MethodInfo Rect_set_x_m2060_MethodInfo;
extern MethodInfo Rect_set_width_m3614_MethodInfo;
extern MethodInfo Rect_set_y_m2063_MethodInfo;
extern MethodInfo Rect_set_height_m3612_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m642_MethodInfo;
extern MethodInfo GUIUtility_GetStateObject_m4208_MethodInfo;
extern MethodInfo SliderHandler_HorizontalThumbRect_m4962_MethodInfo;
extern MethodInfo SliderHandler_VerticalThumbRect_m4961_MethodInfo;
extern MethodInfo GUIStyle_get_padding_m4324_MethodInfo;
extern MethodInfo RectOffset_get_left_m3878_MethodInfo;
extern MethodInfo RectOffset_get_top_m3879_MethodInfo;
extern MethodInfo RectOffset_get_horizontal_m3872_MethodInfo;
extern MethodInfo SliderHandler_ThumbSize_m4966_MethodInfo;
extern MethodInfo Rect__ctor_m3747_MethodInfo;
extern MethodInfo RectOffset_get_vertical_m3873_MethodInfo;
extern MethodInfo GUIStyle_get_fixedWidth_m4328_MethodInfo;
extern MethodInfo GUIStyle_get_fixedHeight_m4329_MethodInfo;
extern MethodInfo Mathf_Max_m1878_MethodInfo;
extern MethodInfo Mathf_Min_m3859_MethodInfo;


// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern MethodInfo SliderHandler__ctor_m4942_MethodInfo;
 void SliderHandler__ctor_m4942 (SliderHandler_t968 * __this, Rect_t442  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t263 * ___slider, GUIStyle_t263 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method){
	{
		__this->___position_0 = ___position;
		__this->___currentValue_1 = ___currentValue;
		__this->___size_2 = ___size;
		__this->___start_3 = ___start;
		__this->___end_4 = ___end;
		__this->___slider_5 = ___slider;
		__this->___thumb_6 = ___thumb;
		__this->___horiz_7 = ___horiz;
		__this->___id_8 = ___id;
		return;
	}
}
// System.Single UnityEngine.SliderHandler::Handle()
extern MethodInfo SliderHandler_Handle_m4943_MethodInfo;
 float SliderHandler_Handle_m4943 (SliderHandler_t968 * __this, MethodInfo* method){
	int32_t V_0 = {0};
	{
		GUIStyle_t263 * L_0 = (__this->___slider_5);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t263 * L_1 = (__this->___thumb_6);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_001d:
	{
		int32_t L_3 = SliderHandler_CurrentEventType_m4948(__this, /*hidden argument*/&SliderHandler_CurrentEventType_m4948_MethodInfo);
		V_0 = L_3;
		if (V_0 == 0)
		{
			goto IL_004f;
		}
		if (V_0 == 1)
		{
			goto IL_005d;
		}
		if (V_0 == 2)
		{
			goto IL_006b;
		}
		if (V_0 == 3)
		{
			goto IL_0056;
		}
		if (V_0 == 4)
		{
			goto IL_006b;
		}
		if (V_0 == 5)
		{
			goto IL_006b;
		}
		if (V_0 == 6)
		{
			goto IL_006b;
		}
		if (V_0 == 7)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006b;
	}

IL_004f:
	{
		float L_4 = SliderHandler_OnMouseDown_m4944(__this, /*hidden argument*/&SliderHandler_OnMouseDown_m4944_MethodInfo);
		return L_4;
	}

IL_0056:
	{
		float L_5 = SliderHandler_OnMouseDrag_m4945(__this, /*hidden argument*/&SliderHandler_OnMouseDrag_m4945_MethodInfo);
		return L_5;
	}

IL_005d:
	{
		float L_6 = SliderHandler_OnMouseUp_m4946(__this, /*hidden argument*/&SliderHandler_OnMouseUp_m4946_MethodInfo);
		return L_6;
	}

IL_0064:
	{
		float L_7 = SliderHandler_OnRepaint_m4947(__this, /*hidden argument*/&SliderHandler_OnRepaint_m4947_MethodInfo);
		return L_7;
	}

IL_006b:
	{
		float L_8 = (__this->___currentValue_1);
		return L_8;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDown()
 float SliderHandler_OnMouseDown_m4944 (SliderHandler_t968 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	Rect_t442  V_1 = {0};
	Rect_t442  V_2 = {0};
	DateTime_t850  V_3 = {0};
	{
		Rect_t442  L_0 = (__this->___position_0);
		V_1 = L_0;
		Event_t615 * L_1 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_1);
		Vector2_t198  L_2 = Event_get_mousePosition_m4366(L_1, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		bool L_3 = Rect_Contains_m2074((&V_1), L_2, /*hidden argument*/&Rect_Contains_m2074_MethodInfo);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = SliderHandler_IsEmptySlider_m4950(__this, /*hidden argument*/&SliderHandler_IsEmptySlider_m4950_MethodInfo);
		if (!L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		float L_5 = (__this->___currentValue_1);
		return L_5;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		GUI_set_scrollTroughSide_m4118(NULL /*static, unused*/, 0, /*hidden argument*/&GUI_set_scrollTroughSide_m4118_MethodInfo);
		int32_t L_6 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		GUIUtility_set_hotControl_m4210(NULL /*static, unused*/, L_6, /*hidden argument*/&GUIUtility_set_hotControl_m4210_MethodInfo);
		Event_t615 * L_7 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_7);
		Event_Use_m4374(L_7, /*hidden argument*/&Event_Use_m4374_MethodInfo);
		Rect_t442  L_8 = SliderHandler_ThumbSelectionRect_m4957(__this, /*hidden argument*/&SliderHandler_ThumbSelectionRect_m4957_MethodInfo);
		V_2 = L_8;
		Event_t615 * L_9 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_9);
		Vector2_t198  L_10 = Event_get_mousePosition_m4366(L_9, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		bool L_11 = Rect_Contains_m2074((&V_2), L_10, /*hidden argument*/&Rect_Contains_m2074_MethodInfo);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		float L_12 = SliderHandler_ClampedCurrentValue_m4963(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m4963_MethodInfo);
		SliderHandler_StartDraggingWithValue_m4958(__this, L_12, /*hidden argument*/&SliderHandler_StartDraggingWithValue_m4958_MethodInfo);
		float L_13 = (__this->___currentValue_1);
		return L_13;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		GUI_set_changed_m1975(NULL /*static, unused*/, 1, /*hidden argument*/&GUI_set_changed_m1975_MethodInfo);
		bool L_14 = SliderHandler_SupportsPageMovements_m4951(__this, /*hidden argument*/&SliderHandler_SupportsPageMovements_m4951_MethodInfo);
		if (!L_14)
		{
			goto IL_00c7;
		}
	}
	{
		SliderState_t967 * L_15 = SliderHandler_SliderState_m4959(__this, /*hidden argument*/&SliderHandler_SliderState_m4959_MethodInfo);
		NullCheck(L_15);
		L_15->___isDragging_2 = 0;
		DateTime_t850  L_16 = SystemClock_get_now_m4993(NULL /*static, unused*/, /*hidden argument*/&SystemClock_get_now_m4993_MethodInfo);
		V_3 = L_16;
		DateTime_t850  L_17 = DateTime_AddMilliseconds_m5085((&V_3), (250.0), /*hidden argument*/&DateTime_AddMilliseconds_m5085_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		GUI_set_nextScrollStepTime_m4116(NULL /*static, unused*/, L_17, /*hidden argument*/&GUI_set_nextScrollStepTime_m4116_MethodInfo);
		int32_t L_18 = SliderHandler_CurrentScrollTroughSide_m4949(__this, /*hidden argument*/&SliderHandler_CurrentScrollTroughSide_m4949_MethodInfo);
		GUI_set_scrollTroughSide_m4118(NULL /*static, unused*/, L_18, /*hidden argument*/&GUI_set_scrollTroughSide_m4118_MethodInfo);
		float L_19 = SliderHandler_PageMovementValue_m4952(__this, /*hidden argument*/&SliderHandler_PageMovementValue_m4952_MethodInfo);
		return L_19;
	}

IL_00c7:
	{
		float L_20 = SliderHandler_ValueForCurrentMousePosition_m4955(__this, /*hidden argument*/&SliderHandler_ValueForCurrentMousePosition_m4955_MethodInfo);
		V_0 = L_20;
		SliderHandler_StartDraggingWithValue_m4958(__this, V_0, /*hidden argument*/&SliderHandler_StartDraggingWithValue_m4958_MethodInfo);
		float L_21 = SliderHandler_Clamp_m4956(__this, V_0, /*hidden argument*/&SliderHandler_Clamp_m4956_MethodInfo);
		return L_21;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
 float SliderHandler_OnMouseDrag_m4945 (SliderHandler_t968 * __this, MethodInfo* method){
	SliderState_t967 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		int32_t L_0 = GUIUtility_get_hotControl_m4209(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_hotControl_m4209_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_0017:
	{
		SliderState_t967 * L_3 = SliderHandler_SliderState_m4959(__this, /*hidden argument*/&SliderHandler_SliderState_m4959_MethodInfo);
		V_0 = L_3;
		NullCheck(V_0);
		bool L_4 = (V_0->___isDragging_2);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		float L_5 = (__this->___currentValue_1);
		return L_5;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		GUI_set_changed_m1975(NULL /*static, unused*/, 1, /*hidden argument*/&GUI_set_changed_m1975_MethodInfo);
		Event_t615 * L_6 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_6);
		Event_Use_m4374(L_6, /*hidden argument*/&Event_Use_m4374_MethodInfo);
		float L_7 = SliderHandler_MousePosition_m4964(__this, /*hidden argument*/&SliderHandler_MousePosition_m4964_MethodInfo);
		NullCheck(V_0);
		float L_8 = (V_0->___dragStartPos_0);
		V_1 = ((float)(L_7-L_8));
		NullCheck(V_0);
		float L_9 = (V_0->___dragStartValue_1);
		float L_10 = SliderHandler_ValuesPerPixel_m4965(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m4965_MethodInfo);
		V_2 = ((float)(L_9+((float)((float)V_1/(float)L_10))));
		float L_11 = SliderHandler_Clamp_m4956(__this, V_2, /*hidden argument*/&SliderHandler_Clamp_m4956_MethodInfo);
		return L_11;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseUp()
 float SliderHandler_OnMouseUp_m4946 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		int32_t L_0 = GUIUtility_get_hotControl_m4209(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_hotControl_m4209_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		if ((((uint32_t)L_0) != ((uint32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		Event_t615 * L_2 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_2);
		Event_Use_m4374(L_2, /*hidden argument*/&Event_Use_m4374_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		GUIUtility_set_hotControl_m4210(NULL /*static, unused*/, 0, /*hidden argument*/&GUIUtility_set_hotControl_m4210_MethodInfo);
	}

IL_0021:
	{
		float L_3 = (__this->___currentValue_1);
		return L_3;
	}
}
// System.Single UnityEngine.SliderHandler::OnRepaint()
 float SliderHandler_OnRepaint_m4947 (SliderHandler_t968 * __this, MethodInfo* method){
	Rect_t442  V_0 = {0};
	Rect_t442  V_1 = {0};
	DateTime_t850  V_2 = {0};
	{
		GUIStyle_t263 * L_0 = (__this->___slider_5);
		Rect_t442  L_1 = (__this->___position_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t757_il2cpp_TypeInfo));
		int32_t L_2 = (__this->___id_8);
		NullCheck(L_0);
		GUIStyle_Draw_m4339(L_0, L_1, (((GUIContent_t757_StaticFields*)InitializedTypeInfo(&GUIContent_t757_il2cpp_TypeInfo)->static_fields)->___none_3), L_2, /*hidden argument*/&GUIStyle_Draw_m4339_MethodInfo);
		bool L_3 = SliderHandler_IsEmptySlider_m4950(__this, /*hidden argument*/&SliderHandler_IsEmptySlider_m4950_MethodInfo);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		GUIStyle_t263 * L_4 = (__this->___thumb_6);
		Rect_t442  L_5 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t757_il2cpp_TypeInfo));
		int32_t L_6 = (__this->___id_8);
		NullCheck(L_4);
		GUIStyle_Draw_m4339(L_4, L_5, (((GUIContent_t757_StaticFields*)InitializedTypeInfo(&GUIContent_t757_il2cpp_TypeInfo)->static_fields)->___none_3), L_6, /*hidden argument*/&GUIStyle_Draw_m4339_MethodInfo);
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		int32_t L_7 = GUIUtility_get_hotControl_m4209(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_hotControl_m4209_MethodInfo);
		int32_t L_8 = (__this->___id_8);
		if ((((uint32_t)L_7) != ((uint32_t)L_8)))
		{
			goto IL_007c;
		}
	}
	{
		Rect_t442  L_9 = (__this->___position_0);
		V_0 = L_9;
		Event_t615 * L_10 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_10);
		Vector2_t198  L_11 = Event_get_mousePosition_m4366(L_10, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		bool L_12 = Rect_Contains_m2074((&V_0), L_11, /*hidden argument*/&Rect_Contains_m2074_MethodInfo);
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		bool L_13 = SliderHandler_IsEmptySlider_m4950(__this, /*hidden argument*/&SliderHandler_IsEmptySlider_m4950_MethodInfo);
		if (!L_13)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		float L_14 = (__this->___currentValue_1);
		return L_14;
	}

IL_0083:
	{
		Rect_t442  L_15 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_1 = L_15;
		Event_t615 * L_16 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_16);
		Vector2_t198  L_17 = Event_get_mousePosition_m4366(L_16, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		bool L_18 = Rect_Contains_m2074((&V_1), L_17, /*hidden argument*/&Rect_Contains_m2074_MethodInfo);
		if (!L_18)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		int32_t L_19 = GUI_get_scrollTroughSide_m4117(NULL /*static, unused*/, /*hidden argument*/&GUI_get_scrollTroughSide_m4117_MethodInfo);
		if (!L_19)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		GUIUtility_set_hotControl_m4210(NULL /*static, unused*/, 0, /*hidden argument*/&GUIUtility_set_hotControl_m4210_MethodInfo);
	}

IL_00b1:
	{
		float L_20 = (__this->___currentValue_1);
		return L_20;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		GUI_InternalRepaintEditorWindow_m4135(NULL /*static, unused*/, /*hidden argument*/&GUI_InternalRepaintEditorWindow_m4135_MethodInfo);
		DateTime_t850  L_21 = SystemClock_get_now_m4993(NULL /*static, unused*/, /*hidden argument*/&SystemClock_get_now_m4993_MethodInfo);
		DateTime_t850  L_22 = GUI_get_nextScrollStepTime_m4115(NULL /*static, unused*/, /*hidden argument*/&GUI_get_nextScrollStepTime_m4115_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t850_il2cpp_TypeInfo));
		bool L_23 = DateTime_op_LessThan_m5172(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&DateTime_op_LessThan_m5172_MethodInfo);
		if (!L_23)
		{
			goto IL_00d8;
		}
	}
	{
		float L_24 = (__this->___currentValue_1);
		return L_24;
	}

IL_00d8:
	{
		int32_t L_25 = SliderHandler_CurrentScrollTroughSide_m4949(__this, /*hidden argument*/&SliderHandler_CurrentScrollTroughSide_m4949_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		int32_t L_26 = GUI_get_scrollTroughSide_m4117(NULL /*static, unused*/, /*hidden argument*/&GUI_get_scrollTroughSide_m4117_MethodInfo);
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00ef;
		}
	}
	{
		float L_27 = (__this->___currentValue_1);
		return L_27;
	}

IL_00ef:
	{
		DateTime_t850  L_28 = SystemClock_get_now_m4993(NULL /*static, unused*/, /*hidden argument*/&SystemClock_get_now_m4993_MethodInfo);
		V_2 = L_28;
		DateTime_t850  L_29 = DateTime_AddMilliseconds_m5085((&V_2), (30.0), /*hidden argument*/&DateTime_AddMilliseconds_m5085_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		GUI_set_nextScrollStepTime_m4116(NULL /*static, unused*/, L_29, /*hidden argument*/&GUI_set_nextScrollStepTime_m4116_MethodInfo);
		bool L_30 = SliderHandler_SupportsPageMovements_m4951(__this, /*hidden argument*/&SliderHandler_SupportsPageMovements_m4951_MethodInfo);
		if (!L_30)
		{
			goto IL_012e;
		}
	}
	{
		SliderState_t967 * L_31 = SliderHandler_SliderState_m4959(__this, /*hidden argument*/&SliderHandler_SliderState_m4959_MethodInfo);
		NullCheck(L_31);
		L_31->___isDragging_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		GUI_set_changed_m1975(NULL /*static, unused*/, 1, /*hidden argument*/&GUI_set_changed_m1975_MethodInfo);
		float L_32 = SliderHandler_PageMovementValue_m4952(__this, /*hidden argument*/&SliderHandler_PageMovementValue_m4952_MethodInfo);
		return L_32;
	}

IL_012e:
	{
		float L_33 = SliderHandler_ClampedCurrentValue_m4963(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m4963_MethodInfo);
		return L_33;
	}
}
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
 int32_t SliderHandler_CurrentEventType_m4948 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		Event_t615 * L_0 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		NullCheck(L_0);
		int32_t L_2 = Event_GetTypeForControl_m4365(L_0, L_1, /*hidden argument*/&Event_GetTypeForControl_m4365_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
 int32_t SliderHandler_CurrentScrollTroughSide_m4949 (SliderHandler_t968 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t198  V_2 = {0};
	Vector2_t198  V_3 = {0};
	Rect_t442  V_4 = {0};
	Rect_t442  V_5 = {0};
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Event_t615 * L_1 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_1);
		Vector2_t198  L_2 = Event_get_mousePosition_m4366(L_1, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		V_2 = L_2;
		NullCheck((&V_2));
		float L_3 = ((&V_2)->___x_1);
		G_B3_0 = L_3;
		goto IL_0036;
	}

IL_0023:
	{
		Event_t615 * L_4 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_4);
		Vector2_t198  L_5 = Event_get_mousePosition_m4366(L_4, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		V_3 = L_5;
		NullCheck((&V_3));
		float L_6 = ((&V_3)->___y_2);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		bool L_7 = (__this->___horiz_7);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Rect_t442  L_8 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_4 = L_8;
		float L_9 = Rect_get_x_m2058((&V_4), /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		G_B6_0 = L_9;
		goto IL_0065;
	}

IL_0056:
	{
		Rect_t442  L_10 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_5 = L_10;
		float L_11 = Rect_get_y_m2061((&V_5), /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		G_B6_0 = L_11;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		if ((((float)V_0) <= ((float)V_1)))
		{
			goto IL_0073;
		}
	}
	{
		G_B9_0 = 1;
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = (-1);
	}

IL_0074:
	{
		return G_B9_0;
	}
}
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
 bool SliderHandler_IsEmptySlider_m4950 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		return ((((float)L_0) == ((float)L_1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
 bool SliderHandler_SupportsPageMovements_m4951 (SliderHandler_t968 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___size_2);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t459_il2cpp_TypeInfo));
		bool L_1 = GUI_get_usePageScrollbars_m4133(NULL /*static, unused*/, /*hidden argument*/&GUI_get_usePageScrollbars_m4133_MethodInfo);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.SliderHandler::PageMovementValue()
 float SliderHandler_PageMovementValue_m4952 (SliderHandler_t968 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___currentValue_1);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((((float)L_1) <= ((float)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_1 = G_B3_0;
		float L_3 = SliderHandler_MousePosition_m4964(__this, /*hidden argument*/&SliderHandler_MousePosition_m4964_MethodInfo);
		float L_4 = SliderHandler_PageUpMovementBound_m4953(__this, /*hidden argument*/&SliderHandler_PageUpMovementBound_m4953_MethodInfo);
		if ((((float)L_3) <= ((float)L_4)))
		{
			goto IL_0048;
		}
	}
	{
		float L_5 = (__this->___size_2);
		V_0 = ((float)(V_0+((float)((float)((float)((float)L_5*(float)(((float)V_1))))*(float)(0.9f)))));
		goto IL_005a;
	}

IL_0048:
	{
		float L_6 = (__this->___size_2);
		V_0 = ((float)(V_0-((float)((float)((float)((float)L_6*(float)(((float)V_1))))*(float)(0.9f)))));
	}

IL_005a:
	{
		float L_7 = SliderHandler_Clamp_m4956(__this, V_0, /*hidden argument*/&SliderHandler_Clamp_m4956_MethodInfo);
		return L_7;
	}
}
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
 float SliderHandler_PageUpMovementBound_m4953 (SliderHandler_t968 * __this, MethodInfo* method){
	Rect_t442  V_0 = {0};
	Rect_t442  V_1 = {0};
	Rect_t442  V_2 = {0};
	Rect_t442  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Rect_t442  L_1 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_0 = L_1;
		float L_2 = Rect_get_xMax_m3631((&V_0), /*hidden argument*/&Rect_get_xMax_m3631_MethodInfo);
		Rect_t442  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m2058((&V_1), /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		return ((float)(L_2-L_4));
	}

IL_0029:
	{
		Rect_t442  L_5 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_2 = L_5;
		float L_6 = Rect_get_yMax_m3633((&V_2), /*hidden argument*/&Rect_get_yMax_m3633_MethodInfo);
		Rect_t442  L_7 = (__this->___position_0);
		V_3 = L_7;
		float L_8 = Rect_get_y_m2061((&V_3), /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		return ((float)(L_6-L_8));
	}
}
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
 Event_t615 * SliderHandler_CurrentEvent_m4954 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		Event_t615 * L_0 = Event_get_current_m4371(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m4371_MethodInfo);
		return L_0;
	}
}
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
 float SliderHandler_ValueForCurrentMousePosition_m4955 (SliderHandler_t968 * __this, MethodInfo* method){
	Rect_t442  V_0 = {0};
	Rect_t442  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		float L_1 = SliderHandler_MousePosition_m4964(__this, /*hidden argument*/&SliderHandler_MousePosition_m4964_MethodInfo);
		Rect_t442  L_2 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m2065((&V_0), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		float L_4 = SliderHandler_ValuesPerPixel_m4965(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m4965_MethodInfo);
		float L_5 = (__this->___start_3);
		float L_6 = (__this->___size_2);
		return ((float)(((float)(((float)((float)((float)(L_1-((float)((float)L_3*(float)(0.5f)))))/(float)L_4))+L_5))-((float)((float)L_6*(float)(0.5f)))));
	}

IL_0042:
	{
		float L_7 = SliderHandler_MousePosition_m4964(__this, /*hidden argument*/&SliderHandler_MousePosition_m4964_MethodInfo);
		Rect_t442  L_8 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_1 = L_8;
		float L_9 = Rect_get_height_m2066((&V_1), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		float L_10 = SliderHandler_ValuesPerPixel_m4965(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m4965_MethodInfo);
		float L_11 = (__this->___start_3);
		float L_12 = (__this->___size_2);
		return ((float)(((float)(((float)((float)((float)(L_7-((float)((float)L_9*(float)(0.5f)))))/(float)L_10))+L_11))-((float)((float)L_12*(float)(0.5f)))));
	}
}
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
 float SliderHandler_Clamp_m4956 (SliderHandler_t968 * __this, float ___value, MethodInfo* method){
	{
		float L_0 = SliderHandler_MinValue_m4968(__this, /*hidden argument*/&SliderHandler_MinValue_m4968_MethodInfo);
		float L_1 = SliderHandler_MaxValue_m4967(__this, /*hidden argument*/&SliderHandler_MaxValue_m4967_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		float L_2 = Mathf_Clamp_m1974(NULL /*static, unused*/, ___value, L_0, L_1, /*hidden argument*/&Mathf_Clamp_m1974_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
 Rect_t442  SliderHandler_ThumbSelectionRect_m4957 (SliderHandler_t968 * __this, MethodInfo* method){
	Rect_t442  V_0 = {0};
	int32_t V_1 = 0;
	{
		Rect_t442  L_0 = SliderHandler_ThumbRect_m4960(__this, /*hidden argument*/&SliderHandler_ThumbRect_m4960_MethodInfo);
		V_0 = L_0;
		V_1 = ((int32_t)12);
		float L_1 = Rect_get_width_m2065((&V_0), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		if ((((float)L_1) >= ((float)(((float)V_1)))))
		{
			goto IL_003f;
		}
	}
	{
		Rect_t442 * L_2 = (&V_0);
		float L_3 = Rect_get_x_m2058(L_2, /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		float L_4 = Rect_get_width_m2065((&V_0), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		Rect_set_x_m2060(L_2, ((float)(L_3-((float)((float)((float)((((float)V_1))-L_4))/(float)(2.0f))))), /*hidden argument*/&Rect_set_x_m2060_MethodInfo);
		Rect_set_width_m3614((&V_0), (((float)V_1)), /*hidden argument*/&Rect_set_width_m3614_MethodInfo);
	}

IL_003f:
	{
		float L_5 = Rect_get_height_m2066((&V_0), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		if ((((float)L_5) >= ((float)(((float)V_1)))))
		{
			goto IL_0074;
		}
	}
	{
		Rect_t442 * L_6 = (&V_0);
		float L_7 = Rect_get_y_m2061(L_6, /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		float L_8 = Rect_get_height_m2066((&V_0), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		Rect_set_y_m2063(L_6, ((float)(L_7-((float)((float)((float)((((float)V_1))-L_8))/(float)(2.0f))))), /*hidden argument*/&Rect_set_y_m2063_MethodInfo);
		Rect_set_height_m3612((&V_0), (((float)V_1)), /*hidden argument*/&Rect_set_height_m3612_MethodInfo);
	}

IL_0074:
	{
		return V_0;
	}
}
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
 void SliderHandler_StartDraggingWithValue_m4958 (SliderHandler_t968 * __this, float ___dragStartValue, MethodInfo* method){
	SliderState_t967 * V_0 = {0};
	{
		SliderState_t967 * L_0 = SliderHandler_SliderState_m4959(__this, /*hidden argument*/&SliderHandler_SliderState_m4959_MethodInfo);
		V_0 = L_0;
		float L_1 = SliderHandler_MousePosition_m4964(__this, /*hidden argument*/&SliderHandler_MousePosition_m4964_MethodInfo);
		NullCheck(V_0);
		V_0->___dragStartPos_0 = L_1;
		NullCheck(V_0);
		V_0->___dragStartValue_1 = ___dragStartValue;
		NullCheck(V_0);
		V_0->___isDragging_2 = 1;
		return;
	}
}
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
 SliderState_t967 * SliderHandler_SliderState_m4959 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&SliderState_t967_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		int32_t L_1 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		Object_t * L_2 = GUIUtility_GetStateObject_m4208(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&GUIUtility_GetStateObject_m4208_MethodInfo);
		return ((SliderState_t967 *)Castclass(L_2, InitializedTypeInfo(&SliderState_t967_il2cpp_TypeInfo)));
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
 Rect_t442  SliderHandler_ThumbRect_m4960 (SliderHandler_t968 * __this, MethodInfo* method){
	Rect_t442  G_B3_0 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Rect_t442  L_1 = SliderHandler_HorizontalThumbRect_m4962(__this, /*hidden argument*/&SliderHandler_HorizontalThumbRect_m4962_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Rect_t442  L_2 = SliderHandler_VerticalThumbRect_m4961(__this, /*hidden argument*/&SliderHandler_VerticalThumbRect_m4961_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
 Rect_t442  SliderHandler_VerticalThumbRect_m4961 (SliderHandler_t968 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	Rect_t442  V_1 = {0};
	Rect_t442  V_2 = {0};
	Rect_t442  V_3 = {0};
	Rect_t442  V_4 = {0};
	Rect_t442  V_5 = {0};
	Rect_t442  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m4965(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m4965_MethodInfo);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((((float)L_1) >= ((float)L_2)))
		{
			goto IL_009d;
		}
	}
	{
		Rect_t442  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m2058((&V_1), /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		GUIStyle_t263 * L_5 = (__this->___slider_5);
		NullCheck(L_5);
		RectOffset_t672 * L_6 = GUIStyle_get_padding_m4324(L_5, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_left_m3878(L_6, /*hidden argument*/&RectOffset_get_left_m3878_MethodInfo);
		float L_8 = SliderHandler_ClampedCurrentValue_m4963(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m4963_MethodInfo);
		float L_9 = (__this->___start_3);
		Rect_t442  L_10 = (__this->___position_0);
		V_2 = L_10;
		float L_11 = Rect_get_y_m2061((&V_2), /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		GUIStyle_t263 * L_12 = (__this->___slider_5);
		NullCheck(L_12);
		RectOffset_t672 * L_13 = GUIStyle_get_padding_m4324(L_12, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_top_m3879(L_13, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		Rect_t442  L_15 = (__this->___position_0);
		V_3 = L_15;
		float L_16 = Rect_get_width_m2065((&V_3), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		GUIStyle_t263 * L_17 = (__this->___slider_5);
		NullCheck(L_17);
		RectOffset_t672 * L_18 = GUIStyle_get_padding_m4324(L_17, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = RectOffset_get_horizontal_m3872(L_18, /*hidden argument*/&RectOffset_get_horizontal_m3872_MethodInfo);
		float L_20 = (__this->___size_2);
		float L_21 = SliderHandler_ThumbSize_m4966(__this, /*hidden argument*/&SliderHandler_ThumbSize_m4966_MethodInfo);
		Rect_t442  L_22 = {0};
		Rect__ctor_m3747(&L_22, ((float)(L_4+(((float)L_7)))), ((float)(((float)(((float)((float)((float)(L_8-L_9))*(float)V_0))+L_11))+(((float)L_14)))), ((float)(L_16-(((float)L_19)))), ((float)(((float)((float)L_20*(float)V_0))+L_21)), /*hidden argument*/&Rect__ctor_m3747_MethodInfo);
		return L_22;
	}

IL_009d:
	{
		Rect_t442  L_23 = (__this->___position_0);
		V_4 = L_23;
		float L_24 = Rect_get_x_m2058((&V_4), /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		GUIStyle_t263 * L_25 = (__this->___slider_5);
		NullCheck(L_25);
		RectOffset_t672 * L_26 = GUIStyle_get_padding_m4324(L_25, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_26);
		int32_t L_27 = RectOffset_get_left_m3878(L_26, /*hidden argument*/&RectOffset_get_left_m3878_MethodInfo);
		float L_28 = SliderHandler_ClampedCurrentValue_m4963(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m4963_MethodInfo);
		float L_29 = (__this->___size_2);
		float L_30 = (__this->___start_3);
		Rect_t442  L_31 = (__this->___position_0);
		V_5 = L_31;
		float L_32 = Rect_get_y_m2061((&V_5), /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		GUIStyle_t263 * L_33 = (__this->___slider_5);
		NullCheck(L_33);
		RectOffset_t672 * L_34 = GUIStyle_get_padding_m4324(L_33, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_34);
		int32_t L_35 = RectOffset_get_top_m3879(L_34, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		Rect_t442  L_36 = (__this->___position_0);
		V_6 = L_36;
		float L_37 = Rect_get_width_m2065((&V_6), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		GUIStyle_t263 * L_38 = (__this->___slider_5);
		NullCheck(L_38);
		RectOffset_t672 * L_39 = GUIStyle_get_padding_m4324(L_38, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_39);
		int32_t L_40 = RectOffset_get_horizontal_m3872(L_39, /*hidden argument*/&RectOffset_get_horizontal_m3872_MethodInfo);
		float L_41 = (__this->___size_2);
		float L_42 = SliderHandler_ThumbSize_m4966(__this, /*hidden argument*/&SliderHandler_ThumbSize_m4966_MethodInfo);
		Rect_t442  L_43 = {0};
		Rect__ctor_m3747(&L_43, ((float)(L_24+(((float)L_27)))), ((float)(((float)(((float)((float)((float)(((float)(L_28+L_29))-L_30))*(float)V_0))+L_32))+(((float)L_35)))), ((float)(L_37-(((float)L_40)))), ((float)(((float)((float)L_41*(float)((-V_0))))+L_42)), /*hidden argument*/&Rect__ctor_m3747_MethodInfo);
		return L_43;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
 Rect_t442  SliderHandler_HorizontalThumbRect_m4962 (SliderHandler_t968 * __this, MethodInfo* method){
	float V_0 = 0.0f;
	Rect_t442  V_1 = {0};
	Rect_t442  V_2 = {0};
	Rect_t442  V_3 = {0};
	Rect_t442  V_4 = {0};
	Rect_t442  V_5 = {0};
	Rect_t442  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m4965(__this, /*hidden argument*/&SliderHandler_ValuesPerPixel_m4965_MethodInfo);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((((float)L_1) >= ((float)L_2)))
		{
			goto IL_009d;
		}
	}
	{
		float L_3 = SliderHandler_ClampedCurrentValue_m4963(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m4963_MethodInfo);
		float L_4 = (__this->___start_3);
		Rect_t442  L_5 = (__this->___position_0);
		V_1 = L_5;
		float L_6 = Rect_get_x_m2058((&V_1), /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		GUIStyle_t263 * L_7 = (__this->___slider_5);
		NullCheck(L_7);
		RectOffset_t672 * L_8 = GUIStyle_get_padding_m4324(L_7, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_8);
		int32_t L_9 = RectOffset_get_left_m3878(L_8, /*hidden argument*/&RectOffset_get_left_m3878_MethodInfo);
		Rect_t442  L_10 = (__this->___position_0);
		V_2 = L_10;
		float L_11 = Rect_get_y_m2061((&V_2), /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		GUIStyle_t263 * L_12 = (__this->___slider_5);
		NullCheck(L_12);
		RectOffset_t672 * L_13 = GUIStyle_get_padding_m4324(L_12, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_top_m3879(L_13, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		float L_15 = (__this->___size_2);
		float L_16 = SliderHandler_ThumbSize_m4966(__this, /*hidden argument*/&SliderHandler_ThumbSize_m4966_MethodInfo);
		Rect_t442  L_17 = (__this->___position_0);
		V_3 = L_17;
		float L_18 = Rect_get_height_m2066((&V_3), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		GUIStyle_t263 * L_19 = (__this->___slider_5);
		NullCheck(L_19);
		RectOffset_t672 * L_20 = GUIStyle_get_padding_m4324(L_19, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_20);
		int32_t L_21 = RectOffset_get_vertical_m3873(L_20, /*hidden argument*/&RectOffset_get_vertical_m3873_MethodInfo);
		Rect_t442  L_22 = {0};
		Rect__ctor_m3747(&L_22, ((float)(((float)(((float)((float)((float)(L_3-L_4))*(float)V_0))+L_6))+(((float)L_9)))), ((float)(L_11+(((float)L_14)))), ((float)(((float)((float)L_15*(float)V_0))+L_16)), ((float)(L_18-(((float)L_21)))), /*hidden argument*/&Rect__ctor_m3747_MethodInfo);
		return L_22;
	}

IL_009d:
	{
		float L_23 = SliderHandler_ClampedCurrentValue_m4963(__this, /*hidden argument*/&SliderHandler_ClampedCurrentValue_m4963_MethodInfo);
		float L_24 = (__this->___size_2);
		float L_25 = (__this->___start_3);
		Rect_t442  L_26 = (__this->___position_0);
		V_4 = L_26;
		float L_27 = Rect_get_x_m2058((&V_4), /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		GUIStyle_t263 * L_28 = (__this->___slider_5);
		NullCheck(L_28);
		RectOffset_t672 * L_29 = GUIStyle_get_padding_m4324(L_28, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_29);
		int32_t L_30 = RectOffset_get_left_m3878(L_29, /*hidden argument*/&RectOffset_get_left_m3878_MethodInfo);
		Rect_t442  L_31 = (__this->___position_0);
		V_5 = L_31;
		float L_32 = Rect_get_y_m2061((&V_5), /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		float L_33 = (__this->___size_2);
		float L_34 = SliderHandler_ThumbSize_m4966(__this, /*hidden argument*/&SliderHandler_ThumbSize_m4966_MethodInfo);
		Rect_t442  L_35 = (__this->___position_0);
		V_6 = L_35;
		float L_36 = Rect_get_height_m2066((&V_6), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		Rect_t442  L_37 = {0};
		Rect__ctor_m3747(&L_37, ((float)(((float)(((float)((float)((float)(((float)(L_23+L_24))-L_25))*(float)V_0))+L_27))+(((float)L_30)))), L_32, ((float)(((float)((float)L_33*(float)((-V_0))))+L_34)), L_36, /*hidden argument*/&Rect__ctor_m3747_MethodInfo);
		return L_37;
	}
}
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
 float SliderHandler_ClampedCurrentValue_m4963 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___currentValue_1);
		float L_1 = SliderHandler_Clamp_m4956(__this, L_0, /*hidden argument*/&SliderHandler_Clamp_m4956_MethodInfo);
		return L_1;
	}
}
// System.Single UnityEngine.SliderHandler::MousePosition()
 float SliderHandler_MousePosition_m4964 (SliderHandler_t968 * __this, MethodInfo* method){
	Vector2_t198  V_0 = {0};
	Rect_t442  V_1 = {0};
	Vector2_t198  V_2 = {0};
	Rect_t442  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Event_t615 * L_1 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_1);
		Vector2_t198  L_2 = Event_get_mousePosition_m4366(L_1, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		V_0 = L_2;
		NullCheck((&V_0));
		float L_3 = ((&V_0)->___x_1);
		Rect_t442  L_4 = (__this->___position_0);
		V_1 = L_4;
		float L_5 = Rect_get_x_m2058((&V_1), /*hidden argument*/&Rect_get_x_m2058_MethodInfo);
		return ((float)(L_3-L_5));
	}

IL_002e:
	{
		Event_t615 * L_6 = SliderHandler_CurrentEvent_m4954(__this, /*hidden argument*/&SliderHandler_CurrentEvent_m4954_MethodInfo);
		NullCheck(L_6);
		Vector2_t198  L_7 = Event_get_mousePosition_m4366(L_6, /*hidden argument*/&Event_get_mousePosition_m4366_MethodInfo);
		V_2 = L_7;
		NullCheck((&V_2));
		float L_8 = ((&V_2)->___y_2);
		Rect_t442  L_9 = (__this->___position_0);
		V_3 = L_9;
		float L_10 = Rect_get_y_m2061((&V_3), /*hidden argument*/&Rect_get_y_m2061_MethodInfo);
		return ((float)(L_8-L_10));
	}
}
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
 float SliderHandler_ValuesPerPixel_m4965 (SliderHandler_t968 * __this, MethodInfo* method){
	Rect_t442  V_0 = {0};
	Rect_t442  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		Rect_t442  L_1 = (__this->___position_0);
		V_0 = L_1;
		float L_2 = Rect_get_width_m2065((&V_0), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		GUIStyle_t263 * L_3 = (__this->___slider_5);
		NullCheck(L_3);
		RectOffset_t672 * L_4 = GUIStyle_get_padding_m4324(L_3, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_horizontal_m3872(L_4, /*hidden argument*/&RectOffset_get_horizontal_m3872_MethodInfo);
		float L_6 = SliderHandler_ThumbSize_m4966(__this, /*hidden argument*/&SliderHandler_ThumbSize_m4966_MethodInfo);
		float L_7 = (__this->___end_4);
		float L_8 = (__this->___start_3);
		return ((float)((float)((float)(((float)(L_2-(((float)L_5))))-L_6))/(float)((float)(L_7-L_8))));
	}

IL_0041:
	{
		Rect_t442  L_9 = (__this->___position_0);
		V_1 = L_9;
		float L_10 = Rect_get_height_m2066((&V_1), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		GUIStyle_t263 * L_11 = (__this->___slider_5);
		NullCheck(L_11);
		RectOffset_t672 * L_12 = GUIStyle_get_padding_m4324(L_11, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_vertical_m3873(L_12, /*hidden argument*/&RectOffset_get_vertical_m3873_MethodInfo);
		float L_14 = SliderHandler_ThumbSize_m4966(__this, /*hidden argument*/&SliderHandler_ThumbSize_m4966_MethodInfo);
		float L_15 = (__this->___end_4);
		float L_16 = (__this->___start_3);
		return ((float)((float)((float)(((float)(L_10-(((float)L_13))))-L_14))/(float)((float)(L_15-L_16))));
	}
}
// System.Single UnityEngine.SliderHandler::ThumbSize()
 float SliderHandler_ThumbSize_m4966 (SliderHandler_t968 * __this, MethodInfo* method){
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t263 * L_1 = (__this->___thumb_6);
		NullCheck(L_1);
		float L_2 = GUIStyle_get_fixedWidth_m4328(L_1, /*hidden argument*/&GUIStyle_get_fixedWidth_m4328_MethodInfo);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		GUIStyle_t263 * L_3 = (__this->___thumb_6);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedWidth_m4328(L_3, /*hidden argument*/&GUIStyle_get_fixedWidth_m4328_MethodInfo);
		G_B4_0 = L_4;
		goto IL_0041;
	}

IL_0030:
	{
		GUIStyle_t263 * L_5 = (__this->___thumb_6);
		NullCheck(L_5);
		RectOffset_t672 * L_6 = GUIStyle_get_padding_m4324(L_5, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_horizontal_m3872(L_6, /*hidden argument*/&RectOffset_get_horizontal_m3872_MethodInfo);
		G_B4_0 = (((float)L_7));
	}

IL_0041:
	{
		return G_B4_0;
	}

IL_0042:
	{
		GUIStyle_t263 * L_8 = (__this->___thumb_6);
		NullCheck(L_8);
		float L_9 = GUIStyle_get_fixedHeight_m4329(L_8, /*hidden argument*/&GUIStyle_get_fixedHeight_m4329_MethodInfo);
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_0067;
		}
	}
	{
		GUIStyle_t263 * L_10 = (__this->___thumb_6);
		NullCheck(L_10);
		float L_11 = GUIStyle_get_fixedHeight_m4329(L_10, /*hidden argument*/&GUIStyle_get_fixedHeight_m4329_MethodInfo);
		G_B8_0 = L_11;
		goto IL_0078;
	}

IL_0067:
	{
		GUIStyle_t263 * L_12 = (__this->___thumb_6);
		NullCheck(L_12);
		RectOffset_t672 * L_13 = GUIStyle_get_padding_m4324(L_12, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_vertical_m3873(L_13, /*hidden argument*/&RectOffset_get_vertical_m3873_MethodInfo);
		G_B8_0 = (((float)L_14));
	}

IL_0078:
	{
		return G_B8_0;
	}
}
// System.Single UnityEngine.SliderHandler::MaxValue()
 float SliderHandler_MaxValue_m4967 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		float L_2 = Mathf_Max_m1878(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Max_m1878_MethodInfo);
		float L_3 = (__this->___size_2);
		return ((float)(L_2-L_3));
	}
}
// System.Single UnityEngine.SliderHandler::MinValue()
 float SliderHandler_MinValue_m4968 (SliderHandler_t968 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		float L_2 = Mathf_Min_m3859(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Min_m3859_MethodInfo);
		return L_2;
	}
}
// Metadata Definition UnityEngine.SliderHandler
extern Il2CppType Rect_t442_0_0_33;
FieldInfo SliderHandler_t968____position_0_FieldInfo = 
{
	"position"/* name */
	, &Rect_t442_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___position_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_33;
FieldInfo SliderHandler_t968____currentValue_1_FieldInfo = 
{
	"currentValue"/* name */
	, &Single_t76_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___currentValue_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_33;
FieldInfo SliderHandler_t968____size_2_FieldInfo = 
{
	"size"/* name */
	, &Single_t76_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___size_2) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_33;
FieldInfo SliderHandler_t968____start_3_FieldInfo = 
{
	"start"/* name */
	, &Single_t76_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___start_3) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_33;
FieldInfo SliderHandler_t968____end_4_FieldInfo = 
{
	"end"/* name */
	, &Single_t76_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___end_4) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GUIStyle_t263_0_0_33;
FieldInfo SliderHandler_t968____slider_5_FieldInfo = 
{
	"slider"/* name */
	, &GUIStyle_t263_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___slider_5) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GUIStyle_t263_0_0_33;
FieldInfo SliderHandler_t968____thumb_6_FieldInfo = 
{
	"thumb"/* name */
	, &GUIStyle_t263_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___thumb_6) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_33;
FieldInfo SliderHandler_t968____horiz_7_FieldInfo = 
{
	"horiz"/* name */
	, &Boolean_t74_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___horiz_7) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_33;
FieldInfo SliderHandler_t968____id_8_FieldInfo = 
{
	"id"/* name */
	, &Int32_t73_0_0_33/* type */
	, &SliderHandler_t968_il2cpp_TypeInfo/* parent */
	, offsetof(SliderHandler_t968, ___id_8) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* SliderHandler_t968_FieldInfos[] =
{
	&SliderHandler_t968____position_0_FieldInfo,
	&SliderHandler_t968____currentValue_1_FieldInfo,
	&SliderHandler_t968____size_2_FieldInfo,
	&SliderHandler_t968____start_3_FieldInfo,
	&SliderHandler_t968____end_4_FieldInfo,
	&SliderHandler_t968____slider_5_FieldInfo,
	&SliderHandler_t968____thumb_6_FieldInfo,
	&SliderHandler_t968____horiz_7_FieldInfo,
	&SliderHandler_t968____id_8_FieldInfo,
	NULL
};
extern Il2CppType Rect_t442_0_0_0;
extern Il2CppType Rect_t442_0_0_0;
extern Il2CppType Single_t76_0_0_0;
extern Il2CppType Single_t76_0_0_0;
extern Il2CppType Single_t76_0_0_0;
extern Il2CppType Single_t76_0_0_0;
extern Il2CppType GUIStyle_t263_0_0_0;
extern Il2CppType GUIStyle_t263_0_0_0;
extern Il2CppType GUIStyle_t263_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo SliderHandler_t968_SliderHandler__ctor_m4942_ParameterInfos[] = 
{
	{"position", 0, 134219426, &EmptyCustomAttributesCache, &Rect_t442_0_0_0},
	{"currentValue", 1, 134219427, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
	{"size", 2, 134219428, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
	{"start", 3, 134219429, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
	{"end", 4, 134219430, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
	{"slider", 5, 134219431, &EmptyCustomAttributesCache, &GUIStyle_t263_0_0_0},
	{"thumb", 6, 134219432, &EmptyCustomAttributesCache, &GUIStyle_t263_0_0_0},
	{"horiz", 7, 134219433, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
	{"id", 8, 134219434, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Rect_t442_Single_t76_Single_t76_Single_t76_Single_t76_Object_t_Object_t_SByte_t75_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
MethodInfo SliderHandler__ctor_m4942_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SliderHandler__ctor_m4942/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Rect_t442_Single_t76_Single_t76_Single_t76_Single_t76_Object_t_Object_t_SByte_t75_Int32_t73/* invoker_method */
	, SliderHandler_t968_SliderHandler__ctor_m4942_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 9/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1521/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::Handle()
MethodInfo SliderHandler_Handle_m4943_MethodInfo = 
{
	"Handle"/* name */
	, (methodPointerType)&SliderHandler_Handle_m4943/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1522/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnMouseDown()
MethodInfo SliderHandler_OnMouseDown_m4944_MethodInfo = 
{
	"OnMouseDown"/* name */
	, (methodPointerType)&SliderHandler_OnMouseDown_m4944/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1523/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
MethodInfo SliderHandler_OnMouseDrag_m4945_MethodInfo = 
{
	"OnMouseDrag"/* name */
	, (methodPointerType)&SliderHandler_OnMouseDrag_m4945/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1524/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnMouseUp()
MethodInfo SliderHandler_OnMouseUp_m4946_MethodInfo = 
{
	"OnMouseUp"/* name */
	, (methodPointerType)&SliderHandler_OnMouseUp_m4946/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1525/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::OnRepaint()
MethodInfo SliderHandler_OnRepaint_m4947_MethodInfo = 
{
	"OnRepaint"/* name */
	, (methodPointerType)&SliderHandler_OnRepaint_m4947/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1526/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType EventType_t873_0_0_0;
extern void* RuntimeInvoker_EventType_t873 (MethodInfo* method, void* obj, void** args);
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
MethodInfo SliderHandler_CurrentEventType_m4948_MethodInfo = 
{
	"CurrentEventType"/* name */
	, (methodPointerType)&SliderHandler_CurrentEventType_m4948/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &EventType_t873_0_0_0/* return_type */
	, RuntimeInvoker_EventType_t873/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1527/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
MethodInfo SliderHandler_CurrentScrollTroughSide_m4949_MethodInfo = 
{
	"CurrentScrollTroughSide"/* name */
	, (methodPointerType)&SliderHandler_CurrentScrollTroughSide_m4949/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1528/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
MethodInfo SliderHandler_IsEmptySlider_m4950_MethodInfo = 
{
	"IsEmptySlider"/* name */
	, (methodPointerType)&SliderHandler_IsEmptySlider_m4950/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1529/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
MethodInfo SliderHandler_SupportsPageMovements_m4951_MethodInfo = 
{
	"SupportsPageMovements"/* name */
	, (methodPointerType)&SliderHandler_SupportsPageMovements_m4951/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1530/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::PageMovementValue()
MethodInfo SliderHandler_PageMovementValue_m4952_MethodInfo = 
{
	"PageMovementValue"/* name */
	, (methodPointerType)&SliderHandler_PageMovementValue_m4952/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1531/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
MethodInfo SliderHandler_PageUpMovementBound_m4953_MethodInfo = 
{
	"PageUpMovementBound"/* name */
	, (methodPointerType)&SliderHandler_PageUpMovementBound_m4953/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1532/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Event_t615_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
MethodInfo SliderHandler_CurrentEvent_m4954_MethodInfo = 
{
	"CurrentEvent"/* name */
	, (methodPointerType)&SliderHandler_CurrentEvent_m4954/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Event_t615_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1533/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
MethodInfo SliderHandler_ValueForCurrentMousePosition_m4955_MethodInfo = 
{
	"ValueForCurrentMousePosition"/* name */
	, (methodPointerType)&SliderHandler_ValueForCurrentMousePosition_m4955/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1534/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
static ParameterInfo SliderHandler_t968_SliderHandler_Clamp_m4956_ParameterInfos[] = 
{
	{"value", 0, 134219435, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
MethodInfo SliderHandler_Clamp_m4956_MethodInfo = 
{
	"Clamp"/* name */
	, (methodPointerType)&SliderHandler_Clamp_m4956/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76_Single_t76/* invoker_method */
	, SliderHandler_t968_SliderHandler_Clamp_m4956_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1535/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Rect_t442_0_0_0;
extern void* RuntimeInvoker_Rect_t442 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
MethodInfo SliderHandler_ThumbSelectionRect_m4957_MethodInfo = 
{
	"ThumbSelectionRect"/* name */
	, (methodPointerType)&SliderHandler_ThumbSelectionRect_m4957/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t442_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t442/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1536/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
static ParameterInfo SliderHandler_t968_SliderHandler_StartDraggingWithValue_m4958_ParameterInfos[] = 
{
	{"dragStartValue", 0, 134219436, &EmptyCustomAttributesCache, &Single_t76_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
MethodInfo SliderHandler_StartDraggingWithValue_m4958_MethodInfo = 
{
	"StartDraggingWithValue"/* name */
	, (methodPointerType)&SliderHandler_StartDraggingWithValue_m4958/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Single_t76/* invoker_method */
	, SliderHandler_t968_SliderHandler_StartDraggingWithValue_m4958_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1537/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SliderState_t967_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
MethodInfo SliderHandler_SliderState_m4959_MethodInfo = 
{
	"SliderState"/* name */
	, (methodPointerType)&SliderHandler_SliderState_m4959/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &SliderState_t967_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1538/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Rect_t442_0_0_0;
extern void* RuntimeInvoker_Rect_t442 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
MethodInfo SliderHandler_ThumbRect_m4960_MethodInfo = 
{
	"ThumbRect"/* name */
	, (methodPointerType)&SliderHandler_ThumbRect_m4960/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t442_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t442/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1539/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Rect_t442_0_0_0;
extern void* RuntimeInvoker_Rect_t442 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
MethodInfo SliderHandler_VerticalThumbRect_m4961_MethodInfo = 
{
	"VerticalThumbRect"/* name */
	, (methodPointerType)&SliderHandler_VerticalThumbRect_m4961/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t442_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t442/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1540/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Rect_t442_0_0_0;
extern void* RuntimeInvoker_Rect_t442 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
MethodInfo SliderHandler_HorizontalThumbRect_m4962_MethodInfo = 
{
	"HorizontalThumbRect"/* name */
	, (methodPointerType)&SliderHandler_HorizontalThumbRect_m4962/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t442_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t442/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1541/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
MethodInfo SliderHandler_ClampedCurrentValue_m4963_MethodInfo = 
{
	"ClampedCurrentValue"/* name */
	, (methodPointerType)&SliderHandler_ClampedCurrentValue_m4963/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1542/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::MousePosition()
MethodInfo SliderHandler_MousePosition_m4964_MethodInfo = 
{
	"MousePosition"/* name */
	, (methodPointerType)&SliderHandler_MousePosition_m4964/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1543/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
MethodInfo SliderHandler_ValuesPerPixel_m4965_MethodInfo = 
{
	"ValuesPerPixel"/* name */
	, (methodPointerType)&SliderHandler_ValuesPerPixel_m4965/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1544/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::ThumbSize()
MethodInfo SliderHandler_ThumbSize_m4966_MethodInfo = 
{
	"ThumbSize"/* name */
	, (methodPointerType)&SliderHandler_ThumbSize_m4966/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1545/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::MaxValue()
MethodInfo SliderHandler_MaxValue_m4967_MethodInfo = 
{
	"MaxValue"/* name */
	, (methodPointerType)&SliderHandler_MaxValue_m4967/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1546/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.SliderHandler::MinValue()
MethodInfo SliderHandler_MinValue_m4968_MethodInfo = 
{
	"MinValue"/* name */
	, (methodPointerType)&SliderHandler_MinValue_m4968/* method */
	, &SliderHandler_t968_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1547/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SliderHandler_t968_MethodInfos[] =
{
	&SliderHandler__ctor_m4942_MethodInfo,
	&SliderHandler_Handle_m4943_MethodInfo,
	&SliderHandler_OnMouseDown_m4944_MethodInfo,
	&SliderHandler_OnMouseDrag_m4945_MethodInfo,
	&SliderHandler_OnMouseUp_m4946_MethodInfo,
	&SliderHandler_OnRepaint_m4947_MethodInfo,
	&SliderHandler_CurrentEventType_m4948_MethodInfo,
	&SliderHandler_CurrentScrollTroughSide_m4949_MethodInfo,
	&SliderHandler_IsEmptySlider_m4950_MethodInfo,
	&SliderHandler_SupportsPageMovements_m4951_MethodInfo,
	&SliderHandler_PageMovementValue_m4952_MethodInfo,
	&SliderHandler_PageUpMovementBound_m4953_MethodInfo,
	&SliderHandler_CurrentEvent_m4954_MethodInfo,
	&SliderHandler_ValueForCurrentMousePosition_m4955_MethodInfo,
	&SliderHandler_Clamp_m4956_MethodInfo,
	&SliderHandler_ThumbSelectionRect_m4957_MethodInfo,
	&SliderHandler_StartDraggingWithValue_m4958_MethodInfo,
	&SliderHandler_SliderState_m4959_MethodInfo,
	&SliderHandler_ThumbRect_m4960_MethodInfo,
	&SliderHandler_VerticalThumbRect_m4961_MethodInfo,
	&SliderHandler_HorizontalThumbRect_m4962_MethodInfo,
	&SliderHandler_ClampedCurrentValue_m4963_MethodInfo,
	&SliderHandler_MousePosition_m4964_MethodInfo,
	&SliderHandler_ValuesPerPixel_m4965_MethodInfo,
	&SliderHandler_ThumbSize_m4966_MethodInfo,
	&SliderHandler_MaxValue_m4967_MethodInfo,
	&SliderHandler_MinValue_m4968_MethodInfo,
	NULL
};
static MethodInfo* SliderHandler_t968_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SliderHandler_t968_0_0_0;
extern Il2CppType SliderHandler_t968_1_0_0;
TypeInfo SliderHandler_t968_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SliderHandler"/* name */
	, "UnityEngine"/* namespaze */
	, SliderHandler_t968_MethodInfos/* methods */
	, NULL/* properties */
	, SliderHandler_t968_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SliderHandler_t968_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SliderHandler_t968_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SliderHandler_t968_il2cpp_TypeInfo/* cast_class */
	, &SliderHandler_t968_0_0_0/* byval_arg */
	, &SliderHandler_t968_1_0_0/* this_arg */
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
	, sizeof (SliderHandler_t968)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, true/* valuetype */
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
	, 27/* method_count */
	, 0/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StackTraceUtility_t969_il2cpp_TypeInfo;
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
extern TypeInfo StackTrace_t970_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t128_il2cpp_TypeInfo;
extern TypeInfo Exception_t82_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t89_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t131_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t289_il2cpp_TypeInfo;
extern TypeInfo Char_t107_il2cpp_TypeInfo;
extern TypeInfo StackFrame_t1077_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t320_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t1078_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t1079_il2cpp_TypeInfo;
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern MethodInfo StackTrace__ctor_m5173_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m4977_MethodInfo;
extern MethodInfo String_ToString_m650_MethodInfo;
extern MethodInfo String_StartsWith_m1396_MethodInfo;
extern MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m4975_MethodInfo;
extern MethodInfo String_Concat_m493_MethodInfo;
extern MethodInfo ArgumentException__ctor_m651_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m1384_MethodInfo;
extern MethodInfo String_get_Length_m569_MethodInfo;
extern MethodInfo StringBuilder__ctor_m5174_MethodInfo;
extern MethodInfo Exception_GetType_m1235_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m699_MethodInfo;
extern MethodInfo Exception_get_Message_m1233_MethodInfo;
extern MethodInfo String_Trim_m572_MethodInfo;
extern MethodInfo String_Concat_m477_MethodInfo;
extern MethodInfo Exception_get_InnerException_m1232_MethodInfo;
extern MethodInfo String_Concat_m611_MethodInfo;
extern MethodInfo StringBuilder_Append_m502_MethodInfo;
extern MethodInfo StringBuilder_ToString_m511_MethodInfo;
extern MethodInfo String_Split_m1180_MethodInfo;
extern MethodInfo String_get_Chars_m568_MethodInfo;
extern MethodInfo StackTraceUtility_IsSystemStacktraceType_m4973_MethodInfo;
extern MethodInfo String_IndexOf_m1398_MethodInfo;
extern MethodInfo String_Substring_m578_MethodInfo;
extern MethodInfo String_EndsWith_m1397_MethodInfo;
extern MethodInfo String_Remove_m3702_MethodInfo;
extern MethodInfo String_IndexOf_m5175_MethodInfo;
extern MethodInfo String_Replace_m5176_MethodInfo;
extern MethodInfo String_Replace_m5177_MethodInfo;
extern MethodInfo String_LastIndexOf_m1188_MethodInfo;
extern MethodInfo String_Insert_m3704_MethodInfo;
extern MethodInfo StackTrace_GetFrame_m5178_MethodInfo;
extern MethodInfo StackFrame_GetMethod_m5179_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m5180_MethodInfo;
extern MethodInfo Type_get_Namespace_m5181_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m5182_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m5183_MethodInfo;
extern MethodInfo StackFrame_GetFileName_m5184_MethodInfo;
extern MethodInfo String_op_Equality_m636_MethodInfo;
extern MethodInfo StackFrame_GetFileLineNumber_m5185_MethodInfo;
extern MethodInfo Int32_ToString_m560_MethodInfo;
extern MethodInfo StackTrace_get_FrameCount_m5186_MethodInfo;


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern MethodInfo StackTraceUtility__ctor_m4969_MethodInfo;
 void StackTraceUtility__ctor_m4969 (StackTraceUtility_t969 * __this, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern MethodInfo StackTraceUtility__cctor_m4970_MethodInfo;
 void StackTraceUtility__cctor_m4970 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern MethodInfo StackTraceUtility_SetProjectFolder_m4971_MethodInfo;
 void StackTraceUtility_SetProjectFolder_m4971 (Object_t * __this/* static, unused */, String_t* ___folder, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0 = ___folder;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern MethodInfo StackTraceUtility_ExtractStackTrace_m4972_MethodInfo;
 String_t* StackTraceUtility_ExtractStackTrace_m4972 (Object_t * __this/* static, unused */, MethodInfo* method){
	StackTrace_t970 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t970 * L_0 = (StackTrace_t970 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t970_il2cpp_TypeInfo));
		StackTrace__ctor_m5173(L_0, 1, 1, /*hidden argument*/&StackTrace__ctor_m5173_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		String_t* L_1 = StackTraceUtility_ExtractFormattedStackTrace_m4977(NULL /*static, unused*/, V_0, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m4977_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m650_MethodInfo, L_1);
		V_1 = L_2;
		return V_1;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
 bool StackTraceUtility_IsSystemStacktraceType_m4973 (Object_t * __this/* static, unused */, Object_t * ___name, MethodInfo* method){
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		V_0 = ((String_t*)Castclass(___name, (&String_t_il2cpp_TypeInfo)));
		NullCheck(V_0);
		bool L_0 = String_StartsWith_m1396(V_0, (String_t*) &_stringLiteral457, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (L_0)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_1 = String_StartsWith_m1396(V_0, (String_t*) &_stringLiteral458, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (L_1)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_2 = String_StartsWith_m1396(V_0, (String_t*) &_stringLiteral459, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_3 = String_StartsWith_m1396(V_0, (String_t*) &_stringLiteral460, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_4 = String_StartsWith_m1396(V_0, (String_t*) &_stringLiteral461, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		NullCheck(V_0);
		bool L_5 = String_StartsWith_m1396(V_0, (String_t*) &_stringLiteral462, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		G_B7_0 = ((int32_t)(L_5));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern MethodInfo StackTraceUtility_ExtractStringFromException_m4974_MethodInfo;
 String_t* StackTraceUtility_ExtractStringFromException_m4974 (Object_t * __this/* static, unused */, Object_t * ___exception, MethodInfo* method){
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		V_1 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		StackTraceUtility_ExtractStringFromExceptionInternal_m4975(NULL /*static, unused*/, ___exception, (&V_0), (&V_1), /*hidden argument*/&StackTraceUtility_ExtractStringFromExceptionInternal_m4975_MethodInfo);
		String_t* L_0 = String_Concat_m493(NULL /*static, unused*/, V_0, (String_t*) &_stringLiteral46, V_1, /*hidden argument*/&String_Concat_m493_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
 void StackTraceUtility_ExtractStringFromExceptionInternal_m4975 (Object_t * __this/* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method){
	Exception_t82 * V_0 = {0};
	StringBuilder_t89 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t970 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		if (___exceptiono)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t128 * L_0 = (ArgumentException_t128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t128_il2cpp_TypeInfo));
		ArgumentException__ctor_m651(L_0, (String_t*) &_stringLiteral463, /*hidden argument*/&ArgumentException__ctor_m651_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0011:
	{
		V_0 = ((Exception_t82 *)IsInst(___exceptiono, InitializedTypeInfo(&Exception_t82_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t128 * L_1 = (ArgumentException_t128 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t128_il2cpp_TypeInfo));
		ArgumentException__ctor_m651(L_1, (String_t*) &_stringLiteral464, /*hidden argument*/&ArgumentException__ctor_m651_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0029:
	{
		NullCheck(V_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m1384_MethodInfo, V_0);
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		NullCheck(V_0);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m1384_MethodInfo, V_0);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m569(L_3, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		G_B7_0 = ((int32_t)((int32_t)L_4*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t89 * L_5 = (StringBuilder_t89 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t89_il2cpp_TypeInfo));
		StringBuilder__ctor_m5174(L_5, G_B7_0, /*hidden argument*/&StringBuilder__ctor_m5174_MethodInfo);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		*((Object_t **)(___message)) = (Object_t *)(((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		V_2 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		goto IL_00ff;
	}

IL_0063:
	{
		NullCheck(V_2);
		int32_t L_6 = String_get_Length_m569(V_2, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if (L_6)
		{
			goto IL_007a;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m1384_MethodInfo, V_0);
		V_2 = L_7;
		goto IL_008c;
	}

IL_007a:
	{
		NullCheck(V_0);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_StackTrace_m1384_MethodInfo, V_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Concat_m493(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral46, V_2, /*hidden argument*/&String_Concat_m493_MethodInfo);
		V_2 = L_9;
	}

IL_008c:
	{
		NullCheck(V_0);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Exception_GetType_m1235_MethodInfo, V_0);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m699_MethodInfo, L_10);
		V_3 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_4 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		NullCheck(V_0);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m1233_MethodInfo, V_0);
		if (!L_12)
		{
			goto IL_00b2;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Exception_get_Message_m1233_MethodInfo, V_0);
		V_4 = L_13;
	}

IL_00b2:
	{
		NullCheck(V_4);
		String_t* L_14 = String_Trim_m572(V_4, /*hidden argument*/&String_Trim_m572_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m569(L_14, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if (!L_15)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m477(NULL /*static, unused*/, V_3, (String_t*) &_stringLiteral465, /*hidden argument*/&String_Concat_m477_MethodInfo);
		V_3 = L_16;
		String_t* L_17 = String_Concat_m477(NULL /*static, unused*/, V_3, V_4, /*hidden argument*/&String_Concat_m477_MethodInfo);
		V_3 = L_17;
	}

IL_00d8:
	{
		*((Object_t **)(___message)) = (Object_t *)V_3;
		NullCheck(V_0);
		Exception_t82 * L_18 = (Exception_t82 *)VirtFuncInvoker0< Exception_t82 * >::Invoke(&Exception_get_InnerException_m1232_MethodInfo, V_0);
		if (!L_18)
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Concat_m611(NULL /*static, unused*/, (String_t*) &_stringLiteral466, V_3, (String_t*) &_stringLiteral46, V_2, /*hidden argument*/&String_Concat_m611_MethodInfo);
		V_2 = L_19;
	}

IL_00f8:
	{
		NullCheck(V_0);
		Exception_t82 * L_20 = (Exception_t82 *)VirtFuncInvoker0< Exception_t82 * >::Invoke(&Exception_get_InnerException_m1232_MethodInfo, V_0);
		V_0 = L_20;
	}

IL_00ff:
	{
		if (V_0)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m477(NULL /*static, unused*/, V_2, (String_t*) &_stringLiteral46, /*hidden argument*/&String_Concat_m477_MethodInfo);
		NullCheck(V_1);
		StringBuilder_Append_m502(V_1, L_21, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		StackTrace_t970 * L_22 = (StackTrace_t970 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StackTrace_t970_il2cpp_TypeInfo));
		StackTrace__ctor_m5173(L_22, 1, 1, /*hidden argument*/&StackTrace__ctor_m5173_MethodInfo);
		V_5 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		String_t* L_23 = StackTraceUtility_ExtractFormattedStackTrace_m4977(NULL /*static, unused*/, V_5, /*hidden argument*/&StackTraceUtility_ExtractFormattedStackTrace_m4977_MethodInfo);
		NullCheck(V_1);
		StringBuilder_Append_m502(V_1, L_23, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_1);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m511_MethodInfo, V_1);
		*((Object_t **)(___stackTrace)) = (Object_t *)L_24;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern MethodInfo StackTraceUtility_PostprocessStacktrace_m4976_MethodInfo;
 String_t* StackTraceUtility_PostprocessStacktrace_m4976 (Object_t * __this/* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method){
	StringU5BU5D_t3* V_0 = {0};
	StringBuilder_t89 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		if (___oldString)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}

IL_000c:
	{
		CharU5BU5D_t289* L_0 = ((CharU5BU5D_t289*)SZArrayNew(InitializedTypeInfo(&CharU5BU5D_t289_il2cpp_TypeInfo), 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)10);
		NullCheck(___oldString);
		StringU5BU5D_t3* L_1 = String_Split_m1180(___oldString, L_0, /*hidden argument*/&String_Split_m1180_MethodInfo);
		V_0 = L_1;
		NullCheck(___oldString);
		int32_t L_2 = String_get_Length_m569(___oldString, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		StringBuilder_t89 * L_3 = (StringBuilder_t89 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t89_il2cpp_TypeInfo));
		StringBuilder__ctor_m5174(L_3, L_2, /*hidden argument*/&StringBuilder__ctor_m5174_MethodInfo);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		int32_t L_4 = V_2;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(V_0, L_4)));
		String_t* L_5 = String_Trim_m572((*(String_t**)(String_t**)SZArrayLdElema(V_0, L_4)), /*hidden argument*/&String_Trim_m572_MethodInfo);
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_2);
		ArrayElementTypeCheck (V_0, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(V_0, V_2)) = (String_t*)L_5;
		V_2 = ((int32_t)(V_2+1));
	}

IL_0040:
	{
		NullCheck(V_0);
		if ((((int32_t)V_2) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, V_3);
		int32_t L_6 = V_3;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(V_0, L_6));
		NullCheck(V_4);
		int32_t L_7 = String_get_Length_m569(V_4, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		NullCheck(V_4);
		uint16_t L_8 = String_get_Chars_m568(V_4, 0, /*hidden argument*/&String_get_Chars_m568_MethodInfo);
		if ((((uint32_t)L_8) != ((uint32_t)((int32_t)10))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		NullCheck(V_4);
		bool L_9 = String_StartsWith_m1396(V_4, (String_t*) &_stringLiteral467, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		if (!___stripEngineInternalInformation)
		{
			goto IL_00a7;
		}
	}
	{
		NullCheck(V_4);
		bool L_10 = String_StartsWith_m1396(V_4, (String_t*) &_stringLiteral468, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (!L_10)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		if (!___stripEngineInternalInformation)
		{
			goto IL_00fa;
		}
	}
	{
		NullCheck(V_0);
		if ((((int32_t)V_3) >= ((int32_t)((int32_t)((((int32_t)(((Array_t *)V_0)->max_length)))-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		bool L_11 = StackTraceUtility_IsSystemStacktraceType_m4973(NULL /*static, unused*/, V_4, /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m4973_MethodInfo);
		if (!L_11)
		{
			goto IL_00fa;
		}
	}
	{
		NullCheck(V_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_0, ((int32_t)(V_3+1)));
		int32_t L_12 = ((int32_t)(V_3+1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		bool L_13 = StackTraceUtility_IsSystemStacktraceType_m4973(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(V_0, L_12)), /*hidden argument*/&StackTraceUtility_IsSystemStacktraceType_m4973_MethodInfo);
		if (!L_13)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		NullCheck(V_4);
		int32_t L_14 = String_IndexOf_m1398(V_4, (String_t*) &_stringLiteral469, /*hidden argument*/&String_IndexOf_m1398_MethodInfo);
		V_5 = L_14;
		if ((((int32_t)V_5) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_15 = String_Substring_m578(V_4, 0, V_5, /*hidden argument*/&String_Substring_m578_MethodInfo);
		V_4 = L_15;
	}

IL_00fa:
	{
		NullCheck(V_4);
		int32_t L_16 = String_IndexOf_m1398(V_4, (String_t*) &_stringLiteral470, /*hidden argument*/&String_IndexOf_m1398_MethodInfo);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		NullCheck(V_4);
		int32_t L_17 = String_IndexOf_m1398(V_4, (String_t*) &_stringLiteral471, /*hidden argument*/&String_IndexOf_m1398_MethodInfo);
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		NullCheck(V_4);
		int32_t L_18 = String_IndexOf_m1398(V_4, (String_t*) &_stringLiteral472, /*hidden argument*/&String_IndexOf_m1398_MethodInfo);
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		if (!___stripEngineInternalInformation)
		{
			goto IL_016c;
		}
	}
	{
		NullCheck(V_4);
		bool L_19 = String_StartsWith_m1396(V_4, (String_t*) &_stringLiteral21, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (!L_19)
		{
			goto IL_016c;
		}
	}
	{
		NullCheck(V_4);
		bool L_20 = String_EndsWith_m1397(V_4, (String_t*) &_stringLiteral26, /*hidden argument*/&String_EndsWith_m1397_MethodInfo);
		if (!L_20)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		NullCheck(V_4);
		bool L_21 = String_StartsWith_m1396(V_4, (String_t*) &_stringLiteral473, /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (!L_21)
		{
			goto IL_0188;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_22 = String_Remove_m3702(V_4, 0, 3, /*hidden argument*/&String_Remove_m3702_MethodInfo);
		V_4 = L_22;
	}

IL_0188:
	{
		NullCheck(V_4);
		int32_t L_23 = String_IndexOf_m1398(V_4, (String_t*) &_stringLiteral474, /*hidden argument*/&String_IndexOf_m1398_MethodInfo);
		V_6 = L_23;
		V_7 = (-1);
		if ((((int32_t)V_6) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		NullCheck(V_4);
		int32_t L_24 = String_IndexOf_m5175(V_4, (String_t*) &_stringLiteral26, V_6, /*hidden argument*/&String_IndexOf_m5175_MethodInfo);
		V_7 = L_24;
	}

IL_01b1:
	{
		if ((((int32_t)V_6) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		if ((((int32_t)V_7) <= ((int32_t)V_6)))
		{
			goto IL_01d4;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_25 = String_Remove_m3702(V_4, V_6, ((int32_t)(((int32_t)(V_7-V_6))+1)), /*hidden argument*/&String_Remove_m3702_MethodInfo);
		V_4 = L_25;
	}

IL_01d4:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		NullCheck(V_4);
		String_t* L_26 = String_Replace_m5176(V_4, (String_t*) &_stringLiteral475, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_Replace_m5176_MethodInfo);
		V_4 = L_26;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		NullCheck(V_4);
		String_t* L_27 = String_Replace_m5176(V_4, (((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_Replace_m5176_MethodInfo);
		V_4 = L_27;
		NullCheck(V_4);
		String_t* L_28 = String_Replace_m5177(V_4, ((int32_t)92), ((int32_t)47), /*hidden argument*/&String_Replace_m5177_MethodInfo);
		V_4 = L_28;
		NullCheck(V_4);
		int32_t L_29 = String_LastIndexOf_m1188(V_4, (String_t*) &_stringLiteral476, /*hidden argument*/&String_LastIndexOf_m1188_MethodInfo);
		V_8 = L_29;
		if ((((int32_t)V_8) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_30 = String_Remove_m3702(V_4, V_8, 5, /*hidden argument*/&String_Remove_m3702_MethodInfo);
		V_4 = L_30;
		NullCheck(V_4);
		String_t* L_31 = String_Insert_m3704(V_4, V_8, (String_t*) &_stringLiteral477, /*hidden argument*/&String_Insert_m3704_MethodInfo);
		V_4 = L_31;
		NullCheck(V_4);
		int32_t L_32 = String_get_Length_m569(V_4, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		NullCheck(V_4);
		String_t* L_33 = String_Insert_m3704(V_4, L_32, (String_t*) &_stringLiteral212, /*hidden argument*/&String_Insert_m3704_MethodInfo);
		V_4 = L_33;
	}

IL_024e:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m477(NULL /*static, unused*/, V_4, (String_t*) &_stringLiteral46, /*hidden argument*/&String_Concat_m477_MethodInfo);
		NullCheck(V_1);
		StringBuilder_Append_m502(V_1, L_34, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
	}

IL_0261:
	{
		V_3 = ((int32_t)(V_3+1));
	}

IL_0265:
	{
		NullCheck(V_0);
		if ((((int32_t)V_3) < ((int32_t)(((int32_t)(((Array_t *)V_0)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		NullCheck(V_1);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m511_MethodInfo, V_1);
		return L_35;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
 String_t* StackTraceUtility_ExtractFormattedStackTrace_m4977 (Object_t * __this/* static, unused */, StackTrace_t970 * ___stackTrace, MethodInfo* method){
	StringBuilder_t89 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t1077 * V_2 = {0};
	MethodBase_t320 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t1078* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t89 * L_0 = (StringBuilder_t89 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t89_il2cpp_TypeInfo));
		StringBuilder__ctor_m5174(L_0, ((int32_t)255), /*hidden argument*/&StringBuilder__ctor_m5174_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		NullCheck(___stackTrace);
		StackFrame_t1077 * L_1 = (StackFrame_t1077 *)VirtFuncInvoker1< StackFrame_t1077 *, int32_t >::Invoke(&StackTrace_GetFrame_m5178_MethodInfo, ___stackTrace, V_1);
		V_2 = L_1;
		NullCheck(V_2);
		MethodBase_t320 * L_2 = (MethodBase_t320 *)VirtFuncInvoker0< MethodBase_t320 * >::Invoke(&StackFrame_GetMethod_m5179_MethodInfo, V_2);
		V_3 = L_2;
		if (V_3)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		NullCheck(V_3);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m5180_MethodInfo, V_3);
		V_4 = L_3;
		if (V_4)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		NullCheck(V_4);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m5181_MethodInfo, V_4);
		V_5 = L_4;
		if (!V_5)
		{
			goto IL_0071;
		}
	}
	{
		NullCheck(V_5);
		int32_t L_5 = String_get_Length_m569(V_5, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, V_5, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral195, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
	}

IL_0071:
	{
		NullCheck(V_4);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m699_MethodInfo, V_4);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, L_6, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral478, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_3);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m699_MethodInfo, V_3);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, L_7, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral236, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		V_6 = 0;
		NullCheck(V_3);
		ParameterInfoU5BU5D_t1078* L_8 = (ParameterInfoU5BU5D_t1078*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1078* >::Invoke(&MethodBase_GetParameters_m5182_MethodInfo, V_3);
		V_7 = L_8;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		if (V_8)
		{
			goto IL_00cf;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral18, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		NullCheck(V_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_7, V_6);
		int32_t L_9 = V_6;
		NullCheck((*(ParameterInfo_t1079 **)(ParameterInfo_t1079 **)SZArrayLdElema(V_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m5183_MethodInfo, (*(ParameterInfo_t1079 **)(ParameterInfo_t1079 **)SZArrayLdElema(V_7, L_9)));
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m699_MethodInfo, L_10);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, L_11, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		V_6 = ((int32_t)(V_6+1));
	}

IL_00ee:
	{
		NullCheck(V_7);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((Array_t *)V_7)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral212, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_2);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StackFrame_GetFileName_m5184_MethodInfo, V_2);
		V_9 = L_12;
		if (!V_9)
		{
			goto IL_01b9;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m699_MethodInfo, V_4);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Equality_m636(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral479, /*hidden argument*/&String_op_Equality_m636_MethodInfo);
		if (!L_14)
		{
			goto IL_0140;
		}
	}
	{
		NullCheck(V_4);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m5181_MethodInfo, V_4);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_16 = String_op_Equality_m636(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral480, /*hidden argument*/&String_op_Equality_m636_MethodInfo);
		if (L_16)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral477, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		NullCheck(V_9);
		bool L_17 = String_StartsWith_m1396(V_9, (((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), /*hidden argument*/&String_StartsWith_m1396_MethodInfo);
		if (!L_17)
		{
			goto IL_0182;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo));
		NullCheck((((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0));
		int32_t L_18 = String_get_Length_m569((((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), /*hidden argument*/&String_get_Length_m569_MethodInfo);
		NullCheck(V_9);
		int32_t L_19 = String_get_Length_m569(V_9, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		NullCheck((((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0));
		int32_t L_20 = String_get_Length_m569((((StackTraceUtility_t969_StaticFields*)InitializedTypeInfo(&StackTraceUtility_t969_il2cpp_TypeInfo)->static_fields)->___projectFolder_0), /*hidden argument*/&String_get_Length_m569_MethodInfo);
		NullCheck(V_9);
		String_t* L_21 = String_Substring_m578(V_9, L_18, ((int32_t)(L_19-L_20)), /*hidden argument*/&String_Substring_m578_MethodInfo);
		V_9 = L_21;
	}

IL_0182:
	{
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, V_9, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral478, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_2);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackFrame_GetFileLineNumber_m5185_MethodInfo, V_2);
		V_10 = L_22;
		String_t* L_23 = Int32_ToString_m560((&V_10), /*hidden argument*/&Int32_ToString_m560_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, L_23, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral212, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
	}

IL_01b9:
	{
		NullCheck(V_0);
		StringBuilder_Append_m502(V_0, (String_t*) &_stringLiteral46, /*hidden argument*/&StringBuilder_Append_m502_MethodInfo);
	}

IL_01c5:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_01c9:
	{
		NullCheck(___stackTrace);
		int32_t L_24 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&StackTrace_get_FrameCount_m5186_MethodInfo, ___stackTrace);
		if ((((int32_t)V_1) < ((int32_t)L_24)))
		{
			goto IL_0012;
		}
	}
	{
		NullCheck(V_0);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m511_MethodInfo, V_0);
		return L_25;
	}
}
// Metadata Definition UnityEngine.StackTraceUtility
extern Il2CppType String_t_0_0_17;
FieldInfo StackTraceUtility_t969____projectFolder_0_FieldInfo = 
{
	"projectFolder"/* name */
	, &String_t_0_0_17/* type */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* parent */
	, offsetof(StackTraceUtility_t969_StaticFields, ___projectFolder_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* StackTraceUtility_t969_FieldInfos[] =
{
	&StackTraceUtility_t969____projectFolder_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::.ctor()
MethodInfo StackTraceUtility__ctor_m4969_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StackTraceUtility__ctor_m4969/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1548/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::.cctor()
MethodInfo StackTraceUtility__cctor_m4970_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&StackTraceUtility__cctor_m4970/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1549/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo StackTraceUtility_t969_StackTraceUtility_SetProjectFolder_m4971_ParameterInfos[] = 
{
	{"folder", 0, 134219437, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
MethodInfo StackTraceUtility_SetProjectFolder_m4971_MethodInfo = 
{
	"SetProjectFolder"/* name */
	, (methodPointerType)&StackTraceUtility_SetProjectFolder_m4971/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, StackTraceUtility_t969_StackTraceUtility_SetProjectFolder_m4971_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1550/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m4972;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
MethodInfo StackTraceUtility_ExtractStackTrace_m4972_MethodInfo = 
{
	"ExtractStackTrace"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStackTrace_m4972/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m4972/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1551/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo StackTraceUtility_t969_StackTraceUtility_IsSystemStacktraceType_m4973_ParameterInfos[] = 
{
	{"name", 0, 134219438, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
MethodInfo StackTraceUtility_IsSystemStacktraceType_m4973_MethodInfo = 
{
	"IsSystemStacktraceType"/* name */
	, (methodPointerType)&StackTraceUtility_IsSystemStacktraceType_m4973/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, StackTraceUtility_t969_StackTraceUtility_IsSystemStacktraceType_m4973_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1552/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo StackTraceUtility_t969_StackTraceUtility_ExtractStringFromException_m4974_ParameterInfos[] = 
{
	{"exception", 0, 134219439, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
MethodInfo StackTraceUtility_ExtractStringFromException_m4974_MethodInfo = 
{
	"ExtractStringFromException"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStringFromException_m4974/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StackTraceUtility_t969_StackTraceUtility_ExtractStringFromException_m4974_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1553/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType String_t_1_0_2;
extern Il2CppType String_t_1_0_0;
extern Il2CppType String_t_1_0_2;
static ParameterInfo StackTraceUtility_t969_StackTraceUtility_ExtractStringFromExceptionInternal_m4975_ParameterInfos[] = 
{
	{"exceptiono", 0, 134219440, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"message", 1, 134219441, &EmptyCustomAttributesCache, &String_t_1_0_2},
	{"stackTrace", 2, 134219442, &EmptyCustomAttributesCache, &String_t_1_0_2},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_StringU26_t333_StringU26_t333 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m4975;
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
MethodInfo StackTraceUtility_ExtractStringFromExceptionInternal_m4975_MethodInfo = 
{
	"ExtractStringFromExceptionInternal"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractStringFromExceptionInternal_m4975/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_StringU26_t333_StringU26_t333/* invoker_method */
	, StackTraceUtility_t969_StackTraceUtility_ExtractStringFromExceptionInternal_m4975_ParameterInfos/* parameters */
	, &StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m4975/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1554/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t74_0_0_0;
static ParameterInfo StackTraceUtility_t969_StackTraceUtility_PostprocessStacktrace_m4976_ParameterInfos[] = 
{
	{"oldString", 0, 134219443, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"stripEngineInternalInformation", 1, 134219444, &EmptyCustomAttributesCache, &Boolean_t74_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t75 (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
MethodInfo StackTraceUtility_PostprocessStacktrace_m4976_MethodInfo = 
{
	"PostprocessStacktrace"/* name */
	, (methodPointerType)&StackTraceUtility_PostprocessStacktrace_m4976/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t75/* invoker_method */
	, StackTraceUtility_t969_StackTraceUtility_PostprocessStacktrace_m4976_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1555/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StackTrace_t970_0_0_0;
extern Il2CppType StackTrace_t970_0_0_0;
static ParameterInfo StackTraceUtility_t969_StackTraceUtility_ExtractFormattedStackTrace_m4977_ParameterInfos[] = 
{
	{"stackTrace", 0, 134219445, &EmptyCustomAttributesCache, &StackTrace_t970_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m4977;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
MethodInfo StackTraceUtility_ExtractFormattedStackTrace_m4977_MethodInfo = 
{
	"ExtractFormattedStackTrace"/* name */
	, (methodPointerType)&StackTraceUtility_ExtractFormattedStackTrace_m4977/* method */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StackTraceUtility_t969_StackTraceUtility_ExtractFormattedStackTrace_m4977_ParameterInfos/* parameters */
	, &StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m4977/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1556/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* StackTraceUtility_t969_MethodInfos[] =
{
	&StackTraceUtility__ctor_m4969_MethodInfo,
	&StackTraceUtility__cctor_m4970_MethodInfo,
	&StackTraceUtility_SetProjectFolder_m4971_MethodInfo,
	&StackTraceUtility_ExtractStackTrace_m4972_MethodInfo,
	&StackTraceUtility_IsSystemStacktraceType_m4973_MethodInfo,
	&StackTraceUtility_ExtractStringFromException_m4974_MethodInfo,
	&StackTraceUtility_ExtractStringFromExceptionInternal_m4975_MethodInfo,
	&StackTraceUtility_PostprocessStacktrace_m4976_MethodInfo,
	&StackTraceUtility_ExtractFormattedStackTrace_m4977_MethodInfo,
	NULL
};
static MethodInfo* StackTraceUtility_t969_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern TypeInfo SecuritySafeCriticalAttribute_t1026_il2cpp_TypeInfo;
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern MethodInfo SecuritySafeCriticalAttribute__ctor_m5098_MethodInfo;
void StackTraceUtility_t969_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m4972(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1026 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1026 *)il2cpp_codegen_object_new (&SecuritySafeCriticalAttribute_t1026_il2cpp_TypeInfo);
		SecuritySafeCriticalAttribute__ctor_m5098(tmp, &SecuritySafeCriticalAttribute__ctor_m5098_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void StackTraceUtility_t969_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m4975(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1026 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1026 *)il2cpp_codegen_object_new (&SecuritySafeCriticalAttribute_t1026_il2cpp_TypeInfo);
		SecuritySafeCriticalAttribute__ctor_m5098(tmp, &SecuritySafeCriticalAttribute__ctor_m5098_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void StackTraceUtility_t969_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m4977(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t1026 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t1026 *)il2cpp_codegen_object_new (&SecuritySafeCriticalAttribute_t1026_il2cpp_TypeInfo);
		SecuritySafeCriticalAttribute__ctor_m5098(tmp, &SecuritySafeCriticalAttribute__ctor_m5098_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m4972 = {
1,
NULL,
&StackTraceUtility_t969_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m4972
};
CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m4975 = {
1,
NULL,
&StackTraceUtility_t969_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m4975
};
CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m4977 = {
1,
NULL,
&StackTraceUtility_t969_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m4977
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType StackTraceUtility_t969_0_0_0;
extern Il2CppType StackTraceUtility_t969_1_0_0;
struct StackTraceUtility_t969;
extern CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStackTrace_m4972;
extern CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractStringFromExceptionInternal_m4975;
extern CustomAttributesCache StackTraceUtility_t969__CustomAttributeCache_StackTraceUtility_ExtractFormattedStackTrace_m4977;
TypeInfo StackTraceUtility_t969_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "StackTraceUtility"/* name */
	, "UnityEngine"/* namespaze */
	, StackTraceUtility_t969_MethodInfos/* methods */
	, NULL/* properties */
	, StackTraceUtility_t969_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, StackTraceUtility_t969_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &StackTraceUtility_t969_il2cpp_TypeInfo/* cast_class */
	, &StackTraceUtility_t969_0_0_0/* byval_arg */
	, &StackTraceUtility_t969_1_0_0/* this_arg */
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
	, sizeof (StackTraceUtility_t969)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(StackTraceUtility_t969_StaticFields)/* static_fields_size */
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
	, 9/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityException_t750_il2cpp_TypeInfo;
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern MethodInfo Exception__ctor_m576_MethodInfo;
extern MethodInfo Exception_set_HResult_m5187_MethodInfo;
extern MethodInfo Exception__ctor_m5188_MethodInfo;
extern MethodInfo Exception__ctor_m5189_MethodInfo;


// System.Void UnityEngine.UnityException::.ctor()
extern MethodInfo UnityException__ctor_m4978_MethodInfo;
 void UnityException__ctor_m4978 (UnityException_t750 * __this, MethodInfo* method){
	{
		Exception__ctor_m576(__this, (String_t*) &_stringLiteral481, /*hidden argument*/&Exception__ctor_m576_MethodInfo);
		Exception_set_HResult_m5187(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m5187_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern MethodInfo UnityException__ctor_m4979_MethodInfo;
 void UnityException__ctor_m4979 (UnityException_t750 * __this, String_t* ___message, MethodInfo* method){
	{
		Exception__ctor_m576(__this, ___message, /*hidden argument*/&Exception__ctor_m576_MethodInfo);
		Exception_set_HResult_m5187(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m5187_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern MethodInfo UnityException__ctor_m4980_MethodInfo;
 void UnityException__ctor_m4980 (UnityException_t750 * __this, String_t* ___message, Exception_t82 * ___innerException, MethodInfo* method){
	{
		Exception__ctor_m5188(__this, ___message, ___innerException, /*hidden argument*/&Exception__ctor_m5188_MethodInfo);
		Exception_set_HResult_m5187(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m5187_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo UnityException__ctor_m4981_MethodInfo;
 void UnityException__ctor_m4981 (UnityException_t750 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method){
	{
		Exception__ctor_m5189(__this, ___info, ___context, /*hidden argument*/&Exception__ctor_m5189_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.UnityException
extern Il2CppType Int32_t73_0_0_32849;
FieldInfo UnityException_t750____Result_11_FieldInfo = 
{
	"Result"/* name */
	, &Int32_t73_0_0_32849/* type */
	, &UnityException_t750_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo UnityException_t750____unityStackTrace_12_FieldInfo = 
{
	"unityStackTrace"/* name */
	, &String_t_0_0_1/* type */
	, &UnityException_t750_il2cpp_TypeInfo/* parent */
	, offsetof(UnityException_t750, ___unityStackTrace_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityException_t750_FieldInfos[] =
{
	&UnityException_t750____Result_11_FieldInfo,
	&UnityException_t750____unityStackTrace_12_FieldInfo,
	NULL
};
static const int32_t UnityException_t750____Result_11_DefaultValueData = -2147467261;
static Il2CppFieldDefaultValueEntry UnityException_t750____Result_11_DefaultValue = 
{
	&UnityException_t750____Result_11_FieldInfo/* field */
	, { (char*)&UnityException_t750____Result_11_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UnityException_t750_FieldDefaultValues[] = 
{
	&UnityException_t750____Result_11_DefaultValue,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor()
MethodInfo UnityException__ctor_m4978_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m4978/* method */
	, &UnityException_t750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1557/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UnityException_t750_UnityException__ctor_m4979_ParameterInfos[] = 
{
	{"message", 0, 134219446, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.String)
MethodInfo UnityException__ctor_m4979_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m4979/* method */
	, &UnityException_t750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityException_t750_UnityException__ctor_m4979_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1558/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Exception_t82_0_0_0;
extern Il2CppType Exception_t82_0_0_0;
static ParameterInfo UnityException_t750_UnityException__ctor_m4980_ParameterInfos[] = 
{
	{"message", 0, 134219447, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"innerException", 1, 134219448, &EmptyCustomAttributesCache, &Exception_t82_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
MethodInfo UnityException__ctor_m4980_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m4980/* method */
	, &UnityException_t750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, UnityException_t750_UnityException__ctor_m4980_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1559/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t971_0_0_0;
extern Il2CppType SerializationInfo_t971_0_0_0;
extern Il2CppType StreamingContext_t972_0_0_0;
extern Il2CppType StreamingContext_t972_0_0_0;
static ParameterInfo UnityException_t750_UnityException__ctor_m4981_ParameterInfos[] = 
{
	{"info", 0, 134219449, &EmptyCustomAttributesCache, &SerializationInfo_t971_0_0_0},
	{"context", 1, 134219450, &EmptyCustomAttributesCache, &StreamingContext_t972_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_StreamingContext_t972 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UnityException__ctor_m4981_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityException__ctor_m4981/* method */
	, &UnityException_t750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_StreamingContext_t972/* invoker_method */
	, UnityException_t750_UnityException__ctor_m4981_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1560/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityException_t750_MethodInfos[] =
{
	&UnityException__ctor_m4978_MethodInfo,
	&UnityException__ctor_m4979_MethodInfo,
	&UnityException__ctor_m4980_MethodInfo,
	&UnityException__ctor_m4981_MethodInfo,
	NULL
};
extern MethodInfo Exception_ToString_m1230_MethodInfo;
extern MethodInfo Exception_GetObjectData_m1231_MethodInfo;
extern MethodInfo Exception_get_Source_m1234_MethodInfo;
static MethodInfo* UnityException_t750_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Exception_ToString_m1230_MethodInfo,
	&Exception_GetObjectData_m1231_MethodInfo,
	&Exception_get_InnerException_m1232_MethodInfo,
	&Exception_get_Message_m1233_MethodInfo,
	&Exception_get_Source_m1234_MethodInfo,
	&Exception_get_StackTrace_m1384_MethodInfo,
	&Exception_GetObjectData_m1231_MethodInfo,
	&Exception_GetType_m1235_MethodInfo,
};
extern TypeInfo ISerializable_t305_il2cpp_TypeInfo;
extern TypeInfo _Exception_t306_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityException_t750_InterfacesOffsets[] = 
{
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
	{ &_Exception_t306_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityException_t750_0_0_0;
extern Il2CppType UnityException_t750_1_0_0;
struct UnityException_t750;
TypeInfo UnityException_t750_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityException"/* name */
	, "UnityEngine"/* namespaze */
	, UnityException_t750_MethodInfos/* methods */
	, NULL/* properties */
	, UnityException_t750_FieldInfos/* fields */
	, NULL/* events */
	, &Exception_t82_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityException_t750_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityException_t750_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityException_t750_il2cpp_TypeInfo/* cast_class */
	, &UnityException_t750_0_0_0/* byval_arg */
	, &UnityException_t750_1_0_0/* this_arg */
	, UnityException_t750_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UnityException_t750_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityException_t750)/* instance_size */
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
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.MissingReferenceException
#include "UnityEngine_UnityEngine_MissingReferenceException.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MissingReferenceException_t343_il2cpp_TypeInfo;
// UnityEngine.MissingReferenceException
#include "UnityEngine_UnityEngine_MissingReferenceExceptionMethodDeclarations.h"



// System.Void UnityEngine.MissingReferenceException::.ctor()
extern MethodInfo MissingReferenceException__ctor_m4982_MethodInfo;
 void MissingReferenceException__ctor_m4982 (MissingReferenceException_t343 * __this, MethodInfo* method){
	{
		Exception__ctor_m576(__this, (String_t*) &_stringLiteral481, /*hidden argument*/&Exception__ctor_m576_MethodInfo);
		Exception_set_HResult_m5187(__this, ((int32_t)-2147467261), /*hidden argument*/&Exception_set_HResult_m5187_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MissingReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MissingReferenceException__ctor_m4983_MethodInfo;
 void MissingReferenceException__ctor_m4983 (MissingReferenceException_t343 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method){
	{
		Exception__ctor_m5189(__this, ___info, ___context, /*hidden argument*/&Exception__ctor_m5189_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.MissingReferenceException
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.MissingReferenceException::.ctor()
MethodInfo MissingReferenceException__ctor_m4982_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingReferenceException__ctor_m4982/* method */
	, &MissingReferenceException_t343_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1561/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t971_0_0_0;
extern Il2CppType StreamingContext_t972_0_0_0;
static ParameterInfo MissingReferenceException_t343_MissingReferenceException__ctor_m4983_ParameterInfos[] = 
{
	{"info", 0, 134219451, &EmptyCustomAttributesCache, &SerializationInfo_t971_0_0_0},
	{"context", 1, 134219452, &EmptyCustomAttributesCache, &StreamingContext_t972_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_StreamingContext_t972 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.MissingReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo MissingReferenceException__ctor_m4983_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MissingReferenceException__ctor_m4983/* method */
	, &MissingReferenceException_t343_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_StreamingContext_t972/* invoker_method */
	, MissingReferenceException_t343_MissingReferenceException__ctor_m4983_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1562/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* MissingReferenceException_t343_MethodInfos[] =
{
	&MissingReferenceException__ctor_m4982_MethodInfo,
	&MissingReferenceException__ctor_m4983_MethodInfo,
	NULL
};
static MethodInfo* MissingReferenceException_t343_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Exception_ToString_m1230_MethodInfo,
	&Exception_GetObjectData_m1231_MethodInfo,
	&Exception_get_InnerException_m1232_MethodInfo,
	&Exception_get_Message_m1233_MethodInfo,
	&Exception_get_Source_m1234_MethodInfo,
	&Exception_get_StackTrace_m1384_MethodInfo,
	&Exception_GetObjectData_m1231_MethodInfo,
	&Exception_GetType_m1235_MethodInfo,
};
static Il2CppInterfaceOffsetPair MissingReferenceException_t343_InterfacesOffsets[] = 
{
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
	{ &_Exception_t306_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType MissingReferenceException_t343_0_0_0;
extern Il2CppType MissingReferenceException_t343_1_0_0;
struct MissingReferenceException_t343;
TypeInfo MissingReferenceException_t343_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "MissingReferenceException"/* name */
	, "UnityEngine"/* namespaze */
	, MissingReferenceException_t343_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Exception_t82_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &MissingReferenceException_t343_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, MissingReferenceException_t343_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &MissingReferenceException_t343_il2cpp_TypeInfo/* cast_class */
	, &MissingReferenceException_t343_0_0_0/* byval_arg */
	, &MissingReferenceException_t343_1_0_0/* this_arg */
	, MissingReferenceException_t343_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MissingReferenceException_t343)/* instance_size */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SharedBetweenAnimatorsAttribute_t973_il2cpp_TypeInfo;
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern MethodInfo SharedBetweenAnimatorsAttribute__ctor_m4984_MethodInfo;
 void SharedBetweenAnimatorsAttribute__ctor_m4984 (SharedBetweenAnimatorsAttribute_t973 * __this, MethodInfo* method){
	{
		Attribute__ctor_m1459(__this, /*hidden argument*/&Attribute__ctor_m1459_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.SharedBetweenAnimatorsAttribute
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
MethodInfo SharedBetweenAnimatorsAttribute__ctor_m4984_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SharedBetweenAnimatorsAttribute__ctor_m4984/* method */
	, &SharedBetweenAnimatorsAttribute_t973_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1563/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SharedBetweenAnimatorsAttribute_t973_MethodInfos[] =
{
	&SharedBetweenAnimatorsAttribute__ctor_m4984_MethodInfo,
	NULL
};
static MethodInfo* SharedBetweenAnimatorsAttribute_t973_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair SharedBetweenAnimatorsAttribute_t973_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void SharedBetweenAnimatorsAttribute_t973_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 4, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, false, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache SharedBetweenAnimatorsAttribute_t973__CustomAttributeCache = {
1,
NULL,
&SharedBetweenAnimatorsAttribute_t973_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SharedBetweenAnimatorsAttribute_t973_0_0_0;
extern Il2CppType SharedBetweenAnimatorsAttribute_t973_1_0_0;
struct SharedBetweenAnimatorsAttribute_t973;
extern CustomAttributesCache SharedBetweenAnimatorsAttribute_t973__CustomAttributeCache;
TypeInfo SharedBetweenAnimatorsAttribute_t973_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SharedBetweenAnimatorsAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, SharedBetweenAnimatorsAttribute_t973_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Attribute_t226_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SharedBetweenAnimatorsAttribute_t973_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SharedBetweenAnimatorsAttribute_t973_VTable/* vtable */
	, &SharedBetweenAnimatorsAttribute_t973__CustomAttributeCache/* custom_attributes_cache */
	, &SharedBetweenAnimatorsAttribute_t973_il2cpp_TypeInfo/* cast_class */
	, &SharedBetweenAnimatorsAttribute_t973_0_0_0/* byval_arg */
	, &SharedBetweenAnimatorsAttribute_t973_1_0_0/* this_arg */
	, SharedBetweenAnimatorsAttribute_t973_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SharedBetweenAnimatorsAttribute_t973)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
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
	, 1/* interface_offsets_count */

};
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StateMachineBehaviour_t974_il2cpp_TypeInfo;
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
extern MethodInfo ScriptableObject__ctor_m1240_MethodInfo;


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern MethodInfo StateMachineBehaviour__ctor_m4985_MethodInfo;
 void StateMachineBehaviour__ctor_m4985 (StateMachineBehaviour_t974 * __this, MethodInfo* method){
	{
		ScriptableObject__ctor_m1240(__this, /*hidden argument*/&ScriptableObject__ctor_m1240_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateEnter_m4986_MethodInfo;
 void StateMachineBehaviour_OnStateEnter_m4986 (StateMachineBehaviour_t974 * __this, Animator_t638 * ___animator, AnimatorStateInfo_t917  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateUpdate_m4987_MethodInfo;
 void StateMachineBehaviour_OnStateUpdate_m4987 (StateMachineBehaviour_t974 * __this, Animator_t638 * ___animator, AnimatorStateInfo_t917  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateExit_m4988_MethodInfo;
 void StateMachineBehaviour_OnStateExit_m4988 (StateMachineBehaviour_t974 * __this, Animator_t638 * ___animator, AnimatorStateInfo_t917  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMove_m4989_MethodInfo;
 void StateMachineBehaviour_OnStateMove_m4989 (StateMachineBehaviour_t974 * __this, Animator_t638 * ___animator, AnimatorStateInfo_t917  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateIK_m4990_MethodInfo;
 void StateMachineBehaviour_OnStateIK_m4990 (StateMachineBehaviour_t974 * __this, Animator_t638 * ___animator, AnimatorStateInfo_t917  ___stateInfo, int32_t ___layerIndex, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineEnter_m4991_MethodInfo;
 void StateMachineBehaviour_OnStateMachineEnter_m4991 (StateMachineBehaviour_t974 * __this, Animator_t638 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern MethodInfo StateMachineBehaviour_OnStateMachineExit_m4992_MethodInfo;
 void StateMachineBehaviour_OnStateMachineExit_m4992 (StateMachineBehaviour_t974 * __this, Animator_t638 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition UnityEngine.StateMachineBehaviour
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
MethodInfo StateMachineBehaviour__ctor_m4985_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StateMachineBehaviour__ctor_m4985/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1564/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType AnimatorStateInfo_t917_0_0_0;
extern Il2CppType AnimatorStateInfo_t917_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo StateMachineBehaviour_t974_StateMachineBehaviour_OnStateEnter_m4986_ParameterInfos[] = 
{
	{"animator", 0, 134219453, &EmptyCustomAttributesCache, &Animator_t638_0_0_0},
	{"stateInfo", 1, 134219454, &EmptyCustomAttributesCache, &AnimatorStateInfo_t917_0_0_0},
	{"layerIndex", 2, 134219455, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateEnter_m4986_MethodInfo = 
{
	"OnStateEnter"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateEnter_m4986/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73/* invoker_method */
	, StateMachineBehaviour_t974_StateMachineBehaviour_OnStateEnter_m4986_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1565/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType AnimatorStateInfo_t917_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo StateMachineBehaviour_t974_StateMachineBehaviour_OnStateUpdate_m4987_ParameterInfos[] = 
{
	{"animator", 0, 134219456, &EmptyCustomAttributesCache, &Animator_t638_0_0_0},
	{"stateInfo", 1, 134219457, &EmptyCustomAttributesCache, &AnimatorStateInfo_t917_0_0_0},
	{"layerIndex", 2, 134219458, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateUpdate_m4987_MethodInfo = 
{
	"OnStateUpdate"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateUpdate_m4987/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73/* invoker_method */
	, StateMachineBehaviour_t974_StateMachineBehaviour_OnStateUpdate_m4987_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1566/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType AnimatorStateInfo_t917_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo StateMachineBehaviour_t974_StateMachineBehaviour_OnStateExit_m4988_ParameterInfos[] = 
{
	{"animator", 0, 134219459, &EmptyCustomAttributesCache, &Animator_t638_0_0_0},
	{"stateInfo", 1, 134219460, &EmptyCustomAttributesCache, &AnimatorStateInfo_t917_0_0_0},
	{"layerIndex", 2, 134219461, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateExit_m4988_MethodInfo = 
{
	"OnStateExit"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateExit_m4988/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73/* invoker_method */
	, StateMachineBehaviour_t974_StateMachineBehaviour_OnStateExit_m4988_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1567/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType AnimatorStateInfo_t917_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo StateMachineBehaviour_t974_StateMachineBehaviour_OnStateMove_m4989_ParameterInfos[] = 
{
	{"animator", 0, 134219462, &EmptyCustomAttributesCache, &Animator_t638_0_0_0},
	{"stateInfo", 1, 134219463, &EmptyCustomAttributesCache, &AnimatorStateInfo_t917_0_0_0},
	{"layerIndex", 2, 134219464, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateMove_m4989_MethodInfo = 
{
	"OnStateMove"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMove_m4989/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73/* invoker_method */
	, StateMachineBehaviour_t974_StateMachineBehaviour_OnStateMove_m4989_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1568/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType AnimatorStateInfo_t917_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo StateMachineBehaviour_t974_StateMachineBehaviour_OnStateIK_m4990_ParameterInfos[] = 
{
	{"animator", 0, 134219465, &EmptyCustomAttributesCache, &Animator_t638_0_0_0},
	{"stateInfo", 1, 134219466, &EmptyCustomAttributesCache, &AnimatorStateInfo_t917_0_0_0},
	{"layerIndex", 2, 134219467, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
MethodInfo StateMachineBehaviour_OnStateIK_m4990_MethodInfo = 
{
	"OnStateIK"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateIK_m4990/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_AnimatorStateInfo_t917_Int32_t73/* invoker_method */
	, StateMachineBehaviour_t974_StateMachineBehaviour_OnStateIK_m4990_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1569/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo StateMachineBehaviour_t974_StateMachineBehaviour_OnStateMachineEnter_m4991_ParameterInfos[] = 
{
	{"animator", 0, 134219468, &EmptyCustomAttributesCache, &Animator_t638_0_0_0},
	{"stateMachinePathHash", 1, 134219469, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
MethodInfo StateMachineBehaviour_OnStateMachineEnter_m4991_MethodInfo = 
{
	"OnStateMachineEnter"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMachineEnter_m4991/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, StateMachineBehaviour_t974_StateMachineBehaviour_OnStateMachineEnter_m4991_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1570/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Animator_t638_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo StateMachineBehaviour_t974_StateMachineBehaviour_OnStateMachineExit_m4992_ParameterInfos[] = 
{
	{"animator", 0, 134219470, &EmptyCustomAttributesCache, &Animator_t638_0_0_0},
	{"stateMachinePathHash", 1, 134219471, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
MethodInfo StateMachineBehaviour_OnStateMachineExit_m4992_MethodInfo = 
{
	"OnStateMachineExit"/* name */
	, (methodPointerType)&StateMachineBehaviour_OnStateMachineExit_m4992/* method */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, StateMachineBehaviour_t974_StateMachineBehaviour_OnStateMachineExit_m4992_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1571/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* StateMachineBehaviour_t974_MethodInfos[] =
{
	&StateMachineBehaviour__ctor_m4985_MethodInfo,
	&StateMachineBehaviour_OnStateEnter_m4986_MethodInfo,
	&StateMachineBehaviour_OnStateUpdate_m4987_MethodInfo,
	&StateMachineBehaviour_OnStateExit_m4988_MethodInfo,
	&StateMachineBehaviour_OnStateMove_m4989_MethodInfo,
	&StateMachineBehaviour_OnStateIK_m4990_MethodInfo,
	&StateMachineBehaviour_OnStateMachineEnter_m4991_MethodInfo,
	&StateMachineBehaviour_OnStateMachineExit_m4992_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m472_MethodInfo;
extern MethodInfo Object_GetHashCode_m474_MethodInfo;
extern MethodInfo Object_ToString_m475_MethodInfo;
static MethodInfo* StateMachineBehaviour_t974_VTable[] =
{
	&Object_Equals_m472_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m474_MethodInfo,
	&Object_ToString_m475_MethodInfo,
	&StateMachineBehaviour_OnStateEnter_m4986_MethodInfo,
	&StateMachineBehaviour_OnStateUpdate_m4987_MethodInfo,
	&StateMachineBehaviour_OnStateExit_m4988_MethodInfo,
	&StateMachineBehaviour_OnStateMove_m4989_MethodInfo,
	&StateMachineBehaviour_OnStateIK_m4990_MethodInfo,
	&StateMachineBehaviour_OnStateMachineEnter_m4991_MethodInfo,
	&StateMachineBehaviour_OnStateMachineExit_m4992_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType StateMachineBehaviour_t974_0_0_0;
extern Il2CppType StateMachineBehaviour_t974_1_0_0;
extern TypeInfo ScriptableObject_t159_il2cpp_TypeInfo;
struct StateMachineBehaviour_t974;
TypeInfo StateMachineBehaviour_t974_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "StateMachineBehaviour"/* name */
	, "UnityEngine"/* namespaze */
	, StateMachineBehaviour_t974_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ScriptableObject_t159_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, StateMachineBehaviour_t974_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &StateMachineBehaviour_t974_il2cpp_TypeInfo/* cast_class */
	, &StateMachineBehaviour_t974_0_0_0/* byval_arg */
	, &StateMachineBehaviour_t974_1_0_0/* this_arg */
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
	, sizeof (StateMachineBehaviour_t974)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 8/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClock.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SystemClock_t975_il2cpp_TypeInfo;



// System.DateTime UnityEngine.SystemClock::get_now()
 DateTime_t850  SystemClock_get_now_m4993 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&DateTime_t850_il2cpp_TypeInfo));
		DateTime_t850  L_0 = DateTime_get_Now_m5083(NULL /*static, unused*/, /*hidden argument*/&DateTime_get_Now_m5083_MethodInfo);
		return L_0;
	}
}
// Metadata Definition UnityEngine.SystemClock
static PropertyInfo SystemClock_t975____now_PropertyInfo = 
{
	&SystemClock_t975_il2cpp_TypeInfo/* parent */
	, "now"/* name */
	, &SystemClock_get_now_m4993_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* SystemClock_t975_PropertyInfos[] =
{
	&SystemClock_t975____now_PropertyInfo,
	NULL
};
extern Il2CppType DateTime_t850_0_0_0;
extern void* RuntimeInvoker_DateTime_t850 (MethodInfo* method, void* obj, void** args);
// System.DateTime UnityEngine.SystemClock::get_now()
MethodInfo SystemClock_get_now_m4993_MethodInfo = 
{
	"get_now"/* name */
	, (methodPointerType)&SystemClock_get_now_m4993/* method */
	, &SystemClock_t975_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t850_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t850/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1572/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* SystemClock_t975_MethodInfos[] =
{
	&SystemClock_get_now_m4993_MethodInfo,
	NULL
};
static MethodInfo* SystemClock_t975_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType SystemClock_t975_0_0_0;
extern Il2CppType SystemClock_t975_1_0_0;
struct SystemClock_t975;
TypeInfo SystemClock_t975_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SystemClock"/* name */
	, "UnityEngine"/* namespaze */
	, SystemClock_t975_MethodInfos/* methods */
	, SystemClock_t975_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &SystemClock_t975_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, SystemClock_t975_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &SystemClock_t975_il2cpp_TypeInfo/* cast_class */
	, &SystemClock_t975_0_0_0/* byval_arg */
	, &SystemClock_t975_1_0_0/* this_arg */
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
	, sizeof (SystemClock_t975)/* instance_size */
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
	, false/* is_generic */
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
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DblClickSnapping_t976_il2cpp_TypeInfo;
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// Metadata Definition UnityEngine.TextEditor/DblClickSnapping
extern Il2CppType Byte_t97_0_0_1542;
FieldInfo DblClickSnapping_t976____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Byte_t97_0_0_1542/* type */
	, &DblClickSnapping_t976_il2cpp_TypeInfo/* parent */
	, offsetof(DblClickSnapping_t976, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DblClickSnapping_t976_0_0_32854;
FieldInfo DblClickSnapping_t976____WORDS_2_FieldInfo = 
{
	"WORDS"/* name */
	, &DblClickSnapping_t976_0_0_32854/* type */
	, &DblClickSnapping_t976_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DblClickSnapping_t976_0_0_32854;
FieldInfo DblClickSnapping_t976____PARAGRAPHS_3_FieldInfo = 
{
	"PARAGRAPHS"/* name */
	, &DblClickSnapping_t976_0_0_32854/* type */
	, &DblClickSnapping_t976_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DblClickSnapping_t976_FieldInfos[] =
{
	&DblClickSnapping_t976____value___1_FieldInfo,
	&DblClickSnapping_t976____WORDS_2_FieldInfo,
	&DblClickSnapping_t976____PARAGRAPHS_3_FieldInfo,
	NULL
};
static const uint8_t DblClickSnapping_t976____WORDS_2_DefaultValueData = 0;
extern Il2CppType Byte_t97_0_0_0;
static Il2CppFieldDefaultValueEntry DblClickSnapping_t976____WORDS_2_DefaultValue = 
{
	&DblClickSnapping_t976____WORDS_2_FieldInfo/* field */
	, { (char*)&DblClickSnapping_t976____WORDS_2_DefaultValueData, &Byte_t97_0_0_0 }/* value */

};
static const uint8_t DblClickSnapping_t976____PARAGRAPHS_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry DblClickSnapping_t976____PARAGRAPHS_3_DefaultValue = 
{
	&DblClickSnapping_t976____PARAGRAPHS_3_FieldInfo/* field */
	, { (char*)&DblClickSnapping_t976____PARAGRAPHS_3_DefaultValueData, &Byte_t97_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* DblClickSnapping_t976_FieldDefaultValues[] = 
{
	&DblClickSnapping_t976____WORDS_2_DefaultValue,
	&DblClickSnapping_t976____PARAGRAPHS_3_DefaultValue,
	NULL
};
static MethodInfo* DblClickSnapping_t976_MethodInfos[] =
{
	NULL
};
static MethodInfo* DblClickSnapping_t976_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
static Il2CppInterfaceOffsetPair DblClickSnapping_t976_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType DblClickSnapping_t976_0_0_0;
extern Il2CppType DblClickSnapping_t976_1_0_0;
// System.Byte
#include "mscorlib_System_Byte.h"
extern TypeInfo Byte_t97_il2cpp_TypeInfo;
extern TypeInfo TextEditor_t756_il2cpp_TypeInfo;
TypeInfo DblClickSnapping_t976_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DblClickSnapping"/* name */
	, ""/* namespaze */
	, DblClickSnapping_t976_MethodInfos/* methods */
	, NULL/* properties */
	, DblClickSnapping_t976_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TextEditor_t756_il2cpp_TypeInfo/* nested_in */
	, &Byte_t97_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DblClickSnapping_t976_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Byte_t97_il2cpp_TypeInfo/* cast_class */
	, &DblClickSnapping_t976_0_0_0/* byval_arg */
	, &DblClickSnapping_t976_1_0_0/* this_arg */
	, DblClickSnapping_t976_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, DblClickSnapping_t976_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DblClickSnapping_t976)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (uint8_t)/* element_size */
	, sizeof(uint8_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextEditOp_t977_il2cpp_TypeInfo;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// Metadata Definition UnityEngine.TextEditor/TextEditOp
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo TextEditOp_t977____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditOp_t977, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveLeft_2_FieldInfo = 
{
	"MoveLeft"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveRight_3_FieldInfo = 
{
	"MoveRight"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveUp_4_FieldInfo = 
{
	"MoveUp"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveDown_5_FieldInfo = 
{
	"MoveDown"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveLineStart_6_FieldInfo = 
{
	"MoveLineStart"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveLineEnd_7_FieldInfo = 
{
	"MoveLineEnd"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveTextStart_8_FieldInfo = 
{
	"MoveTextStart"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveTextEnd_9_FieldInfo = 
{
	"MoveTextEnd"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MovePageUp_10_FieldInfo = 
{
	"MovePageUp"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MovePageDown_11_FieldInfo = 
{
	"MovePageDown"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveGraphicalLineStart_12_FieldInfo = 
{
	"MoveGraphicalLineStart"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveGraphicalLineEnd_13_FieldInfo = 
{
	"MoveGraphicalLineEnd"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveWordLeft_14_FieldInfo = 
{
	"MoveWordLeft"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveWordRight_15_FieldInfo = 
{
	"MoveWordRight"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveParagraphForward_16_FieldInfo = 
{
	"MoveParagraphForward"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveParagraphBackward_17_FieldInfo = 
{
	"MoveParagraphBackward"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveToStartOfNextWord_18_FieldInfo = 
{
	"MoveToStartOfNextWord"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____MoveToEndOfPreviousWord_19_FieldInfo = 
{
	"MoveToEndOfPreviousWord"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectLeft_20_FieldInfo = 
{
	"SelectLeft"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectRight_21_FieldInfo = 
{
	"SelectRight"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectUp_22_FieldInfo = 
{
	"SelectUp"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectDown_23_FieldInfo = 
{
	"SelectDown"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectTextStart_24_FieldInfo = 
{
	"SelectTextStart"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectTextEnd_25_FieldInfo = 
{
	"SelectTextEnd"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectPageUp_26_FieldInfo = 
{
	"SelectPageUp"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectPageDown_27_FieldInfo = 
{
	"SelectPageDown"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____ExpandSelectGraphicalLineStart_28_FieldInfo = 
{
	"ExpandSelectGraphicalLineStart"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____ExpandSelectGraphicalLineEnd_29_FieldInfo = 
{
	"ExpandSelectGraphicalLineEnd"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectGraphicalLineStart_30_FieldInfo = 
{
	"SelectGraphicalLineStart"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectGraphicalLineEnd_31_FieldInfo = 
{
	"SelectGraphicalLineEnd"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectWordLeft_32_FieldInfo = 
{
	"SelectWordLeft"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectWordRight_33_FieldInfo = 
{
	"SelectWordRight"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectToEndOfPreviousWord_34_FieldInfo = 
{
	"SelectToEndOfPreviousWord"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectToStartOfNextWord_35_FieldInfo = 
{
	"SelectToStartOfNextWord"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectParagraphBackward_36_FieldInfo = 
{
	"SelectParagraphBackward"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectParagraphForward_37_FieldInfo = 
{
	"SelectParagraphForward"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____Delete_38_FieldInfo = 
{
	"Delete"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____Backspace_39_FieldInfo = 
{
	"Backspace"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____DeleteWordBack_40_FieldInfo = 
{
	"DeleteWordBack"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____DeleteWordForward_41_FieldInfo = 
{
	"DeleteWordForward"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____DeleteLineBack_42_FieldInfo = 
{
	"DeleteLineBack"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____Cut_43_FieldInfo = 
{
	"Cut"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____Copy_44_FieldInfo = 
{
	"Copy"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____Paste_45_FieldInfo = 
{
	"Paste"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectAll_46_FieldInfo = 
{
	"SelectAll"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____SelectNone_47_FieldInfo = 
{
	"SelectNone"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____ScrollStart_48_FieldInfo = 
{
	"ScrollStart"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____ScrollEnd_49_FieldInfo = 
{
	"ScrollEnd"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____ScrollPageUp_50_FieldInfo = 
{
	"ScrollPageUp"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextEditOp_t977_0_0_32854;
FieldInfo TextEditOp_t977____ScrollPageDown_51_FieldInfo = 
{
	"ScrollPageDown"/* name */
	, &TextEditOp_t977_0_0_32854/* type */
	, &TextEditOp_t977_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextEditOp_t977_FieldInfos[] =
{
	&TextEditOp_t977____value___1_FieldInfo,
	&TextEditOp_t977____MoveLeft_2_FieldInfo,
	&TextEditOp_t977____MoveRight_3_FieldInfo,
	&TextEditOp_t977____MoveUp_4_FieldInfo,
	&TextEditOp_t977____MoveDown_5_FieldInfo,
	&TextEditOp_t977____MoveLineStart_6_FieldInfo,
	&TextEditOp_t977____MoveLineEnd_7_FieldInfo,
	&TextEditOp_t977____MoveTextStart_8_FieldInfo,
	&TextEditOp_t977____MoveTextEnd_9_FieldInfo,
	&TextEditOp_t977____MovePageUp_10_FieldInfo,
	&TextEditOp_t977____MovePageDown_11_FieldInfo,
	&TextEditOp_t977____MoveGraphicalLineStart_12_FieldInfo,
	&TextEditOp_t977____MoveGraphicalLineEnd_13_FieldInfo,
	&TextEditOp_t977____MoveWordLeft_14_FieldInfo,
	&TextEditOp_t977____MoveWordRight_15_FieldInfo,
	&TextEditOp_t977____MoveParagraphForward_16_FieldInfo,
	&TextEditOp_t977____MoveParagraphBackward_17_FieldInfo,
	&TextEditOp_t977____MoveToStartOfNextWord_18_FieldInfo,
	&TextEditOp_t977____MoveToEndOfPreviousWord_19_FieldInfo,
	&TextEditOp_t977____SelectLeft_20_FieldInfo,
	&TextEditOp_t977____SelectRight_21_FieldInfo,
	&TextEditOp_t977____SelectUp_22_FieldInfo,
	&TextEditOp_t977____SelectDown_23_FieldInfo,
	&TextEditOp_t977____SelectTextStart_24_FieldInfo,
	&TextEditOp_t977____SelectTextEnd_25_FieldInfo,
	&TextEditOp_t977____SelectPageUp_26_FieldInfo,
	&TextEditOp_t977____SelectPageDown_27_FieldInfo,
	&TextEditOp_t977____ExpandSelectGraphicalLineStart_28_FieldInfo,
	&TextEditOp_t977____ExpandSelectGraphicalLineEnd_29_FieldInfo,
	&TextEditOp_t977____SelectGraphicalLineStart_30_FieldInfo,
	&TextEditOp_t977____SelectGraphicalLineEnd_31_FieldInfo,
	&TextEditOp_t977____SelectWordLeft_32_FieldInfo,
	&TextEditOp_t977____SelectWordRight_33_FieldInfo,
	&TextEditOp_t977____SelectToEndOfPreviousWord_34_FieldInfo,
	&TextEditOp_t977____SelectToStartOfNextWord_35_FieldInfo,
	&TextEditOp_t977____SelectParagraphBackward_36_FieldInfo,
	&TextEditOp_t977____SelectParagraphForward_37_FieldInfo,
	&TextEditOp_t977____Delete_38_FieldInfo,
	&TextEditOp_t977____Backspace_39_FieldInfo,
	&TextEditOp_t977____DeleteWordBack_40_FieldInfo,
	&TextEditOp_t977____DeleteWordForward_41_FieldInfo,
	&TextEditOp_t977____DeleteLineBack_42_FieldInfo,
	&TextEditOp_t977____Cut_43_FieldInfo,
	&TextEditOp_t977____Copy_44_FieldInfo,
	&TextEditOp_t977____Paste_45_FieldInfo,
	&TextEditOp_t977____SelectAll_46_FieldInfo,
	&TextEditOp_t977____SelectNone_47_FieldInfo,
	&TextEditOp_t977____ScrollStart_48_FieldInfo,
	&TextEditOp_t977____ScrollEnd_49_FieldInfo,
	&TextEditOp_t977____ScrollPageUp_50_FieldInfo,
	&TextEditOp_t977____ScrollPageDown_51_FieldInfo,
	NULL
};
static const int32_t TextEditOp_t977____MoveLeft_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveLeft_2_DefaultValue = 
{
	&TextEditOp_t977____MoveLeft_2_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveLeft_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveRight_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveRight_3_DefaultValue = 
{
	&TextEditOp_t977____MoveRight_3_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveRight_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveUp_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveUp_4_DefaultValue = 
{
	&TextEditOp_t977____MoveUp_4_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveUp_4_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveDown_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveDown_5_DefaultValue = 
{
	&TextEditOp_t977____MoveDown_5_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveDown_5_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveLineStart_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveLineStart_6_DefaultValue = 
{
	&TextEditOp_t977____MoveLineStart_6_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveLineStart_6_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveLineEnd_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveLineEnd_7_DefaultValue = 
{
	&TextEditOp_t977____MoveLineEnd_7_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveLineEnd_7_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveTextStart_8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveTextStart_8_DefaultValue = 
{
	&TextEditOp_t977____MoveTextStart_8_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveTextStart_8_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveTextEnd_9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveTextEnd_9_DefaultValue = 
{
	&TextEditOp_t977____MoveTextEnd_9_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveTextEnd_9_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MovePageUp_10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MovePageUp_10_DefaultValue = 
{
	&TextEditOp_t977____MovePageUp_10_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MovePageUp_10_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MovePageDown_11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MovePageDown_11_DefaultValue = 
{
	&TextEditOp_t977____MovePageDown_11_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MovePageDown_11_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveGraphicalLineStart_12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveGraphicalLineStart_12_DefaultValue = 
{
	&TextEditOp_t977____MoveGraphicalLineStart_12_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveGraphicalLineStart_12_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveGraphicalLineEnd_13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveGraphicalLineEnd_13_DefaultValue = 
{
	&TextEditOp_t977____MoveGraphicalLineEnd_13_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveGraphicalLineEnd_13_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveWordLeft_14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveWordLeft_14_DefaultValue = 
{
	&TextEditOp_t977____MoveWordLeft_14_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveWordLeft_14_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveWordRight_15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveWordRight_15_DefaultValue = 
{
	&TextEditOp_t977____MoveWordRight_15_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveWordRight_15_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveParagraphForward_16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveParagraphForward_16_DefaultValue = 
{
	&TextEditOp_t977____MoveParagraphForward_16_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveParagraphForward_16_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveParagraphBackward_17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveParagraphBackward_17_DefaultValue = 
{
	&TextEditOp_t977____MoveParagraphBackward_17_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveParagraphBackward_17_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveToStartOfNextWord_18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveToStartOfNextWord_18_DefaultValue = 
{
	&TextEditOp_t977____MoveToStartOfNextWord_18_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveToStartOfNextWord_18_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____MoveToEndOfPreviousWord_19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____MoveToEndOfPreviousWord_19_DefaultValue = 
{
	&TextEditOp_t977____MoveToEndOfPreviousWord_19_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____MoveToEndOfPreviousWord_19_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectLeft_20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectLeft_20_DefaultValue = 
{
	&TextEditOp_t977____SelectLeft_20_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectLeft_20_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectRight_21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectRight_21_DefaultValue = 
{
	&TextEditOp_t977____SelectRight_21_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectRight_21_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectUp_22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectUp_22_DefaultValue = 
{
	&TextEditOp_t977____SelectUp_22_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectUp_22_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectDown_23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectDown_23_DefaultValue = 
{
	&TextEditOp_t977____SelectDown_23_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectDown_23_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectTextStart_24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectTextStart_24_DefaultValue = 
{
	&TextEditOp_t977____SelectTextStart_24_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectTextStart_24_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectTextEnd_25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectTextEnd_25_DefaultValue = 
{
	&TextEditOp_t977____SelectTextEnd_25_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectTextEnd_25_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectPageUp_26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectPageUp_26_DefaultValue = 
{
	&TextEditOp_t977____SelectPageUp_26_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectPageUp_26_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectPageDown_27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectPageDown_27_DefaultValue = 
{
	&TextEditOp_t977____SelectPageDown_27_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectPageDown_27_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____ExpandSelectGraphicalLineStart_28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____ExpandSelectGraphicalLineStart_28_DefaultValue = 
{
	&TextEditOp_t977____ExpandSelectGraphicalLineStart_28_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____ExpandSelectGraphicalLineStart_28_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____ExpandSelectGraphicalLineEnd_29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____ExpandSelectGraphicalLineEnd_29_DefaultValue = 
{
	&TextEditOp_t977____ExpandSelectGraphicalLineEnd_29_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____ExpandSelectGraphicalLineEnd_29_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectGraphicalLineStart_30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectGraphicalLineStart_30_DefaultValue = 
{
	&TextEditOp_t977____SelectGraphicalLineStart_30_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectGraphicalLineStart_30_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectGraphicalLineEnd_31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectGraphicalLineEnd_31_DefaultValue = 
{
	&TextEditOp_t977____SelectGraphicalLineEnd_31_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectGraphicalLineEnd_31_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectWordLeft_32_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectWordLeft_32_DefaultValue = 
{
	&TextEditOp_t977____SelectWordLeft_32_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectWordLeft_32_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectWordRight_33_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectWordRight_33_DefaultValue = 
{
	&TextEditOp_t977____SelectWordRight_33_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectWordRight_33_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectToEndOfPreviousWord_34_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectToEndOfPreviousWord_34_DefaultValue = 
{
	&TextEditOp_t977____SelectToEndOfPreviousWord_34_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectToEndOfPreviousWord_34_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectToStartOfNextWord_35_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectToStartOfNextWord_35_DefaultValue = 
{
	&TextEditOp_t977____SelectToStartOfNextWord_35_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectToStartOfNextWord_35_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectParagraphBackward_36_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectParagraphBackward_36_DefaultValue = 
{
	&TextEditOp_t977____SelectParagraphBackward_36_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectParagraphBackward_36_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectParagraphForward_37_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectParagraphForward_37_DefaultValue = 
{
	&TextEditOp_t977____SelectParagraphForward_37_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectParagraphForward_37_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____Delete_38_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____Delete_38_DefaultValue = 
{
	&TextEditOp_t977____Delete_38_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____Delete_38_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____Backspace_39_DefaultValueData = 37;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____Backspace_39_DefaultValue = 
{
	&TextEditOp_t977____Backspace_39_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____Backspace_39_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____DeleteWordBack_40_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____DeleteWordBack_40_DefaultValue = 
{
	&TextEditOp_t977____DeleteWordBack_40_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____DeleteWordBack_40_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____DeleteWordForward_41_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____DeleteWordForward_41_DefaultValue = 
{
	&TextEditOp_t977____DeleteWordForward_41_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____DeleteWordForward_41_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____DeleteLineBack_42_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____DeleteLineBack_42_DefaultValue = 
{
	&TextEditOp_t977____DeleteLineBack_42_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____DeleteLineBack_42_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____Cut_43_DefaultValueData = 41;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____Cut_43_DefaultValue = 
{
	&TextEditOp_t977____Cut_43_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____Cut_43_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____Copy_44_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____Copy_44_DefaultValue = 
{
	&TextEditOp_t977____Copy_44_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____Copy_44_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____Paste_45_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____Paste_45_DefaultValue = 
{
	&TextEditOp_t977____Paste_45_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____Paste_45_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectAll_46_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectAll_46_DefaultValue = 
{
	&TextEditOp_t977____SelectAll_46_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectAll_46_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____SelectNone_47_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____SelectNone_47_DefaultValue = 
{
	&TextEditOp_t977____SelectNone_47_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____SelectNone_47_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____ScrollStart_48_DefaultValueData = 46;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____ScrollStart_48_DefaultValue = 
{
	&TextEditOp_t977____ScrollStart_48_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____ScrollStart_48_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____ScrollEnd_49_DefaultValueData = 47;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____ScrollEnd_49_DefaultValue = 
{
	&TextEditOp_t977____ScrollEnd_49_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____ScrollEnd_49_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____ScrollPageUp_50_DefaultValueData = 48;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____ScrollPageUp_50_DefaultValue = 
{
	&TextEditOp_t977____ScrollPageUp_50_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____ScrollPageUp_50_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TextEditOp_t977____ScrollPageDown_51_DefaultValueData = 49;
static Il2CppFieldDefaultValueEntry TextEditOp_t977____ScrollPageDown_51_DefaultValue = 
{
	&TextEditOp_t977____ScrollPageDown_51_FieldInfo/* field */
	, { (char*)&TextEditOp_t977____ScrollPageDown_51_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* TextEditOp_t977_FieldDefaultValues[] = 
{
	&TextEditOp_t977____MoveLeft_2_DefaultValue,
	&TextEditOp_t977____MoveRight_3_DefaultValue,
	&TextEditOp_t977____MoveUp_4_DefaultValue,
	&TextEditOp_t977____MoveDown_5_DefaultValue,
	&TextEditOp_t977____MoveLineStart_6_DefaultValue,
	&TextEditOp_t977____MoveLineEnd_7_DefaultValue,
	&TextEditOp_t977____MoveTextStart_8_DefaultValue,
	&TextEditOp_t977____MoveTextEnd_9_DefaultValue,
	&TextEditOp_t977____MovePageUp_10_DefaultValue,
	&TextEditOp_t977____MovePageDown_11_DefaultValue,
	&TextEditOp_t977____MoveGraphicalLineStart_12_DefaultValue,
	&TextEditOp_t977____MoveGraphicalLineEnd_13_DefaultValue,
	&TextEditOp_t977____MoveWordLeft_14_DefaultValue,
	&TextEditOp_t977____MoveWordRight_15_DefaultValue,
	&TextEditOp_t977____MoveParagraphForward_16_DefaultValue,
	&TextEditOp_t977____MoveParagraphBackward_17_DefaultValue,
	&TextEditOp_t977____MoveToStartOfNextWord_18_DefaultValue,
	&TextEditOp_t977____MoveToEndOfPreviousWord_19_DefaultValue,
	&TextEditOp_t977____SelectLeft_20_DefaultValue,
	&TextEditOp_t977____SelectRight_21_DefaultValue,
	&TextEditOp_t977____SelectUp_22_DefaultValue,
	&TextEditOp_t977____SelectDown_23_DefaultValue,
	&TextEditOp_t977____SelectTextStart_24_DefaultValue,
	&TextEditOp_t977____SelectTextEnd_25_DefaultValue,
	&TextEditOp_t977____SelectPageUp_26_DefaultValue,
	&TextEditOp_t977____SelectPageDown_27_DefaultValue,
	&TextEditOp_t977____ExpandSelectGraphicalLineStart_28_DefaultValue,
	&TextEditOp_t977____ExpandSelectGraphicalLineEnd_29_DefaultValue,
	&TextEditOp_t977____SelectGraphicalLineStart_30_DefaultValue,
	&TextEditOp_t977____SelectGraphicalLineEnd_31_DefaultValue,
	&TextEditOp_t977____SelectWordLeft_32_DefaultValue,
	&TextEditOp_t977____SelectWordRight_33_DefaultValue,
	&TextEditOp_t977____SelectToEndOfPreviousWord_34_DefaultValue,
	&TextEditOp_t977____SelectToStartOfNextWord_35_DefaultValue,
	&TextEditOp_t977____SelectParagraphBackward_36_DefaultValue,
	&TextEditOp_t977____SelectParagraphForward_37_DefaultValue,
	&TextEditOp_t977____Delete_38_DefaultValue,
	&TextEditOp_t977____Backspace_39_DefaultValue,
	&TextEditOp_t977____DeleteWordBack_40_DefaultValue,
	&TextEditOp_t977____DeleteWordForward_41_DefaultValue,
	&TextEditOp_t977____DeleteLineBack_42_DefaultValue,
	&TextEditOp_t977____Cut_43_DefaultValue,
	&TextEditOp_t977____Copy_44_DefaultValue,
	&TextEditOp_t977____Paste_45_DefaultValue,
	&TextEditOp_t977____SelectAll_46_DefaultValue,
	&TextEditOp_t977____SelectNone_47_DefaultValue,
	&TextEditOp_t977____ScrollStart_48_DefaultValue,
	&TextEditOp_t977____ScrollEnd_49_DefaultValue,
	&TextEditOp_t977____ScrollPageUp_50_DefaultValue,
	&TextEditOp_t977____ScrollPageDown_51_DefaultValue,
	NULL
};
static MethodInfo* TextEditOp_t977_MethodInfos[] =
{
	NULL
};
static MethodInfo* TextEditOp_t977_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
static Il2CppInterfaceOffsetPair TextEditOp_t977_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextEditOp_t977_0_0_0;
extern Il2CppType TextEditOp_t977_1_0_0;
TypeInfo TextEditOp_t977_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextEditOp"/* name */
	, ""/* namespaze */
	, TextEditOp_t977_MethodInfos/* methods */
	, NULL/* properties */
	, TextEditOp_t977_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &TextEditor_t756_il2cpp_TypeInfo/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextEditOp_t977_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &TextEditOp_t977_0_0_0/* byval_arg */
	, &TextEditOp_t977_1_0_0/* this_arg */
	, TextEditOp_t977_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, TextEditOp_t977_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextEditOp_t977)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 51/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

extern TypeInfo GUIStyle_t263_il2cpp_TypeInfo;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo GUIContent__ctor_m4287_MethodInfo;
extern MethodInfo GUIStyle_get_none_m4344_MethodInfo;
extern MethodInfo Vector2_get_zero_m2055_MethodInfo;
extern MethodInfo TextEditor_SelectAll_m4996_MethodInfo;
extern MethodInfo GUIContent_get_text_m3673_MethodInfo;
extern MethodInfo TextEditor_ClearCursorPos_m4994_MethodInfo;
extern MethodInfo GUIContent_set_text_m4290_MethodInfo;
extern MethodInfo TextEditor_DeleteSelection_m4997_MethodInfo;
extern MethodInfo TextEditor_UpdateScrollOffset_m5000_MethodInfo;
extern MethodInfo GUIStyle_GetCursorPixelPosition_m4345_MethodInfo;
extern MethodInfo RectOffset_Remove_m4311_MethodInfo;
extern MethodInfo GUIStyle_CalcSize_m4348_MethodInfo;
extern MethodInfo GUIStyle_CalcHeight_m4350_MethodInfo;
extern MethodInfo Vector2__ctor_m2001_MethodInfo;
extern MethodInfo GUIStyle_get_lineHeight_m4335_MethodInfo;
extern MethodInfo RectOffset_get_bottom_m4309_MethodInfo;
extern MethodInfo GUIUtility_set_systemCopyBuffer_m4216_MethodInfo;
extern MethodInfo GUIUtility_get_systemCopyBuffer_m4215_MethodInfo;
extern MethodInfo String_op_Inequality_m574_MethodInfo;
extern MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m5002_MethodInfo;
extern MethodInfo TextEditor_ReplaceSelection_m4998_MethodInfo;
extern MethodInfo GUIUtility_get_keyboardControl_m4213_MethodInfo;
extern MethodInfo TextEditor_OnLostFocus_m4995_MethodInfo;
extern MethodInfo TextEditor_OnFocus_m3675_MethodInfo;


// System.Void UnityEngine.TextEditor::.ctor()
extern MethodInfo TextEditor__ctor_m3671_MethodInfo;
 void TextEditor__ctor_m3671 (TextEditor_t756 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIContent_t757_il2cpp_TypeInfo));
		GUIContent_t757 * L_0 = (GUIContent_t757 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GUIContent_t757_il2cpp_TypeInfo));
		GUIContent__ctor_m4287(L_0, /*hidden argument*/&GUIContent__ctor_m4287_MethodInfo);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIStyle_t263_il2cpp_TypeInfo));
		GUIStyle_t263 * L_1 = GUIStyle_get_none_m4344(NULL /*static, unused*/, /*hidden argument*/&GUIStyle_get_none_m4344_MethodInfo);
		__this->___style_5 = L_1;
		Vector2_t198  L_2 = Vector2_get_zero_m2055(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2055_MethodInfo);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
 void TextEditor_ClearCursorPos_m4994 (TextEditor_t756 * __this, MethodInfo* method){
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
 void TextEditor_OnFocus_m3675 (TextEditor_t756 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		__this->___pos_1 = V_0;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m4996(__this, /*hidden argument*/&TextEditor_SelectAll_m4996_MethodInfo);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnLostFocus()
 void TextEditor_OnLostFocus_m4995 (TextEditor_t756 * __this, MethodInfo* method){
	{
		__this->___m_HasFocus_10 = 0;
		Vector2_t198  L_0 = Vector2_get_zero_m2055(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m2055_MethodInfo);
		__this->___scrollOffset_11 = L_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
 void TextEditor_SelectAll_m4996 (TextEditor_t756 * __this, MethodInfo* method){
	{
		__this->___pos_1 = 0;
		GUIContent_t757 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m3673(L_0, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m569(L_1, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m4994(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m4994_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
 bool TextEditor_DeleteSelection_m4997 (TextEditor_t756 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	{
		GUIContent_t757 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m3673(L_0, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m569(L_1, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		if ((((int32_t)L_3) <= ((int32_t)V_0)))
		{
			goto IL_0024;
		}
	}
	{
		__this->___pos_1 = V_0;
	}

IL_0024:
	{
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_4) <= ((int32_t)V_0)))
		{
			goto IL_0037;
		}
	}
	{
		__this->___selectPos_2 = V_0;
	}

IL_0037:
	{
		int32_t L_5 = (__this->___pos_1);
		int32_t L_6 = (__this->___selectPos_2);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t757 * L_9 = (__this->___content_4);
		GUIContent_t757 * L_10 = (__this->___content_4);
		NullCheck(L_10);
		String_t* L_11 = GUIContent_get_text_m3673(L_10, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		int32_t L_12 = (__this->___pos_1);
		NullCheck(L_11);
		String_t* L_13 = String_Substring_m578(L_11, 0, L_12, /*hidden argument*/&String_Substring_m578_MethodInfo);
		GUIContent_t757 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m3673(L_14, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		int32_t L_16 = (__this->___selectPos_2);
		GUIContent_t757 * L_17 = (__this->___content_4);
		NullCheck(L_17);
		String_t* L_18 = GUIContent_get_text_m3673(L_17, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m569(L_18, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		int32_t L_20 = (__this->___selectPos_2);
		NullCheck(L_15);
		String_t* L_21 = String_Substring_m578(L_15, L_16, ((int32_t)(L_19-L_20)), /*hidden argument*/&String_Substring_m578_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m477(NULL /*static, unused*/, L_13, L_21, /*hidden argument*/&String_Concat_m477_MethodInfo);
		NullCheck(L_9);
		GUIContent_set_text_m4290(L_9, L_22, /*hidden argument*/&GUIContent_set_text_m4290_MethodInfo);
		int32_t L_23 = (__this->___pos_1);
		__this->___selectPos_2 = L_23;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t757 * L_24 = (__this->___content_4);
		GUIContent_t757 * L_25 = (__this->___content_4);
		NullCheck(L_25);
		String_t* L_26 = GUIContent_get_text_m3673(L_25, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		int32_t L_27 = (__this->___selectPos_2);
		NullCheck(L_26);
		String_t* L_28 = String_Substring_m578(L_26, 0, L_27, /*hidden argument*/&String_Substring_m578_MethodInfo);
		GUIContent_t757 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m3673(L_29, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		int32_t L_31 = (__this->___pos_1);
		GUIContent_t757 * L_32 = (__this->___content_4);
		NullCheck(L_32);
		String_t* L_33 = GUIContent_get_text_m3673(L_32, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m569(L_33, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		int32_t L_35 = (__this->___pos_1);
		NullCheck(L_30);
		String_t* L_36 = String_Substring_m578(L_30, L_31, ((int32_t)(L_34-L_35)), /*hidden argument*/&String_Substring_m578_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_37 = String_Concat_m477(NULL /*static, unused*/, L_28, L_36, /*hidden argument*/&String_Concat_m477_MethodInfo);
		NullCheck(L_24);
		GUIContent_set_text_m4290(L_24, L_37, /*hidden argument*/&GUIContent_set_text_m4290_MethodInfo);
		int32_t L_38 = (__this->___selectPos_2);
		__this->___pos_1 = L_38;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m4994(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m4994_MethodInfo);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
 void TextEditor_ReplaceSelection_m4998 (TextEditor_t756 * __this, String_t* ___replace, MethodInfo* method){
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m4997(__this, /*hidden argument*/&TextEditor_DeleteSelection_m4997_MethodInfo);
		GUIContent_t757 * L_0 = (__this->___content_4);
		GUIContent_t757 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m3673(L_1, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		int32_t L_3 = (__this->___pos_1);
		NullCheck(L_2);
		String_t* L_4 = String_Insert_m3704(L_2, L_3, ___replace, /*hidden argument*/&String_Insert_m3704_MethodInfo);
		NullCheck(L_0);
		GUIContent_set_text_m4290(L_0, L_4, /*hidden argument*/&GUIContent_set_text_m4290_MethodInfo);
		int32_t L_5 = (__this->___pos_1);
		NullCheck(___replace);
		int32_t L_6 = String_get_Length_m569(___replace, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		int32_t L_7 = ((int32_t)(L_5+L_6));
		V_0 = L_7;
		__this->___pos_1 = L_7;
		__this->___selectPos_2 = V_0;
		TextEditor_ClearCursorPos_m4994(__this, /*hidden argument*/&TextEditor_ClearCursorPos_m4994_MethodInfo);
		TextEditor_UpdateScrollOffset_m5000(__this, /*hidden argument*/&TextEditor_UpdateScrollOffset_m5000_MethodInfo);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern MethodInfo TextEditor_UpdateScrollOffsetIfNeeded_m4999_MethodInfo;
 void TextEditor_UpdateScrollOffsetIfNeeded_m4999 (TextEditor_t756 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_TextHeightPotentiallyChanged_12);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TextEditor_UpdateScrollOffset_m5000(__this, /*hidden argument*/&TextEditor_UpdateScrollOffset_m5000_MethodInfo);
		__this->___m_TextHeightPotentiallyChanged_12 = 0;
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
 void TextEditor_UpdateScrollOffset_m5000 (TextEditor_t756 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	Rect_t442  V_1 = {0};
	Vector2_t198  V_2 = {0};
	Vector2_t198  V_3 = {0};
	Vector2_t198 * G_B17_0 = {0};
	Vector2_t198 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t198 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t263 * L_1 = (__this->___style_5);
		Rect_t442 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m2065(L_2, /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		Rect_t442 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m2066(L_4, /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		Rect_t442  L_6 = {0};
		Rect__ctor_m3747(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/&Rect__ctor_m3747_MethodInfo);
		GUIContent_t757 * L_7 = (__this->___content_4);
		NullCheck(L_1);
		Vector2_t198  L_8 = GUIStyle_GetCursorPixelPosition_m4345(L_1, L_6, L_7, V_0, /*hidden argument*/&GUIStyle_GetCursorPixelPosition_m4345_MethodInfo);
		__this->___graphicalCursorPos_13 = L_8;
		GUIStyle_t263 * L_9 = (__this->___style_5);
		NullCheck(L_9);
		RectOffset_t672 * L_10 = GUIStyle_get_padding_m4324(L_9, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		Rect_t442  L_11 = (__this->___position_6);
		NullCheck(L_10);
		Rect_t442  L_12 = RectOffset_Remove_m4311(L_10, L_11, /*hidden argument*/&RectOffset_Remove_m4311_MethodInfo);
		V_1 = L_12;
		GUIStyle_t263 * L_13 = (__this->___style_5);
		GUIContent_t757 * L_14 = (__this->___content_4);
		NullCheck(L_13);
		Vector2_t198  L_15 = GUIStyle_CalcSize_m4348(L_13, L_14, /*hidden argument*/&GUIStyle_CalcSize_m4348_MethodInfo);
		V_3 = L_15;
		NullCheck((&V_3));
		float L_16 = ((&V_3)->___x_1);
		GUIStyle_t263 * L_17 = (__this->___style_5);
		GUIContent_t757 * L_18 = (__this->___content_4);
		Rect_t442 * L_19 = &(__this->___position_6);
		float L_20 = Rect_get_width_m2065(L_19, /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		NullCheck(L_17);
		float L_21 = GUIStyle_CalcHeight_m4350(L_17, L_18, L_20, /*hidden argument*/&GUIStyle_CalcHeight_m4350_MethodInfo);
		Vector2__ctor_m2001((&V_2), L_16, L_21, /*hidden argument*/&Vector2__ctor_m2001_MethodInfo);
		NullCheck((&V_2));
		float L_22 = ((&V_2)->___x_1);
		Rect_t442 * L_23 = &(__this->___position_6);
		float L_24 = Rect_get_width_m2065(L_23, /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		if ((((float)L_22) >= ((float)L_24)))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t198 * L_25 = &(__this->___scrollOffset_11);
		NullCheck(L_25);
		L_25->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t198 * L_26 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_26);
		float L_27 = (L_26->___x_1);
		Vector2_t198 * L_28 = &(__this->___scrollOffset_11);
		NullCheck(L_28);
		float L_29 = (L_28->___x_1);
		float L_30 = Rect_get_width_m2065((&V_1), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		if ((((float)((float)(L_27+(1.0f)))) <= ((float)((float)(L_29+L_30)))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t198 * L_31 = &(__this->___scrollOffset_11);
		Vector2_t198 * L_32 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_32);
		float L_33 = (L_32->___x_1);
		float L_34 = Rect_get_width_m2065((&V_1), /*hidden argument*/&Rect_get_width_m2065_MethodInfo);
		NullCheck(L_31);
		L_31->___x_1 = ((float)(L_33-L_34));
	}

IL_010a:
	{
		Vector2_t198 * L_35 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_35);
		float L_36 = (L_35->___x_1);
		Vector2_t198 * L_37 = &(__this->___scrollOffset_11);
		NullCheck(L_37);
		float L_38 = (L_37->___x_1);
		GUIStyle_t263 * L_39 = (__this->___style_5);
		NullCheck(L_39);
		RectOffset_t672 * L_40 = GUIStyle_get_padding_m4324(L_39, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_40);
		int32_t L_41 = RectOffset_get_left_m3878(L_40, /*hidden argument*/&RectOffset_get_left_m3878_MethodInfo);
		if ((((float)L_36) >= ((float)((float)(L_38+(((float)L_41)))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t198 * L_42 = &(__this->___scrollOffset_11);
		Vector2_t198 * L_43 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_43);
		float L_44 = (L_43->___x_1);
		GUIStyle_t263 * L_45 = (__this->___style_5);
		NullCheck(L_45);
		RectOffset_t672 * L_46 = GUIStyle_get_padding_m4324(L_45, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_46);
		int32_t L_47 = RectOffset_get_left_m3878(L_46, /*hidden argument*/&RectOffset_get_left_m3878_MethodInfo);
		NullCheck(L_42);
		L_42->___x_1 = ((float)(L_44-(((float)L_47))));
	}

IL_015f:
	{
		NullCheck((&V_2));
		float L_48 = ((&V_2)->___y_2);
		float L_49 = Rect_get_height_m2066((&V_1), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		if ((((float)L_48) >= ((float)L_49)))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t198 * L_50 = &(__this->___scrollOffset_11);
		NullCheck(L_50);
		L_50->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t198 * L_51 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_51);
		float L_52 = (L_51->___y_2);
		GUIStyle_t263 * L_53 = (__this->___style_5);
		NullCheck(L_53);
		float L_54 = GUIStyle_get_lineHeight_m4335(L_53, /*hidden argument*/&GUIStyle_get_lineHeight_m4335_MethodInfo);
		Vector2_t198 * L_55 = &(__this->___scrollOffset_11);
		NullCheck(L_55);
		float L_56 = (L_55->___y_2);
		float L_57 = Rect_get_height_m2066((&V_1), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		GUIStyle_t263 * L_58 = (__this->___style_5);
		NullCheck(L_58);
		RectOffset_t672 * L_59 = GUIStyle_get_padding_m4324(L_58, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_59);
		int32_t L_60 = RectOffset_get_top_m3879(L_59, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		if ((((float)((float)(L_52+L_54))) <= ((float)((float)(((float)(L_56+L_57))+(((float)L_60)))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t198 * L_61 = &(__this->___scrollOffset_11);
		Vector2_t198 * L_62 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_62);
		float L_63 = (L_62->___y_2);
		float L_64 = Rect_get_height_m2066((&V_1), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		GUIStyle_t263 * L_65 = (__this->___style_5);
		NullCheck(L_65);
		RectOffset_t672 * L_66 = GUIStyle_get_padding_m4324(L_65, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_66);
		int32_t L_67 = RectOffset_get_top_m3879(L_66, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		GUIStyle_t263 * L_68 = (__this->___style_5);
		NullCheck(L_68);
		float L_69 = GUIStyle_get_lineHeight_m4335(L_68, /*hidden argument*/&GUIStyle_get_lineHeight_m4335_MethodInfo);
		NullCheck(L_61);
		L_61->___y_2 = ((float)(((float)(((float)(L_63-L_64))-(((float)L_67))))+L_69));
	}

IL_0204:
	{
		Vector2_t198 * L_70 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_70);
		float L_71 = (L_70->___y_2);
		Vector2_t198 * L_72 = &(__this->___scrollOffset_11);
		NullCheck(L_72);
		float L_73 = (L_72->___y_2);
		GUIStyle_t263 * L_74 = (__this->___style_5);
		NullCheck(L_74);
		RectOffset_t672 * L_75 = GUIStyle_get_padding_m4324(L_74, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_75);
		int32_t L_76 = RectOffset_get_top_m3879(L_75, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		if ((((float)L_71) >= ((float)((float)(L_73+(((float)L_76)))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t198 * L_77 = &(__this->___scrollOffset_11);
		Vector2_t198 * L_78 = &(__this->___graphicalCursorPos_13);
		NullCheck(L_78);
		float L_79 = (L_78->___y_2);
		GUIStyle_t263 * L_80 = (__this->___style_5);
		NullCheck(L_80);
		RectOffset_t672 * L_81 = GUIStyle_get_padding_m4324(L_80, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_81);
		int32_t L_82 = RectOffset_get_top_m3879(L_81, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		NullCheck(L_77);
		L_77->___y_2 = ((float)(L_79-(((float)L_82))));
	}

IL_0259:
	{
		Vector2_t198 * L_83 = &(__this->___scrollOffset_11);
		NullCheck(L_83);
		float L_84 = (L_83->___y_2);
		if ((((float)L_84) <= ((float)(0.0f))))
		{
			goto IL_02cb;
		}
	}
	{
		NullCheck((&V_2));
		float L_85 = ((&V_2)->___y_2);
		Vector2_t198 * L_86 = &(__this->___scrollOffset_11);
		NullCheck(L_86);
		float L_87 = (L_86->___y_2);
		float L_88 = Rect_get_height_m2066((&V_1), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		if ((((float)((float)(L_85-L_87))) >= ((float)L_88)))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t198 * L_89 = &(__this->___scrollOffset_11);
		NullCheck((&V_2));
		float L_90 = ((&V_2)->___y_2);
		float L_91 = Rect_get_height_m2066((&V_1), /*hidden argument*/&Rect_get_height_m2066_MethodInfo);
		GUIStyle_t263 * L_92 = (__this->___style_5);
		NullCheck(L_92);
		RectOffset_t672 * L_93 = GUIStyle_get_padding_m4324(L_92, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_93);
		int32_t L_94 = RectOffset_get_top_m3879(L_93, /*hidden argument*/&RectOffset_get_top_m3879_MethodInfo);
		GUIStyle_t263 * L_95 = (__this->___style_5);
		NullCheck(L_95);
		RectOffset_t672 * L_96 = GUIStyle_get_padding_m4324(L_95, /*hidden argument*/&GUIStyle_get_padding_m4324_MethodInfo);
		NullCheck(L_96);
		int32_t L_97 = RectOffset_get_bottom_m4309(L_96, /*hidden argument*/&RectOffset_get_bottom_m4309_MethodInfo);
		NullCheck(L_89);
		L_89->___y_2 = ((float)(((float)(((float)(L_90-L_91))-(((float)L_94))))-(((float)L_97))));
	}

IL_02cb:
	{
		Vector2_t198 * L_98 = &(__this->___scrollOffset_11);
		Vector2_t198 * L_99 = &(__this->___scrollOffset_11);
		NullCheck(L_99);
		float L_100 = (L_99->___y_2);
		G_B16_0 = L_98;
		if ((((float)L_100) >= ((float)(0.0f))))
		{
			G_B17_0 = L_98;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t198 * L_101 = &(__this->___scrollOffset_11);
		NullCheck(L_101);
		float L_102 = (L_101->___y_2);
		G_B18_0 = L_102;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		NullCheck(G_B18_1);
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SaveBackup()
extern MethodInfo TextEditor_SaveBackup_m5001_MethodInfo;
 void TextEditor_SaveBackup_m5001 (TextEditor_t756 * __this, MethodInfo* method){
	{
		GUIContent_t757 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m3673(L_0, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		__this->___oldText_20 = L_1;
		int32_t L_2 = (__this->___pos_1);
		__this->___oldPos_21 = L_2;
		int32_t L_3 = (__this->___selectPos_2);
		__this->___oldSelectPos_22 = L_3;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern MethodInfo TextEditor_Copy_m3676_MethodInfo;
 void TextEditor_Copy_m3676 (TextEditor_t756 * __this, MethodInfo* method){
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((((uint32_t)L_0) != ((uint32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t757 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m3673(L_5, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m578(L_6, L_7, ((int32_t)(L_8-L_9)), /*hidden argument*/&String_Substring_m578_MethodInfo);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t757 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m3673(L_11, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m578(L_12, L_13, ((int32_t)(L_14-L_15)), /*hidden argument*/&String_Substring_m578_MethodInfo);
		V_0 = L_16;
	}

IL_007c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		GUIUtility_set_systemCopyBuffer_m4216(NULL /*static, unused*/, V_0, /*hidden argument*/&GUIUtility_set_systemCopyBuffer_m4216_MethodInfo);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
 String_t* TextEditor_ReplaceNewlinesWithSpaces_m5002 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method){
	{
		NullCheck(___value);
		String_t* L_0 = String_Replace_m5176(___value, (String_t*) &_stringLiteral482, (String_t*) &_stringLiteral190, /*hidden argument*/&String_Replace_m5176_MethodInfo);
		___value = L_0;
		NullCheck(___value);
		String_t* L_1 = String_Replace_m5177(___value, ((int32_t)10), ((int32_t)32), /*hidden argument*/&String_Replace_m5177_MethodInfo);
		___value = L_1;
		NullCheck(___value);
		String_t* L_2 = String_Replace_m5177(___value, ((int32_t)13), ((int32_t)32), /*hidden argument*/&String_Replace_m5177_MethodInfo);
		___value = L_2;
		return ___value;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern MethodInfo TextEditor_Paste_m3672_MethodInfo;
 bool TextEditor_Paste_m3672 (TextEditor_t756 * __this, MethodInfo* method){
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m4215(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_systemCopyBuffer_m4215_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_op_Inequality_m574(NULL /*static, unused*/, V_0, (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2), /*hidden argument*/&String_op_Inequality_m574_MethodInfo);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		bool L_2 = (__this->___multiline_7);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_3 = TextEditor_ReplaceNewlinesWithSpaces_m5002(NULL /*static, unused*/, V_0, /*hidden argument*/&TextEditor_ReplaceNewlinesWithSpaces_m5002_MethodInfo);
		V_0 = L_3;
	}

IL_0028:
	{
		TextEditor_ReplaceSelection_m4998(__this, V_0, /*hidden argument*/&TextEditor_ReplaceSelection_m4998_MethodInfo);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// System.Void UnityEngine.TextEditor::ClampPos()
extern MethodInfo TextEditor_ClampPos_m5003_MethodInfo;
 void TextEditor_ClampPos_m5003 (TextEditor_t756 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_HasFocus_10);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = (__this->___controlID_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		int32_t L_2 = GUIUtility_get_keyboardControl_m4213(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_keyboardControl_m4213_MethodInfo);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		TextEditor_OnLostFocus_m4995(__this, /*hidden argument*/&TextEditor_OnLostFocus_m4995_MethodInfo);
	}

IL_0021:
	{
		bool L_3 = (__this->___m_HasFocus_10);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_4 = (__this->___controlID_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUIUtility_t863_il2cpp_TypeInfo));
		int32_t L_5 = GUIUtility_get_keyboardControl_m4213(NULL /*static, unused*/, /*hidden argument*/&GUIUtility_get_keyboardControl_m4213_MethodInfo);
		if ((((uint32_t)L_4) != ((uint32_t)L_5)))
		{
			goto IL_0042;
		}
	}
	{
		TextEditor_OnFocus_m3675(__this, /*hidden argument*/&TextEditor_OnFocus_m3675_MethodInfo);
	}

IL_0042:
	{
		int32_t L_6 = (__this->___pos_1);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		__this->___pos_1 = 0;
		goto IL_008b;
	}

IL_005a:
	{
		int32_t L_7 = (__this->___pos_1);
		GUIContent_t757 * L_8 = (__this->___content_4);
		NullCheck(L_8);
		String_t* L_9 = GUIContent_get_text_m3673(L_8, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m569(L_9, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if ((((int32_t)L_7) <= ((int32_t)L_10)))
		{
			goto IL_008b;
		}
	}
	{
		GUIContent_t757 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m3673(L_11, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m569(L_12, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		__this->___pos_1 = L_13;
	}

IL_008b:
	{
		int32_t L_14 = (__this->___selectPos_2);
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		__this->___selectPos_2 = 0;
		goto IL_00d4;
	}

IL_00a3:
	{
		int32_t L_15 = (__this->___selectPos_2);
		GUIContent_t757 * L_16 = (__this->___content_4);
		NullCheck(L_16);
		String_t* L_17 = GUIContent_get_text_m3673(L_16, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m569(L_17, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if ((((int32_t)L_15) <= ((int32_t)L_18)))
		{
			goto IL_00d4;
		}
	}
	{
		GUIContent_t757 * L_19 = (__this->___content_4);
		NullCheck(L_19);
		String_t* L_20 = GUIContent_get_text_m3673(L_19, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m569(L_20, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		__this->___selectPos_2 = L_21;
	}

IL_00d4:
	{
		int32_t L_22 = (__this->___m_iAltCursorPos_19);
		GUIContent_t757 * L_23 = (__this->___content_4);
		NullCheck(L_23);
		String_t* L_24 = GUIContent_get_text_m3673(L_23, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m569(L_24, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if ((((int32_t)L_22) <= ((int32_t)L_25)))
		{
			goto IL_0105;
		}
	}
	{
		GUIContent_t757 * L_26 = (__this->___content_4);
		NullCheck(L_26);
		String_t* L_27 = GUIContent_get_text_m3673(L_26, /*hidden argument*/&GUIContent_get_text_m3673_MethodInfo);
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m569(L_27, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		__this->___m_iAltCursorPos_19 = L_28;
	}

IL_0105:
	{
		return;
	}
}
// Metadata Definition UnityEngine.TextEditor
extern Il2CppType TouchScreenKeyboard_t611_0_0_6;
FieldInfo TextEditor_t756____keyboardOnScreen_0_FieldInfo = 
{
	"keyboardOnScreen"/* name */
	, &TouchScreenKeyboard_t611_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___keyboardOnScreen_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo TextEditor_t756____pos_1_FieldInfo = 
{
	"pos"/* name */
	, &Int32_t73_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___pos_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo TextEditor_t756____selectPos_2_FieldInfo = 
{
	"selectPos"/* name */
	, &Int32_t73_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___selectPos_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo TextEditor_t756____controlID_3_FieldInfo = 
{
	"controlID"/* name */
	, &Int32_t73_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___controlID_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GUIContent_t757_0_0_6;
FieldInfo TextEditor_t756____content_4_FieldInfo = 
{
	"content"/* name */
	, &GUIContent_t757_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___content_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType GUIStyle_t263_0_0_6;
FieldInfo TextEditor_t756____style_5_FieldInfo = 
{
	"style"/* name */
	, &GUIStyle_t263_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___style_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Rect_t442_0_0_6;
FieldInfo TextEditor_t756____position_6_FieldInfo = 
{
	"position"/* name */
	, &Rect_t442_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___position_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo TextEditor_t756____multiline_7_FieldInfo = 
{
	"multiline"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___multiline_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo TextEditor_t756____hasHorizontalCursorPos_8_FieldInfo = 
{
	"hasHorizontalCursorPos"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___hasHorizontalCursorPos_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo TextEditor_t756____isPasswordField_9_FieldInfo = 
{
	"isPasswordField"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___isPasswordField_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_3;
FieldInfo TextEditor_t756____m_HasFocus_10_FieldInfo = 
{
	"m_HasFocus"/* name */
	, &Boolean_t74_0_0_3/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___m_HasFocus_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t198_0_0_6;
FieldInfo TextEditor_t756____scrollOffset_11_FieldInfo = 
{
	"scrollOffset"/* name */
	, &Vector2_t198_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___scrollOffset_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo TextEditor_t756____m_TextHeightPotentiallyChanged_12_FieldInfo = 
{
	"m_TextHeightPotentiallyChanged"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___m_TextHeightPotentiallyChanged_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t198_0_0_6;
FieldInfo TextEditor_t756____graphicalCursorPos_13_FieldInfo = 
{
	"graphicalCursorPos"/* name */
	, &Vector2_t198_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___graphicalCursorPos_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t198_0_0_6;
FieldInfo TextEditor_t756____graphicalSelectCursorPos_14_FieldInfo = 
{
	"graphicalSelectCursorPos"/* name */
	, &Vector2_t198_0_0_6/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___graphicalSelectCursorPos_14)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo TextEditor_t756____m_MouseDragSelectsWholeWords_15_FieldInfo = 
{
	"m_MouseDragSelectsWholeWords"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___m_MouseDragSelectsWholeWords_15)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo TextEditor_t756____m_DblClickInitPos_16_FieldInfo = 
{
	"m_DblClickInitPos"/* name */
	, &Int32_t73_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___m_DblClickInitPos_16)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType DblClickSnapping_t976_0_0_1;
FieldInfo TextEditor_t756____m_DblClickSnap_17_FieldInfo = 
{
	"m_DblClickSnap"/* name */
	, &DblClickSnapping_t976_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___m_DblClickSnap_17)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo TextEditor_t756____m_bJustSelected_18_FieldInfo = 
{
	"m_bJustSelected"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___m_bJustSelected_18)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo TextEditor_t756____m_iAltCursorPos_19_FieldInfo = 
{
	"m_iAltCursorPos"/* name */
	, &Int32_t73_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___m_iAltCursorPos_19)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo TextEditor_t756____oldText_20_FieldInfo = 
{
	"oldText"/* name */
	, &String_t_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___oldText_20)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo TextEditor_t756____oldPos_21_FieldInfo = 
{
	"oldPos"/* name */
	, &Int32_t73_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___oldPos_21)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo TextEditor_t756____oldSelectPos_22_FieldInfo = 
{
	"oldSelectPos"/* name */
	, &Int32_t73_0_0_1/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756, ___oldSelectPos_22)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t978_0_0_17;
FieldInfo TextEditor_t756____s_Keyactions_23_FieldInfo = 
{
	"s_Keyactions"/* name */
	, &Dictionary_2_t978_0_0_17/* type */
	, &TextEditor_t756_il2cpp_TypeInfo/* parent */
	, offsetof(TextEditor_t756_StaticFields, ___s_Keyactions_23)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextEditor_t756_FieldInfos[] =
{
	&TextEditor_t756____keyboardOnScreen_0_FieldInfo,
	&TextEditor_t756____pos_1_FieldInfo,
	&TextEditor_t756____selectPos_2_FieldInfo,
	&TextEditor_t756____controlID_3_FieldInfo,
	&TextEditor_t756____content_4_FieldInfo,
	&TextEditor_t756____style_5_FieldInfo,
	&TextEditor_t756____position_6_FieldInfo,
	&TextEditor_t756____multiline_7_FieldInfo,
	&TextEditor_t756____hasHorizontalCursorPos_8_FieldInfo,
	&TextEditor_t756____isPasswordField_9_FieldInfo,
	&TextEditor_t756____m_HasFocus_10_FieldInfo,
	&TextEditor_t756____scrollOffset_11_FieldInfo,
	&TextEditor_t756____m_TextHeightPotentiallyChanged_12_FieldInfo,
	&TextEditor_t756____graphicalCursorPos_13_FieldInfo,
	&TextEditor_t756____graphicalSelectCursorPos_14_FieldInfo,
	&TextEditor_t756____m_MouseDragSelectsWholeWords_15_FieldInfo,
	&TextEditor_t756____m_DblClickInitPos_16_FieldInfo,
	&TextEditor_t756____m_DblClickSnap_17_FieldInfo,
	&TextEditor_t756____m_bJustSelected_18_FieldInfo,
	&TextEditor_t756____m_iAltCursorPos_19_FieldInfo,
	&TextEditor_t756____oldText_20_FieldInfo,
	&TextEditor_t756____oldPos_21_FieldInfo,
	&TextEditor_t756____oldSelectPos_22_FieldInfo,
	&TextEditor_t756____s_Keyactions_23_FieldInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::.ctor()
MethodInfo TextEditor__ctor_m3671_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextEditor__ctor_m3671/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1573/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ClearCursorPos()
MethodInfo TextEditor_ClearCursorPos_m4994_MethodInfo = 
{
	"ClearCursorPos"/* name */
	, (methodPointerType)&TextEditor_ClearCursorPos_m4994/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1574/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::OnFocus()
MethodInfo TextEditor_OnFocus_m3675_MethodInfo = 
{
	"OnFocus"/* name */
	, (methodPointerType)&TextEditor_OnFocus_m3675/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1575/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::OnLostFocus()
MethodInfo TextEditor_OnLostFocus_m4995_MethodInfo = 
{
	"OnLostFocus"/* name */
	, (methodPointerType)&TextEditor_OnLostFocus_m4995/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1576/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::SelectAll()
MethodInfo TextEditor_SelectAll_m4996_MethodInfo = 
{
	"SelectAll"/* name */
	, (methodPointerType)&TextEditor_SelectAll_m4996/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1577/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
MethodInfo TextEditor_DeleteSelection_m4997_MethodInfo = 
{
	"DeleteSelection"/* name */
	, (methodPointerType)&TextEditor_DeleteSelection_m4997/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1578/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TextEditor_t756_TextEditor_ReplaceSelection_m4998_ParameterInfos[] = 
{
	{"replace", 0, 134219472, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
MethodInfo TextEditor_ReplaceSelection_m4998_MethodInfo = 
{
	"ReplaceSelection"/* name */
	, (methodPointerType)&TextEditor_ReplaceSelection_m4998/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, TextEditor_t756_TextEditor_ReplaceSelection_m4998_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1579/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
MethodInfo TextEditor_UpdateScrollOffsetIfNeeded_m4999_MethodInfo = 
{
	"UpdateScrollOffsetIfNeeded"/* name */
	, (methodPointerType)&TextEditor_UpdateScrollOffsetIfNeeded_m4999/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1580/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
MethodInfo TextEditor_UpdateScrollOffset_m5000_MethodInfo = 
{
	"UpdateScrollOffset"/* name */
	, (methodPointerType)&TextEditor_UpdateScrollOffset_m5000/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1581/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::SaveBackup()
MethodInfo TextEditor_SaveBackup_m5001_MethodInfo = 
{
	"SaveBackup"/* name */
	, (methodPointerType)&TextEditor_SaveBackup_m5001/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1582/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::Copy()
MethodInfo TextEditor_Copy_m3676_MethodInfo = 
{
	"Copy"/* name */
	, (methodPointerType)&TextEditor_Copy_m3676/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1583/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TextEditor_t756_TextEditor_ReplaceNewlinesWithSpaces_m5002_ParameterInfos[] = 
{
	{"value", 0, 134219473, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
MethodInfo TextEditor_ReplaceNewlinesWithSpaces_m5002_MethodInfo = 
{
	"ReplaceNewlinesWithSpaces"/* name */
	, (methodPointerType)&TextEditor_ReplaceNewlinesWithSpaces_m5002/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, TextEditor_t756_TextEditor_ReplaceNewlinesWithSpaces_m5002_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1584/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextEditor::Paste()
MethodInfo TextEditor_Paste_m3672_MethodInfo = 
{
	"Paste"/* name */
	, (methodPointerType)&TextEditor_Paste_m3672/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1585/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextEditor::ClampPos()
MethodInfo TextEditor_ClampPos_m5003_MethodInfo = 
{
	"ClampPos"/* name */
	, (methodPointerType)&TextEditor_ClampPos_m5003/* method */
	, &TextEditor_t756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1586/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TextEditor_t756_MethodInfos[] =
{
	&TextEditor__ctor_m3671_MethodInfo,
	&TextEditor_ClearCursorPos_m4994_MethodInfo,
	&TextEditor_OnFocus_m3675_MethodInfo,
	&TextEditor_OnLostFocus_m4995_MethodInfo,
	&TextEditor_SelectAll_m4996_MethodInfo,
	&TextEditor_DeleteSelection_m4997_MethodInfo,
	&TextEditor_ReplaceSelection_m4998_MethodInfo,
	&TextEditor_UpdateScrollOffsetIfNeeded_m4999_MethodInfo,
	&TextEditor_UpdateScrollOffset_m5000_MethodInfo,
	&TextEditor_SaveBackup_m5001_MethodInfo,
	&TextEditor_Copy_m3676_MethodInfo,
	&TextEditor_ReplaceNewlinesWithSpaces_m5002_MethodInfo,
	&TextEditor_Paste_m3672_MethodInfo,
	&TextEditor_ClampPos_m5003_MethodInfo,
	NULL
};
extern TypeInfo DblClickSnapping_t976_il2cpp_TypeInfo;
extern TypeInfo TextEditOp_t977_il2cpp_TypeInfo;
static TypeInfo* TextEditor_t756_il2cpp_TypeInfo__nestedTypes[3] =
{
	&DblClickSnapping_t976_il2cpp_TypeInfo,
	&TextEditOp_t977_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* TextEditor_t756_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextEditor_t756_0_0_0;
extern Il2CppType TextEditor_t756_1_0_0;
struct TextEditor_t756;
TypeInfo TextEditor_t756_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextEditor"/* name */
	, "UnityEngine"/* namespaze */
	, TextEditor_t756_MethodInfos/* methods */
	, NULL/* properties */
	, TextEditor_t756_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, TextEditor_t756_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &TextEditor_t756_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextEditor_t756_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TextEditor_t756_il2cpp_TypeInfo/* cast_class */
	, &TextEditor_t756_0_0_0/* byval_arg */
	, &TextEditor_t756_1_0_0/* this_arg */
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
	, sizeof (TextEditor_t756)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TextEditor_t756_StaticFields)/* static_fields_size */
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
	, 14/* method_count */
	, 0/* property_count */
	, 24/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerationSettings_t647_il2cpp_TypeInfo;
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
extern TypeInfo Color32_t696_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
extern MethodInfo Color32_op_Implicit_m3546_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareColors_m5004_MethodInfo;
extern MethodInfo TextGenerationSettings_CompareVector2_m5005_MethodInfo;


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
 bool TextGenerationSettings_CompareColors_m5004 (TextGenerationSettings_t647 * __this, Color_t12  ___left, Color_t12  ___right, MethodInfo* method){
	Color32_t696  V_0 = {0};
	Color32_t696  V_1 = {0};
	{
		Color32_t696  L_0 = Color32_op_Implicit_m3546(NULL /*static, unused*/, ___left, /*hidden argument*/&Color32_op_Implicit_m3546_MethodInfo);
		V_0 = L_0;
		Color32_t696  L_1 = Color32_op_Implicit_m3546(NULL /*static, unused*/, ___right, /*hidden argument*/&Color32_op_Implicit_m3546_MethodInfo);
		V_1 = L_1;
		Color32_t696  L_2 = V_0;
		Object_t * L_3 = Box(InitializedTypeInfo(&Color32_t696_il2cpp_TypeInfo), &L_2);
		Color32_t696  L_4 = V_1;
		Object_t * L_5 = Box(InitializedTypeInfo(&Color32_t696_il2cpp_TypeInfo), &L_4);
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m3385_MethodInfo, L_3, L_5);
		return L_6;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
 bool TextGenerationSettings_CompareVector2_m5005 (TextGenerationSettings_t647 * __this, Vector2_t198  ___left, Vector2_t198  ___right, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		NullCheck((&___left));
		float L_0 = ((&___left)->___x_1);
		NullCheck((&___right));
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		bool L_2 = Mathf_Approximately_m3426(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Approximately_m3426_MethodInfo);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck((&___left));
		float L_3 = ((&___left)->___y_2);
		NullCheck((&___right));
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		bool L_5 = Mathf_Approximately_m3426(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Approximately_m3426_MethodInfo);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerationSettings_Equals_m5006_MethodInfo;
 bool TextGenerationSettings_Equals_m5006 (TextGenerationSettings_t647 * __this, TextGenerationSettings_t647  ___other, MethodInfo* method){
	int32_t G_B19_0 = 0;
	{
		Color_t12  L_0 = (__this->___color_1);
		NullCheck((&___other));
		Color_t12  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m5004(__this, L_0, L_1, /*hidden argument*/&TextGenerationSettings_CompareColors_m5004_MethodInfo);
		if (!L_2)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		NullCheck((&___other));
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((((uint32_t)L_3) != ((uint32_t)L_4)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_5 = (__this->___resizeTextMinSize_8);
		NullCheck((&___other));
		int32_t L_6 = ((&___other)->___resizeTextMinSize_8);
		if ((((uint32_t)L_5) != ((uint32_t)L_6)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_7 = (__this->___resizeTextMaxSize_9);
		NullCheck((&___other));
		int32_t L_8 = ((&___other)->___resizeTextMaxSize_9);
		if ((((uint32_t)L_7) != ((uint32_t)L_8)))
		{
			goto IL_015d;
		}
	}
	{
		float L_9 = (__this->___lineSpacing_3);
		NullCheck((&___other));
		float L_10 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t455_il2cpp_TypeInfo));
		bool L_11 = Mathf_Approximately_m3426(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Mathf_Approximately_m3426_MethodInfo);
		if (!L_11)
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_12 = (__this->___fontStyle_5);
		NullCheck((&___other));
		int32_t L_13 = ((&___other)->___fontStyle_5);
		if ((((uint32_t)L_12) != ((uint32_t)L_13)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_14 = (__this->___richText_4);
		NullCheck((&___other));
		bool L_15 = ((&___other)->___richText_4);
		if ((((uint32_t)L_14) != ((uint32_t)L_15)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_16 = (__this->___textAnchor_6);
		NullCheck((&___other));
		int32_t L_17 = ((&___other)->___textAnchor_6);
		if ((((uint32_t)L_16) != ((uint32_t)L_17)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_18 = (__this->___resizeTextForBestFit_7);
		NullCheck((&___other));
		bool L_19 = ((&___other)->___resizeTextForBestFit_7);
		if ((((uint32_t)L_18) != ((uint32_t)L_19)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_20 = (__this->___resizeTextMinSize_8);
		NullCheck((&___other));
		int32_t L_21 = ((&___other)->___resizeTextMinSize_8);
		if ((((uint32_t)L_20) != ((uint32_t)L_21)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_22 = (__this->___resizeTextMaxSize_9);
		NullCheck((&___other));
		int32_t L_23 = ((&___other)->___resizeTextMaxSize_9);
		if ((((uint32_t)L_22) != ((uint32_t)L_23)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_24 = (__this->___resizeTextForBestFit_7);
		NullCheck((&___other));
		bool L_25 = ((&___other)->___resizeTextForBestFit_7);
		if ((((uint32_t)L_24) != ((uint32_t)L_25)))
		{
			goto IL_015d;
		}
	}
	{
		bool L_26 = (__this->___updateBounds_10);
		NullCheck((&___other));
		bool L_27 = ((&___other)->___updateBounds_10);
		if ((((uint32_t)L_26) != ((uint32_t)L_27)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_28 = (__this->___horizontalOverflow_12);
		NullCheck((&___other));
		int32_t L_29 = ((&___other)->___horizontalOverflow_12);
		if ((((uint32_t)L_28) != ((uint32_t)L_29)))
		{
			goto IL_015d;
		}
	}
	{
		int32_t L_30 = (__this->___verticalOverflow_11);
		NullCheck((&___other));
		int32_t L_31 = ((&___other)->___verticalOverflow_11);
		if ((((uint32_t)L_30) != ((uint32_t)L_31)))
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t198  L_32 = (__this->___generationExtents_13);
		NullCheck((&___other));
		Vector2_t198  L_33 = ((&___other)->___generationExtents_13);
		bool L_34 = TextGenerationSettings_CompareVector2_m5005(__this, L_32, L_33, /*hidden argument*/&TextGenerationSettings_CompareVector2_m5005_MethodInfo);
		if (!L_34)
		{
			goto IL_015d;
		}
	}
	{
		Vector2_t198  L_35 = (__this->___pivot_14);
		NullCheck((&___other));
		Vector2_t198  L_36 = ((&___other)->___pivot_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m5005(__this, L_35, L_36, /*hidden argument*/&TextGenerationSettings_CompareVector2_m5005_MethodInfo);
		if (!L_37)
		{
			goto IL_015d;
		}
	}
	{
		Font_t567 * L_38 = (__this->___font_0);
		NullCheck((&___other));
		Font_t567 * L_39 = ((&___other)->___font_0);
		bool L_40 = Object_op_Equality_m1193(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/&Object_op_Equality_m1193_MethodInfo);
		G_B19_0 = ((int32_t)(L_40));
		goto IL_015e;
	}

IL_015d:
	{
		G_B19_0 = 0;
	}

IL_015e:
	{
		return G_B19_0;
	}
}
// Metadata Definition UnityEngine.TextGenerationSettings
extern Il2CppType Font_t567_0_0_6;
FieldInfo TextGenerationSettings_t647____font_0_FieldInfo = 
{
	"font"/* name */
	, &Font_t567_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___font_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Color_t12_0_0_6;
FieldInfo TextGenerationSettings_t647____color_1_FieldInfo = 
{
	"color"/* name */
	, &Color_t12_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___color_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo TextGenerationSettings_t647____fontSize_2_FieldInfo = 
{
	"fontSize"/* name */
	, &Int32_t73_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___fontSize_2) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_6;
FieldInfo TextGenerationSettings_t647____lineSpacing_3_FieldInfo = 
{
	"lineSpacing"/* name */
	, &Single_t76_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___lineSpacing_3) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo TextGenerationSettings_t647____richText_4_FieldInfo = 
{
	"richText"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___richText_4) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType FontStyle_t731_0_0_6;
FieldInfo TextGenerationSettings_t647____fontStyle_5_FieldInfo = 
{
	"fontStyle"/* name */
	, &FontStyle_t731_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___fontStyle_5) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TextAnchor_t732_0_0_6;
FieldInfo TextGenerationSettings_t647____textAnchor_6_FieldInfo = 
{
	"textAnchor"/* name */
	, &TextAnchor_t732_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___textAnchor_6) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo TextGenerationSettings_t647____resizeTextForBestFit_7_FieldInfo = 
{
	"resizeTextForBestFit"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___resizeTextForBestFit_7) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo TextGenerationSettings_t647____resizeTextMinSize_8_FieldInfo = 
{
	"resizeTextMinSize"/* name */
	, &Int32_t73_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___resizeTextMinSize_8) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_6;
FieldInfo TextGenerationSettings_t647____resizeTextMaxSize_9_FieldInfo = 
{
	"resizeTextMaxSize"/* name */
	, &Int32_t73_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___resizeTextMaxSize_9) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo TextGenerationSettings_t647____updateBounds_10_FieldInfo = 
{
	"updateBounds"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___updateBounds_10) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType VerticalWrapMode_t734_0_0_6;
FieldInfo TextGenerationSettings_t647____verticalOverflow_11_FieldInfo = 
{
	"verticalOverflow"/* name */
	, &VerticalWrapMode_t734_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___verticalOverflow_11) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType HorizontalWrapMode_t733_0_0_6;
FieldInfo TextGenerationSettings_t647____horizontalOverflow_12_FieldInfo = 
{
	"horizontalOverflow"/* name */
	, &HorizontalWrapMode_t733_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___horizontalOverflow_12) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t198_0_0_6;
FieldInfo TextGenerationSettings_t647____generationExtents_13_FieldInfo = 
{
	"generationExtents"/* name */
	, &Vector2_t198_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___generationExtents_13) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Vector2_t198_0_0_6;
FieldInfo TextGenerationSettings_t647____pivot_14_FieldInfo = 
{
	"pivot"/* name */
	, &Vector2_t198_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___pivot_14) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_6;
FieldInfo TextGenerationSettings_t647____generateOutOfBounds_15_FieldInfo = 
{
	"generateOutOfBounds"/* name */
	, &Boolean_t74_0_0_6/* type */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* parent */
	, offsetof(TextGenerationSettings_t647, ___generateOutOfBounds_15) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TextGenerationSettings_t647_FieldInfos[] =
{
	&TextGenerationSettings_t647____font_0_FieldInfo,
	&TextGenerationSettings_t647____color_1_FieldInfo,
	&TextGenerationSettings_t647____fontSize_2_FieldInfo,
	&TextGenerationSettings_t647____lineSpacing_3_FieldInfo,
	&TextGenerationSettings_t647____richText_4_FieldInfo,
	&TextGenerationSettings_t647____fontStyle_5_FieldInfo,
	&TextGenerationSettings_t647____textAnchor_6_FieldInfo,
	&TextGenerationSettings_t647____resizeTextForBestFit_7_FieldInfo,
	&TextGenerationSettings_t647____resizeTextMinSize_8_FieldInfo,
	&TextGenerationSettings_t647____resizeTextMaxSize_9_FieldInfo,
	&TextGenerationSettings_t647____updateBounds_10_FieldInfo,
	&TextGenerationSettings_t647____verticalOverflow_11_FieldInfo,
	&TextGenerationSettings_t647____horizontalOverflow_12_FieldInfo,
	&TextGenerationSettings_t647____generationExtents_13_FieldInfo,
	&TextGenerationSettings_t647____pivot_14_FieldInfo,
	&TextGenerationSettings_t647____generateOutOfBounds_15_FieldInfo,
	NULL
};
extern Il2CppType Color_t12_0_0_0;
extern Il2CppType Color_t12_0_0_0;
extern Il2CppType Color_t12_0_0_0;
static ParameterInfo TextGenerationSettings_t647_TextGenerationSettings_CompareColors_m5004_ParameterInfos[] = 
{
	{"left", 0, 134219474, &EmptyCustomAttributesCache, &Color_t12_0_0_0},
	{"right", 1, 134219475, &EmptyCustomAttributesCache, &Color_t12_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Color_t12_Color_t12 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
MethodInfo TextGenerationSettings_CompareColors_m5004_MethodInfo = 
{
	"CompareColors"/* name */
	, (methodPointerType)&TextGenerationSettings_CompareColors_m5004/* method */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Color_t12_Color_t12/* invoker_method */
	, TextGenerationSettings_t647_TextGenerationSettings_CompareColors_m5004_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Vector2_t198_0_0_0;
extern Il2CppType Vector2_t198_0_0_0;
extern Il2CppType Vector2_t198_0_0_0;
static ParameterInfo TextGenerationSettings_t647_TextGenerationSettings_CompareVector2_m5005_ParameterInfos[] = 
{
	{"left", 0, 134219476, &EmptyCustomAttributesCache, &Vector2_t198_0_0_0},
	{"right", 1, 134219477, &EmptyCustomAttributesCache, &Vector2_t198_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Vector2_t198_Vector2_t198 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
MethodInfo TextGenerationSettings_CompareVector2_m5005_MethodInfo = 
{
	"CompareVector2"/* name */
	, (methodPointerType)&TextGenerationSettings_CompareVector2_m5005/* method */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Vector2_t198_Vector2_t198/* invoker_method */
	, TextGenerationSettings_t647_TextGenerationSettings_CompareVector2_m5005_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TextGenerationSettings_t647_0_0_0;
extern Il2CppType TextGenerationSettings_t647_0_0_0;
static ParameterInfo TextGenerationSettings_t647_TextGenerationSettings_Equals_m5006_ParameterInfos[] = 
{
	{"other", 0, 134219478, &EmptyCustomAttributesCache, &TextGenerationSettings_t647_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_TextGenerationSettings_t647 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
MethodInfo TextGenerationSettings_Equals_m5006_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TextGenerationSettings_Equals_m5006/* method */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_TextGenerationSettings_t647/* invoker_method */
	, TextGenerationSettings_t647_TextGenerationSettings_Equals_m5006_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TextGenerationSettings_t647_MethodInfos[] =
{
	&TextGenerationSettings_CompareColors_m5004_MethodInfo,
	&TextGenerationSettings_CompareVector2_m5005_MethodInfo,
	&TextGenerationSettings_Equals_m5006_MethodInfo,
	NULL
};
static MethodInfo* TextGenerationSettings_t647_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TextGenerationSettings_t647_1_0_0;
TypeInfo TextGenerationSettings_t647_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextGenerationSettings"/* name */
	, "UnityEngine"/* namespaze */
	, TextGenerationSettings_t647_MethodInfos/* methods */
	, NULL/* properties */
	, TextGenerationSettings_t647_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TextGenerationSettings_t647_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TextGenerationSettings_t647_il2cpp_TypeInfo/* cast_class */
	, &TextGenerationSettings_t647_0_0_0/* byval_arg */
	, &TextGenerationSettings_t647_1_0_0/* this_arg */
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
	, sizeof (TextGenerationSettings_t647)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, true/* valuetype */
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
	, 16/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TrackedReference_t925_il2cpp_TypeInfo;
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

extern TypeInfo IntPtr_t120_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
extern MethodInfo TrackedReference_op_Equality_m5009_MethodInfo;
extern MethodInfo IntPtr_op_Explicit_m5190_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m5191_MethodInfo;


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern MethodInfo TrackedReference_Equals_m5007_MethodInfo;
 bool TrackedReference_Equals_m5007 (TrackedReference_t925 * __this, Object_t * ___o, MethodInfo* method){
	{
		bool L_0 = TrackedReference_op_Equality_m5009(NULL /*static, unused*/, ((TrackedReference_t925 *)IsInst(___o, InitializedTypeInfo(&TrackedReference_t925_il2cpp_TypeInfo))), __this, /*hidden argument*/&TrackedReference_op_Equality_m5009_MethodInfo);
		return L_0;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern MethodInfo TrackedReference_GetHashCode_m5008_MethodInfo;
 int32_t TrackedReference_GetHashCode_m5008 (TrackedReference_t925 * __this, MethodInfo* method){
	{
		IntPtr_t120 L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m5190(NULL /*static, unused*/, L_0, /*hidden argument*/&IntPtr_op_Explicit_m5190_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m5009 (Object_t * __this/* static, unused */, TrackedReference_t925 * ___x, TrackedReference_t925 * ___y, MethodInfo* method){
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		V_0 = ___x;
		V_1 = ___y;
		if (V_1)
		{
			goto IL_0012;
		}
	}
	{
		if (V_0)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		if (V_1)
		{
			goto IL_0029;
		}
	}
	{
		NullCheck(___x);
		IntPtr_t120 L_0 = (___x->___m_Ptr_0);
		bool L_1 = IntPtr_op_Equality_m5191(NULL /*static, unused*/, L_0, (((IntPtr_t120_StaticFields*)InitializedTypeInfo(&IntPtr_t120_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5191_MethodInfo);
		return L_1;
	}

IL_0029:
	{
		if (V_0)
		{
			goto IL_0040;
		}
	}
	{
		NullCheck(___y);
		IntPtr_t120 L_2 = (___y->___m_Ptr_0);
		bool L_3 = IntPtr_op_Equality_m5191(NULL /*static, unused*/, L_2, (((IntPtr_t120_StaticFields*)InitializedTypeInfo(&IntPtr_t120_il2cpp_TypeInfo)->static_fields)->___Zero_1), /*hidden argument*/&IntPtr_op_Equality_m5191_MethodInfo);
		return L_3;
	}

IL_0040:
	{
		NullCheck(___x);
		IntPtr_t120 L_4 = (___x->___m_Ptr_0);
		NullCheck(___y);
		IntPtr_t120 L_5 = (___y->___m_Ptr_0);
		bool L_6 = IntPtr_op_Equality_m5191(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&IntPtr_op_Equality_m5191_MethodInfo);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t925_marshal(const TrackedReference_t925& unmarshaled, TrackedReference_t925_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t925_marshal_back(const TrackedReference_t925_marshaled& marshaled, TrackedReference_t925& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t925_marshal_cleanup(TrackedReference_t925_marshaled& marshaled)
{
}
// Metadata Definition UnityEngine.TrackedReference
extern Il2CppType IntPtr_t120_0_0_3;
FieldInfo TrackedReference_t925____m_Ptr_0_FieldInfo = 
{
	"m_Ptr"/* name */
	, &IntPtr_t120_0_0_3/* type */
	, &TrackedReference_t925_il2cpp_TypeInfo/* parent */
	, offsetof(TrackedReference_t925, ___m_Ptr_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TrackedReference_t925_FieldInfos[] =
{
	&TrackedReference_t925____m_Ptr_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo TrackedReference_t925_TrackedReference_Equals_m5007_ParameterInfos[] = 
{
	{"o", 0, 134219479, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
MethodInfo TrackedReference_Equals_m5007_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&TrackedReference_Equals_m5007/* method */
	, &TrackedReference_t925_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, TrackedReference_t925_TrackedReference_Equals_m5007_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
MethodInfo TrackedReference_GetHashCode_m5008_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&TrackedReference_GetHashCode_m5008/* method */
	, &TrackedReference_t925_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType TrackedReference_t925_0_0_0;
extern Il2CppType TrackedReference_t925_0_0_0;
extern Il2CppType TrackedReference_t925_0_0_0;
static ParameterInfo TrackedReference_t925_TrackedReference_op_Equality_m5009_ParameterInfos[] = 
{
	{"x", 0, 134219480, &EmptyCustomAttributesCache, &TrackedReference_t925_0_0_0},
	{"y", 1, 134219481, &EmptyCustomAttributesCache, &TrackedReference_t925_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
MethodInfo TrackedReference_op_Equality_m5009_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&TrackedReference_op_Equality_m5009/* method */
	, &TrackedReference_t925_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, TrackedReference_t925_TrackedReference_op_Equality_m5009_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TrackedReference_t925_MethodInfos[] =
{
	&TrackedReference_Equals_m5007_MethodInfo,
	&TrackedReference_GetHashCode_m5008_MethodInfo,
	&TrackedReference_op_Equality_m5009_MethodInfo,
	NULL
};
static MethodInfo* TrackedReference_t925_VTable[] =
{
	&TrackedReference_Equals_m5007_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&TrackedReference_GetHashCode_m5008_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TrackedReference_t925_1_0_0;
struct TrackedReference_t925;
TypeInfo TrackedReference_t925_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TrackedReference"/* name */
	, "UnityEngine"/* namespaze */
	, TrackedReference_t925_MethodInfos/* methods */
	, NULL/* properties */
	, TrackedReference_t925_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TrackedReference_t925_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TrackedReference_t925_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TrackedReference_t925_il2cpp_TypeInfo/* cast_class */
	, &TrackedReference_t925_0_0_0/* byval_arg */
	, &TrackedReference_t925_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)TrackedReference_t925_marshal/* marshal_to_native_func */
	, (methodPointerType)TrackedReference_t925_marshal_back/* marshal_from_native_func */
	, (methodPointerType)TrackedReference_t925_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (TrackedReference_t925)/* instance_size */
	, 0/* element_size */
	, sizeof(TrackedReference_t925_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048585/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentListenerMode_t979_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// Metadata Definition UnityEngine.Events.PersistentListenerMode
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo PersistentListenerMode_t979____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentListenerMode_t979, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_32854;
FieldInfo PersistentListenerMode_t979____EventDefined_2_FieldInfo = 
{
	"EventDefined"/* name */
	, &PersistentListenerMode_t979_0_0_32854/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_32854;
FieldInfo PersistentListenerMode_t979____Void_3_FieldInfo = 
{
	"Void"/* name */
	, &PersistentListenerMode_t979_0_0_32854/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_32854;
FieldInfo PersistentListenerMode_t979____Object_4_FieldInfo = 
{
	"Object"/* name */
	, &PersistentListenerMode_t979_0_0_32854/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_32854;
FieldInfo PersistentListenerMode_t979____Int_5_FieldInfo = 
{
	"Int"/* name */
	, &PersistentListenerMode_t979_0_0_32854/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_32854;
FieldInfo PersistentListenerMode_t979____Float_6_FieldInfo = 
{
	"Float"/* name */
	, &PersistentListenerMode_t979_0_0_32854/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_32854;
FieldInfo PersistentListenerMode_t979____String_7_FieldInfo = 
{
	"String"/* name */
	, &PersistentListenerMode_t979_0_0_32854/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_32854;
FieldInfo PersistentListenerMode_t979____Bool_8_FieldInfo = 
{
	"Bool"/* name */
	, &PersistentListenerMode_t979_0_0_32854/* type */
	, &PersistentListenerMode_t979_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PersistentListenerMode_t979_FieldInfos[] =
{
	&PersistentListenerMode_t979____value___1_FieldInfo,
	&PersistentListenerMode_t979____EventDefined_2_FieldInfo,
	&PersistentListenerMode_t979____Void_3_FieldInfo,
	&PersistentListenerMode_t979____Object_4_FieldInfo,
	&PersistentListenerMode_t979____Int_5_FieldInfo,
	&PersistentListenerMode_t979____Float_6_FieldInfo,
	&PersistentListenerMode_t979____String_7_FieldInfo,
	&PersistentListenerMode_t979____Bool_8_FieldInfo,
	NULL
};
static const int32_t PersistentListenerMode_t979____EventDefined_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t979____EventDefined_2_DefaultValue = 
{
	&PersistentListenerMode_t979____EventDefined_2_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t979____EventDefined_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t979____Void_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t979____Void_3_DefaultValue = 
{
	&PersistentListenerMode_t979____Void_3_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t979____Void_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t979____Object_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t979____Object_4_DefaultValue = 
{
	&PersistentListenerMode_t979____Object_4_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t979____Object_4_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t979____Int_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t979____Int_5_DefaultValue = 
{
	&PersistentListenerMode_t979____Int_5_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t979____Int_5_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t979____Float_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t979____Float_6_DefaultValue = 
{
	&PersistentListenerMode_t979____Float_6_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t979____Float_6_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t979____String_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t979____String_7_DefaultValue = 
{
	&PersistentListenerMode_t979____String_7_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t979____String_7_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t PersistentListenerMode_t979____Bool_8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry PersistentListenerMode_t979____Bool_8_DefaultValue = 
{
	&PersistentListenerMode_t979____Bool_8_FieldInfo/* field */
	, { (char*)&PersistentListenerMode_t979____Bool_8_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* PersistentListenerMode_t979_FieldDefaultValues[] = 
{
	&PersistentListenerMode_t979____EventDefined_2_DefaultValue,
	&PersistentListenerMode_t979____Void_3_DefaultValue,
	&PersistentListenerMode_t979____Object_4_DefaultValue,
	&PersistentListenerMode_t979____Int_5_DefaultValue,
	&PersistentListenerMode_t979____Float_6_DefaultValue,
	&PersistentListenerMode_t979____String_7_DefaultValue,
	&PersistentListenerMode_t979____Bool_8_DefaultValue,
	NULL
};
static MethodInfo* PersistentListenerMode_t979_MethodInfos[] =
{
	NULL
};
static MethodInfo* PersistentListenerMode_t979_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
static Il2CppInterfaceOffsetPair PersistentListenerMode_t979_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType PersistentListenerMode_t979_0_0_0;
extern Il2CppType PersistentListenerMode_t979_1_0_0;
TypeInfo PersistentListenerMode_t979_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentListenerMode"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentListenerMode_t979_MethodInfos/* methods */
	, NULL/* properties */
	, PersistentListenerMode_t979_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PersistentListenerMode_t979_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &PersistentListenerMode_t979_0_0_0/* byval_arg */
	, &PersistentListenerMode_t979_1_0_0/* this_arg */
	, PersistentListenerMode_t979_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, PersistentListenerMode_t979_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PersistentListenerMode_t979)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8449/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArgumentCache_t980_il2cpp_TypeInfo;
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"



// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern MethodInfo ArgumentCache__ctor_m5010_MethodInfo;
 void ArgumentCache__ctor_m5010 (ArgumentCache_t980 * __this, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern MethodInfo ArgumentCache_get_unityObjectArgument_m5011_MethodInfo;
 Object_t151 * ArgumentCache_get_unityObjectArgument_m5011 (ArgumentCache_t980 * __this, MethodInfo* method){
	{
		Object_t151 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo;
 String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012 (ArgumentCache_t980 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern MethodInfo ArgumentCache_get_intArgument_m5013_MethodInfo;
 int32_t ArgumentCache_get_intArgument_m5013 (ArgumentCache_t980 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern MethodInfo ArgumentCache_get_floatArgument_m5014_MethodInfo;
 float ArgumentCache_get_floatArgument_m5014 (ArgumentCache_t980 * __this, MethodInfo* method){
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern MethodInfo ArgumentCache_get_stringArgument_m5015_MethodInfo;
 String_t* ArgumentCache_get_stringArgument_m5015 (ArgumentCache_t980 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern MethodInfo ArgumentCache_get_boolArgument_m5016_MethodInfo;
 bool ArgumentCache_get_boolArgument_m5016 (ArgumentCache_t980 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// Metadata Definition UnityEngine.Events.ArgumentCache
extern Il2CppType Object_t151_0_0_1;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_ObjectArgument;
FieldInfo ArgumentCache_t980____m_ObjectArgument_0_FieldInfo = 
{
	"m_ObjectArgument"/* name */
	, &Object_t151_0_0_1/* type */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t980, ___m_ObjectArgument_0)/* data */
	, &ArgumentCache_t980__CustomAttributeCache_m_ObjectArgument/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
FieldInfo ArgumentCache_t980____m_ObjectArgumentAssemblyTypeName_1_FieldInfo = 
{
	"m_ObjectArgumentAssemblyTypeName"/* name */
	, &String_t_0_0_1/* type */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t980, ___m_ObjectArgumentAssemblyTypeName_1)/* data */
	, &ArgumentCache_t980__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_IntArgument;
FieldInfo ArgumentCache_t980____m_IntArgument_2_FieldInfo = 
{
	"m_IntArgument"/* name */
	, &Int32_t73_0_0_1/* type */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t980, ___m_IntArgument_2)/* data */
	, &ArgumentCache_t980__CustomAttributeCache_m_IntArgument/* custom_attributes_cache */

};
extern Il2CppType Single_t76_0_0_1;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_FloatArgument;
FieldInfo ArgumentCache_t980____m_FloatArgument_3_FieldInfo = 
{
	"m_FloatArgument"/* name */
	, &Single_t76_0_0_1/* type */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t980, ___m_FloatArgument_3)/* data */
	, &ArgumentCache_t980__CustomAttributeCache_m_FloatArgument/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_StringArgument;
FieldInfo ArgumentCache_t980____m_StringArgument_4_FieldInfo = 
{
	"m_StringArgument"/* name */
	, &String_t_0_0_1/* type */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t980, ___m_StringArgument_4)/* data */
	, &ArgumentCache_t980__CustomAttributeCache_m_StringArgument/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_BoolArgument;
FieldInfo ArgumentCache_t980____m_BoolArgument_5_FieldInfo = 
{
	"m_BoolArgument"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, offsetof(ArgumentCache_t980, ___m_BoolArgument_5)/* data */
	, &ArgumentCache_t980__CustomAttributeCache_m_BoolArgument/* custom_attributes_cache */

};
static FieldInfo* ArgumentCache_t980_FieldInfos[] =
{
	&ArgumentCache_t980____m_ObjectArgument_0_FieldInfo,
	&ArgumentCache_t980____m_ObjectArgumentAssemblyTypeName_1_FieldInfo,
	&ArgumentCache_t980____m_IntArgument_2_FieldInfo,
	&ArgumentCache_t980____m_FloatArgument_3_FieldInfo,
	&ArgumentCache_t980____m_StringArgument_4_FieldInfo,
	&ArgumentCache_t980____m_BoolArgument_5_FieldInfo,
	NULL
};
static PropertyInfo ArgumentCache_t980____unityObjectArgument_PropertyInfo = 
{
	&ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, "unityObjectArgument"/* name */
	, &ArgumentCache_get_unityObjectArgument_m5011_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t980____unityObjectArgumentAssemblyTypeName_PropertyInfo = 
{
	&ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, "unityObjectArgumentAssemblyTypeName"/* name */
	, &ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t980____intArgument_PropertyInfo = 
{
	&ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, "intArgument"/* name */
	, &ArgumentCache_get_intArgument_m5013_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t980____floatArgument_PropertyInfo = 
{
	&ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, "floatArgument"/* name */
	, &ArgumentCache_get_floatArgument_m5014_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t980____stringArgument_PropertyInfo = 
{
	&ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, "stringArgument"/* name */
	, &ArgumentCache_get_stringArgument_m5015_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArgumentCache_t980____boolArgument_PropertyInfo = 
{
	&ArgumentCache_t980_il2cpp_TypeInfo/* parent */
	, "boolArgument"/* name */
	, &ArgumentCache_get_boolArgument_m5016_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ArgumentCache_t980_PropertyInfos[] =
{
	&ArgumentCache_t980____unityObjectArgument_PropertyInfo,
	&ArgumentCache_t980____unityObjectArgumentAssemblyTypeName_PropertyInfo,
	&ArgumentCache_t980____intArgument_PropertyInfo,
	&ArgumentCache_t980____floatArgument_PropertyInfo,
	&ArgumentCache_t980____stringArgument_PropertyInfo,
	&ArgumentCache_t980____boolArgument_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
MethodInfo ArgumentCache__ctor_m5010_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArgumentCache__ctor_m5010/* method */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t151_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
MethodInfo ArgumentCache_get_unityObjectArgument_m5011_MethodInfo = 
{
	"get_unityObjectArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_unityObjectArgument_m5011/* method */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* declaring_type */
	, &Object_t151_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
MethodInfo ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo = 
{
	"get_unityObjectArgumentAssemblyTypeName"/* name */
	, (methodPointerType)&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012/* method */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
MethodInfo ArgumentCache_get_intArgument_m5013_MethodInfo = 
{
	"get_intArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_intArgument_m5013/* method */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Single_t76_0_0_0;
extern void* RuntimeInvoker_Single_t76 (MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
MethodInfo ArgumentCache_get_floatArgument_m5014_MethodInfo = 
{
	"get_floatArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_floatArgument_m5014/* method */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* declaring_type */
	, &Single_t76_0_0_0/* return_type */
	, RuntimeInvoker_Single_t76/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
MethodInfo ArgumentCache_get_stringArgument_m5015_MethodInfo = 
{
	"get_stringArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_stringArgument_m5015/* method */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
MethodInfo ArgumentCache_get_boolArgument_m5016_MethodInfo = 
{
	"get_boolArgument"/* name */
	, (methodPointerType)&ArgumentCache_get_boolArgument_m5016/* method */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ArgumentCache_t980_MethodInfos[] =
{
	&ArgumentCache__ctor_m5010_MethodInfo,
	&ArgumentCache_get_unityObjectArgument_m5011_MethodInfo,
	&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo,
	&ArgumentCache_get_intArgument_m5013_MethodInfo,
	&ArgumentCache_get_floatArgument_m5014_MethodInfo,
	&ArgumentCache_get_stringArgument_m5015_MethodInfo,
	&ArgumentCache_get_boolArgument_m5016_MethodInfo,
	NULL
};
static MethodInfo* ArgumentCache_t980_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern TypeInfo SerializeField_t304_il2cpp_TypeInfo;
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern MethodInfo SerializeField__ctor_m1222_MethodInfo;
extern TypeInfo FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern MethodInfo FormerlySerializedAsAttribute__ctor_m3324_MethodInfo;
void ArgumentCache_t980_CustomAttributesCacheGenerator_m_ObjectArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("objectArgument"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t980_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t980_CustomAttributesCacheGenerator_m_IntArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("intArgument"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t980_CustomAttributesCacheGenerator_m_FloatArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("floatArgument"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t980_CustomAttributesCacheGenerator_m_StringArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("stringArgument"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void ArgumentCache_t980_CustomAttributesCacheGenerator_m_BoolArgument(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_ObjectArgument = {
2,
NULL,
&ArgumentCache_t980_CustomAttributesCacheGenerator_m_ObjectArgument
};
CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName = {
2,
NULL,
&ArgumentCache_t980_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName
};
CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_IntArgument = {
2,
NULL,
&ArgumentCache_t980_CustomAttributesCacheGenerator_m_IntArgument
};
CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_FloatArgument = {
2,
NULL,
&ArgumentCache_t980_CustomAttributesCacheGenerator_m_FloatArgument
};
CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_StringArgument = {
2,
NULL,
&ArgumentCache_t980_CustomAttributesCacheGenerator_m_StringArgument
};
CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_BoolArgument = {
1,
NULL,
&ArgumentCache_t980_CustomAttributesCacheGenerator_m_BoolArgument
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType ArgumentCache_t980_0_0_0;
extern Il2CppType ArgumentCache_t980_1_0_0;
struct ArgumentCache_t980;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_ObjectArgument;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_ObjectArgumentAssemblyTypeName;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_IntArgument;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_FloatArgument;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_StringArgument;
extern CustomAttributesCache ArgumentCache_t980__CustomAttributeCache_m_BoolArgument;
TypeInfo ArgumentCache_t980_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArgumentCache"/* name */
	, "UnityEngine.Events"/* namespaze */
	, ArgumentCache_t980_MethodInfos/* methods */
	, ArgumentCache_t980_PropertyInfos/* properties */
	, ArgumentCache_t980_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ArgumentCache_t980_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ArgumentCache_t980_il2cpp_TypeInfo/* cast_class */
	, &ArgumentCache_t980_0_0_0/* byval_arg */
	, &ArgumentCache_t980_1_0_0/* this_arg */
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
	, sizeof (ArgumentCache_t980)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 6/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BaseInvokableCall_t981_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo ArgumentNullException_t129_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m652_MethodInfo;
extern MethodInfo Delegate_get_Method_m5192_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m5193_MethodInfo;
extern MethodInfo Delegate_get_Target_m5194_MethodInfo;


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern MethodInfo BaseInvokableCall__ctor_m5017_MethodInfo;
 void BaseInvokableCall__ctor_m5017 (BaseInvokableCall_t981 * __this, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo BaseInvokableCall__ctor_m5018_MethodInfo;
 void BaseInvokableCall__ctor_m5018 (BaseInvokableCall_t981 * __this, Object_t * ___target, MethodInfo_t211 * ___function, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		if (___target)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t129 * L_0 = (ArgumentNullException_t129 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t129_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m652(L_0, (String_t*) &_stringLiteral483, /*hidden argument*/&ArgumentNullException__ctor_m652_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}

IL_0017:
	{
		if (___function)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t129 * L_1 = (ArgumentNullException_t129 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t129_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m652(L_1, (String_t*) &_stringLiteral484, /*hidden argument*/&ArgumentNullException__ctor_m652_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern MethodInfo BaseInvokableCall_AllowInvoke_m5019_MethodInfo;
 bool BaseInvokableCall_AllowInvoke_m5019 (Object_t * __this/* static, unused */, Delegate_t743 * ___delegate, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		NullCheck(___delegate);
		MethodInfo_t211 * L_0 = Delegate_get_Method_m5192(___delegate, /*hidden argument*/&Delegate_get_Method_m5192_MethodInfo);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m5193_MethodInfo, L_0);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		NullCheck(___delegate);
		Object_t * L_2 = Delegate_get_Target_m5194(___delegate, /*hidden argument*/&Delegate_get_Target_m5194_MethodInfo);
		G_B3_0 = ((((int32_t)((((Object_t *)L_2) == ((Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.BaseInvokableCall
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
MethodInfo BaseInvokableCall__ctor_m5017_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BaseInvokableCall__ctor_m5017/* method */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo BaseInvokableCall_t981_BaseInvokableCall__ctor_m5018_ParameterInfos[] = 
{
	{"target", 0, 134219482, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"function", 1, 134219483, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo BaseInvokableCall__ctor_m5018_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BaseInvokableCall__ctor_m5018/* method */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, BaseInvokableCall_t981_BaseInvokableCall__ctor_m5018_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo BaseInvokableCall_t981_BaseInvokableCall_Invoke_m5195_ParameterInfos[] = 
{
	{"args", 0, 134219484, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
MethodInfo BaseInvokableCall_Invoke_m5195_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, BaseInvokableCall_t981_BaseInvokableCall_Invoke_m5195_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo BaseInvokableCall_t981_BaseInvokableCall_ThrowOnInvalidArg_m5196_ParameterInfos[] = 
{
	{"arg", 0, 134219485, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern Il2CppGenericContainer BaseInvokableCall_ThrowOnInvalidArg_m5196_Il2CppGenericContainer;
extern TypeInfo BaseInvokableCall_ThrowOnInvalidArg_m5196_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull BaseInvokableCall_ThrowOnInvalidArg_m5196_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &BaseInvokableCall_ThrowOnInvalidArg_m5196_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* BaseInvokableCall_ThrowOnInvalidArg_m5196_Il2CppGenericParametersArray[1] = 
{
	&BaseInvokableCall_ThrowOnInvalidArg_m5196_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_m5196_MethodInfo;
Il2CppGenericContainer BaseInvokableCall_ThrowOnInvalidArg_m5196_Il2CppGenericContainer = { { NULL, NULL }, NULL, &BaseInvokableCall_ThrowOnInvalidArg_m5196_MethodInfo, 1, 1, BaseInvokableCall_ThrowOnInvalidArg_m5196_Il2CppGenericParametersArray };
extern Il2CppType BaseInvokableCall_ThrowOnInvalidArg_m5196_gp_0_0_0_0;
static Il2CppRGCTXDefinition BaseInvokableCall_ThrowOnInvalidArg_m5196_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_CLASS, &BaseInvokableCall_ThrowOnInvalidArg_m5196_gp_0_0_0_0 }/* Class Definition */,
	{ IL2CPP_RGCTX_DATA_TYPE, &BaseInvokableCall_ThrowOnInvalidArg_m5196_gp_0_0_0_0 }/* Type Definition */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg(System.Object)
MethodInfo BaseInvokableCall_ThrowOnInvalidArg_m5196_MethodInfo = 
{
	"ThrowOnInvalidArg"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, BaseInvokableCall_t981_BaseInvokableCall_ThrowOnInvalidArg_m5196_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, true/* is_generic */
	, false/* is_inflated */
	, 1603/* token */
	, BaseInvokableCall_ThrowOnInvalidArg_m5196_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &BaseInvokableCall_ThrowOnInvalidArg_m5196_Il2CppGenericContainer/* genericContainer */

};
extern Il2CppType Delegate_t743_0_0_0;
extern Il2CppType Delegate_t743_0_0_0;
static ParameterInfo BaseInvokableCall_t981_BaseInvokableCall_AllowInvoke_m5019_ParameterInfos[] = 
{
	{"delegate", 0, 134219486, &EmptyCustomAttributesCache, &Delegate_t743_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
MethodInfo BaseInvokableCall_AllowInvoke_m5019_MethodInfo = 
{
	"AllowInvoke"/* name */
	, (methodPointerType)&BaseInvokableCall_AllowInvoke_m5019/* method */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, BaseInvokableCall_t981_BaseInvokableCall_AllowInvoke_m5019_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo BaseInvokableCall_t981_BaseInvokableCall_Find_m5197_ParameterInfos[] = 
{
	{"targetObj", 0, 134219487, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219488, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo BaseInvokableCall_Find_m5197_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, BaseInvokableCall_t981_BaseInvokableCall_Find_m5197_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BaseInvokableCall_t981_MethodInfos[] =
{
	&BaseInvokableCall__ctor_m5017_MethodInfo,
	&BaseInvokableCall__ctor_m5018_MethodInfo,
	&BaseInvokableCall_Invoke_m5195_MethodInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_m5196_MethodInfo,
	&BaseInvokableCall_AllowInvoke_m5019_MethodInfo,
	&BaseInvokableCall_Find_m5197_MethodInfo,
	NULL
};
static MethodInfo* BaseInvokableCall_t981_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	NULL,
	NULL,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType BaseInvokableCall_t981_0_0_0;
extern Il2CppType BaseInvokableCall_t981_1_0_0;
struct BaseInvokableCall_t981;
TypeInfo BaseInvokableCall_t981_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "BaseInvokableCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, BaseInvokableCall_t981_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, BaseInvokableCall_t981_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* cast_class */
	, &BaseInvokableCall_t981_0_0_0/* byval_arg */
	, &BaseInvokableCall_t981_1_0_0/* this_arg */
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
	, sizeof (BaseInvokableCall_t981)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
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
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_t982_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
extern TypeInfo UnityAction_t576_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
extern Il2CppType UnityAction_t576_0_0_0;
extern MethodInfo Delegate_CreateDelegate_m5198_MethodInfo;
extern MethodInfo Delegate_Combine_m3561_MethodInfo;
extern MethodInfo UnityAction_Invoke_m3532_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall__ctor_m5020_MethodInfo;
 void InvokableCall__ctor_m5020 (InvokableCall_t982 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method){
	{
		BaseInvokableCall__ctor_m5018(__this, ___target, ___theFunction, /*hidden argument*/&BaseInvokableCall__ctor_m5018_MethodInfo);
		UnityAction_t576 * L_0 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&UnityAction_t576_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		Delegate_t743 * L_2 = Delegate_CreateDelegate_m5198(NULL /*static, unused*/, L_1, ___target, ___theFunction, /*hidden argument*/&Delegate_CreateDelegate_m5198_MethodInfo);
		Delegate_t743 * L_3 = Delegate_Combine_m3561(NULL /*static, unused*/, L_0, ((UnityAction_t576 *)IsInst(L_2, InitializedTypeInfo(&UnityAction_t576_il2cpp_TypeInfo))), /*hidden argument*/&Delegate_Combine_m3561_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_t576 *)Castclass(L_3, InitializedTypeInfo(&UnityAction_t576_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern MethodInfo InvokableCall_Invoke_m5021_MethodInfo;
 void InvokableCall_Invoke_m5021 (InvokableCall_t982 * __this, ObjectU5BU5D_t96* ___args, MethodInfo* method){
	{
		UnityAction_t576 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m5019(NULL /*static, unused*/, L_0, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m5019_MethodInfo);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t576 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&UnityAction_Invoke_m3532_MethodInfo, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCall_Find_m5022_MethodInfo;
 bool InvokableCall_Find_m5022 (InvokableCall_t982 * __this, Object_t * ___targetObj, MethodInfo_t211 * ___method, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		UnityAction_t576 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m5194(L_0, /*hidden argument*/&Delegate_get_Target_m5194_MethodInfo);
		if ((((Object_t *)L_1) != ((Object_t *)___targetObj)))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t576 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		MethodInfo_t211 * L_3 = Delegate_get_Method_m5192(L_2, /*hidden argument*/&Delegate_get_Method_m5192_MethodInfo);
		G_B3_0 = ((((MethodInfo_t211 *)L_3) == ((MethodInfo_t211 *)___method))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCall
extern Il2CppType UnityAction_t576_0_0_1;
FieldInfo InvokableCall_t982____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_t576_0_0_1/* type */
	, &InvokableCall_t982_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_t982, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_t982_FieldInfos[] =
{
	&InvokableCall_t982____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_t982_InvokableCall__ctor_m5020_ParameterInfos[] = 
{
	{"target", 0, 134219489, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219490, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall__ctor_m5020_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall__ctor_m5020/* method */
	, &InvokableCall_t982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCall_t982_InvokableCall__ctor_m5020_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_t982_InvokableCall_Invoke_m5021_ParameterInfos[] = 
{
	{"args", 0, 134219491, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
MethodInfo InvokableCall_Invoke_m5021_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_Invoke_m5021/* method */
	, &InvokableCall_t982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCall_t982_InvokableCall_Invoke_m5021_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_t982_InvokableCall_Find_m5022_ParameterInfos[] = 
{
	{"targetObj", 0, 134219492, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219493, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_Find_m5022_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_Find_m5022/* method */
	, &InvokableCall_t982_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, InvokableCall_t982_InvokableCall_Find_m5022_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_t982_MethodInfos[] =
{
	&InvokableCall__ctor_m5020_MethodInfo,
	&InvokableCall_Invoke_m5021_MethodInfo,
	&InvokableCall_Find_m5022_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_t982_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&InvokableCall_Invoke_m5021_MethodInfo,
	&InvokableCall_Find_m5022_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_t982_0_0_0;
extern Il2CppType InvokableCall_t982_1_0_0;
struct InvokableCall_t982;
TypeInfo InvokableCall_t982_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_t982_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_t982_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t981_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_t982_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_t982_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_t982_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_t982_0_0_0/* byval_arg */
	, &InvokableCall_t982_1_0_0/* this_arg */
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
	, sizeof (InvokableCall_t982)/* instance_size */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.InvokableCall`1
#include "UnityEngine_UnityEngine_Events_InvokableCall_1.h"
extern Il2CppGenericContainer InvokableCall_1_t983_Il2CppGenericContainer;
extern TypeInfo InvokableCall_1_t983_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_1_t983_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_1_t983_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_1_t983_Il2CppGenericParametersArray[1] = 
{
	&InvokableCall_1_t983_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_1_t983_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_1_t983_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_1_t983_il2cpp_TypeInfo, 1, 0, InvokableCall_1_t983_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t983_InvokableCall_1__ctor_m5199_ParameterInfos[] = 
{
	{"target", 0, 134219494, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219495, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`1::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m5199_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_1_t983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t983_InvokableCall_1__ctor_m5199_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t1082_0_0_0;
extern Il2CppType UnityAction_1_t1082_0_0_0;
static ParameterInfo InvokableCall_1_t983_InvokableCall_1__ctor_m5200_ParameterInfos[] = 
{
	{"callback", 0, 134219496, &EmptyCustomAttributesCache, &UnityAction_1_t1082_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`1::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m5200_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_1_t983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t983_InvokableCall_1__ctor_m5200_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_1_t983_InvokableCall_1_Invoke_m5201_ParameterInfos[] = 
{
	{"args", 0, 134219497, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`1::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m5201_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_1_t983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t983_InvokableCall_1_Invoke_m5201_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_1_t983_InvokableCall_1_Find_m5202_ParameterInfos[] = 
{
	{"targetObj", 0, 134219498, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219499, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`1::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m5202_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_1_t983_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_1_t983_InvokableCall_1_Find_m5202_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1612/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_1_t983_MethodInfos[] =
{
	&InvokableCall_1__ctor_m5199_MethodInfo,
	&InvokableCall_1__ctor_m5200_MethodInfo,
	&InvokableCall_1_Invoke_m5201_MethodInfo,
	&InvokableCall_1_Find_m5202_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_1_t1082_0_0_1;
FieldInfo InvokableCall_1_t983____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t1082_0_0_1/* type */
	, &InvokableCall_1_t983_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t983_FieldInfos[] =
{
	&InvokableCall_1_t983____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t983_0_0_0;
extern Il2CppType InvokableCall_1_t983_1_0_0;
struct InvokableCall_1_t983;
TypeInfo InvokableCall_1_t983_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t983_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t983_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t983_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_1_t983_0_0_0/* byval_arg */
	, &InvokableCall_1_t983_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_1_t983_Il2CppGenericContainer/* generic_container */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.InvokableCall`2
#include "UnityEngine_UnityEngine_Events_InvokableCall_2.h"
extern Il2CppGenericContainer InvokableCall_2_t984_Il2CppGenericContainer;
extern TypeInfo InvokableCall_2_t984_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_2_t984_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_2_t984_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo InvokableCall_2_t984_gp_T2_1_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_2_t984_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_2_t984_Il2CppGenericContainer, 1}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_2_t984_Il2CppGenericParametersArray[2] = 
{
	&InvokableCall_2_t984_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_2_t984_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_2_t984_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_2_t984_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_2_t984_il2cpp_TypeInfo, 2, 0, InvokableCall_2_t984_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_2_t984_InvokableCall_2__ctor_m5203_ParameterInfos[] = 
{
	{"target", 0, 134219500, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219501, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`2::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_2__ctor_m5203_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_2_t984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t984_InvokableCall_2__ctor_m5203_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1613/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_2_t984_InvokableCall_2_Invoke_m5204_ParameterInfos[] = 
{
	{"args", 0, 134219502, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`2::Invoke(System.Object[])
MethodInfo InvokableCall_2_Invoke_m5204_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_2_t984_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t984_InvokableCall_2_Invoke_m5204_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1614/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_2_t984_InvokableCall_2_Find_m5205_ParameterInfos[] = 
{
	{"targetObj", 0, 134219503, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219504, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`2::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_2_Find_m5205_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_2_t984_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_2_t984_InvokableCall_2_Find_m5205_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1615/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_2_t984_MethodInfos[] =
{
	&InvokableCall_2__ctor_m5203_MethodInfo,
	&InvokableCall_2_Invoke_m5204_MethodInfo,
	&InvokableCall_2_Find_m5205_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_2_t1085_0_0_1;
FieldInfo InvokableCall_2_t984____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_2_t1085_0_0_1/* type */
	, &InvokableCall_2_t984_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_2_t984_FieldInfos[] =
{
	&InvokableCall_2_t984____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_2_t984_0_0_0;
extern Il2CppType InvokableCall_2_t984_1_0_0;
struct InvokableCall_2_t984;
TypeInfo InvokableCall_2_t984_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_2_t984_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_2_t984_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_2_t984_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_2_t984_0_0_0/* byval_arg */
	, &InvokableCall_2_t984_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_2_t984_Il2CppGenericContainer/* generic_container */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.InvokableCall`3
#include "UnityEngine_UnityEngine_Events_InvokableCall_3.h"
extern Il2CppGenericContainer InvokableCall_3_t985_Il2CppGenericContainer;
extern TypeInfo InvokableCall_3_t985_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_3_t985_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_3_t985_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo InvokableCall_3_t985_gp_T2_1_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_3_t985_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_3_t985_Il2CppGenericContainer, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo InvokableCall_3_t985_gp_T3_2_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_3_t985_gp_T3_2_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_3_t985_Il2CppGenericContainer, 2}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_3_t985_Il2CppGenericParametersArray[3] = 
{
	&InvokableCall_3_t985_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_3_t985_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_3_t985_gp_T3_2_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_3_t985_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_3_t985_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_3_t985_il2cpp_TypeInfo, 3, 0, InvokableCall_3_t985_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_3_t985_InvokableCall_3__ctor_m5206_ParameterInfos[] = 
{
	{"target", 0, 134219505, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219506, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`3::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_3__ctor_m5206_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_3_t985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t985_InvokableCall_3__ctor_m5206_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1616/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_3_t985_InvokableCall_3_Invoke_m5207_ParameterInfos[] = 
{
	{"args", 0, 134219507, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`3::Invoke(System.Object[])
MethodInfo InvokableCall_3_Invoke_m5207_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_3_t985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t985_InvokableCall_3_Invoke_m5207_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1617/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_3_t985_InvokableCall_3_Find_m5208_ParameterInfos[] = 
{
	{"targetObj", 0, 134219508, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219509, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`3::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_3_Find_m5208_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_3_t985_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_3_t985_InvokableCall_3_Find_m5208_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1618/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_3_t985_MethodInfos[] =
{
	&InvokableCall_3__ctor_m5206_MethodInfo,
	&InvokableCall_3_Invoke_m5207_MethodInfo,
	&InvokableCall_3_Find_m5208_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_3_t1089_0_0_1;
FieldInfo InvokableCall_3_t985____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_3_t1089_0_0_1/* type */
	, &InvokableCall_3_t985_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_3_t985_FieldInfos[] =
{
	&InvokableCall_3_t985____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_3_t985_0_0_0;
extern Il2CppType InvokableCall_3_t985_1_0_0;
struct InvokableCall_3_t985;
TypeInfo InvokableCall_3_t985_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_3_t985_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_3_t985_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_3_t985_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_3_t985_0_0_0/* byval_arg */
	, &InvokableCall_3_t985_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_3_t985_Il2CppGenericContainer/* generic_container */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.InvokableCall`4
#include "UnityEngine_UnityEngine_Events_InvokableCall_4.h"
extern Il2CppGenericContainer InvokableCall_4_t986_Il2CppGenericContainer;
extern TypeInfo InvokableCall_4_t986_gp_T1_0_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t986_gp_T1_0_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t986_Il2CppGenericContainer, 0}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo InvokableCall_4_t986_gp_T2_1_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t986_gp_T2_1_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t986_Il2CppGenericContainer, 1}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo InvokableCall_4_t986_gp_T3_2_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t986_gp_T3_2_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t986_Il2CppGenericContainer, 2}, {NULL, "T3", 0, 0, NULL} };
extern TypeInfo InvokableCall_4_t986_gp_T4_3_il2cpp_TypeInfo;
Il2CppGenericParamFull InvokableCall_4_t986_gp_T4_3_il2cpp_TypeInfo_GenericParamFull = { { &InvokableCall_4_t986_Il2CppGenericContainer, 3}, {NULL, "T4", 0, 0, NULL} };
static Il2CppGenericParamFull* InvokableCall_4_t986_Il2CppGenericParametersArray[4] = 
{
	&InvokableCall_4_t986_gp_T1_0_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t986_gp_T2_1_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t986_gp_T3_2_il2cpp_TypeInfo_GenericParamFull,
	&InvokableCall_4_t986_gp_T4_3_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo InvokableCall_4_t986_il2cpp_TypeInfo;
Il2CppGenericContainer InvokableCall_4_t986_Il2CppGenericContainer = { { NULL, NULL }, NULL, &InvokableCall_4_t986_il2cpp_TypeInfo, 4, 0, InvokableCall_4_t986_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_4_t986_InvokableCall_4__ctor_m5209_ParameterInfos[] = 
{
	{"target", 0, 134219510, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219511, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`4::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_4__ctor_m5209_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &InvokableCall_4_t986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t986_InvokableCall_4__ctor_m5209_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1619/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCall_4_t986_InvokableCall_4_Invoke_m5210_ParameterInfos[] = 
{
	{"args", 0, 134219512, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.InvokableCall`4::Invoke(System.Object[])
MethodInfo InvokableCall_4_Invoke_m5210_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &InvokableCall_4_t986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t986_InvokableCall_4_Invoke_m5210_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1620/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCall_4_t986_InvokableCall_4_Find_m5211_ParameterInfos[] = 
{
	{"targetObj", 0, 134219513, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219514, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
// System.Boolean UnityEngine.Events.InvokableCall`4::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_4_Find_m5211_MethodInfo = 
{
	"Find"/* name */
	, NULL/* method */
	, &InvokableCall_4_t986_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, NULL/* invoker_method */
	, InvokableCall_4_t986_InvokableCall_4_Find_m5211_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1621/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCall_4_t986_MethodInfos[] =
{
	&InvokableCall_4__ctor_m5209_MethodInfo,
	&InvokableCall_4_Invoke_m5210_MethodInfo,
	&InvokableCall_4_Find_m5211_MethodInfo,
	NULL
};
extern Il2CppType UnityAction_4_t1094_0_0_1;
FieldInfo InvokableCall_4_t986____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_4_t1094_0_0_1/* type */
	, &InvokableCall_4_t986_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_4_t986_FieldInfos[] =
{
	&InvokableCall_4_t986____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_4_t986_0_0_0;
extern Il2CppType InvokableCall_4_t986_1_0_0;
struct InvokableCall_4_t986;
TypeInfo InvokableCall_4_t986_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_4_t986_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_4_t986_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_4_t986_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &InvokableCall_4_t986_0_0_0/* byval_arg */
	, &InvokableCall_4_t986_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &InvokableCall_4_t986_Il2CppGenericContainer/* generic_container */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1.h"
extern Il2CppGenericContainer CachedInvokableCall_1_t987_Il2CppGenericContainer;
extern TypeInfo CachedInvokableCall_1_t987_gp_T_0_il2cpp_TypeInfo;
Il2CppGenericParamFull CachedInvokableCall_1_t987_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { { &CachedInvokableCall_1_t987_Il2CppGenericContainer, 0}, {NULL, "T", 0, 0, NULL} };
static Il2CppGenericParamFull* CachedInvokableCall_1_t987_Il2CppGenericParametersArray[1] = 
{
	&CachedInvokableCall_1_t987_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo CachedInvokableCall_1_t987_il2cpp_TypeInfo;
Il2CppGenericContainer CachedInvokableCall_1_t987_Il2CppGenericContainer = { { NULL, NULL }, NULL, &CachedInvokableCall_1_t987_il2cpp_TypeInfo, 1, 0, CachedInvokableCall_1_t987_Il2CppGenericParametersArray };
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType CachedInvokableCall_1_t987_gp_0_0_0_0;
extern Il2CppType CachedInvokableCall_1_t987_gp_0_0_0_0;
static ParameterInfo CachedInvokableCall_1_t987_CachedInvokableCall_1__ctor_m5212_ParameterInfos[] = 
{
	{"target", 0, 134219515, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"theFunction", 1, 134219516, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"argument", 2, 134219517, &EmptyCustomAttributesCache, &CachedInvokableCall_1_t987_gp_0_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.CachedInvokableCall`1::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m5212_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &CachedInvokableCall_1_t987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, CachedInvokableCall_1_t987_CachedInvokableCall_1__ctor_m5212_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1622/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo CachedInvokableCall_1_t987_CachedInvokableCall_1_Invoke_m5213_ParameterInfos[] = 
{
	{"args", 0, 134219518, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.CachedInvokableCall`1::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m5213_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &CachedInvokableCall_1_t987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, CachedInvokableCall_1_t987_CachedInvokableCall_1_Invoke_m5213_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1623/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CachedInvokableCall_1_t987_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m5212_MethodInfo,
	&CachedInvokableCall_1_Invoke_m5213_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo CachedInvokableCall_1_t987____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &CachedInvokableCall_1_t987_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t987_FieldInfos[] =
{
	&CachedInvokableCall_1_t987____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t987_0_0_0;
extern Il2CppType CachedInvokableCall_1_t987_1_0_0;
struct CachedInvokableCall_1_t987;
TypeInfo CachedInvokableCall_1_t987_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t987_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t987_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t987_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &CachedInvokableCall_1_t987_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t987_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &CachedInvokableCall_1_t987_Il2CppGenericContainer/* generic_container */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEventCallState_t988_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// Metadata Definition UnityEngine.Events.UnityEventCallState
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo UnityEventCallState_t988____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &UnityEventCallState_t988_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventCallState_t988, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t988_0_0_32854;
FieldInfo UnityEventCallState_t988____Off_2_FieldInfo = 
{
	"Off"/* name */
	, &UnityEventCallState_t988_0_0_32854/* type */
	, &UnityEventCallState_t988_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t988_0_0_32854;
FieldInfo UnityEventCallState_t988____EditorAndRuntime_3_FieldInfo = 
{
	"EditorAndRuntime"/* name */
	, &UnityEventCallState_t988_0_0_32854/* type */
	, &UnityEventCallState_t988_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t988_0_0_32854;
FieldInfo UnityEventCallState_t988____RuntimeOnly_4_FieldInfo = 
{
	"RuntimeOnly"/* name */
	, &UnityEventCallState_t988_0_0_32854/* type */
	, &UnityEventCallState_t988_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEventCallState_t988_FieldInfos[] =
{
	&UnityEventCallState_t988____value___1_FieldInfo,
	&UnityEventCallState_t988____Off_2_FieldInfo,
	&UnityEventCallState_t988____EditorAndRuntime_3_FieldInfo,
	&UnityEventCallState_t988____RuntimeOnly_4_FieldInfo,
	NULL
};
static const int32_t UnityEventCallState_t988____Off_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UnityEventCallState_t988____Off_2_DefaultValue = 
{
	&UnityEventCallState_t988____Off_2_FieldInfo/* field */
	, { (char*)&UnityEventCallState_t988____Off_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UnityEventCallState_t988____EditorAndRuntime_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UnityEventCallState_t988____EditorAndRuntime_3_DefaultValue = 
{
	&UnityEventCallState_t988____EditorAndRuntime_3_FieldInfo/* field */
	, { (char*)&UnityEventCallState_t988____EditorAndRuntime_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UnityEventCallState_t988____RuntimeOnly_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UnityEventCallState_t988____RuntimeOnly_4_DefaultValue = 
{
	&UnityEventCallState_t988____RuntimeOnly_4_FieldInfo/* field */
	, { (char*)&UnityEventCallState_t988____RuntimeOnly_4_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UnityEventCallState_t988_FieldDefaultValues[] = 
{
	&UnityEventCallState_t988____Off_2_DefaultValue,
	&UnityEventCallState_t988____EditorAndRuntime_3_DefaultValue,
	&UnityEventCallState_t988____RuntimeOnly_4_DefaultValue,
	NULL
};
static MethodInfo* UnityEventCallState_t988_MethodInfos[] =
{
	NULL
};
static MethodInfo* UnityEventCallState_t988_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityEventCallState_t988_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEventCallState_t988_0_0_0;
extern Il2CppType UnityEventCallState_t988_1_0_0;
TypeInfo UnityEventCallState_t988_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEventCallState"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEventCallState_t988_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEventCallState_t988_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityEventCallState_t988_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &UnityEventCallState_t988_0_0_0/* byval_arg */
	, &UnityEventCallState_t988_1_0_0/* this_arg */
	, UnityEventCallState_t988_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UnityEventCallState_t988_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEventCallState_t988)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCall_t989_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
extern TypeInfo UnityEventBase_t990_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t211_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1096_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1097_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1098_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t1099_il2cpp_TypeInfo;
extern TypeInfo Object_t151_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t160_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfo_t1100_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
extern Il2CppType CachedInvokableCall_1_t987_0_0_0;
extern MethodInfo PersistentCall_get_target_m5024_MethodInfo;
extern MethodInfo PersistentCall_get_methodName_m5025_MethodInfo;
extern MethodInfo String_IsNullOrEmpty_m566_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m5040_MethodInfo;
extern MethodInfo UnityEventBase_GetDelegate_m5214_MethodInfo;
extern MethodInfo PersistentCall_GetObjectCall_m5030_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5215_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5216_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5217_MethodInfo;
extern MethodInfo CachedInvokableCall_1__ctor_m5218_MethodInfo;
extern MethodInfo Type_GetType_m1652_MethodInfo;
extern MethodInfo Type_MakeGenericType_m5219_MethodInfo;
extern MethodInfo Type_GetConstructor_m5220_MethodInfo;
extern MethodInfo Object_GetType_m641_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m1525_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m5221_MethodInfo;


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern MethodInfo PersistentCall__ctor_m5023_MethodInfo;
 void PersistentCall__ctor_m5023 (PersistentCall_t989 * __this, MethodInfo* method){
	{
		ArgumentCache_t980 * L_0 = (ArgumentCache_t980 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentCache_t980_il2cpp_TypeInfo));
		ArgumentCache__ctor_m5010(L_0, /*hidden argument*/&ArgumentCache__ctor_m5010_MethodInfo);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t151 * PersistentCall_get_target_m5024 (PersistentCall_t989 * __this, MethodInfo* method){
	{
		Object_t151 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m5025 (PersistentCall_t989 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern MethodInfo PersistentCall_get_mode_m5026_MethodInfo;
 int32_t PersistentCall_get_mode_m5026 (PersistentCall_t989 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern MethodInfo PersistentCall_get_arguments_m5027_MethodInfo;
 ArgumentCache_t980 * PersistentCall_get_arguments_m5027 (PersistentCall_t989 * __this, MethodInfo* method){
	{
		ArgumentCache_t980 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern MethodInfo PersistentCall_IsValid_m5028_MethodInfo;
 bool PersistentCall_IsValid_m5028 (PersistentCall_t989 * __this, MethodInfo* method){
	int32_t G_B3_0 = 0;
	{
		Object_t151 * L_0 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		bool L_1 = Object_op_Inequality_m1203(NULL /*static, unused*/, L_0, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Inequality_m1203_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m5025(__this, /*hidden argument*/&PersistentCall_get_methodName_m5025_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m566(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m566_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCall_GetRuntimeCall_m5029_MethodInfo;
 BaseInvokableCall_t981 * PersistentCall_GetRuntimeCall_m5029 (PersistentCall_t989 * __this, UnityEventBase_t990 * ___theEvent, MethodInfo* method){
	MethodInfo_t211 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		if (___theEvent)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t981 *)NULL;
	}

IL_0013:
	{
		NullCheck(___theEvent);
		MethodInfo_t211 * L_1 = UnityEventBase_FindMethod_m5040(___theEvent, __this, /*hidden argument*/&UnityEventBase_FindMethod_m5040_MethodInfo);
		V_0 = L_1;
		if (V_0)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t981 *)NULL;
	}

IL_0023:
	{
		int32_t L_2 = (__this->___m_Mode_2);
		V_1 = L_2;
		if (V_1 == 0)
		{
			goto IL_0051;
		}
		if (V_1 == 1)
		{
			goto IL_00d2;
		}
		if (V_1 == 2)
		{
			goto IL_005f;
		}
		if (V_1 == 3)
		{
			goto IL_008a;
		}
		if (V_1 == 4)
		{
			goto IL_0072;
		}
		if (V_1 == 5)
		{
			goto IL_00a2;
		}
		if (V_1 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		Object_t151 * L_3 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		NullCheck(___theEvent);
		BaseInvokableCall_t981 * L_4 = (BaseInvokableCall_t981 *)VirtFuncInvoker2< BaseInvokableCall_t981 *, Object_t *, MethodInfo_t211 * >::Invoke(&UnityEventBase_GetDelegate_m5214_MethodInfo, ___theEvent, L_3, V_0);
		return L_4;
	}

IL_005f:
	{
		Object_t151 * L_5 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		ArgumentCache_t980 * L_6 = (__this->___m_Arguments_3);
		BaseInvokableCall_t981 * L_7 = PersistentCall_GetObjectCall_m5030(NULL /*static, unused*/, L_5, V_0, L_6, /*hidden argument*/&PersistentCall_GetObjectCall_m5030_MethodInfo);
		return L_7;
	}

IL_0072:
	{
		Object_t151 * L_8 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		ArgumentCache_t980 * L_9 = (__this->___m_Arguments_3);
		NullCheck(L_9);
		float L_10 = ArgumentCache_get_floatArgument_m5014(L_9, /*hidden argument*/&ArgumentCache_get_floatArgument_m5014_MethodInfo);
		CachedInvokableCall_1_t1096 * L_11 = (CachedInvokableCall_1_t1096 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t1096_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5215(L_11, L_8, V_0, L_10, /*hidden argument*/&CachedInvokableCall_1__ctor_m5215_MethodInfo);
		return L_11;
	}

IL_008a:
	{
		Object_t151 * L_12 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		ArgumentCache_t980 * L_13 = (__this->___m_Arguments_3);
		NullCheck(L_13);
		int32_t L_14 = ArgumentCache_get_intArgument_m5013(L_13, /*hidden argument*/&ArgumentCache_get_intArgument_m5013_MethodInfo);
		CachedInvokableCall_1_t1097 * L_15 = (CachedInvokableCall_1_t1097 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t1097_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5216(L_15, L_12, V_0, L_14, /*hidden argument*/&CachedInvokableCall_1__ctor_m5216_MethodInfo);
		return L_15;
	}

IL_00a2:
	{
		Object_t151 * L_16 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		ArgumentCache_t980 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		String_t* L_18 = ArgumentCache_get_stringArgument_m5015(L_17, /*hidden argument*/&ArgumentCache_get_stringArgument_m5015_MethodInfo);
		CachedInvokableCall_1_t1098 * L_19 = (CachedInvokableCall_1_t1098 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t1098_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5217(L_19, L_16, V_0, L_18, /*hidden argument*/&CachedInvokableCall_1__ctor_m5217_MethodInfo);
		return L_19;
	}

IL_00ba:
	{
		Object_t151 * L_20 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		ArgumentCache_t980 * L_21 = (__this->___m_Arguments_3);
		NullCheck(L_21);
		bool L_22 = ArgumentCache_get_boolArgument_m5016(L_21, /*hidden argument*/&ArgumentCache_get_boolArgument_m5016_MethodInfo);
		CachedInvokableCall_1_t1099 * L_23 = (CachedInvokableCall_1_t1099 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CachedInvokableCall_1_t1099_il2cpp_TypeInfo));
		CachedInvokableCall_1__ctor_m5218(L_23, L_20, V_0, L_22, /*hidden argument*/&CachedInvokableCall_1__ctor_m5218_MethodInfo);
		return L_23;
	}

IL_00d2:
	{
		Object_t151 * L_24 = PersistentCall_get_target_m5024(__this, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		InvokableCall_t982 * L_25 = (InvokableCall_t982 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t982_il2cpp_TypeInfo));
		InvokableCall__ctor_m5020(L_25, L_24, V_0, /*hidden argument*/&InvokableCall__ctor_m5020_MethodInfo);
		return L_25;
	}

IL_00df:
	{
		return (BaseInvokableCall_t981 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t981 * PersistentCall_GetObjectCall_m5030 (Object_t * __this/* static, unused */, Object_t151 * ___target, MethodInfo_t211 * ___method, ArgumentCache_t980 * ___arguments, MethodInfo* method){
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t1100 * V_3 = {0};
	Object_t151 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Object_t151_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		V_0 = L_0;
		NullCheck(___arguments);
		String_t* L_1 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012(___arguments, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_IsNullOrEmpty_m566(NULL /*static, unused*/, L_1, /*hidden argument*/&String_IsNullOrEmpty_m566_MethodInfo);
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		NullCheck(___arguments);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012(___arguments, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetType_m1652(NULL /*static, unused*/, L_3, 0, /*hidden argument*/&Type_GetType_m1652_MethodInfo);
		Type_t * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Object_t151_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_7 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&CachedInvokableCall_1_t987_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		V_1 = L_7;
		TypeU5BU5D_t160* L_8 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, V_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 0)) = (Type_t *)V_0;
		NullCheck(V_1);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t160* >::Invoke(&Type_MakeGenericType_m5219_MethodInfo, V_1, L_8);
		V_2 = L_9;
		TypeU5BU5D_t160* L_10 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 3));
		Type_t * L_11 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Object_t151_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		TypeU5BU5D_t160* L_12 = L_10;
		Type_t * L_13 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&MethodInfo_t211_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_12, 1)) = (Type_t *)L_13;
		TypeU5BU5D_t160* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, V_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 2)) = (Type_t *)V_0;
		NullCheck(V_2);
		ConstructorInfo_t1100 * L_15 = (ConstructorInfo_t1100 *)VirtFuncInvoker1< ConstructorInfo_t1100 *, TypeU5BU5D_t160* >::Invoke(&Type_GetConstructor_m5220_MethodInfo, V_2, L_14);
		V_3 = L_15;
		NullCheck(___arguments);
		Object_t151 * L_16 = ArgumentCache_get_unityObjectArgument_m5011(___arguments, /*hidden argument*/&ArgumentCache_get_unityObjectArgument_m5011_MethodInfo);
		V_4 = L_16;
		bool L_17 = Object_op_Inequality_m1203(NULL /*static, unused*/, V_4, (Object_t151 *)NULL, /*hidden argument*/&Object_op_Inequality_m1203_MethodInfo);
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		NullCheck(V_4);
		Type_t * L_18 = Object_GetType_m641(V_4, /*hidden argument*/&Object_GetType_m641_MethodInfo);
		NullCheck(V_0);
		bool L_19 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m1525_MethodInfo, V_0, L_18);
		if (L_19)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t151 *)NULL;
	}

IL_00aa:
	{
		ObjectU5BU5D_t96* L_20 = ((ObjectU5BU5D_t96*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t96_il2cpp_TypeInfo), 3));
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, ___target);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0)) = (Object_t *)___target;
		ObjectU5BU5D_t96* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, ___method);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1)) = (Object_t *)___method;
		ObjectU5BU5D_t96* L_22 = L_21;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, V_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 2)) = (Object_t *)V_4;
		NullCheck(V_3);
		Object_t * L_23 = ConstructorInfo_Invoke_m5221(V_3, L_22, /*hidden argument*/&ConstructorInfo_Invoke_m5221_MethodInfo);
		return ((BaseInvokableCall_t981 *)IsInst(L_23, InitializedTypeInfo(&BaseInvokableCall_t981_il2cpp_TypeInfo)));
	}
}
// Metadata Definition UnityEngine.Events.PersistentCall
extern Il2CppType Object_t151_0_0_1;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Target;
FieldInfo PersistentCall_t989____m_Target_0_FieldInfo = 
{
	"m_Target"/* name */
	, &Object_t151_0_0_1/* type */
	, &PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t989, ___m_Target_0)/* data */
	, &PersistentCall_t989__CustomAttributeCache_m_Target/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_MethodName;
FieldInfo PersistentCall_t989____m_MethodName_1_FieldInfo = 
{
	"m_MethodName"/* name */
	, &String_t_0_0_1/* type */
	, &PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t989, ___m_MethodName_1)/* data */
	, &PersistentCall_t989__CustomAttributeCache_m_MethodName/* custom_attributes_cache */

};
extern Il2CppType PersistentListenerMode_t979_0_0_1;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Mode;
FieldInfo PersistentCall_t989____m_Mode_2_FieldInfo = 
{
	"m_Mode"/* name */
	, &PersistentListenerMode_t979_0_0_1/* type */
	, &PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t989, ___m_Mode_2)/* data */
	, &PersistentCall_t989__CustomAttributeCache_m_Mode/* custom_attributes_cache */

};
extern Il2CppType ArgumentCache_t980_0_0_1;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Arguments;
FieldInfo PersistentCall_t989____m_Arguments_3_FieldInfo = 
{
	"m_Arguments"/* name */
	, &ArgumentCache_t980_0_0_1/* type */
	, &PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t989, ___m_Arguments_3)/* data */
	, &PersistentCall_t989__CustomAttributeCache_m_Arguments/* custom_attributes_cache */

};
extern Il2CppType UnityEventCallState_t988_0_0_1;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_CallState;
FieldInfo PersistentCall_t989____m_CallState_4_FieldInfo = 
{
	"m_CallState"/* name */
	, &UnityEventCallState_t988_0_0_1/* type */
	, &PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCall_t989, ___m_CallState_4)/* data */
	, &PersistentCall_t989__CustomAttributeCache_m_CallState/* custom_attributes_cache */

};
static FieldInfo* PersistentCall_t989_FieldInfos[] =
{
	&PersistentCall_t989____m_Target_0_FieldInfo,
	&PersistentCall_t989____m_MethodName_1_FieldInfo,
	&PersistentCall_t989____m_Mode_2_FieldInfo,
	&PersistentCall_t989____m_Arguments_3_FieldInfo,
	&PersistentCall_t989____m_CallState_4_FieldInfo,
	NULL
};
static PropertyInfo PersistentCall_t989____target_PropertyInfo = 
{
	&PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, "target"/* name */
	, &PersistentCall_get_target_m5024_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo PersistentCall_t989____methodName_PropertyInfo = 
{
	&PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, "methodName"/* name */
	, &PersistentCall_get_methodName_m5025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo PersistentCall_t989____mode_PropertyInfo = 
{
	&PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, "mode"/* name */
	, &PersistentCall_get_mode_m5026_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo PersistentCall_t989____arguments_PropertyInfo = 
{
	&PersistentCall_t989_il2cpp_TypeInfo/* parent */
	, "arguments"/* name */
	, &PersistentCall_get_arguments_m5027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PersistentCall_t989_PropertyInfos[] =
{
	&PersistentCall_t989____target_PropertyInfo,
	&PersistentCall_t989____methodName_PropertyInfo,
	&PersistentCall_t989____mode_PropertyInfo,
	&PersistentCall_t989____arguments_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCall::.ctor()
MethodInfo PersistentCall__ctor_m5023_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PersistentCall__ctor_m5023/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1624/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t151_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
MethodInfo PersistentCall_get_target_m5024_MethodInfo = 
{
	"get_target"/* name */
	, (methodPointerType)&PersistentCall_get_target_m5024/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &Object_t151_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1625/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.PersistentCall::get_methodName()
MethodInfo PersistentCall_get_methodName_m5025_MethodInfo = 
{
	"get_methodName"/* name */
	, (methodPointerType)&PersistentCall_get_methodName_m5025/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1626/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType PersistentListenerMode_t979_0_0_0;
extern void* RuntimeInvoker_PersistentListenerMode_t979 (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
MethodInfo PersistentCall_get_mode_m5026_MethodInfo = 
{
	"get_mode"/* name */
	, (methodPointerType)&PersistentCall_get_mode_m5026/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &PersistentListenerMode_t979_0_0_0/* return_type */
	, RuntimeInvoker_PersistentListenerMode_t979/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1627/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ArgumentCache_t980_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
MethodInfo PersistentCall_get_arguments_m5027_MethodInfo = 
{
	"get_arguments"/* name */
	, (methodPointerType)&PersistentCall_get_arguments_m5027/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentCache_t980_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1628/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
MethodInfo PersistentCall_IsValid_m5028_MethodInfo = 
{
	"IsValid"/* name */
	, (methodPointerType)&PersistentCall_IsValid_m5028/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1629/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityEventBase_t990_0_0_0;
extern Il2CppType UnityEventBase_t990_0_0_0;
static ParameterInfo PersistentCall_t989_PersistentCall_GetRuntimeCall_m5029_ParameterInfos[] = 
{
	{"theEvent", 0, 134219519, &EmptyCustomAttributesCache, &UnityEventBase_t990_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
MethodInfo PersistentCall_GetRuntimeCall_m5029_MethodInfo = 
{
	"GetRuntimeCall"/* name */
	, (methodPointerType)&PersistentCall_GetRuntimeCall_m5029/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PersistentCall_t989_PersistentCall_GetRuntimeCall_m5029_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1630/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t151_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
extern Il2CppType ArgumentCache_t980_0_0_0;
static ParameterInfo PersistentCall_t989_PersistentCall_GetObjectCall_m5030_ParameterInfos[] = 
{
	{"target", 0, 134219520, &EmptyCustomAttributesCache, &Object_t151_0_0_0},
	{"method", 1, 134219521, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
	{"arguments", 2, 134219522, &EmptyCustomAttributesCache, &ArgumentCache_t980_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
MethodInfo PersistentCall_GetObjectCall_m5030_MethodInfo = 
{
	"GetObjectCall"/* name */
	, (methodPointerType)&PersistentCall_GetObjectCall_m5030/* method */
	, &PersistentCall_t989_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PersistentCall_t989_PersistentCall_GetObjectCall_m5030_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1631/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PersistentCall_t989_MethodInfos[] =
{
	&PersistentCall__ctor_m5023_MethodInfo,
	&PersistentCall_get_target_m5024_MethodInfo,
	&PersistentCall_get_methodName_m5025_MethodInfo,
	&PersistentCall_get_mode_m5026_MethodInfo,
	&PersistentCall_get_arguments_m5027_MethodInfo,
	&PersistentCall_IsValid_m5028_MethodInfo,
	&PersistentCall_GetRuntimeCall_m5029_MethodInfo,
	&PersistentCall_GetObjectCall_m5030_MethodInfo,
	NULL
};
static MethodInfo* PersistentCall_t989_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
void PersistentCall_t989_CustomAttributesCacheGenerator_m_Target(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("instance"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t989_CustomAttributesCacheGenerator_m_MethodName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("methodName"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t989_CustomAttributesCacheGenerator_m_Mode(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("mode"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t989_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("arguments"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void PersistentCall_t989_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("enabled"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Target = {
2,
NULL,
&PersistentCall_t989_CustomAttributesCacheGenerator_m_Target
};
CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_MethodName = {
2,
NULL,
&PersistentCall_t989_CustomAttributesCacheGenerator_m_MethodName
};
CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Mode = {
2,
NULL,
&PersistentCall_t989_CustomAttributesCacheGenerator_m_Mode
};
CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Arguments = {
2,
NULL,
&PersistentCall_t989_CustomAttributesCacheGenerator_m_Arguments
};
CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_CallState = {
3,
NULL,
&PersistentCall_t989_CustomAttributesCacheGenerator_m_CallState
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType PersistentCall_t989_0_0_0;
extern Il2CppType PersistentCall_t989_1_0_0;
struct PersistentCall_t989;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Target;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_MethodName;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Mode;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_Arguments;
extern CustomAttributesCache PersistentCall_t989__CustomAttributeCache_m_CallState;
TypeInfo PersistentCall_t989_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentCall"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentCall_t989_MethodInfos/* methods */
	, PersistentCall_t989_PropertyInfos/* properties */
	, PersistentCall_t989_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PersistentCall_t989_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PersistentCall_t989_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PersistentCall_t989_il2cpp_TypeInfo/* cast_class */
	, &PersistentCall_t989_0_0_0/* byval_arg */
	, &PersistentCall_t989_1_0_0/* this_arg */
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
	, sizeof (PersistentCall_t989)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
	, 8/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PersistentCallGroup_t992_il2cpp_TypeInfo;
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"
extern TypeInfo List_1_t991_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t1101_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
extern MethodInfo List_1__ctor_m5222_MethodInfo;
extern MethodInfo List_1_GetEnumerator_m5223_MethodInfo;
extern MethodInfo Enumerator_get_Current_m5224_MethodInfo;
extern MethodInfo InvokableCallList_AddPersistentInvokableCall_m5034_MethodInfo;
extern MethodInfo Enumerator_MoveNext_m5225_MethodInfo;
extern MethodInfo IDisposable_Dispose_m488_MethodInfo;


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern MethodInfo PersistentCallGroup__ctor_m5031_MethodInfo;
 void PersistentCallGroup__ctor_m5031 (PersistentCallGroup_t992 * __this, MethodInfo* method){
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t991_il2cpp_TypeInfo));
		List_1_t991 * L_0 = (List_1_t991 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t991_il2cpp_TypeInfo));
		List_1__ctor_m5222(L_0, /*hidden argument*/&List_1__ctor_m5222_MethodInfo);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern MethodInfo PersistentCallGroup_Initialize_m5032_MethodInfo;
 void PersistentCallGroup_Initialize_m5032 (PersistentCallGroup_t992 * __this, InvokableCallList_t993 * ___invokableList, UnityEventBase_t990 * ___unityEventBase, MethodInfo* method){
	PersistentCall_t989 * V_0 = {0};
	Enumerator_t1101  V_1 = {0};
	BaseInvokableCall_t981 * V_2 = {0};
	int32_t leaveInstructions[1] = {0};
	Exception_t82 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t82 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		List_1_t991 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t1101  L_1 = List_1_GetEnumerator_m5223(L_0, /*hidden argument*/&List_1_GetEnumerator_m5223_MethodInfo);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t989 * L_2 = Enumerator_get_Current_m5224((&V_1), /*hidden argument*/&Enumerator_get_Current_m5224_MethodInfo);
			V_0 = L_2;
			NullCheck(V_0);
			bool L_3 = PersistentCall_IsValid_m5028(V_0, /*hidden argument*/&PersistentCall_IsValid_m5028_MethodInfo);
			if (L_3)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			NullCheck(V_0);
			BaseInvokableCall_t981 * L_4 = PersistentCall_GetRuntimeCall_m5029(V_0, ___unityEventBase, /*hidden argument*/&PersistentCall_GetRuntimeCall_m5029_MethodInfo);
			V_2 = L_4;
			if (!V_2)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			NullCheck(___invokableList);
			InvokableCallList_AddPersistentInvokableCall_m5034(___invokableList, V_2, /*hidden argument*/&InvokableCallList_AddPersistentInvokableCall_m5034_MethodInfo);
		}

IL_003e:
		{
			bool L_5 = Enumerator_MoveNext_m5225((&V_1), /*hidden argument*/&Enumerator_MoveNext_m5225_MethodInfo);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			// IL_004a: leave IL_005b
			leaveInstructions[0] = 0x5B; // 1
			THROW_SENTINEL(IL_005b);
			// finally target depth: 1
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_004f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t82 *)e.ex;
		goto IL_004f;
	}

IL_004f:
	{ // begin finally (depth: 1)
		Enumerator_t1101  L_6 = V_1;
		Object_t * L_7 = Box(InitializedTypeInfo(&Enumerator_t1101_il2cpp_TypeInfo), &L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m488_MethodInfo, L_7);
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x5B:
				goto IL_005b;
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
	} // end finally (depth: 1)

IL_005b:
	{
		return;
	}
}
// Metadata Definition UnityEngine.Events.PersistentCallGroup
extern Il2CppType List_1_t991_0_0_1;
extern CustomAttributesCache PersistentCallGroup_t992__CustomAttributeCache_m_Calls;
FieldInfo PersistentCallGroup_t992____m_Calls_0_FieldInfo = 
{
	"m_Calls"/* name */
	, &List_1_t991_0_0_1/* type */
	, &PersistentCallGroup_t992_il2cpp_TypeInfo/* parent */
	, offsetof(PersistentCallGroup_t992, ___m_Calls_0)/* data */
	, &PersistentCallGroup_t992__CustomAttributeCache_m_Calls/* custom_attributes_cache */

};
static FieldInfo* PersistentCallGroup_t992_FieldInfos[] =
{
	&PersistentCallGroup_t992____m_Calls_0_FieldInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
MethodInfo PersistentCallGroup__ctor_m5031_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PersistentCallGroup__ctor_m5031/* method */
	, &PersistentCallGroup_t992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1632/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType InvokableCallList_t993_0_0_0;
extern Il2CppType InvokableCallList_t993_0_0_0;
extern Il2CppType UnityEventBase_t990_0_0_0;
static ParameterInfo PersistentCallGroup_t992_PersistentCallGroup_Initialize_m5032_ParameterInfos[] = 
{
	{"invokableList", 0, 134219523, &EmptyCustomAttributesCache, &InvokableCallList_t993_0_0_0},
	{"unityEventBase", 1, 134219524, &EmptyCustomAttributesCache, &UnityEventBase_t990_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
MethodInfo PersistentCallGroup_Initialize_m5032_MethodInfo = 
{
	"Initialize"/* name */
	, (methodPointerType)&PersistentCallGroup_Initialize_m5032/* method */
	, &PersistentCallGroup_t992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, PersistentCallGroup_t992_PersistentCallGroup_Initialize_m5032_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1633/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PersistentCallGroup_t992_MethodInfos[] =
{
	&PersistentCallGroup__ctor_m5031_MethodInfo,
	&PersistentCallGroup_Initialize_m5032_MethodInfo,
	NULL
};
static MethodInfo* PersistentCallGroup_t992_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
void PersistentCallGroup_t992_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache PersistentCallGroup_t992__CustomAttributeCache_m_Calls = {
2,
NULL,
&PersistentCallGroup_t992_CustomAttributesCacheGenerator_m_Calls
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType PersistentCallGroup_t992_0_0_0;
extern Il2CppType PersistentCallGroup_t992_1_0_0;
struct PersistentCallGroup_t992;
extern CustomAttributesCache PersistentCallGroup_t992__CustomAttributeCache_m_Calls;
TypeInfo PersistentCallGroup_t992_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PersistentCallGroup"/* name */
	, "UnityEngine.Events"/* namespaze */
	, PersistentCallGroup_t992_MethodInfos/* methods */
	, NULL/* properties */
	, PersistentCallGroup_t992_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PersistentCallGroup_t992_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PersistentCallGroup_t992_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PersistentCallGroup_t992_il2cpp_TypeInfo/* cast_class */
	, &PersistentCallGroup_t992_0_0_0/* byval_arg */
	, &PersistentCallGroup_t992_1_0_0/* this_arg */
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
	, sizeof (PersistentCallGroup_t992)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056768/* flags */
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
extern TypeInfo InvokableCallList_t993_il2cpp_TypeInfo;

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
extern TypeInfo List_1_t994_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t1102_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"
extern MethodInfo List_1__ctor_m5226_MethodInfo;
extern MethodInfo List_1_Add_m5227_MethodInfo;
extern MethodInfo List_1_get_Item_m5228_MethodInfo;
extern MethodInfo BaseInvokableCall_Find_m5197_MethodInfo;
extern MethodInfo List_1_get_Count_m5229_MethodInfo;
extern MethodInfo List_1_Contains_m5230_MethodInfo;
extern MethodInfo Predicate_1__ctor_m5231_MethodInfo;
extern MethodInfo List_1_RemoveAll_m5232_MethodInfo;
extern MethodInfo List_1_Clear_m5233_MethodInfo;
extern MethodInfo List_1_AddRange_m5234_MethodInfo;
extern MethodInfo BaseInvokableCall_Invoke_m5195_MethodInfo;


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern MethodInfo InvokableCallList__ctor_m5033_MethodInfo;
 void InvokableCallList__ctor_m5033 (InvokableCallList_t993 * __this, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t994_il2cpp_TypeInfo));
		List_1_t994 * L_0 = (List_1_t994 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t994_il2cpp_TypeInfo));
		List_1__ctor_m5226(L_0, /*hidden argument*/&List_1__ctor_m5226_MethodInfo);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t994 * L_1 = (List_1_t994 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t994_il2cpp_TypeInfo));
		List_1__ctor_m5226(L_1, /*hidden argument*/&List_1__ctor_m5226_MethodInfo);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t994 * L_2 = (List_1_t994 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t994_il2cpp_TypeInfo));
		List_1__ctor_m5226(L_2, /*hidden argument*/&List_1__ctor_m5226_MethodInfo);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m5034 (InvokableCallList_t993 * __this, BaseInvokableCall_t981 * ___call, MethodInfo* method){
	{
		List_1_t994 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t981 * >::Invoke(&List_1_Add_m5227_MethodInfo, L_0, ___call);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo InvokableCallList_AddListener_m5035_MethodInfo;
 void InvokableCallList_AddListener_m5035 (InvokableCallList_t993 * __this, BaseInvokableCall_t981 * ___call, MethodInfo* method){
	{
		List_1_t994 * L_0 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t981 * >::Invoke(&List_1_Add_m5227_MethodInfo, L_0, ___call);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo InvokableCallList_RemoveListener_m5036_MethodInfo;
 void InvokableCallList_RemoveListener_m5036 (InvokableCallList_t993 * __this, Object_t * ___targetObj, MethodInfo_t211 * ___method, MethodInfo* method){
	List_1_t994 * V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&List_1_t994_il2cpp_TypeInfo));
		List_1_t994 * L_0 = (List_1_t994 *)il2cpp_codegen_object_new (InitializedTypeInfo(&List_1_t994_il2cpp_TypeInfo));
		List_1__ctor_m5226(L_0, /*hidden argument*/&List_1__ctor_m5226_MethodInfo);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t994 * L_1 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_1);
		BaseInvokableCall_t981 * L_2 = (BaseInvokableCall_t981 *)VirtFuncInvoker1< BaseInvokableCall_t981 *, int32_t >::Invoke(&List_1_get_Item_m5228_MethodInfo, L_1, V_1);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t211 * >::Invoke(&BaseInvokableCall_Find_m5197_MethodInfo, L_2, ___targetObj, ___method);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t994 * L_4 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_4);
		BaseInvokableCall_t981 * L_5 = (BaseInvokableCall_t981 *)VirtFuncInvoker1< BaseInvokableCall_t981 *, int32_t >::Invoke(&List_1_get_Item_m5228_MethodInfo, L_4, V_1);
		NullCheck(V_0);
		VirtActionInvoker1< BaseInvokableCall_t981 * >::Invoke(&List_1_Add_m5227_MethodInfo, V_0, L_5);
	}

IL_0037:
	{
		V_1 = ((int32_t)(V_1+1));
	}

IL_003b:
	{
		List_1_t994 * L_6 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&List_1_get_Count_m5229_MethodInfo, L_6);
		if ((((int32_t)V_1) < ((int32_t)L_7)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t994 * L_8 = (__this->___m_RuntimeCalls_1);
		List_1_t994 * L_9 = V_0;
		IntPtr_t120 L_10 = { GetVirtualMethodInfo(L_9, &List_1_Contains_m5230_MethodInfo) };
		Predicate_1_t1102 * L_11 = (Predicate_1_t1102 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Predicate_1_t1102_il2cpp_TypeInfo));
		Predicate_1__ctor_m5231(L_11, L_9, L_10, /*hidden argument*/&Predicate_1__ctor_m5231_MethodInfo);
		NullCheck(L_8);
		List_1_RemoveAll_m5232(L_8, L_11, /*hidden argument*/&List_1_RemoveAll_m5232_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern MethodInfo InvokableCallList_ClearPersistent_m5037_MethodInfo;
 void InvokableCallList_ClearPersistent_m5037 (InvokableCallList_t993 * __this, MethodInfo* method){
	{
		List_1_t994 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&List_1_Clear_m5233_MethodInfo, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern MethodInfo InvokableCallList_Invoke_m5038_MethodInfo;
 void InvokableCallList_Invoke_m5038 (InvokableCallList_t993 * __this, ObjectU5BU5D_t96* ___parameters, MethodInfo* method){
	int32_t V_0 = 0;
	{
		List_1_t994 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t994 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m5234(L_0, L_1, /*hidden argument*/&List_1_AddRange_m5234_MethodInfo);
		List_1_t994 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t994 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m5234(L_2, L_3, /*hidden argument*/&List_1_AddRange_m5234_MethodInfo);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t994 * L_4 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_4);
		BaseInvokableCall_t981 * L_5 = (BaseInvokableCall_t981 *)VirtFuncInvoker1< BaseInvokableCall_t981 *, int32_t >::Invoke(&List_1_get_Item_m5228_MethodInfo, L_4, V_0);
		NullCheck(L_5);
		VirtActionInvoker1< ObjectU5BU5D_t96* >::Invoke(&BaseInvokableCall_Invoke_m5195_MethodInfo, L_5, ___parameters);
		V_0 = ((int32_t)(V_0+1));
	}

IL_003f:
	{
		List_1_t994 * L_6 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&List_1_get_Count_m5229_MethodInfo, L_6);
		if ((((int32_t)V_0) < ((int32_t)L_7)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t994 * L_8 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&List_1_Clear_m5233_MethodInfo, L_8);
		return;
	}
}
// Metadata Definition UnityEngine.Events.InvokableCallList
extern Il2CppType List_1_t994_0_0_33;
FieldInfo InvokableCallList_t993____m_PersistentCalls_0_FieldInfo = 
{
	"m_PersistentCalls"/* name */
	, &List_1_t994_0_0_33/* type */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCallList_t993, ___m_PersistentCalls_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t994_0_0_33;
FieldInfo InvokableCallList_t993____m_RuntimeCalls_1_FieldInfo = 
{
	"m_RuntimeCalls"/* name */
	, &List_1_t994_0_0_33/* type */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCallList_t993, ___m_RuntimeCalls_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType List_1_t994_0_0_33;
FieldInfo InvokableCallList_t993____m_ExecutingCalls_2_FieldInfo = 
{
	"m_ExecutingCalls"/* name */
	, &List_1_t994_0_0_33/* type */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCallList_t993, ___m_ExecutingCalls_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCallList_t993_FieldInfos[] =
{
	&InvokableCallList_t993____m_PersistentCalls_0_FieldInfo,
	&InvokableCallList_t993____m_RuntimeCalls_1_FieldInfo,
	&InvokableCallList_t993____m_ExecutingCalls_2_FieldInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
MethodInfo InvokableCallList__ctor_m5033_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCallList__ctor_m5033/* method */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1634/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
static ParameterInfo InvokableCallList_t993_InvokableCallList_AddPersistentInvokableCall_m5034_ParameterInfos[] = 
{
	{"call", 0, 134219525, &EmptyCustomAttributesCache, &BaseInvokableCall_t981_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
MethodInfo InvokableCallList_AddPersistentInvokableCall_m5034_MethodInfo = 
{
	"AddPersistentInvokableCall"/* name */
	, (methodPointerType)&InvokableCallList_AddPersistentInvokableCall_m5034/* method */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCallList_t993_InvokableCallList_AddPersistentInvokableCall_m5034_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1635/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
static ParameterInfo InvokableCallList_t993_InvokableCallList_AddListener_m5035_ParameterInfos[] = 
{
	{"call", 0, 134219526, &EmptyCustomAttributesCache, &BaseInvokableCall_t981_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
MethodInfo InvokableCallList_AddListener_m5035_MethodInfo = 
{
	"AddListener"/* name */
	, (methodPointerType)&InvokableCallList_AddListener_m5035/* method */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCallList_t993_InvokableCallList_AddListener_m5035_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1636/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo InvokableCallList_t993_InvokableCallList_RemoveListener_m5036_ParameterInfos[] = 
{
	{"targetObj", 0, 134219527, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219528, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCallList_RemoveListener_m5036_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&InvokableCallList_RemoveListener_m5036/* method */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, InvokableCallList_t993_InvokableCallList_RemoveListener_m5036_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1637/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
MethodInfo InvokableCallList_ClearPersistent_m5037_MethodInfo = 
{
	"ClearPersistent"/* name */
	, (methodPointerType)&InvokableCallList_ClearPersistent_m5037/* method */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1638/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo InvokableCallList_t993_InvokableCallList_Invoke_m5038_ParameterInfos[] = 
{
	{"parameters", 0, 134219529, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
MethodInfo InvokableCallList_Invoke_m5038_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCallList_Invoke_m5038/* method */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InvokableCallList_t993_InvokableCallList_Invoke_m5038_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1639/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InvokableCallList_t993_MethodInfos[] =
{
	&InvokableCallList__ctor_m5033_MethodInfo,
	&InvokableCallList_AddPersistentInvokableCall_m5034_MethodInfo,
	&InvokableCallList_AddListener_m5035_MethodInfo,
	&InvokableCallList_RemoveListener_m5036_MethodInfo,
	&InvokableCallList_ClearPersistent_m5037_MethodInfo,
	&InvokableCallList_Invoke_m5038_MethodInfo,
	NULL
};
static MethodInfo* InvokableCallList_t993_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCallList_t993_1_0_0;
struct InvokableCallList_t993;
TypeInfo InvokableCallList_t993_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCallList"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCallList_t993_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCallList_t993_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCallList_t993_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCallList_t993_il2cpp_TypeInfo/* cast_class */
	, &InvokableCallList_t993_0_0_0/* byval_arg */
	, &InvokableCallList_t993_1_0_0/* this_arg */
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
	, sizeof (InvokableCallList_t993)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
extern TypeInfo Single_t76_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t309_il2cpp_TypeInfo;
extern TypeInfo Binder_t1073_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t1074_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t1075_il2cpp_TypeInfo;
extern MethodInfo Type_get_AssemblyQualifiedName_m1547_MethodInfo;
extern MethodInfo UnityEventBase_DirtyPersistentCalls_m5042_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_m5041_MethodInfo;
extern MethodInfo UnityEventBase_FindMethod_Impl_m5235_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m5047_MethodInfo;
extern MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m5043_MethodInfo;
extern MethodInfo Type_get_FullName_m1471_MethodInfo;
extern MethodInfo Type_GetMethod_m5236_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m5237_MethodInfo;
extern MethodInfo Type_get_BaseType_m5156_MethodInfo;


// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern MethodInfo UnityEventBase__ctor_m5039_MethodInfo;
 void UnityEventBase__ctor_m5039 (UnityEventBase_t990 * __this, MethodInfo* method){
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		InvokableCallList_t993 * L_0 = (InvokableCallList_t993 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCallList_t993_il2cpp_TypeInfo));
		InvokableCallList__ctor_m5033(L_0, /*hidden argument*/&InvokableCallList__ctor_m5033_MethodInfo);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t992 * L_1 = (PersistentCallGroup_t992 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PersistentCallGroup_t992_il2cpp_TypeInfo));
		PersistentCallGroup__ctor_m5031(L_1, /*hidden argument*/&PersistentCallGroup__ctor_m5031_MethodInfo);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m641(__this, /*hidden argument*/&Object_GetType_m641_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m1547_MethodInfo, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3327_MethodInfo;
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3327 (UnityEventBase_t990 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3328_MethodInfo;
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3328 (UnityEventBase_t990 * __this, MethodInfo* method){
	{
		UnityEventBase_DirtyPersistentCalls_m5042(__this, /*hidden argument*/&UnityEventBase_DirtyPersistentCalls_m5042_MethodInfo);
		Type_t * L_0 = Object_GetType_m641(__this, /*hidden argument*/&Object_GetType_m641_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_AssemblyQualifiedName_m1547_MethodInfo, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
 MethodInfo_t211 * UnityEventBase_FindMethod_m5040 (UnityEventBase_t990 * __this, PersistentCall_t989 * ___call, MethodInfo* method){
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Object_t151_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		V_0 = L_0;
		NullCheck(___call);
		ArgumentCache_t980 * L_1 = PersistentCall_get_arguments_m5027(___call, /*hidden argument*/&PersistentCall_get_arguments_m5027_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012(L_1, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_IsNullOrEmpty_m566(NULL /*static, unused*/, L_2, /*hidden argument*/&String_IsNullOrEmpty_m566_MethodInfo);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		NullCheck(___call);
		ArgumentCache_t980 * L_4 = PersistentCall_get_arguments_m5027(___call, /*hidden argument*/&PersistentCall_get_arguments_m5027_MethodInfo);
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012(L_4, /*hidden argument*/&ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5012_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetType_m1652(NULL /*static, unused*/, L_5, 0, /*hidden argument*/&Type_GetType_m1652_MethodInfo);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Object_t151_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		NullCheck(___call);
		String_t* L_9 = PersistentCall_get_methodName_m5025(___call, /*hidden argument*/&PersistentCall_get_methodName_m5025_MethodInfo);
		NullCheck(___call);
		Object_t151 * L_10 = PersistentCall_get_target_m5024(___call, /*hidden argument*/&PersistentCall_get_target_m5024_MethodInfo);
		NullCheck(___call);
		int32_t L_11 = PersistentCall_get_mode_m5026(___call, /*hidden argument*/&PersistentCall_get_mode_m5026_MethodInfo);
		MethodInfo_t211 * L_12 = UnityEventBase_FindMethod_m5041(__this, L_9, L_10, L_11, V_0, /*hidden argument*/&UnityEventBase_FindMethod_m5041_MethodInfo);
		return L_12;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
 MethodInfo_t211 * UnityEventBase_FindMethod_m5041 (UnityEventBase_t990 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method){
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t160* G_B10_2 = {0};
	TypeU5BU5D_t160* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t160* G_B9_2 = {0};
	TypeU5BU5D_t160* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		V_0 = ___mode;
		if (V_0 == 0)
		{
			goto IL_0029;
		}
		if (V_0 == 1)
		{
			goto IL_0032;
		}
		if (V_0 == 2)
		{
			goto IL_00ac;
		}
		if (V_0 == 3)
		{
			goto IL_005b;
		}
		if (V_0 == 4)
		{
			goto IL_0040;
		}
		if (V_0 == 5)
		{
			goto IL_0091;
		}
		if (V_0 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		MethodInfo_t211 * L_0 = (MethodInfo_t211 *)VirtFuncInvoker2< MethodInfo_t211 *, String_t*, Object_t * >::Invoke(&UnityEventBase_FindMethod_Impl_m5235_MethodInfo, __this, ___name, ___listener);
		return L_0;
	}

IL_0032:
	{
		MethodInfo_t211 * L_1 = UnityEventBase_GetValidMethodInfo_m5047(NULL /*static, unused*/, ___listener, ___name, ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo);
		return L_1;
	}

IL_0040:
	{
		TypeU5BU5D_t160* L_2 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Single_t76_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t211 * L_4 = UnityEventBase_GetValidMethodInfo_m5047(NULL /*static, unused*/, ___listener, ___name, L_2, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo);
		return L_4;
	}

IL_005b:
	{
		TypeU5BU5D_t160* L_5 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Int32_t73_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 0)) = (Type_t *)L_6;
		MethodInfo_t211 * L_7 = UnityEventBase_GetValidMethodInfo_m5047(NULL /*static, unused*/, ___listener, ___name, L_5, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo);
		return L_7;
	}

IL_0076:
	{
		TypeU5BU5D_t160* L_8 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Boolean_t74_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 0)) = (Type_t *)L_9;
		MethodInfo_t211 * L_10 = UnityEventBase_GetValidMethodInfo_m5047(NULL /*static, unused*/, ___listener, ___name, L_8, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo);
		return L_10;
	}

IL_0091:
	{
		TypeU5BU5D_t160* L_11 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_12 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		MethodInfo_t211 * L_13 = UnityEventBase_GetValidMethodInfo_m5047(NULL /*static, unused*/, ___listener, ___name, L_11, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo);
		return L_13;
	}

IL_00ac:
	{
		TypeU5BU5D_t160* L_14 = ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 1));
		Type_t * L_15 = ___argumentType;
		G_B9_0 = L_15;
		G_B9_1 = 0;
		G_B9_2 = L_14;
		G_B9_3 = L_14;
		G_B9_4 = ___name;
		G_B9_5 = ___listener;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = 0;
			G_B10_2 = L_14;
			G_B10_3 = L_14;
			G_B10_4 = ___name;
			G_B10_5 = ___listener;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Object_t151_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		G_B10_0 = L_16;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t211 * L_17 = UnityEventBase_GetValidMethodInfo_m5047(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo);
		return L_17;
	}

IL_00d0:
	{
		return (MethodInfo_t211 *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
 void UnityEventBase_DirtyPersistentCalls_m5042 (UnityEventBase_t990 * __this, MethodInfo* method){
	{
		InvokableCallList_t993 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m5037(L_0, /*hidden argument*/&InvokableCallList_ClearPersistent_m5037_MethodInfo);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
 void UnityEventBase_RebuildPersistentCallsIfNeeded_m5043 (UnityEventBase_t990 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t992 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t993 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m5032(L_1, L_2, __this, /*hidden argument*/&PersistentCallGroup_Initialize_m5032_MethodInfo);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern MethodInfo UnityEventBase_AddCall_m5044_MethodInfo;
 void UnityEventBase_AddCall_m5044 (UnityEventBase_t990 * __this, BaseInvokableCall_t981 * ___call, MethodInfo* method){
	{
		InvokableCallList_t993 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_AddListener_m5035(L_0, ___call, /*hidden argument*/&InvokableCallList_AddListener_m5035_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEventBase_RemoveListener_m5045_MethodInfo;
 void UnityEventBase_RemoveListener_m5045 (UnityEventBase_t990 * __this, Object_t * ___targetObj, MethodInfo_t211 * ___method, MethodInfo* method){
	{
		InvokableCallList_t993 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m5036(L_0, ___targetObj, ___method, /*hidden argument*/&InvokableCallList_RemoveListener_m5036_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern MethodInfo UnityEventBase_Invoke_m5046_MethodInfo;
 void UnityEventBase_Invoke_m5046 (UnityEventBase_t990 * __this, ObjectU5BU5D_t96* ___parameters, MethodInfo* method){
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m5043(__this, /*hidden argument*/&UnityEventBase_RebuildPersistentCallsIfNeeded_m5043_MethodInfo);
		InvokableCallList_t993 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_Invoke_m5038(L_0, ___parameters, /*hidden argument*/&InvokableCallList_Invoke_m5038_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern MethodInfo UnityEventBase_ToString_m3326_MethodInfo;
 String_t* UnityEventBase_ToString_m3326 (UnityEventBase_t990 * __this, MethodInfo* method){
	{
		String_t* L_0 = Object_ToString_m498(__this, /*hidden argument*/&Object_ToString_m498_MethodInfo);
		Type_t * L_1 = Object_GetType_m641(__this, /*hidden argument*/&Object_GetType_m641_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m1471_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m493(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral190, L_2, /*hidden argument*/&String_Concat_m493_MethodInfo);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
 MethodInfo_t211 * UnityEventBase_GetValidMethodInfo_m5047 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t160* ___argumentTypes, MethodInfo* method){
	Type_t * V_0 = {0};
	MethodInfo_t211 * V_1 = {0};
	ParameterInfoU5BU5D_t1078* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t1079 * V_5 = {0};
	ParameterInfoU5BU5D_t1078* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		NullCheck(___obj);
		Type_t * L_0 = Object_GetType_m641(___obj, /*hidden argument*/&Object_GetType_m641_MethodInfo);
		V_0 = L_0;
		goto IL_008e;
	}

IL_000c:
	{
		NullCheck(V_0);
		MethodInfo_t211 * L_1 = (MethodInfo_t211 *)VirtFuncInvoker5< MethodInfo_t211 *, String_t*, int32_t, Binder_t1073 *, TypeU5BU5D_t160*, ParameterModifierU5BU5D_t1074* >::Invoke(&Type_GetMethod_m5236_MethodInfo, V_0, ___functionName, ((int32_t)52), (Binder_t1073 *)NULL, ___argumentTypes, (ParameterModifierU5BU5D_t1074*)(ParameterModifierU5BU5D_t1074*)NULL);
		V_1 = L_1;
		if (!V_1)
		{
			goto IL_0087;
		}
	}
	{
		NullCheck(V_1);
		ParameterInfoU5BU5D_t1078* L_2 = (ParameterInfoU5BU5D_t1078*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1078* >::Invoke(&MethodBase_GetParameters_m5182_MethodInfo, V_1);
		V_2 = L_2;
		V_3 = 1;
		V_4 = 0;
		V_6 = V_2;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		NullCheck(V_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_6, V_7);
		int32_t L_3 = V_7;
		V_5 = (*(ParameterInfo_t1079 **)(ParameterInfo_t1079 **)SZArrayLdElema(V_6, L_3));
		NullCheck(___argumentTypes);
		IL2CPP_ARRAY_BOUNDS_CHECK(___argumentTypes, V_4);
		int32_t L_4 = V_4;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(___argumentTypes, L_4));
		NullCheck(V_5);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m5183_MethodInfo, V_5);
		V_9 = L_5;
		NullCheck(V_8);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m5237_MethodInfo, V_8);
		NullCheck(V_9);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m5237_MethodInfo, V_9);
		V_3 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		if (V_3)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		V_4 = ((int32_t)(V_4+1));
		V_7 = ((int32_t)(V_7+1));
	}

IL_0074:
	{
		NullCheck(V_6);
		if ((((int32_t)V_7) < ((int32_t)(((int32_t)(((Array_t *)V_6)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		if (!V_3)
		{
			goto IL_0087;
		}
	}
	{
		return V_1;
	}

IL_0087:
	{
		NullCheck(V_0);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m5156_MethodInfo, V_0);
		V_0 = L_8;
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_9 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		if ((((Type_t *)V_0) == ((Type_t *)L_9)))
		{
			goto IL_00a4;
		}
	}
	{
		if (V_0)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t211 *)NULL;
	}
}
// Metadata Definition UnityEngine.Events.UnityEventBase
extern Il2CppType InvokableCallList_t993_0_0_1;
FieldInfo UnityEventBase_t990____m_Calls_0_FieldInfo = 
{
	"m_Calls"/* name */
	, &InvokableCallList_t993_0_0_1/* type */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t990, ___m_Calls_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType PersistentCallGroup_t992_0_0_1;
extern CustomAttributesCache UnityEventBase_t990__CustomAttributeCache_m_PersistentCalls;
FieldInfo UnityEventBase_t990____m_PersistentCalls_1_FieldInfo = 
{
	"m_PersistentCalls"/* name */
	, &PersistentCallGroup_t992_0_0_1/* type */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t990, ___m_PersistentCalls_1)/* data */
	, &UnityEventBase_t990__CustomAttributeCache_m_PersistentCalls/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
extern CustomAttributesCache UnityEventBase_t990__CustomAttributeCache_m_TypeName;
FieldInfo UnityEventBase_t990____m_TypeName_2_FieldInfo = 
{
	"m_TypeName"/* name */
	, &String_t_0_0_1/* type */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t990, ___m_TypeName_2)/* data */
	, &UnityEventBase_t990__CustomAttributeCache_m_TypeName/* custom_attributes_cache */

};
extern Il2CppType Boolean_t74_0_0_1;
FieldInfo UnityEventBase_t990____m_CallsDirty_3_FieldInfo = 
{
	"m_CallsDirty"/* name */
	, &Boolean_t74_0_0_1/* type */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEventBase_t990, ___m_CallsDirty_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEventBase_t990_FieldInfos[] =
{
	&UnityEventBase_t990____m_Calls_0_FieldInfo,
	&UnityEventBase_t990____m_PersistentCalls_1_FieldInfo,
	&UnityEventBase_t990____m_TypeName_2_FieldInfo,
	&UnityEventBase_t990____m_CallsDirty_3_FieldInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
MethodInfo UnityEventBase__ctor_m5039_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEventBase__ctor_m5039/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1640/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3327_MethodInfo = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize"/* name */
	, (methodPointerType)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3327/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1641/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
MethodInfo UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3328_MethodInfo = 
{
	"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize"/* name */
	, (methodPointerType)&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3328/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1642/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_FindMethod_Impl_m5235_ParameterInfos[] = 
{
	{"name", 0, 134219530, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219531, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEventBase_FindMethod_Impl_m5235_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_FindMethod_Impl_m5235_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1643/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_GetDelegate_m5214_ParameterInfos[] = 
{
	{"target", 0, 134219532, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219533, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEventBase_GetDelegate_m5214_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_GetDelegate_m5214_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1475/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1644/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType PersistentCall_t989_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_FindMethod_m5040_ParameterInfos[] = 
{
	{"call", 0, 134219534, &EmptyCustomAttributesCache, &PersistentCall_t989_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
MethodInfo UnityEventBase_FindMethod_m5040_MethodInfo = 
{
	"FindMethod"/* name */
	, (methodPointerType)&UnityEventBase_FindMethod_m5040/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_FindMethod_m5040_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1645/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType PersistentListenerMode_t979_0_0_0;
extern Il2CppType Type_t_0_0_0;
extern Il2CppType Type_t_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_FindMethod_m5041_ParameterInfos[] = 
{
	{"name", 0, 134219535, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"listener", 1, 134219536, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"mode", 2, 134219537, &EmptyCustomAttributesCache, &PersistentListenerMode_t979_0_0_0},
	{"argumentType", 3, 134219538, &EmptyCustomAttributesCache, &Type_t_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
MethodInfo UnityEventBase_FindMethod_m5041_MethodInfo = 
{
	"FindMethod"/* name */
	, (methodPointerType)&UnityEventBase_FindMethod_m5041/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t73_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_FindMethod_m5041_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1646/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
MethodInfo UnityEventBase_DirtyPersistentCalls_m5042_MethodInfo = 
{
	"DirtyPersistentCalls"/* name */
	, (methodPointerType)&UnityEventBase_DirtyPersistentCalls_m5042/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1647/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
MethodInfo UnityEventBase_RebuildPersistentCallsIfNeeded_m5043_MethodInfo = 
{
	"RebuildPersistentCallsIfNeeded"/* name */
	, (methodPointerType)&UnityEventBase_RebuildPersistentCallsIfNeeded_m5043/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1648/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_AddCall_m5044_ParameterInfos[] = 
{
	{"call", 0, 134219539, &EmptyCustomAttributesCache, &BaseInvokableCall_t981_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
MethodInfo UnityEventBase_AddCall_m5044_MethodInfo = 
{
	"AddCall"/* name */
	, (methodPointerType)&UnityEventBase_AddCall_m5044/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_AddCall_m5044_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1649/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_RemoveListener_m5045_ParameterInfos[] = 
{
	{"targetObj", 0, 134219540, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219541, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEventBase_RemoveListener_m5045_MethodInfo = 
{
	"RemoveListener"/* name */
	, (methodPointerType)&UnityEventBase_RemoveListener_m5045/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_RemoveListener_m5045_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1650/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_Invoke_m5046_ParameterInfos[] = 
{
	{"parameters", 0, 134219542, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
MethodInfo UnityEventBase_Invoke_m5046_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEventBase_Invoke_m5046/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_Invoke_m5046_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1651/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Events.UnityEventBase::ToString()
MethodInfo UnityEventBase_ToString_m3326_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&UnityEventBase_ToString_m3326/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1652/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType TypeU5BU5D_t160_0_0_0;
extern Il2CppType TypeU5BU5D_t160_0_0_0;
static ParameterInfo UnityEventBase_t990_UnityEventBase_GetValidMethodInfo_m5047_ParameterInfos[] = 
{
	{"obj", 0, 134219543, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"functionName", 1, 134219544, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"argumentTypes", 2, 134219545, &EmptyCustomAttributesCache, &TypeU5BU5D_t160_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
MethodInfo UnityEventBase_GetValidMethodInfo_m5047_MethodInfo = 
{
	"GetValidMethodInfo"/* name */
	, (methodPointerType)&UnityEventBase_GetValidMethodInfo_m5047/* method */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEventBase_t990_UnityEventBase_GetValidMethodInfo_m5047_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1653/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEventBase_t990_MethodInfos[] =
{
	&UnityEventBase__ctor_m5039_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3327_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3328_MethodInfo,
	&UnityEventBase_FindMethod_Impl_m5235_MethodInfo,
	&UnityEventBase_GetDelegate_m5214_MethodInfo,
	&UnityEventBase_FindMethod_m5040_MethodInfo,
	&UnityEventBase_FindMethod_m5041_MethodInfo,
	&UnityEventBase_DirtyPersistentCalls_m5042_MethodInfo,
	&UnityEventBase_RebuildPersistentCallsIfNeeded_m5043_MethodInfo,
	&UnityEventBase_AddCall_m5044_MethodInfo,
	&UnityEventBase_RemoveListener_m5045_MethodInfo,
	&UnityEventBase_Invoke_m5046_MethodInfo,
	&UnityEventBase_ToString_m3326_MethodInfo,
	&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo,
	NULL
};
static MethodInfo* UnityEventBase_t990_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&UnityEventBase_ToString_m3326_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3327_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3328_MethodInfo,
	NULL,
	NULL,
};
extern TypeInfo ISerializationCallbackReceiver_t700_il2cpp_TypeInfo;
static TypeInfo* UnityEventBase_t990_InterfacesTypeInfos[] = 
{
	&ISerializationCallbackReceiver_t700_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair UnityEventBase_t990_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t700_il2cpp_TypeInfo, 4},
};
void UnityEventBase_t990_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t699 * tmp;
		tmp = (FormerlySerializedAsAttribute_t699 *)il2cpp_codegen_object_new (&FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo);
		FormerlySerializedAsAttribute__ctor_m3324(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), &FormerlySerializedAsAttribute__ctor_m3324_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
void UnityEventBase_t990_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t304 * tmp;
		tmp = (SerializeField_t304 *)il2cpp_codegen_object_new (&SerializeField_t304_il2cpp_TypeInfo);
		SerializeField__ctor_m1222(tmp, &SerializeField__ctor_m1222_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UnityEventBase_t990__CustomAttributeCache_m_PersistentCalls = {
2,
NULL,
&UnityEventBase_t990_CustomAttributesCacheGenerator_m_PersistentCalls
};
CustomAttributesCache UnityEventBase_t990__CustomAttributeCache_m_TypeName = {
1,
NULL,
&UnityEventBase_t990_CustomAttributesCacheGenerator_m_TypeName
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEventBase_t990_1_0_0;
struct UnityEventBase_t990;
extern CustomAttributesCache UnityEventBase_t990__CustomAttributeCache_m_PersistentCalls;
extern CustomAttributesCache UnityEventBase_t990__CustomAttributeCache_m_TypeName;
TypeInfo UnityEventBase_t990_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEventBase"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEventBase_t990_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEventBase_t990_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* element_class */
	, UnityEventBase_t990_InterfacesTypeInfos/* implemented_interfaces */
	, UnityEventBase_t990_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* cast_class */
	, &UnityEventBase_t990_0_0_0/* byval_arg */
	, &UnityEventBase_t990_1_0_0/* this_arg */
	, UnityEventBase_t990_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEventBase_t990)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 14/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_t556_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern MethodInfo UnityEvent__ctor_m3485_MethodInfo;
 void UnityEvent__ctor_m3485 (UnityEvent_t556 * __this, MethodInfo* method){
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t96*)SZArrayNew(InitializedTypeInfo(&ObjectU5BU5D_t96_il2cpp_TypeInfo), 0));
		UnityEventBase__ctor_m5039(__this, /*hidden argument*/&UnityEventBase__ctor_m5039_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern MethodInfo UnityEvent_FindMethod_Impl_m3486_MethodInfo;
 MethodInfo_t211 * UnityEvent_FindMethod_Impl_m3486 (UnityEvent_t556 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method){
	{
		MethodInfo_t211 * L_0 = UnityEventBase_GetValidMethodInfo_m5047(NULL /*static, unused*/, ___targetObj, ___name, ((TypeU5BU5D_t160*)SZArrayNew(InitializedTypeInfo(&TypeU5BU5D_t160_il2cpp_TypeInfo), 0)), /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m5047_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern MethodInfo UnityEvent_GetDelegate_m3487_MethodInfo;
 BaseInvokableCall_t981 * UnityEvent_GetDelegate_m3487 (UnityEvent_t556 * __this, Object_t * ___target, MethodInfo_t211 * ___theFunction, MethodInfo* method){
	{
		InvokableCall_t982 * L_0 = (InvokableCall_t982 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvokableCall_t982_il2cpp_TypeInfo));
		InvokableCall__ctor_m5020(L_0, ___target, ___theFunction, /*hidden argument*/&InvokableCall__ctor_m5020_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern MethodInfo UnityEvent_Invoke_m3489_MethodInfo;
 void UnityEvent_Invoke_m3489 (UnityEvent_t556 * __this, MethodInfo* method){
	{
		ObjectU5BU5D_t96* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m5046(__this, L_0, /*hidden argument*/&UnityEventBase_Invoke_m5046_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.Events.UnityEvent
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo UnityEvent_t556____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &UnityEvent_t556_il2cpp_TypeInfo/* parent */
	, offsetof(UnityEvent_t556, ___m_InvokeArray_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_t556_FieldInfos[] =
{
	&UnityEvent_t556____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
MethodInfo UnityEvent__ctor_m3485_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityEvent__ctor_m3485/* method */
	, &UnityEvent_t556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1654/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_t556_UnityEvent_FindMethod_Impl_m3486_ParameterInfos[] = 
{
	{"name", 0, 134219546, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219547, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_FindMethod_Impl_m3486_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, (methodPointerType)&UnityEvent_FindMethod_Impl_m3486/* method */
	, &UnityEvent_t556_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_t556_UnityEvent_FindMethod_Impl_m3486_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1655/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo UnityEvent_t556_UnityEvent_GetDelegate_m3487_ParameterInfos[] = 
{
	{"target", 0, 134219548, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219549, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_GetDelegate_m3487_MethodInfo = 
{
	"GetDelegate"/* name */
	, (methodPointerType)&UnityEvent_GetDelegate_m3487/* method */
	, &UnityEvent_t556_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityEvent_t556_UnityEvent_GetDelegate_m3487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1656/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
MethodInfo UnityEvent_Invoke_m3489_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityEvent_Invoke_m3489/* method */
	, &UnityEvent_t556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1657/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_t556_MethodInfos[] =
{
	&UnityEvent__ctor_m3485_MethodInfo,
	&UnityEvent_FindMethod_Impl_m3486_MethodInfo,
	&UnityEvent_GetDelegate_m3487_MethodInfo,
	&UnityEvent_Invoke_m3489_MethodInfo,
	NULL
};
static MethodInfo* UnityEvent_t556_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&UnityEventBase_ToString_m3326_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m3327_MethodInfo,
	&UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m3328_MethodInfo,
	&UnityEvent_FindMethod_Impl_m3486_MethodInfo,
	&UnityEvent_GetDelegate_m3487_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityEvent_t556_InterfacesOffsets[] = 
{
	{ &ISerializationCallbackReceiver_t700_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_t556_0_0_0;
extern Il2CppType UnityEvent_t556_1_0_0;
struct UnityEvent_t556;
TypeInfo UnityEvent_t556_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_t556_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_t556_FieldInfos/* fields */
	, NULL/* events */
	, &UnityEventBase_t990_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_t556_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityEvent_t556_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityEvent_t556_il2cpp_TypeInfo/* cast_class */
	, &UnityEvent_t556_0_0_0/* byval_arg */
	, &UnityEvent_t556_1_0_0/* this_arg */
	, UnityEvent_t556_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityEvent_t556)/* instance_size */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Events.UnityEvent`1
#include "UnityEngine_UnityEngine_Events_UnityEvent_1.h"
extern Il2CppGenericContainer UnityEvent_1_t995_Il2CppGenericContainer;
extern TypeInfo UnityEvent_1_t995_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_1_t995_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_1_t995_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_1_t995_Il2CppGenericParametersArray[1] = 
{
	&UnityEvent_1_t995_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_1_t995_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_1_t995_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_1_t995_il2cpp_TypeInfo, 1, 0, UnityEvent_1_t995_Il2CppGenericParametersArray };
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::.ctor()
MethodInfo UnityEvent_1__ctor_m5238_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1658/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t1104_0_0_0;
extern Il2CppType UnityAction_1_t1104_0_0_0;
static ParameterInfo UnityEvent_1_t995_UnityEvent_1_AddListener_m5239_ParameterInfos[] = 
{
	{"call", 0, 134219550, &EmptyCustomAttributesCache, &UnityAction_1_t1104_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::AddListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_AddListener_m5239_MethodInfo = 
{
	"AddListener"/* name */
	, NULL/* method */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t995_UnityEvent_1_AddListener_m5239_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t1104_0_0_0;
static ParameterInfo UnityEvent_1_t995_UnityEvent_1_RemoveListener_m5240_ParameterInfos[] = 
{
	{"call", 0, 134219551, &EmptyCustomAttributesCache, &UnityAction_1_t1104_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_RemoveListener_m5240_MethodInfo = 
{
	"RemoveListener"/* name */
	, NULL/* method */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t995_UnityEvent_1_RemoveListener_m5240_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_1_t995_UnityEvent_1_FindMethod_Impl_m5241_ParameterInfos[] = 
{
	{"name", 0, 134219552, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219553, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_1_FindMethod_Impl_m5241_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t995_UnityEvent_1_FindMethod_Impl_m5241_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo UnityEvent_1_t995_UnityEvent_1_GetDelegate_m5242_ParameterInfos[] = 
{
	{"target", 0, 134219554, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219555, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_1_GetDelegate_m5242_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t995_UnityEvent_1_GetDelegate_m5242_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t1104_0_0_0;
static ParameterInfo UnityEvent_1_t995_UnityEvent_1_GetDelegate_m5243_ParameterInfos[] = 
{
	{"action", 0, 134219556, &EmptyCustomAttributesCache, &UnityAction_1_t1104_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
MethodInfo UnityEvent_1_GetDelegate_m5243_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t995_UnityEvent_1_GetDelegate_m5243_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityEvent_1_t995_gp_0_0_0_0;
extern Il2CppType UnityEvent_1_t995_gp_0_0_0_0;
static ParameterInfo UnityEvent_1_t995_UnityEvent_1_Invoke_m5244_ParameterInfos[] = 
{
	{"arg0", 0, 134219557, &EmptyCustomAttributesCache, &UnityEvent_1_t995_gp_0_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`1::Invoke(T0)
MethodInfo UnityEvent_1_Invoke_m5244_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_1_t995_UnityEvent_1_Invoke_m5244_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_1_t995_MethodInfos[] =
{
	&UnityEvent_1__ctor_m5238_MethodInfo,
	&UnityEvent_1_AddListener_m5239_MethodInfo,
	&UnityEvent_1_RemoveListener_m5240_MethodInfo,
	&UnityEvent_1_FindMethod_Impl_m5241_MethodInfo,
	&UnityEvent_1_GetDelegate_m5242_MethodInfo,
	&UnityEvent_1_GetDelegate_m5243_MethodInfo,
	&UnityEvent_1_Invoke_m5244_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo UnityEvent_1_t995____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_1_t995_FieldInfos[] =
{
	&UnityEvent_1_t995____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_1_t995_0_0_0;
extern Il2CppType UnityEvent_1_t995_1_0_0;
struct UnityEvent_1_t995;
TypeInfo UnityEvent_1_t995_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_1_t995_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_1_t995_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_1_t995_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_1_t995_0_0_0/* byval_arg */
	, &UnityEvent_1_t995_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_1_t995_Il2CppGenericContainer/* generic_container */
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
	, 7/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityEvent`2
#include "UnityEngine_UnityEngine_Events_UnityEvent_2.h"
extern Il2CppGenericContainer UnityEvent_2_t996_Il2CppGenericContainer;
extern TypeInfo UnityEvent_2_t996_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_2_t996_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_2_t996_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityEvent_2_t996_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_2_t996_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_2_t996_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_2_t996_Il2CppGenericParametersArray[2] = 
{
	&UnityEvent_2_t996_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_2_t996_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_2_t996_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_2_t996_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_2_t996_il2cpp_TypeInfo, 2, 0, UnityEvent_2_t996_Il2CppGenericParametersArray };
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`2::.ctor()
MethodInfo UnityEvent_2__ctor_m5245_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_2_t996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_2_t996_UnityEvent_2_FindMethod_Impl_m5246_ParameterInfos[] = 
{
	{"name", 0, 134219558, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219559, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_2_FindMethod_Impl_m5246_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_2_t996_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_2_t996_UnityEvent_2_FindMethod_Impl_m5246_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo UnityEvent_2_t996_UnityEvent_2_GetDelegate_m5247_ParameterInfos[] = 
{
	{"target", 0, 134219560, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219561, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_2_GetDelegate_m5247_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_2_t996_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_2_t996_UnityEvent_2_GetDelegate_m5247_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_2_t996_MethodInfos[] =
{
	&UnityEvent_2__ctor_m5245_MethodInfo,
	&UnityEvent_2_FindMethod_Impl_m5246_MethodInfo,
	&UnityEvent_2_GetDelegate_m5247_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo UnityEvent_2_t996____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &UnityEvent_2_t996_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_2_t996_FieldInfos[] =
{
	&UnityEvent_2_t996____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_2_t996_0_0_0;
extern Il2CppType UnityEvent_2_t996_1_0_0;
struct UnityEvent_2_t996;
TypeInfo UnityEvent_2_t996_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_2_t996_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_2_t996_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_2_t996_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_2_t996_0_0_0/* byval_arg */
	, &UnityEvent_2_t996_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_2_t996_Il2CppGenericContainer/* generic_container */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityEvent`3
#include "UnityEngine_UnityEngine_Events_UnityEvent_3.h"
extern Il2CppGenericContainer UnityEvent_3_t997_Il2CppGenericContainer;
extern TypeInfo UnityEvent_3_t997_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_3_t997_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_3_t997_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityEvent_3_t997_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_3_t997_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_3_t997_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityEvent_3_t997_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_3_t997_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_3_t997_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_3_t997_Il2CppGenericParametersArray[3] = 
{
	&UnityEvent_3_t997_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_3_t997_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_3_t997_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_3_t997_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_3_t997_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_3_t997_il2cpp_TypeInfo, 3, 0, UnityEvent_3_t997_Il2CppGenericParametersArray };
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`3::.ctor()
MethodInfo UnityEvent_3__ctor_m5248_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_3_t997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_3_t997_UnityEvent_3_FindMethod_Impl_m5249_ParameterInfos[] = 
{
	{"name", 0, 134219562, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219563, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_3_FindMethod_Impl_m5249_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_3_t997_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_3_t997_UnityEvent_3_FindMethod_Impl_m5249_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo UnityEvent_3_t997_UnityEvent_3_GetDelegate_m5250_ParameterInfos[] = 
{
	{"target", 0, 134219564, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219565, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_3_GetDelegate_m5250_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_3_t997_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_3_t997_UnityEvent_3_GetDelegate_m5250_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_3_t997_MethodInfos[] =
{
	&UnityEvent_3__ctor_m5248_MethodInfo,
	&UnityEvent_3_FindMethod_Impl_m5249_MethodInfo,
	&UnityEvent_3_GetDelegate_m5250_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo UnityEvent_3_t997____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &UnityEvent_3_t997_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_3_t997_FieldInfos[] =
{
	&UnityEvent_3_t997____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_3_t997_0_0_0;
extern Il2CppType UnityEvent_3_t997_1_0_0;
struct UnityEvent_3_t997;
TypeInfo UnityEvent_3_t997_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_3_t997_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_3_t997_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_3_t997_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_3_t997_0_0_0/* byval_arg */
	, &UnityEvent_3_t997_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_3_t997_Il2CppGenericContainer/* generic_container */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityEvent`4
#include "UnityEngine_UnityEngine_Events_UnityEvent_4.h"
extern Il2CppGenericContainer UnityEvent_4_t998_Il2CppGenericContainer;
extern TypeInfo UnityEvent_4_t998_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t998_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t998_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityEvent_4_t998_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t998_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t998_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityEvent_4_t998_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t998_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t998_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo UnityEvent_4_t998_gp_T3_3_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityEvent_4_t998_gp_T3_3_il2cpp_TypeInfo_GenericParamFull = { { &UnityEvent_4_t998_Il2CppGenericContainer, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityEvent_4_t998_Il2CppGenericParametersArray[4] = 
{
	&UnityEvent_4_t998_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t998_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t998_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
	&UnityEvent_4_t998_gp_T3_3_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityEvent_4_t998_il2cpp_TypeInfo;
Il2CppGenericContainer UnityEvent_4_t998_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityEvent_4_t998_il2cpp_TypeInfo, 4, 0, UnityEvent_4_t998_Il2CppGenericParametersArray };
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityEvent`4::.ctor()
MethodInfo UnityEvent_4__ctor_m5251_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityEvent_4_t998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityEvent_4_t998_UnityEvent_4_FindMethod_Impl_m5252_ParameterInfos[] = 
{
	{"name", 0, 134219566, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"targetObj", 1, 134219567, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType MethodInfo_t211_0_0_0;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4::FindMethod_Impl(System.String,System.Object)
MethodInfo UnityEvent_4_FindMethod_Impl_m5252_MethodInfo = 
{
	"FindMethod_Impl"/* name */
	, NULL/* method */
	, &UnityEvent_4_t998_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t211_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_4_t998_UnityEvent_4_FindMethod_Impl_m5252_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t211_0_0_0;
static ParameterInfo UnityEvent_4_t998_UnityEvent_4_GetDelegate_m5253_ParameterInfos[] = 
{
	{"target", 0, 134219568, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134219569, &EmptyCustomAttributesCache, &MethodInfo_t211_0_0_0},
};
extern Il2CppType BaseInvokableCall_t981_0_0_0;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4::GetDelegate(System.Object,System.Reflection.MethodInfo)
MethodInfo UnityEvent_4_GetDelegate_m5253_MethodInfo = 
{
	"GetDelegate"/* name */
	, NULL/* method */
	, &UnityEvent_4_t998_il2cpp_TypeInfo/* declaring_type */
	, &BaseInvokableCall_t981_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityEvent_4_t998_UnityEvent_4_GetDelegate_m5253_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 195/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityEvent_4_t998_MethodInfos[] =
{
	&UnityEvent_4__ctor_m5251_MethodInfo,
	&UnityEvent_4_FindMethod_Impl_m5252_MethodInfo,
	&UnityEvent_4_GetDelegate_m5253_MethodInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t96_0_0_33;
FieldInfo UnityEvent_4_t998____m_InvokeArray_4_FieldInfo = 
{
	"m_InvokeArray"/* name */
	, &ObjectU5BU5D_t96_0_0_33/* type */
	, &UnityEvent_4_t998_il2cpp_TypeInfo/* parent */
	, 0/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UnityEvent_4_t998_FieldInfos[] =
{
	&UnityEvent_4_t998____m_InvokeArray_4_FieldInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityEvent_4_t998_0_0_0;
extern Il2CppType UnityEvent_4_t998_1_0_0;
struct UnityEvent_4_t998;
TypeInfo UnityEvent_4_t998_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityEvent`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityEvent_4_t998_MethodInfos/* methods */
	, NULL/* properties */
	, UnityEvent_4_t998_FieldInfos/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityEvent_4_t998_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityEvent_4_t998_0_0_0/* byval_arg */
	, &UnityEvent_4_t998_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityEvent_4_t998_Il2CppGenericContainer/* generic_container */
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
	, 3/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserAuthorizationDialog_t999_il2cpp_TypeInfo;
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m468_MethodInfo;


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern MethodInfo UserAuthorizationDialog__ctor_m5048_MethodInfo;
 void UserAuthorizationDialog__ctor_m5048 (UserAuthorizationDialog_t999 * __this, MethodInfo* method){
	{
		MonoBehaviour__ctor_m468(__this, /*hidden argument*/&MonoBehaviour__ctor_m468_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern MethodInfo UserAuthorizationDialog_Start_m5049_MethodInfo;
 void UserAuthorizationDialog_Start_m5049 (UserAuthorizationDialog_t999 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern MethodInfo UserAuthorizationDialog_OnGUI_m5050_MethodInfo;
 void UserAuthorizationDialog_OnGUI_m5050 (UserAuthorizationDialog_t999 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m5051_MethodInfo;
 void UserAuthorizationDialog_DoUserAuthorizationDialog_m5051 (UserAuthorizationDialog_t999 * __this, int32_t ___windowID, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition UnityEngine.UserAuthorizationDialog
extern Il2CppType Int32_t73_0_0_32849;
FieldInfo UserAuthorizationDialog_t999____width_2_FieldInfo = 
{
	"width"/* name */
	, &Int32_t73_0_0_32849/* type */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_32849;
FieldInfo UserAuthorizationDialog_t999____height_3_FieldInfo = 
{
	"height"/* name */
	, &Int32_t73_0_0_32849/* type */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Rect_t442_0_0_1;
FieldInfo UserAuthorizationDialog_t999____windowRect_4_FieldInfo = 
{
	"windowRect"/* name */
	, &Rect_t442_0_0_1/* type */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* parent */
	, offsetof(UserAuthorizationDialog_t999, ___windowRect_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Texture_t464_0_0_1;
FieldInfo UserAuthorizationDialog_t999____warningIcon_5_FieldInfo = 
{
	"warningIcon"/* name */
	, &Texture_t464_0_0_1/* type */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* parent */
	, offsetof(UserAuthorizationDialog_t999, ___warningIcon_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UserAuthorizationDialog_t999_FieldInfos[] =
{
	&UserAuthorizationDialog_t999____width_2_FieldInfo,
	&UserAuthorizationDialog_t999____height_3_FieldInfo,
	&UserAuthorizationDialog_t999____windowRect_4_FieldInfo,
	&UserAuthorizationDialog_t999____warningIcon_5_FieldInfo,
	NULL
};
static const int32_t UserAuthorizationDialog_t999____width_2_DefaultValueData = 385;
static Il2CppFieldDefaultValueEntry UserAuthorizationDialog_t999____width_2_DefaultValue = 
{
	&UserAuthorizationDialog_t999____width_2_FieldInfo/* field */
	, { (char*)&UserAuthorizationDialog_t999____width_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t UserAuthorizationDialog_t999____height_3_DefaultValueData = 155;
static Il2CppFieldDefaultValueEntry UserAuthorizationDialog_t999____height_3_DefaultValue = 
{
	&UserAuthorizationDialog_t999____height_3_FieldInfo/* field */
	, { (char*)&UserAuthorizationDialog_t999____height_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UserAuthorizationDialog_t999_FieldDefaultValues[] = 
{
	&UserAuthorizationDialog_t999____width_2_DefaultValue,
	&UserAuthorizationDialog_t999____height_3_DefaultValue,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
MethodInfo UserAuthorizationDialog__ctor_m5048_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserAuthorizationDialog__ctor_m5048/* method */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::Start()
MethodInfo UserAuthorizationDialog_Start_m5049_MethodInfo = 
{
	"Start"/* name */
	, (methodPointerType)&UserAuthorizationDialog_Start_m5049/* method */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
MethodInfo UserAuthorizationDialog_OnGUI_m5050_MethodInfo = 
{
	"OnGUI"/* name */
	, (methodPointerType)&UserAuthorizationDialog_OnGUI_m5050/* method */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo UserAuthorizationDialog_t999_UserAuthorizationDialog_DoUserAuthorizationDialog_m5051_ParameterInfos[] = 
{
	{"windowID", 0, 134219570, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
MethodInfo UserAuthorizationDialog_DoUserAuthorizationDialog_m5051_MethodInfo = 
{
	"DoUserAuthorizationDialog"/* name */
	, (methodPointerType)&UserAuthorizationDialog_DoUserAuthorizationDialog_m5051/* method */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, UserAuthorizationDialog_t999_UserAuthorizationDialog_DoUserAuthorizationDialog_m5051_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1677/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UserAuthorizationDialog_t999_MethodInfos[] =
{
	&UserAuthorizationDialog__ctor_m5048_MethodInfo,
	&UserAuthorizationDialog_Start_m5049_MethodInfo,
	&UserAuthorizationDialog_OnGUI_m5050_MethodInfo,
	&UserAuthorizationDialog_DoUserAuthorizationDialog_m5051_MethodInfo,
	NULL
};
static MethodInfo* UserAuthorizationDialog_t999_VTable[] =
{
	&Object_Equals_m472_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m474_MethodInfo,
	&Object_ToString_m475_MethodInfo,
};
extern TypeInfo AddComponentMenu_t698_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern MethodInfo AddComponentMenu__ctor_m3323_MethodInfo;
void UserAuthorizationDialog_t999_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t698 * tmp;
		tmp = (AddComponentMenu_t698 *)il2cpp_codegen_object_new (&AddComponentMenu_t698_il2cpp_TypeInfo);
		AddComponentMenu__ctor_m3323(tmp, il2cpp_codegen_string_new_wrapper(""), &AddComponentMenu__ctor_m3323_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UserAuthorizationDialog_t999__CustomAttributeCache = {
1,
NULL,
&UserAuthorizationDialog_t999_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UserAuthorizationDialog_t999_0_0_0;
extern Il2CppType UserAuthorizationDialog_t999_1_0_0;
extern TypeInfo MonoBehaviour_t2_il2cpp_TypeInfo;
struct UserAuthorizationDialog_t999;
extern CustomAttributesCache UserAuthorizationDialog_t999__CustomAttributeCache;
TypeInfo UserAuthorizationDialog_t999_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserAuthorizationDialog"/* name */
	, "UnityEngine"/* namespaze */
	, UserAuthorizationDialog_t999_MethodInfos/* methods */
	, NULL/* properties */
	, UserAuthorizationDialog_t999_FieldInfos/* fields */
	, NULL/* events */
	, &MonoBehaviour_t2_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UserAuthorizationDialog_t999_VTable/* vtable */
	, &UserAuthorizationDialog_t999__CustomAttributeCache/* custom_attributes_cache */
	, &UserAuthorizationDialog_t999_il2cpp_TypeInfo/* cast_class */
	, &UserAuthorizationDialog_t999_0_0_0/* byval_arg */
	, &UserAuthorizationDialog_t999_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UserAuthorizationDialog_t999_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserAuthorizationDialog_t999)/* instance_size */
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
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultValueAttribute_t1000_il2cpp_TypeInfo;
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"
extern MethodInfo DefaultValueAttribute_get_Value_m5053_MethodInfo;


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern MethodInfo DefaultValueAttribute__ctor_m5052_MethodInfo;
 void DefaultValueAttribute__ctor_m5052 (DefaultValueAttribute_t1000 * __this, String_t* ___value, MethodInfo* method){
	{
		Attribute__ctor_m1459(__this, /*hidden argument*/&Attribute__ctor_m1459_MethodInfo);
		__this->___DefaultValue_0 = ___value;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
 Object_t * DefaultValueAttribute_get_Value_m5053 (DefaultValueAttribute_t1000 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern MethodInfo DefaultValueAttribute_Equals_m5054_MethodInfo;
 bool DefaultValueAttribute_Equals_m5054 (DefaultValueAttribute_t1000 * __this, Object_t * ___obj, MethodInfo* method){
	DefaultValueAttribute_t1000 * V_0 = {0};
	{
		V_0 = ((DefaultValueAttribute_t1000 *)IsInst(___obj, InitializedTypeInfo(&DefaultValueAttribute_t1000_il2cpp_TypeInfo)));
		if (V_0)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		NullCheck(V_0);
		Object_t * L_1 = DefaultValueAttribute_get_Value_m5053(V_0, /*hidden argument*/&DefaultValueAttribute_get_Value_m5053_MethodInfo);
		return ((((Object_t *)L_1) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(V_0);
		Object_t * L_3 = DefaultValueAttribute_get_Value_m5053(V_0, /*hidden argument*/&DefaultValueAttribute_get_Value_m5053_MethodInfo);
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m517_MethodInfo, L_2, L_3);
		return L_4;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern MethodInfo DefaultValueAttribute_GetHashCode_m5055_MethodInfo;
 int32_t DefaultValueAttribute_GetHashCode_m5055 (DefaultValueAttribute_t1000 * __this, MethodInfo* method){
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m1465(__this, /*hidden argument*/&Attribute_GetHashCode_m1465_MethodInfo);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m518_MethodInfo, L_2);
		return L_3;
	}
}
// Metadata Definition UnityEngine.Internal.DefaultValueAttribute
extern Il2CppType Object_t_0_0_1;
FieldInfo DefaultValueAttribute_t1000____DefaultValue_0_FieldInfo = 
{
	"DefaultValue"/* name */
	, &Object_t_0_0_1/* type */
	, &DefaultValueAttribute_t1000_il2cpp_TypeInfo/* parent */
	, offsetof(DefaultValueAttribute_t1000, ___DefaultValue_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* DefaultValueAttribute_t1000_FieldInfos[] =
{
	&DefaultValueAttribute_t1000____DefaultValue_0_FieldInfo,
	NULL
};
static PropertyInfo DefaultValueAttribute_t1000____Value_PropertyInfo = 
{
	&DefaultValueAttribute_t1000_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &DefaultValueAttribute_get_Value_m5053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* DefaultValueAttribute_t1000_PropertyInfos[] =
{
	&DefaultValueAttribute_t1000____Value_PropertyInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
static ParameterInfo DefaultValueAttribute_t1000_DefaultValueAttribute__ctor_m5052_ParameterInfos[] = 
{
	{"value", 0, 134219571, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
MethodInfo DefaultValueAttribute__ctor_m5052_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultValueAttribute__ctor_m5052/* method */
	, &DefaultValueAttribute_t1000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, DefaultValueAttribute_t1000_DefaultValueAttribute__ctor_m5052_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1678/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
MethodInfo DefaultValueAttribute_get_Value_m5053_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&DefaultValueAttribute_get_Value_m5053/* method */
	, &DefaultValueAttribute_t1000_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1679/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo DefaultValueAttribute_t1000_DefaultValueAttribute_Equals_m5054_ParameterInfos[] = 
{
	{"obj", 0, 134219572, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
MethodInfo DefaultValueAttribute_Equals_m5054_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultValueAttribute_Equals_m5054/* method */
	, &DefaultValueAttribute_t1000_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, DefaultValueAttribute_t1000_DefaultValueAttribute_Equals_m5054_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1680/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
MethodInfo DefaultValueAttribute_GetHashCode_m5055_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultValueAttribute_GetHashCode_m5055/* method */
	, &DefaultValueAttribute_t1000_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1681/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DefaultValueAttribute_t1000_MethodInfos[] =
{
	&DefaultValueAttribute__ctor_m5052_MethodInfo,
	&DefaultValueAttribute_get_Value_m5053_MethodInfo,
	&DefaultValueAttribute_Equals_m5054_MethodInfo,
	&DefaultValueAttribute_GetHashCode_m5055_MethodInfo,
	NULL
};
static MethodInfo* DefaultValueAttribute_t1000_VTable[] =
{
	&DefaultValueAttribute_Equals_m5054_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&DefaultValueAttribute_GetHashCode_m5055_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultValueAttribute_t1000_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void DefaultValueAttribute_t1000_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 18432, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache DefaultValueAttribute_t1000__CustomAttributeCache = {
1,
NULL,
&DefaultValueAttribute_t1000_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType DefaultValueAttribute_t1000_0_0_0;
extern Il2CppType DefaultValueAttribute_t1000_1_0_0;
struct DefaultValueAttribute_t1000;
extern CustomAttributesCache DefaultValueAttribute_t1000__CustomAttributeCache;
TypeInfo DefaultValueAttribute_t1000_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultValueAttribute"/* name */
	, "UnityEngine.Internal"/* namespaze */
	, DefaultValueAttribute_t1000_MethodInfos/* methods */
	, DefaultValueAttribute_t1000_PropertyInfos/* properties */
	, DefaultValueAttribute_t1000_FieldInfos/* fields */
	, NULL/* events */
	, &Attribute_t226_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &DefaultValueAttribute_t1000_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultValueAttribute_t1000_VTable/* vtable */
	, &DefaultValueAttribute_t1000__CustomAttributeCache/* custom_attributes_cache */
	, &DefaultValueAttribute_t1000_il2cpp_TypeInfo/* cast_class */
	, &DefaultValueAttribute_t1000_0_0_0/* byval_arg */
	, &DefaultValueAttribute_t1000_1_0_0/* this_arg */
	, DefaultValueAttribute_t1000_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultValueAttribute_t1000)/* instance_size */
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
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExcludeFromDocsAttribute_t1001_il2cpp_TypeInfo;
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern MethodInfo ExcludeFromDocsAttribute__ctor_m5056_MethodInfo;
 void ExcludeFromDocsAttribute__ctor_m5056 (ExcludeFromDocsAttribute_t1001 * __this, MethodInfo* method){
	{
		Attribute__ctor_m1459(__this, /*hidden argument*/&Attribute__ctor_m1459_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngine.Internal.ExcludeFromDocsAttribute
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
MethodInfo ExcludeFromDocsAttribute__ctor_m5056_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExcludeFromDocsAttribute__ctor_m5056/* method */
	, &ExcludeFromDocsAttribute_t1001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1682/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExcludeFromDocsAttribute_t1001_MethodInfos[] =
{
	&ExcludeFromDocsAttribute__ctor_m5056_MethodInfo,
	NULL
};
static MethodInfo* ExcludeFromDocsAttribute_t1001_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair ExcludeFromDocsAttribute_t1001_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void ExcludeFromDocsAttribute_t1001_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 64, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ExcludeFromDocsAttribute_t1001__CustomAttributeCache = {
1,
NULL,
&ExcludeFromDocsAttribute_t1001_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType ExcludeFromDocsAttribute_t1001_0_0_0;
extern Il2CppType ExcludeFromDocsAttribute_t1001_1_0_0;
struct ExcludeFromDocsAttribute_t1001;
extern CustomAttributesCache ExcludeFromDocsAttribute_t1001__CustomAttributeCache;
TypeInfo ExcludeFromDocsAttribute_t1001_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExcludeFromDocsAttribute"/* name */
	, "UnityEngine.Internal"/* namespaze */
	, ExcludeFromDocsAttribute_t1001_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Attribute_t226_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ExcludeFromDocsAttribute_t1001_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, ExcludeFromDocsAttribute_t1001_VTable/* vtable */
	, &ExcludeFromDocsAttribute_t1001__CustomAttributeCache/* custom_attributes_cache */
	, &ExcludeFromDocsAttribute_t1001_il2cpp_TypeInfo/* cast_class */
	, &ExcludeFromDocsAttribute_t1001_0_0_0/* byval_arg */
	, &ExcludeFromDocsAttribute_t1001_1_0_0/* this_arg */
	, ExcludeFromDocsAttribute_t1001_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExcludeFromDocsAttribute_t1001)/* instance_size */
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
	, 1/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
 void FormerlySerializedAsAttribute__ctor_m3324 (FormerlySerializedAsAttribute_t699 * __this, String_t* ___oldName, MethodInfo* method){
	{
		Attribute__ctor_m1459(__this, /*hidden argument*/&Attribute__ctor_m1459_MethodInfo);
		__this->___m_oldName_0 = ___oldName;
		return;
	}
}
// Metadata Definition UnityEngine.Serialization.FormerlySerializedAsAttribute
extern Il2CppType String_t_0_0_1;
FieldInfo FormerlySerializedAsAttribute_t699____m_oldName_0_FieldInfo = 
{
	"m_oldName"/* name */
	, &String_t_0_0_1/* type */
	, &FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo/* parent */
	, offsetof(FormerlySerializedAsAttribute_t699, ___m_oldName_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FormerlySerializedAsAttribute_t699_FieldInfos[] =
{
	&FormerlySerializedAsAttribute_t699____m_oldName_0_FieldInfo,
	NULL
};
extern Il2CppType String_t_0_0_0;
static ParameterInfo FormerlySerializedAsAttribute_t699_FormerlySerializedAsAttribute__ctor_m3324_ParameterInfos[] = 
{
	{"oldName", 0, 134219573, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
MethodInfo FormerlySerializedAsAttribute__ctor_m3324_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FormerlySerializedAsAttribute__ctor_m3324/* method */
	, &FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, FormerlySerializedAsAttribute_t699_FormerlySerializedAsAttribute__ctor_m3324_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1683/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FormerlySerializedAsAttribute_t699_MethodInfos[] =
{
	&FormerlySerializedAsAttribute__ctor_m3324_MethodInfo,
	NULL
};
static MethodInfo* FormerlySerializedAsAttribute_t699_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
static Il2CppInterfaceOffsetPair FormerlySerializedAsAttribute_t699_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void FormerlySerializedAsAttribute_t699_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 256, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		AttributeUsageAttribute_set_AllowMultiple_m1467(tmp, true, &AttributeUsageAttribute_set_AllowMultiple_m1467_MethodInfo);
		AttributeUsageAttribute_set_Inherited_m5162(tmp, false, &AttributeUsageAttribute_set_Inherited_m5162_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache FormerlySerializedAsAttribute_t699__CustomAttributeCache = {
1,
NULL,
&FormerlySerializedAsAttribute_t699_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType FormerlySerializedAsAttribute_t699_0_0_0;
extern Il2CppType FormerlySerializedAsAttribute_t699_1_0_0;
struct FormerlySerializedAsAttribute_t699;
extern CustomAttributesCache FormerlySerializedAsAttribute_t699__CustomAttributeCache;
TypeInfo FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "FormerlySerializedAsAttribute"/* name */
	, "UnityEngine.Serialization"/* namespaze */
	, FormerlySerializedAsAttribute_t699_MethodInfos/* methods */
	, NULL/* properties */
	, FormerlySerializedAsAttribute_t699_FieldInfos/* fields */
	, NULL/* events */
	, &Attribute_t226_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, FormerlySerializedAsAttribute_t699_VTable/* vtable */
	, &FormerlySerializedAsAttribute_t699__CustomAttributeCache/* custom_attributes_cache */
	, &FormerlySerializedAsAttribute_t699_il2cpp_TypeInfo/* cast_class */
	, &FormerlySerializedAsAttribute_t699_0_0_0/* byval_arg */
	, &FormerlySerializedAsAttribute_t699_1_0_0/* this_arg */
	, FormerlySerializedAsAttribute_t699_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FormerlySerializedAsAttribute_t699)/* instance_size */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRules_t1002_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// Metadata Definition UnityEngineInternal.TypeInferenceRules
extern Il2CppType Int32_t73_0_0_1542;
FieldInfo TypeInferenceRules_t1002____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t73_0_0_1542/* type */
	, &TypeInferenceRules_t1002_il2cpp_TypeInfo/* parent */
	, offsetof(TypeInferenceRules_t1002, ___value___1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t1002_0_0_32854;
FieldInfo TypeInferenceRules_t1002____TypeReferencedByFirstArgument_2_FieldInfo = 
{
	"TypeReferencedByFirstArgument"/* name */
	, &TypeInferenceRules_t1002_0_0_32854/* type */
	, &TypeInferenceRules_t1002_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t1002_0_0_32854;
FieldInfo TypeInferenceRules_t1002____TypeReferencedBySecondArgument_3_FieldInfo = 
{
	"TypeReferencedBySecondArgument"/* name */
	, &TypeInferenceRules_t1002_0_0_32854/* type */
	, &TypeInferenceRules_t1002_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t1002_0_0_32854;
FieldInfo TypeInferenceRules_t1002____ArrayOfTypeReferencedByFirstArgument_4_FieldInfo = 
{
	"ArrayOfTypeReferencedByFirstArgument"/* name */
	, &TypeInferenceRules_t1002_0_0_32854/* type */
	, &TypeInferenceRules_t1002_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType TypeInferenceRules_t1002_0_0_32854;
FieldInfo TypeInferenceRules_t1002____TypeOfFirstArgument_5_FieldInfo = 
{
	"TypeOfFirstArgument"/* name */
	, &TypeInferenceRules_t1002_0_0_32854/* type */
	, &TypeInferenceRules_t1002_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TypeInferenceRules_t1002_FieldInfos[] =
{
	&TypeInferenceRules_t1002____value___1_FieldInfo,
	&TypeInferenceRules_t1002____TypeReferencedByFirstArgument_2_FieldInfo,
	&TypeInferenceRules_t1002____TypeReferencedBySecondArgument_3_FieldInfo,
	&TypeInferenceRules_t1002____ArrayOfTypeReferencedByFirstArgument_4_FieldInfo,
	&TypeInferenceRules_t1002____TypeOfFirstArgument_5_FieldInfo,
	NULL
};
static const int32_t TypeInferenceRules_t1002____TypeReferencedByFirstArgument_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t1002____TypeReferencedByFirstArgument_2_DefaultValue = 
{
	&TypeInferenceRules_t1002____TypeReferencedByFirstArgument_2_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t1002____TypeReferencedByFirstArgument_2_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TypeInferenceRules_t1002____TypeReferencedBySecondArgument_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t1002____TypeReferencedBySecondArgument_3_DefaultValue = 
{
	&TypeInferenceRules_t1002____TypeReferencedBySecondArgument_3_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t1002____TypeReferencedBySecondArgument_3_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TypeInferenceRules_t1002____ArrayOfTypeReferencedByFirstArgument_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t1002____ArrayOfTypeReferencedByFirstArgument_4_DefaultValue = 
{
	&TypeInferenceRules_t1002____ArrayOfTypeReferencedByFirstArgument_4_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t1002____ArrayOfTypeReferencedByFirstArgument_4_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static const int32_t TypeInferenceRules_t1002____TypeOfFirstArgument_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry TypeInferenceRules_t1002____TypeOfFirstArgument_5_DefaultValue = 
{
	&TypeInferenceRules_t1002____TypeOfFirstArgument_5_FieldInfo/* field */
	, { (char*)&TypeInferenceRules_t1002____TypeOfFirstArgument_5_DefaultValueData, &Int32_t73_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* TypeInferenceRules_t1002_FieldDefaultValues[] = 
{
	&TypeInferenceRules_t1002____TypeReferencedByFirstArgument_2_DefaultValue,
	&TypeInferenceRules_t1002____TypeReferencedBySecondArgument_3_DefaultValue,
	&TypeInferenceRules_t1002____ArrayOfTypeReferencedByFirstArgument_4_DefaultValue,
	&TypeInferenceRules_t1002____TypeOfFirstArgument_5_DefaultValue,
	NULL
};
static MethodInfo* TypeInferenceRules_t1002_MethodInfos[] =
{
	NULL
};
static MethodInfo* TypeInferenceRules_t1002_VTable[] =
{
	&Enum_Equals_m532_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Enum_GetHashCode_m533_MethodInfo,
	&Enum_ToString_m534_MethodInfo,
	&Enum_ToString_m535_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m536_MethodInfo,
	&Enum_System_IConvertible_ToByte_m537_MethodInfo,
	&Enum_System_IConvertible_ToChar_m538_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m539_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m540_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m541_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m542_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m543_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m544_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m545_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m546_MethodInfo,
	&Enum_ToString_m547_MethodInfo,
	&Enum_System_IConvertible_ToType_m548_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m549_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m550_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m551_MethodInfo,
	&Enum_CompareTo_m552_MethodInfo,
	&Enum_GetTypeCode_m553_MethodInfo,
};
static Il2CppInterfaceOffsetPair TypeInferenceRules_t1002_InterfacesOffsets[] = 
{
	{ &IFormattable_t99_il2cpp_TypeInfo, 4},
	{ &IConvertible_t100_il2cpp_TypeInfo, 5},
	{ &IComparable_t101_il2cpp_TypeInfo, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TypeInferenceRules_t1002_0_0_0;
extern Il2CppType TypeInferenceRules_t1002_1_0_0;
TypeInfo TypeInferenceRules_t1002_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeInferenceRules"/* name */
	, "UnityEngineInternal"/* namespaze */
	, TypeInferenceRules_t1002_MethodInfos/* methods */
	, NULL/* properties */
	, TypeInferenceRules_t1002_FieldInfos/* fields */
	, NULL/* events */
	, &Enum_t98_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Int32_t73_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TypeInferenceRules_t1002_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Int32_t73_il2cpp_TypeInfo/* cast_class */
	, &TypeInferenceRules_t1002_0_0_0/* byval_arg */
	, &TypeInferenceRules_t1002_1_0_0/* this_arg */
	, TypeInferenceRules_t1002_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, TypeInferenceRules_t1002_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeInferenceRules_t1002)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (int32_t)/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, true/* enumtype */
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
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo;
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo TypeInferenceRuleAttribute__ctor_m5058_MethodInfo;


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern MethodInfo TypeInferenceRuleAttribute__ctor_m5057_MethodInfo;
 void TypeInferenceRuleAttribute__ctor_m5057 (TypeInferenceRuleAttribute_t1003 * __this, int32_t ___rule, MethodInfo* method){
	{
		int32_t L_0 = ___rule;
		Object_t * L_1 = Box(InitializedTypeInfo(&TypeInferenceRules_t1002_il2cpp_TypeInfo), &L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m534_MethodInfo, L_1);
		TypeInferenceRuleAttribute__ctor_m5058(__this, L_2, /*hidden argument*/&TypeInferenceRuleAttribute__ctor_m5058_MethodInfo);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
 void TypeInferenceRuleAttribute__ctor_m5058 (TypeInferenceRuleAttribute_t1003 * __this, String_t* ___rule, MethodInfo* method){
	{
		Attribute__ctor_m1459(__this, /*hidden argument*/&Attribute__ctor_m1459_MethodInfo);
		__this->____rule_0 = ___rule;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern MethodInfo TypeInferenceRuleAttribute_ToString_m5059_MethodInfo;
 String_t* TypeInferenceRuleAttribute_ToString_m5059 (TypeInferenceRuleAttribute_t1003 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// Metadata Definition UnityEngineInternal.TypeInferenceRuleAttribute
extern Il2CppType String_t_0_0_33;
FieldInfo TypeInferenceRuleAttribute_t1003_____rule_0_FieldInfo = 
{
	"_rule"/* name */
	, &String_t_0_0_33/* type */
	, &TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo/* parent */
	, offsetof(TypeInferenceRuleAttribute_t1003, ____rule_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TypeInferenceRuleAttribute_t1003_FieldInfos[] =
{
	&TypeInferenceRuleAttribute_t1003_____rule_0_FieldInfo,
	NULL
};
extern Il2CppType TypeInferenceRules_t1002_0_0_0;
static ParameterInfo TypeInferenceRuleAttribute_t1003_TypeInferenceRuleAttribute__ctor_m5057_ParameterInfos[] = 
{
	{"rule", 0, 134219574, &EmptyCustomAttributesCache, &TypeInferenceRules_t1002_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
MethodInfo TypeInferenceRuleAttribute__ctor_m5057_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute__ctor_m5057/* method */
	, &TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, TypeInferenceRuleAttribute_t1003_TypeInferenceRuleAttribute__ctor_m5057_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1684/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo TypeInferenceRuleAttribute_t1003_TypeInferenceRuleAttribute__ctor_m5058_ParameterInfos[] = 
{
	{"rule", 0, 134219575, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
MethodInfo TypeInferenceRuleAttribute__ctor_m5058_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute__ctor_m5058/* method */
	, &TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, TypeInferenceRuleAttribute_t1003_TypeInferenceRuleAttribute__ctor_m5058_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1685/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
MethodInfo TypeInferenceRuleAttribute_ToString_m5059_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&TypeInferenceRuleAttribute_ToString_m5059/* method */
	, &TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1686/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TypeInferenceRuleAttribute_t1003_MethodInfos[] =
{
	&TypeInferenceRuleAttribute__ctor_m5057_MethodInfo,
	&TypeInferenceRuleAttribute__ctor_m5058_MethodInfo,
	&TypeInferenceRuleAttribute_ToString_m5059_MethodInfo,
	NULL
};
static MethodInfo* TypeInferenceRuleAttribute_t1003_VTable[] =
{
	&Attribute_Equals_m1464_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Attribute_GetHashCode_m1465_MethodInfo,
	&TypeInferenceRuleAttribute_ToString_m5059_MethodInfo,
};
static Il2CppInterfaceOffsetPair TypeInferenceRuleAttribute_t1003_InterfacesOffsets[] = 
{
	{ &_Attribute_t336_il2cpp_TypeInfo, 4},
};
void TypeInferenceRuleAttribute_t1003_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t337 * tmp;
		tmp = (AttributeUsageAttribute_t337 *)il2cpp_codegen_object_new (&AttributeUsageAttribute_t337_il2cpp_TypeInfo);
		AttributeUsageAttribute__ctor_m1466(tmp, 64, &AttributeUsageAttribute__ctor_m1466_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache TypeInferenceRuleAttribute_t1003__CustomAttributeCache = {
1,
NULL,
&TypeInferenceRuleAttribute_t1003_CustomAttributesCacheGenerator
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType TypeInferenceRuleAttribute_t1003_0_0_0;
extern Il2CppType TypeInferenceRuleAttribute_t1003_1_0_0;
struct TypeInferenceRuleAttribute_t1003;
extern CustomAttributesCache TypeInferenceRuleAttribute_t1003__CustomAttributeCache;
TypeInfo TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TypeInferenceRuleAttribute"/* name */
	, "UnityEngineInternal"/* namespaze */
	, TypeInferenceRuleAttribute_t1003_MethodInfos/* methods */
	, NULL/* properties */
	, TypeInferenceRuleAttribute_t1003_FieldInfos/* fields */
	, NULL/* events */
	, &Attribute_t226_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TypeInferenceRuleAttribute_t1003_VTable/* vtable */
	, &TypeInferenceRuleAttribute_t1003__CustomAttributeCache/* custom_attributes_cache */
	, &TypeInferenceRuleAttribute_t1003_il2cpp_TypeInfo/* cast_class */
	, &TypeInferenceRuleAttribute_t1003_0_0_0/* byval_arg */
	, &TypeInferenceRuleAttribute_t1003_1_0_0/* this_arg */
	, TypeInferenceRuleAttribute_t1003_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TypeInferenceRuleAttribute_t1003)/* instance_size */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericStack_t849_il2cpp_TypeInfo;
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
extern MethodInfo Stack__ctor_m5254_MethodInfo;


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern MethodInfo GenericStack__ctor_m5060_MethodInfo;
 void GenericStack__ctor_m5060 (GenericStack_t849 * __this, MethodInfo* method){
	{
		Stack__ctor_m5254(__this, /*hidden argument*/&Stack__ctor_m5254_MethodInfo);
		return;
	}
}
// Metadata Definition UnityEngineInternal.GenericStack
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngineInternal.GenericStack::.ctor()
MethodInfo GenericStack__ctor_m5060_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericStack__ctor_m5060/* method */
	, &GenericStack_t849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1687/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* GenericStack_t849_MethodInfos[] =
{
	&GenericStack__ctor_m5060_MethodInfo,
	NULL
};
extern MethodInfo Stack_GetEnumerator_m5255_MethodInfo;
extern MethodInfo Stack_get_Count_m5256_MethodInfo;
extern MethodInfo Stack_get_IsSynchronized_m5257_MethodInfo;
extern MethodInfo Stack_get_SyncRoot_m5258_MethodInfo;
extern MethodInfo Stack_CopyTo_m5259_MethodInfo;
extern MethodInfo Stack_Clear_m5093_MethodInfo;
extern MethodInfo Stack_Peek_m5088_MethodInfo;
extern MethodInfo Stack_Pop_m5089_MethodInfo;
extern MethodInfo Stack_Push_m5087_MethodInfo;
static MethodInfo* GenericStack_t849_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&Stack_GetEnumerator_m5255_MethodInfo,
	&Stack_get_Count_m5256_MethodInfo,
	&Stack_get_IsSynchronized_m5257_MethodInfo,
	&Stack_get_SyncRoot_m5258_MethodInfo,
	&Stack_CopyTo_m5259_MethodInfo,
	&Stack_get_Count_m5256_MethodInfo,
	&Stack_get_IsSynchronized_m5257_MethodInfo,
	&Stack_get_SyncRoot_m5258_MethodInfo,
	&Stack_Clear_m5093_MethodInfo,
	&Stack_CopyTo_m5259_MethodInfo,
	&Stack_GetEnumerator_m5255_MethodInfo,
	&Stack_Peek_m5088_MethodInfo,
	&Stack_Pop_m5089_MethodInfo,
	&Stack_Push_m5087_MethodInfo,
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo ICloneable_t755_il2cpp_TypeInfo;
extern TypeInfo ICollection_t1114_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericStack_t849_InterfacesOffsets[] = 
{
	{ &IEnumerable_t103_il2cpp_TypeInfo, 4},
	{ &ICloneable_t755_il2cpp_TypeInfo, 5},
	{ &ICollection_t1114_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType GenericStack_t849_0_0_0;
extern Il2CppType GenericStack_t849_1_0_0;
extern TypeInfo Stack_t1004_il2cpp_TypeInfo;
struct GenericStack_t849;
TypeInfo GenericStack_t849_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericStack"/* name */
	, "UnityEngineInternal"/* namespaze */
	, GenericStack_t849_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Stack_t1004_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericStack_t849_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericStack_t849_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericStack_t849_il2cpp_TypeInfo/* cast_class */
	, &GenericStack_t849_0_0_0/* byval_arg */
	, &GenericStack_t849_1_0_0/* this_arg */
	, GenericStack_t849_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericStack_t849)/* instance_size */
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
	, 18/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern MethodInfo UnityAction__ctor_m3679_MethodInfo;
 void UnityAction__ctor_m3679 (UnityAction_t576 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
 void UnityAction_Invoke_m3532 (UnityAction_t576 * __this, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m3532((UnityAction_t576 *)__this->___prev_9, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
void pinvoke_delegate_wrapper_UnityAction_t576(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo UnityAction_BeginInvoke_m5061_MethodInfo;
 Object_t * UnityAction_BeginInvoke_m5061 (UnityAction_t576 * __this, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern MethodInfo UnityAction_EndInvoke_m5062_MethodInfo;
 void UnityAction_EndInvoke_m5062 (UnityAction_t576 * __this, Object_t * ___result, MethodInfo* method){
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Metadata Definition UnityEngine.Events.UnityAction
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_t576_UnityAction__ctor_m3679_ParameterInfos[] = 
{
	{"object", 0, 134219576, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219577, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction__ctor_m3679_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction__ctor_m3679/* method */
	, &UnityAction_t576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, UnityAction_t576_UnityAction__ctor_m3679_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1688/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction::Invoke()
MethodInfo UnityAction_Invoke_m3532_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_Invoke_m3532/* method */
	, &UnityAction_t576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1689/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_t576_UnityAction_BeginInvoke_m5061_ParameterInfos[] = 
{
	{"callback", 0, 134219578, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 1, 134219579, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
MethodInfo UnityAction_BeginInvoke_m5061_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_BeginInvoke_m5061/* method */
	, &UnityAction_t576_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_t576_UnityAction_BeginInvoke_m5061_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1690/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_t576_UnityAction_EndInvoke_m5062_ParameterInfos[] = 
{
	{"result", 0, 134219580, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_EndInvoke_m5062_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_EndInvoke_m5062/* method */
	, &UnityAction_t576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, UnityAction_t576_UnityAction_EndInvoke_m5062_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1691/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_t576_MethodInfos[] =
{
	&UnityAction__ctor_m3679_MethodInfo,
	&UnityAction_Invoke_m3532_MethodInfo,
	&UnityAction_BeginInvoke_m5061_MethodInfo,
	&UnityAction_EndInvoke_m5062_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m3646_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m3647_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m3648_MethodInfo;
extern MethodInfo Delegate_Clone_m3649_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m3650_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m3651_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m3652_MethodInfo;
static MethodInfo* UnityAction_t576_VTable[] =
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
	&UnityAction_Invoke_m3532_MethodInfo,
	&UnityAction_BeginInvoke_m5061_MethodInfo,
	&UnityAction_EndInvoke_m5062_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_t576_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_t576_1_0_0;
extern TypeInfo MulticastDelegate_t608_il2cpp_TypeInfo;
struct UnityAction_t576;
TypeInfo UnityAction_t576_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_t576_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_t576_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_t576_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_t576_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_t576_0_0_0/* byval_arg */
	, &UnityAction_t576_1_0_0/* this_arg */
	, UnityAction_t576_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_UnityAction_t576/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_t576)/* instance_size */
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
// UnityEngine.Events.UnityAction`1
#include "UnityEngine_UnityEngine_Events_UnityAction_1.h"
extern Il2CppGenericContainer UnityAction_1_t1005_Il2CppGenericContainer;
extern TypeInfo UnityAction_1_t1005_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_1_t1005_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_1_t1005_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_1_t1005_Il2CppGenericParametersArray[1] = 
{
	&UnityAction_1_t1005_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_1_t1005_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_1_t1005_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_1_t1005_il2cpp_TypeInfo, 1, 0, UnityAction_1_t1005_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_1_t1005_UnityAction_1__ctor_m5260_ParameterInfos[] = 
{
	{"object", 0, 134219581, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219582, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`1::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m5260_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_1_t1005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t1005_UnityAction_1__ctor_m5260_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1692/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t1005_gp_0_0_0_0;
extern Il2CppType UnityAction_1_t1005_gp_0_0_0_0;
static ParameterInfo UnityAction_1_t1005_UnityAction_1_Invoke_m5261_ParameterInfos[] = 
{
	{"arg0", 0, 134219583, &EmptyCustomAttributesCache, &UnityAction_1_t1005_gp_0_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m5261_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_1_t1005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t1005_UnityAction_1_Invoke_m5261_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1693/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_1_t1005_gp_0_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t1005_UnityAction_1_BeginInvoke_m5262_ParameterInfos[] = 
{
	{"arg0", 0, 134219584, &EmptyCustomAttributesCache, &UnityAction_1_t1005_gp_0_0_0_0},
	{"callback", 1, 134219585, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134219586, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m5262_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_1_t1005_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t1005_UnityAction_1_BeginInvoke_m5262_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1694/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_1_t1005_UnityAction_1_EndInvoke_m5263_ParameterInfos[] = 
{
	{"result", 0, 134219587, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`1::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m5263_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_1_t1005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_1_t1005_UnityAction_1_EndInvoke_m5263_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1695/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_1_t1005_MethodInfos[] =
{
	&UnityAction_1__ctor_m5260_MethodInfo,
	&UnityAction_1_Invoke_m5261_MethodInfo,
	&UnityAction_1_BeginInvoke_m5262_MethodInfo,
	&UnityAction_1_EndInvoke_m5263_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t1005_0_0_0;
extern Il2CppType UnityAction_1_t1005_1_0_0;
struct UnityAction_1_t1005;
TypeInfo UnityAction_1_t1005_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t1005_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t1005_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_1_t1005_0_0_0/* byval_arg */
	, &UnityAction_1_t1005_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_1_t1005_Il2CppGenericContainer/* generic_container */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityAction`2
#include "UnityEngine_UnityEngine_Events_UnityAction_2.h"
extern Il2CppGenericContainer UnityAction_2_t1006_Il2CppGenericContainer;
extern TypeInfo UnityAction_2_t1006_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_2_t1006_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_2_t1006_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityAction_2_t1006_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_2_t1006_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_2_t1006_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_2_t1006_Il2CppGenericParametersArray[2] = 
{
	&UnityAction_2_t1006_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_2_t1006_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_2_t1006_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_2_t1006_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_2_t1006_il2cpp_TypeInfo, 2, 0, UnityAction_2_t1006_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_2_t1006_UnityAction_2__ctor_m5264_ParameterInfos[] = 
{
	{"object", 0, 134219588, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219589, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`2::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_2__ctor_m5264_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_2_t1006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t1006_UnityAction_2__ctor_m5264_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1696/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_2_t1006_gp_0_0_0_0;
extern Il2CppType UnityAction_2_t1006_gp_0_0_0_0;
extern Il2CppType UnityAction_2_t1006_gp_1_0_0_0;
extern Il2CppType UnityAction_2_t1006_gp_1_0_0_0;
static ParameterInfo UnityAction_2_t1006_UnityAction_2_Invoke_m5265_ParameterInfos[] = 
{
	{"arg0", 0, 134219590, &EmptyCustomAttributesCache, &UnityAction_2_t1006_gp_0_0_0_0},
	{"arg1", 1, 134219591, &EmptyCustomAttributesCache, &UnityAction_2_t1006_gp_1_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
MethodInfo UnityAction_2_Invoke_m5265_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_2_t1006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t1006_UnityAction_2_Invoke_m5265_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1697/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_2_t1006_gp_0_0_0_0;
extern Il2CppType UnityAction_2_t1006_gp_1_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_2_t1006_UnityAction_2_BeginInvoke_m5266_ParameterInfos[] = 
{
	{"arg0", 0, 134219592, &EmptyCustomAttributesCache, &UnityAction_2_t1006_gp_0_0_0_0},
	{"arg1", 1, 134219593, &EmptyCustomAttributesCache, &UnityAction_2_t1006_gp_1_0_0_0},
	{"callback", 2, 134219594, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 3, 134219595, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`2::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
MethodInfo UnityAction_2_BeginInvoke_m5266_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_2_t1006_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t1006_UnityAction_2_BeginInvoke_m5266_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1698/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_2_t1006_UnityAction_2_EndInvoke_m5267_ParameterInfos[] = 
{
	{"result", 0, 134219596, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`2::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_2_EndInvoke_m5267_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_2_t1006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_2_t1006_UnityAction_2_EndInvoke_m5267_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1699/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_2_t1006_MethodInfos[] =
{
	&UnityAction_2__ctor_m5264_MethodInfo,
	&UnityAction_2_Invoke_m5265_MethodInfo,
	&UnityAction_2_BeginInvoke_m5266_MethodInfo,
	&UnityAction_2_EndInvoke_m5267_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_2_t1006_0_0_0;
extern Il2CppType UnityAction_2_t1006_1_0_0;
struct UnityAction_2_t1006;
TypeInfo UnityAction_2_t1006_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`2"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_2_t1006_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_2_t1006_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_2_t1006_0_0_0/* byval_arg */
	, &UnityAction_2_t1006_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_2_t1006_Il2CppGenericContainer/* generic_container */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityAction`3
#include "UnityEngine_UnityEngine_Events_UnityAction_3.h"
extern Il2CppGenericContainer UnityAction_3_t1007_Il2CppGenericContainer;
extern TypeInfo UnityAction_3_t1007_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_3_t1007_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_3_t1007_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityAction_3_t1007_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_3_t1007_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_3_t1007_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityAction_3_t1007_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_3_t1007_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_3_t1007_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_3_t1007_Il2CppGenericParametersArray[3] = 
{
	&UnityAction_3_t1007_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_3_t1007_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_3_t1007_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_3_t1007_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_3_t1007_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_3_t1007_il2cpp_TypeInfo, 3, 0, UnityAction_3_t1007_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_3_t1007_UnityAction_3__ctor_m5268_ParameterInfos[] = 
{
	{"object", 0, 134219597, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219598, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`3::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_3__ctor_m5268_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_3_t1007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t1007_UnityAction_3__ctor_m5268_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1700/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_3_t1007_gp_0_0_0_0;
extern Il2CppType UnityAction_3_t1007_gp_0_0_0_0;
extern Il2CppType UnityAction_3_t1007_gp_1_0_0_0;
extern Il2CppType UnityAction_3_t1007_gp_1_0_0_0;
extern Il2CppType UnityAction_3_t1007_gp_2_0_0_0;
extern Il2CppType UnityAction_3_t1007_gp_2_0_0_0;
static ParameterInfo UnityAction_3_t1007_UnityAction_3_Invoke_m5269_ParameterInfos[] = 
{
	{"arg0", 0, 134219599, &EmptyCustomAttributesCache, &UnityAction_3_t1007_gp_0_0_0_0},
	{"arg1", 1, 134219600, &EmptyCustomAttributesCache, &UnityAction_3_t1007_gp_1_0_0_0},
	{"arg2", 2, 134219601, &EmptyCustomAttributesCache, &UnityAction_3_t1007_gp_2_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`3::Invoke(T0,T1,T2)
MethodInfo UnityAction_3_Invoke_m5269_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_3_t1007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t1007_UnityAction_3_Invoke_m5269_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1701/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_3_t1007_gp_0_0_0_0;
extern Il2CppType UnityAction_3_t1007_gp_1_0_0_0;
extern Il2CppType UnityAction_3_t1007_gp_2_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_3_t1007_UnityAction_3_BeginInvoke_m5270_ParameterInfos[] = 
{
	{"arg0", 0, 134219602, &EmptyCustomAttributesCache, &UnityAction_3_t1007_gp_0_0_0_0},
	{"arg1", 1, 134219603, &EmptyCustomAttributesCache, &UnityAction_3_t1007_gp_1_0_0_0},
	{"arg2", 2, 134219604, &EmptyCustomAttributesCache, &UnityAction_3_t1007_gp_2_0_0_0},
	{"callback", 3, 134219605, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 4, 134219606, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`3::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
MethodInfo UnityAction_3_BeginInvoke_m5270_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_3_t1007_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t1007_UnityAction_3_BeginInvoke_m5270_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1702/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_3_t1007_UnityAction_3_EndInvoke_m5271_ParameterInfos[] = 
{
	{"result", 0, 134219607, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`3::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_3_EndInvoke_m5271_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_3_t1007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_3_t1007_UnityAction_3_EndInvoke_m5271_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1703/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_3_t1007_MethodInfos[] =
{
	&UnityAction_3__ctor_m5268_MethodInfo,
	&UnityAction_3_Invoke_m5269_MethodInfo,
	&UnityAction_3_BeginInvoke_m5270_MethodInfo,
	&UnityAction_3_EndInvoke_m5271_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_3_t1007_0_0_0;
extern Il2CppType UnityAction_3_t1007_1_0_0;
struct UnityAction_3_t1007;
TypeInfo UnityAction_3_t1007_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`3"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_3_t1007_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_3_t1007_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_3_t1007_0_0_0/* byval_arg */
	, &UnityAction_3_t1007_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_3_t1007_Il2CppGenericContainer/* generic_container */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.UnityAction`4
#include "UnityEngine_UnityEngine_Events_UnityAction_4.h"
extern Il2CppGenericContainer UnityAction_4_t1008_Il2CppGenericContainer;
extern TypeInfo UnityAction_4_t1008_gp_T0_0_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t1008_gp_T0_0_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t1008_Il2CppGenericContainer, 0}, {NULL, "T0", 0, 0, NULL} };
extern TypeInfo UnityAction_4_t1008_gp_T1_1_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t1008_gp_T1_1_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t1008_Il2CppGenericContainer, 1}, {NULL, "T1", 0, 0, NULL} };
extern TypeInfo UnityAction_4_t1008_gp_T2_2_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t1008_gp_T2_2_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t1008_Il2CppGenericContainer, 2}, {NULL, "T2", 0, 0, NULL} };
extern TypeInfo UnityAction_4_t1008_gp_T3_3_il2cpp_TypeInfo;
Il2CppGenericParamFull UnityAction_4_t1008_gp_T3_3_il2cpp_TypeInfo_GenericParamFull = { { &UnityAction_4_t1008_Il2CppGenericContainer, 3}, {NULL, "T3", 0, 0, NULL} };
static Il2CppGenericParamFull* UnityAction_4_t1008_Il2CppGenericParametersArray[4] = 
{
	&UnityAction_4_t1008_gp_T0_0_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_4_t1008_gp_T1_1_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_4_t1008_gp_T2_2_il2cpp_TypeInfo_GenericParamFull,
	&UnityAction_4_t1008_gp_T3_3_il2cpp_TypeInfo_GenericParamFull,
};
extern TypeInfo UnityAction_4_t1008_il2cpp_TypeInfo;
Il2CppGenericContainer UnityAction_4_t1008_Il2CppGenericContainer = { { NULL, NULL }, NULL, &UnityAction_4_t1008_il2cpp_TypeInfo, 4, 0, UnityAction_4_t1008_Il2CppGenericParametersArray };
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo UnityAction_4_t1008_UnityAction_4__ctor_m5272_ParameterInfos[] = 
{
	{"object", 0, 134219608, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134219609, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`4::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_4__ctor_m5272_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &UnityAction_4_t1008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t1008_UnityAction_4__ctor_m5272_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1704/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_4_t1008_gp_0_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_0_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_1_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_1_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_2_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_2_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_3_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_3_0_0_0;
static ParameterInfo UnityAction_4_t1008_UnityAction_4_Invoke_m5273_ParameterInfos[] = 
{
	{"arg0", 0, 134219610, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_0_0_0_0},
	{"arg1", 1, 134219611, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_1_0_0_0},
	{"arg2", 2, 134219612, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_2_0_0_0},
	{"arg3", 3, 134219613, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_3_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`4::Invoke(T0,T1,T2,T3)
MethodInfo UnityAction_4_Invoke_m5273_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &UnityAction_4_t1008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t1008_UnityAction_4_Invoke_m5273_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1705/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnityAction_4_t1008_gp_0_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_1_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_2_0_0_0;
extern Il2CppType UnityAction_4_t1008_gp_3_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_4_t1008_UnityAction_4_BeginInvoke_m5274_ParameterInfos[] = 
{
	{"arg0", 0, 134219614, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_0_0_0_0},
	{"arg1", 1, 134219615, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_1_0_0_0},
	{"arg2", 2, 134219616, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_2_0_0_0},
	{"arg3", 3, 134219617, &EmptyCustomAttributesCache, &UnityAction_4_t1008_gp_3_0_0_0},
	{"callback", 4, 134219618, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 5, 134219619, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
// System.IAsyncResult UnityEngine.Events.UnityAction`4::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
MethodInfo UnityAction_4_BeginInvoke_m5274_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &UnityAction_4_t1008_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t1008_UnityAction_4_BeginInvoke_m5274_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1706/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo UnityAction_4_t1008_UnityAction_4_EndInvoke_m5275_ParameterInfos[] = 
{
	{"result", 0, 134219620, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
// System.Void UnityEngine.Events.UnityAction`4::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_4_EndInvoke_m5275_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &UnityAction_4_t1008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, NULL/* invoker_method */
	, UnityAction_4_t1008_UnityAction_4_EndInvoke_m5275_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1707/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UnityAction_4_t1008_MethodInfos[] =
{
	&UnityAction_4__ctor_m5272_MethodInfo,
	&UnityAction_4_Invoke_m5273_MethodInfo,
	&UnityAction_4_BeginInvoke_m5274_MethodInfo,
	&UnityAction_4_EndInvoke_m5275_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_4_t1008_0_0_0;
extern Il2CppType UnityAction_4_t1008_1_0_0;
struct UnityAction_4_t1008;
TypeInfo UnityAction_4_t1008_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`4"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_4_t1008_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_4_t1008_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, NULL/* custom_attributes_cache */
	, NULL/* cast_class */
	, &UnityAction_4_t1008_0_0_0/* byval_arg */
	, &UnityAction_4_t1008_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, &UnityAction_4_t1008_Il2CppGenericContainer/* generic_container */
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
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
