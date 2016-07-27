#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_IO_FileSystemInfo2843833056.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileInfo
struct  FileInfo_t1355938065  : public FileSystemInfo_t2843833056
{
public:
	// System.Boolean System.IO.FileInfo::exists
	bool ___exists_5;

public:
	inline static int32_t get_offset_of_exists_5() { return static_cast<int32_t>(offsetof(FileInfo_t1355938065, ___exists_5)); }
	inline bool get_exists_5() const { return ___exists_5; }
	inline bool* get_address_of_exists_5() { return &___exists_5; }
	inline void set_exists_5(bool value)
	{
		___exists_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
