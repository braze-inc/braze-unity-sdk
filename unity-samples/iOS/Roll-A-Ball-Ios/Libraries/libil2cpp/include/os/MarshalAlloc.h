#pragma once

namespace il2cpp
{
namespace os
{

class MarshalAlloc
{
public:
	static void* Allocate(int size);
	static void* ReAlloc(void* ptr, int size);
	static void Free(void* ptr);
};

} /* namespace os */
} /* namespace il2cpp*/
