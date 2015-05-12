#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Path
struct Path_t327;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t276;

// System.Void System.IO.Path::.cctor()
 void Path__cctor_m9525 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::ChangeExtension(System.String,System.String)
 String_t* Path_ChangeExtension_m9526 (Object_t * __this/* static, unused */, String_t* ___path, String_t* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
 String_t* Path_Combine_m6528 (Object_t * __this/* static, unused */, String_t* ___path1, String_t* ___path2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CleanPath(System.String)
 String_t* Path_CleanPath_m9527 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetDirectoryName(System.String)
 String_t* Path_GetDirectoryName_m9528 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFileName(System.String)
 String_t* Path_GetFileName_m9529 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
 String_t* Path_GetFileNameWithoutExtension_m1367 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetFullPath(System.String)
 String_t* Path_GetFullPath_m9530 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
 String_t* Path_WindowsDriveAdjustment_m9531 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::InsecureGetFullPath(System.String)
 String_t* Path_InsecureGetFullPath_m9532 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsDsc(System.Char)
 bool Path_IsDsc_m9533 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetPathRoot(System.String)
 String_t* Path_GetPathRoot_m9534 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::IsPathRooted(System.String)
 bool Path_IsPathRooted_m9535 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.IO.Path::GetInvalidPathChars()
 CharU5BU5D_t276* Path_GetInvalidPathChars_m9536 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Path::findExtension(System.String)
 int32_t Path_findExtension_m9537 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetServerAndShare(System.String)
 String_t* Path_GetServerAndShare_m9538 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
 bool Path_SameRoot_m9539 (Object_t * __this/* static, unused */, String_t* ___root, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::CanonicalizePath(System.String)
 String_t* Path_CanonicalizePath_m9540 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
