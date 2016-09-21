#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Bonjour
struct Bonjour_t1728392131;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Bonjour1728392131.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Bonjour1728392131MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "UnityEngine_UnityEngine_RuntimePlatform3050318497.h"
#include "mscorlib_ArrayTypes.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bonjour::.ctor()
extern "C"  void Bonjour__ctor_m1043336660 (Bonjour_t1728392131 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _StartLookup(char*, char*);
// System.Void Bonjour::_StartLookup(System.String,System.String)
extern "C"  void Bonjour__StartLookup_m424034929 (Il2CppObject * __this /* static, unused */, String_t* ___service0, String_t* ___domain1, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___service0' to native representation
	char* ____service0_marshaled = NULL;
	____service0_marshaled = il2cpp_codegen_marshal_string(___service0);

	// Marshaling of parameter '___domain1' to native representation
	char* ____domain1_marshaled = NULL;
	____domain1_marshaled = il2cpp_codegen_marshal_string(___domain1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_StartLookup)(____service0_marshaled, ____domain1_marshaled);

	// Marshaling cleanup of parameter '___service0' native representation
	il2cpp_codegen_marshal_free(____service0_marshaled);
	____service0_marshaled = NULL;

	// Marshaling cleanup of parameter '___domain1' native representation
	il2cpp_codegen_marshal_free(____domain1_marshaled);
	____domain1_marshaled = NULL;

}
extern "C" char* DEFAULT_CALL _GetLookupStatus();
// System.String Bonjour::_GetLookupStatus()
extern "C"  String_t* Bonjour__GetLookupStatus_m1131436720 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GetLookupStatus)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL _GetServiceCount();
// System.Int32 Bonjour::_GetServiceCount()
extern "C"  int32_t Bonjour__GetServiceCount_m1609997771 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetServiceCount)();

	return returnValue;
}
extern "C" void DEFAULT_CALL _Stop();
// System.Void Bonjour::_Stop()
extern "C"  void Bonjour__Stop_m1123275731 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_Stop)();

}
extern "C" char* DEFAULT_CALL _GetServiceName(int32_t);
// System.String Bonjour::_GetServiceName(System.Int32)
extern "C"  String_t* Bonjour__GetServiceName_m592105775 (Il2CppObject * __this /* static, unused */, int32_t ___serviceNumber0, const MethodInfo* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GetServiceName)(___serviceNumber0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Bonjour::StartLookup(System.String,System.String)
extern "C"  void Bonjour_StartLookup_m2338335568 (Il2CppObject * __this /* static, unused */, String_t* ___service0, String_t* ___domain1, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m2918632856(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___service0;
		String_t* L_2 = ___domain1;
		Bonjour__StartLookup_m424034929(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Bonjour::StopLookup()
extern "C"  void Bonjour_StopLookup_m1161896652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m2918632856(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Bonjour__Stop_m1123275731(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.String Bonjour::GetLookupStatus()
extern Il2CppCodeGenString* _stringLiteral2135970;
extern const uint32_t Bonjour_GetLookupStatus_m2641401623_MetadataUsageId;
extern "C"  String_t* Bonjour_GetLookupStatus_m2641401623 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Bonjour_GetLookupStatus_m2641401623_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m2918632856(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = Bonjour__GetLookupStatus_m1131436720(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		return _stringLiteral2135970;
	}
}
// System.String[] Bonjour::GetServiceNames()
extern Il2CppClass* StringU5BU5D_t4054002952_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3590990430;
extern Il2CppCodeGenString* _stringLiteral3590990431;
extern Il2CppCodeGenString* _stringLiteral3590990432;
extern Il2CppCodeGenString* _stringLiteral3590990433;
extern const uint32_t Bonjour_GetServiceNames_m1574780540_MetadataUsageId;
extern "C"  StringU5BU5D_t4054002952* Bonjour_GetServiceNames_m1574780540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Bonjour_GetServiceNames_m1574780540_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t4054002952* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t4054002952* V_2 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2918632856(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_1 = Bonjour__GetServiceCount_m1609997771(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_t4054002952*)SZArrayNew(StringU5BU5D_t4054002952_il2cpp_TypeInfo_var, (uint32_t)L_1));
		V_1 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		StringU5BU5D_t4054002952* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		String_t* L_5 = Bonjour__GetServiceName_m592105775(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (String_t*)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t4054002952* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		StringU5BU5D_t4054002952* L_9 = V_0;
		return L_9;
	}

IL_0034:
	{
		StringU5BU5D_t4054002952* L_10 = ((StringU5BU5D_t4054002952*)SZArrayNew(StringU5BU5D_t4054002952_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, _stringLiteral3590990430);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3590990430);
		StringU5BU5D_t4054002952* L_11 = L_10;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, _stringLiteral3590990431);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3590990431);
		StringU5BU5D_t4054002952* L_12 = L_11;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		ArrayElementTypeCheck (L_12, _stringLiteral3590990432);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3590990432);
		StringU5BU5D_t4054002952* L_13 = L_12;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, _stringLiteral3590990433);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3590990433);
		V_2 = L_13;
		StringU5BU5D_t4054002952* L_14 = V_2;
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
