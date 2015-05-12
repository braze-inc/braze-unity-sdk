#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t1936;
struct MonoIOStat_t1936_marshaled;

void MonoIOStat_t1936_marshal(const MonoIOStat_t1936& unmarshaled, MonoIOStat_t1936_marshaled& marshaled);
void MonoIOStat_t1936_marshal_back(const MonoIOStat_t1936_marshaled& marshaled, MonoIOStat_t1936& unmarshaled);
void MonoIOStat_t1936_marshal_cleanup(MonoIOStat_t1936_marshaled& marshaled);
