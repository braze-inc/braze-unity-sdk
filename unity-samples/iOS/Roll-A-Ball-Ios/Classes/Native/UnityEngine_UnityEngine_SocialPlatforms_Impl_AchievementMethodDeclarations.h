#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t949;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
 void Achievement__ctor_m4890 (Achievement_t949 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t850  ___lastReportedDate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
 void Achievement__ctor_m4891 (Achievement_t949 * __this, String_t* ___id, double ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
 void Achievement__ctor_m4892 (Achievement_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
 String_t* Achievement_ToString_m4893 (Achievement_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
 String_t* Achievement_get_id_m4894 (Achievement_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
 void Achievement_set_id_m4895 (Achievement_t949 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
 double Achievement_get_percentCompleted_m4896 (Achievement_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
 void Achievement_set_percentCompleted_m4897 (Achievement_t949 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
 bool Achievement_get_completed_m4898 (Achievement_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
 bool Achievement_get_hidden_m4899 (Achievement_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
 DateTime_t850  Achievement_get_lastReportedDate_m4900 (Achievement_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
