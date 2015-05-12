#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t936;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t557;
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"

// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
 void UserProfile__ctor_m4785 (UserProfile_t936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
 void UserProfile__ctor_m4786 (UserProfile_t936 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t557 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
 String_t* UserProfile_ToString_m4787 (UserProfile_t936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
 void UserProfile_SetUserName_m4788 (UserProfile_t936 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
 void UserProfile_SetUserID_m4789 (UserProfile_t936 * __this, String_t* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
 void UserProfile_SetImage_m4790 (UserProfile_t936 * __this, Texture2D_t557 * ___image, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
 String_t* UserProfile_get_userName_m4791 (UserProfile_t936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
 String_t* UserProfile_get_id_m4792 (UserProfile_t936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
 bool UserProfile_get_isFriend_m4793 (UserProfile_t936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
 int32_t UserProfile_get_state_m4794 (UserProfile_t936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
