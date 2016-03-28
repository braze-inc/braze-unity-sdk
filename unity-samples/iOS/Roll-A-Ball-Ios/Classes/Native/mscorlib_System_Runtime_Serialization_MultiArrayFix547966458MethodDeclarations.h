#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t547966458;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3468179849;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2776331335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord3468179849.h"
#include "mscorlib_System_Runtime_Serialization_ObjectManage2776331335.h"

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C"  void MultiArrayFixupRecord__ctor_m3677967923 (MultiArrayFixupRecord_t547966458 * __this, ObjectRecord_t3468179849 * ___objectToBeFixed, Int32U5BU5D_t1809983122* ___indices, ObjectRecord_t3468179849 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C"  void MultiArrayFixupRecord_FixupImpl_m2043330103 (MultiArrayFixupRecord_t547966458 * __this, ObjectManager_t2776331335 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
