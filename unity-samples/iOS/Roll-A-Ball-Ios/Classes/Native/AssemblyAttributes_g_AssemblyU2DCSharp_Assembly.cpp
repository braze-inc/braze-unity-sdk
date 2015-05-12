#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo RuntimeCompatibilityAttribute_t119_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m601_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m602_MethodInfo;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t119 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t119 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t119_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m601(tmp, &RuntimeCompatibilityAttribute__ctor_m601_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m602(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m602_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharp_Assembly__CustomAttributeCache = {
1,
NULL,
&g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator
};
