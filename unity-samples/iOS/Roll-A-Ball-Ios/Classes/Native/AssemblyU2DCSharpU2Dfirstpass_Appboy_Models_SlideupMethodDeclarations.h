#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Models.Slideup
struct Slideup_t12;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t14;
// System.Uri
struct Uri_t61;
// Appboy.Models.SlideFrom
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_SlideFrom.h"
// Appboy.Models.ClickAction
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_ClickAction.h"
// Appboy.Models.DismissType
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_DismissType.h"

// System.Void Appboy.Models.Slideup::.ctor(System.String)
 void Slideup__ctor_m390 (Slideup_t12 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Slideup::get_Message()
 String_t* Slideup_get_Message_m391 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::set_Message(System.String)
 void Slideup_set_Message_m392 (Slideup_t12 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Appboy.Models.Slideup::get_Extras()
 Dictionary_2_t14 * Slideup_get_Extras_m393 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 void Slideup_set_Extras_m394 (Slideup_t12 * __this, Dictionary_2_t14 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.SlideFrom Appboy.Models.Slideup::get_SlideFrom()
 int32_t Slideup_get_SlideFrom_m395 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::set_SlideFrom(Appboy.Models.SlideFrom)
 void Slideup_set_SlideFrom_m396 (Slideup_t12 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.ClickAction Appboy.Models.Slideup::get_ClickAction()
 int32_t Slideup_get_ClickAction_m397 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::set_ClickAction(Appboy.Models.ClickAction)
 void Slideup_set_ClickAction_m398 (Slideup_t12 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Appboy.Models.Slideup::get_Uri()
 Uri_t61 * Slideup_get_Uri_m399 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::set_Uri(System.Uri)
 void Slideup_set_Uri_m400 (Slideup_t12 * __this, Uri_t61 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.DismissType Appboy.Models.Slideup::get_DismissType()
 int32_t Slideup_get_DismissType_m401 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::set_DismissType(Appboy.Models.DismissType)
 void Slideup_set_DismissType_m402 (Slideup_t12 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Models.Slideup::get_Duration()
 int32_t Slideup_get_Duration_m403 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::set_Duration(System.Int32)
 void Slideup_set_Duration_m404 (Slideup_t12 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::SetClickActionToNewsFeed()
 void Slideup_SetClickActionToNewsFeed_m405 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Models.Slideup::SetClickActionToUri(System.Uri)
 bool Slideup_SetClickActionToUri_m406 (Slideup_t12 * __this, Uri_t61 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::SetClickActionToNone()
 void Slideup_SetClickActionToNone_m407 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Models.Slideup::ToString()
 String_t* Slideup_ToString_m408 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::LogClicked()
 void Slideup_LogClicked_m409 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Models.Slideup::LogImpression()
 void Slideup_LogImpression_m410 (Slideup_t12 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
