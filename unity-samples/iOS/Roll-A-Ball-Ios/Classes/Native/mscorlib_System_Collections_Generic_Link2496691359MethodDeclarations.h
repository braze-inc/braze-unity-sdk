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
struct Link_t2496691359;
struct Link_t2496691359_marshaled_pinvoke;

extern "C" void Link_t2496691359_marshal_pinvoke(const Link_t2496691359& unmarshaled, Link_t2496691359_marshaled_pinvoke& marshaled);
extern "C" void Link_t2496691359_marshal_pinvoke_back(const Link_t2496691359_marshaled_pinvoke& marshaled, Link_t2496691359& unmarshaled);
extern "C" void Link_t2496691359_marshal_pinvoke_cleanup(Link_t2496691359_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Link_t2496691359;
struct Link_t2496691359_marshaled_com;

extern "C" void Link_t2496691359_marshal_com(const Link_t2496691359& unmarshaled, Link_t2496691359_marshaled_com& marshaled);
extern "C" void Link_t2496691359_marshal_com_back(const Link_t2496691359_marshaled_com& marshaled, Link_t2496691359& unmarshaled);
extern "C" void Link_t2496691359_marshal_com_cleanup(Link_t2496691359_marshaled_com& marshaled);
