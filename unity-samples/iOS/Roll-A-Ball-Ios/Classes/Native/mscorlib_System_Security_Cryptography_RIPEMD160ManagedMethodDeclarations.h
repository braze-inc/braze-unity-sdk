#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_t2152;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.RIPEMD160Managed::.ctor()
 void RIPEMD160Managed__ctor_m10709 (RIPEMD160Managed_t2152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Initialize()
 void RIPEMD160Managed_Initialize_m10710 (RIPEMD160Managed_t2152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void RIPEMD160Managed_HashCore_m10711 (RIPEMD160Managed_t2152 * __this, ByteU5BU5D_t97* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::HashFinal()
 ByteU5BU5D_t97* RIPEMD160Managed_HashFinal_m10712 (RIPEMD160Managed_t2152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Finalize()
 void RIPEMD160Managed_Finalize_m10713 (RIPEMD160Managed_t2152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::ProcessBlock(System.Byte[],System.Int32)
 void RIPEMD160Managed_ProcessBlock_m10714 (RIPEMD160Managed_t2152 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::Compress()
 void RIPEMD160Managed_Compress_m10715 (RIPEMD160Managed_t2152 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::CompressFinal(System.UInt64)
 void RIPEMD160Managed_CompressFinal_m10716 (RIPEMD160Managed_t2152 * __this, uint64_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::ROL(System.UInt32,System.Int32)
 uint32_t RIPEMD160Managed_ROL_m10717 (RIPEMD160Managed_t2152 * __this, uint32_t ___x, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::F(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_F_m10718 (RIPEMD160Managed_t2152 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::G(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_G_m10719 (RIPEMD160Managed_t2152 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::H(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_H_m10720 (RIPEMD160Managed_t2152 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::I(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_I_m10721 (RIPEMD160Managed_t2152 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RIPEMD160Managed::J(System.UInt32,System.UInt32,System.UInt32)
 uint32_t RIPEMD160Managed_J_m10722 (RIPEMD160Managed_t2152 * __this, uint32_t ___x, uint32_t ___y, uint32_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_FF_m10723 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_GG_m10724 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_HH_m10725 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::II(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_II_m10726 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_JJ_m10727 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::FFF(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_FFF_m10728 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::GGG(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_GGG_m10729 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::HHH(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_HHH_m10730 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::III(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_III_m10731 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RIPEMD160Managed::JJJ(System.UInt32&,System.UInt32,System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.Int32)
 void RIPEMD160Managed_JJJ_m10732 (RIPEMD160Managed_t2152 * __this, uint32_t* ___a, uint32_t ___b, uint32_t* ___c, uint32_t ___d, uint32_t ___e, uint32_t ___x, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
