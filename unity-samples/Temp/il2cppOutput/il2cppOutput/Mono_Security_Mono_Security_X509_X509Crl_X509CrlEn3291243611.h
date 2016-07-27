#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692651;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t3291243611  : public Il2CppObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t58506160* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t339033936  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t3528692651 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t3291243611, ___sn_0)); }
	inline ByteU5BU5D_t58506160* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t58506160** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t58506160* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier(&___sn_0, value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t3291243611, ___revocationDate_1)); }
	inline DateTime_t339033936  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t339033936 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t339033936  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t3291243611, ___extensions_2)); }
	inline X509ExtensionCollection_t3528692651 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t3528692651 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t3528692651 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
