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

// System.Text.RegularExpressions.InterpreterFactory
struct InterpreterFactory_t3964579659;
// System.UInt16[]
struct UInt16U5BU5D_t3999484061;
// System.Text.RegularExpressions.IMachine
struct IMachine_t294675897;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
extern "C"  void InterpreterFactory__ctor_m595479877 (InterpreterFactory_t3964579659 * __this, UInt16U5BU5D_t3999484061* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
extern "C"  Il2CppObject * InterpreterFactory_NewInstance_m992471080 (InterpreterFactory_t3964579659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
extern "C"  int32_t InterpreterFactory_get_GroupCount_m2569621216 (InterpreterFactory_t3964579659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
extern "C"  int32_t InterpreterFactory_get_Gap_m875969832 (InterpreterFactory_t3964579659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
extern "C"  void InterpreterFactory_set_Gap_m2130661461 (InterpreterFactory_t3964579659 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
extern "C"  Il2CppObject * InterpreterFactory_get_Mapping_m4280686600 (InterpreterFactory_t3964579659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C"  void InterpreterFactory_set_Mapping_m1196240885 (InterpreterFactory_t3964579659 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
extern "C"  StringU5BU5D_t2956870243* InterpreterFactory_get_NamesMapping_m2841689669 (InterpreterFactory_t3964579659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
extern "C"  void InterpreterFactory_set_NamesMapping_m2940156550 (InterpreterFactory_t3964579659 * __this, StringU5BU5D_t2956870243* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
