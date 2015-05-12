#pragma once

#include <stdint.h>
#include "metadata/Il2CppTypeVector.h"

struct Il2CppGenericClass;
struct Il2CppGenericContext;
struct Il2CppGenericInst;
struct Il2CppType;
struct MethodInfo;
struct ParameterInfo;
struct TypeInfo;

namespace il2cpp
{
namespace metadata
{

class GenericMetadata
{
public:
	static ParameterInfo* InflateParameters (ParameterInfo* parameters, uint8_t parameterCount, Il2CppGenericContext* context, bool inflateMethodVars);
	static Il2CppGenericInst* GetGenericInst (const Il2CppTypeVector& types);
	static Il2CppGenericClass* GetGenericClass (TypeInfo* elementClass, Il2CppGenericInst* inst);

	static MethodInfo* Inflate (MethodInfo* methodDefinition, TypeInfo* declaringClass, Il2CppGenericContext* context);

	// temporary while we generate generics
	static void RegisterGenericClass (Il2CppGenericClass *gclass);

	static const Il2CppType* InflateIfNeeded (const Il2CppType* type, const Il2CppGenericContext* context, bool inflateMethodVars);
};

} /* namespace vm */
} /* namespace il2cpp */
