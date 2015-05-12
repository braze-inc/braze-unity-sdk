#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
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
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t1122_il2cpp_TypeInfo;
extern TypeInfo Extensions_t1123_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_UnityScript_Lang_Assembly_Types[3] = 
{
	&U3CModuleU3E_t1122_il2cpp_TypeInfo,
	&Extensions_t1123_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_UnityScript_Lang_Image;
extern CustomAttributesCache g_UnityScript_Lang_Assembly__CustomAttributeCache;
Il2CppAssembly g_UnityScript_Lang_Assembly = 
{
	{ "UnityScript.Lang", 0, 0, 0, { 0 }, 32772, 0, 0, 1, 0, 0, 0 },
	&g_UnityScript_Lang_Image,
	&g_UnityScript_Lang_Assembly__CustomAttributeCache,
};
Il2CppImage g_UnityScript_Lang_Image = 
{
	 "UnityScript.Lang.dll" ,
	&g_UnityScript_Lang_Assembly,
	g_UnityScript_Lang_Assembly_Types,
	2,
	NULL,
};
static void s_UnityScript_LangRegistration()
{
	RegisterAssembly (&g_UnityScript_Lang_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_UnityScript_LangRegistrationVariable(&s_UnityScript_LangRegistration, NULL);
