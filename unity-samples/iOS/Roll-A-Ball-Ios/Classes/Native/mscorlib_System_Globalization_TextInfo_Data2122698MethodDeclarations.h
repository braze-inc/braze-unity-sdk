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
struct Data_t2122698;
struct Data_t2122698_marshaled_pinvoke;

extern "C" void Data_t2122698_marshal_pinvoke(const Data_t2122698& unmarshaled, Data_t2122698_marshaled_pinvoke& marshaled);
extern "C" void Data_t2122698_marshal_pinvoke_back(const Data_t2122698_marshaled_pinvoke& marshaled, Data_t2122698& unmarshaled);
extern "C" void Data_t2122698_marshal_pinvoke_cleanup(Data_t2122698_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Data_t2122698;
struct Data_t2122698_marshaled_com;

extern "C" void Data_t2122698_marshal_com(const Data_t2122698& unmarshaled, Data_t2122698_marshaled_com& marshaled);
extern "C" void Data_t2122698_marshal_com_back(const Data_t2122698_marshaled_com& marshaled, Data_t2122698& unmarshaled);
extern "C" void Data_t2122698_marshal_com_cleanup(Data_t2122698_marshaled_com& marshaled);
