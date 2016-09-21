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

// Bonjour
struct Bonjour_t1728392131;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Bonjour::.ctor()
extern "C"  void Bonjour__ctor_m1043336660 (Bonjour_t1728392131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bonjour::_StartLookup(System.String,System.String)
extern "C"  void Bonjour__StartLookup_m424034929 (Il2CppObject * __this /* static, unused */, String_t* ___service0, String_t* ___domain1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Bonjour::_GetLookupStatus()
extern "C"  String_t* Bonjour__GetLookupStatus_m1131436720 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Bonjour::_GetServiceCount()
extern "C"  int32_t Bonjour__GetServiceCount_m1609997771 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bonjour::_Stop()
extern "C"  void Bonjour__Stop_m1123275731 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Bonjour::_GetServiceName(System.Int32)
extern "C"  String_t* Bonjour__GetServiceName_m592105775 (Il2CppObject * __this /* static, unused */, int32_t ___serviceNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bonjour::StartLookup(System.String,System.String)
extern "C"  void Bonjour_StartLookup_m2338335568 (Il2CppObject * __this /* static, unused */, String_t* ___service0, String_t* ___domain1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bonjour::StopLookup()
extern "C"  void Bonjour_StopLookup_m1161896652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Bonjour::GetLookupStatus()
extern "C"  String_t* Bonjour_GetLookupStatus_m2641401623 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Bonjour::GetServiceNames()
extern "C"  StringU5BU5D_t4054002952* Bonjour_GetServiceNames_m1574780540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
