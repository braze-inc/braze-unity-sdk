#pragma once
#include <stdint.h>
struct TypeInfo;
// System.Object
struct Object_t 
{
	TypeInfo* _typeInfo;
	void* synchronisation;
};
