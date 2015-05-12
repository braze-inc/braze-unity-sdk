#pragma once

#if _DEBUG
#include <map>
#endif

namespace il2cpp
{
namespace vm
{

class MarshalAlloc
{
public:
	static void* Allocate(int size);
	static void* ReAlloc(void* ptr, int size);
	static void Free(void* ptr);

	static void* AllocateHGlobal(size_t size);
	static void* ReAllocHGlobal(void* ptr, size_t size);
	static void FreeHGlobal(void* ptr);

#if _DEBUG
	static bool HasUnfreedAllocations();
	static void ClearAllTrackedAllocations();

private:
	static std::map<void*, int> s_Allocations;
#endif

};

} /* namespace vm */
} /* namespace il2cpp */
