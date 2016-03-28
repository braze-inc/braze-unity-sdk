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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Slot_t2579999;
struct Slot_t2579999_marshaled_com;

extern "C" void Slot_t2579999_marshal_com(const Slot_t2579999& unmarshaled, Slot_t2579999_marshaled_com& marshaled);
extern "C" void Slot_t2579999_marshal_com_back(const Slot_t2579999_marshaled_com& marshaled, Slot_t2579999& unmarshaled);
extern "C" void Slot_t2579999_marshal_com_cleanup(Slot_t2579999_marshaled_com& marshaled);
