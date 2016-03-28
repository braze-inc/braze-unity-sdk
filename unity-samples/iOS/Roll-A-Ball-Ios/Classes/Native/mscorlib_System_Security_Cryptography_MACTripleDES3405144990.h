#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.TripleDES
struct TripleDES_t3174934509;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1910042165;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlg3076212156.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t3405144990  : public KeyedHashAlgorithm_t3076212156
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3174934509 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t1910042165 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t3405144990, ___tdes_5)); }
	inline TripleDES_t3174934509 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t3174934509 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t3174934509 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier(&___tdes_5, value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t3405144990, ___mac_6)); }
	inline MACAlgorithm_t1910042165 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t1910042165 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t1910042165 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier(&___mac_6, value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t3405144990, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
