#pragma once

#include <stdint.h>
struct TypeInfo;

namespace il2cpp
{
namespace metadata
{

class ArrayMetadata
{
public:
	static TypeInfo* GetBoundedArrayClass (TypeInfo* elementClass, uint32_t rank, bool bounded);

	// temporary while we generate arrays
	static void RegisterArrayClass (TypeInfo* arrayClass);
private:
};

} /* namespace vm */
} /* namespace il2cpp */
