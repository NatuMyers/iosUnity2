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

// BonjourTest
struct BonjourTest_t3311094517;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_BonjourTest3311094517.h"
#include "AssemblyU2DUnityScript_BonjourTest3311094517MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Screen3187157168MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "UnityEngine_UnityEngine_Color4194546905MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyleState1997423985MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextAnchor213922566.h"
#include "UnityEngine_UnityEngine_GUIStyleState1997423985.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_GUI3134605553MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManag2940962239MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Bonjour1728392131MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "mscorlib_System_Array1146569071MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Rect4241904616MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_Boolean476798718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BonjourTest::.ctor()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* StringU5BU5D_t4054002952_il2cpp_TypeInfo_var;
extern Il2CppClass* GUIStyle_t2990928826_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3143547109;
extern const uint32_t BonjourTest__ctor_m2997051777_MetadataUsageId;
extern "C"  void BonjourTest__ctor_m2997051777 (BonjourTest_t3311094517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BonjourTest__ctor_m2997051777_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_label_3(L_0);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_status_4(L_1);
		int32_t L_2 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_centerx_5(((int32_t)((int32_t)L_2/(int32_t)2)));
		int32_t L_3 = Screen_get_height_m1504859443(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_centery_6(((int32_t)((int32_t)L_3/(int32_t)2)));
		__this->set_services_7(((StringU5BU5D_t4054002952*)SZArrayNew(StringU5BU5D_t4054002952_il2cpp_TypeInfo_var, (uint32_t)0)));
		GUIStyle_t2990928826 * L_4 = (GUIStyle_t2990928826 *)il2cpp_codegen_object_new(GUIStyle_t2990928826_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m478034167(L_4, /*hidden argument*/NULL);
		__this->set_labelStyle_8(L_4);
		__this->set_service_10(_stringLiteral3143547109);
		return;
	}
}
// System.Void BonjourTest::Start()
extern "C"  void BonjourTest_Start_m1944189569 (BonjourTest_t3311094517 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t2990928826 * L_0 = __this->get_labelStyle_8();
		NullCheck(L_0);
		GUIStyle_set_alignment_m4252900834(L_0, 4, /*hidden argument*/NULL);
		GUIStyle_t2990928826 * L_1 = __this->get_labelStyle_8();
		NullCheck(L_1);
		GUIStyleState_t1997423985 * L_2 = GUIStyle_get_normal_m42729964(L_1, /*hidden argument*/NULL);
		Color_t4194546905  L_3 = Color_get_white_m3038282331(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_textColor_m3058467057(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BonjourTest::OnGUI()
extern Il2CppClass* GUI_t3134605553_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3628334792;
extern Il2CppCodeGenString* _stringLiteral78391464;
extern Il2CppCodeGenString* _stringLiteral79702124;
extern Il2CppCodeGenString* _stringLiteral103145323;
extern Il2CppCodeGenString* _stringLiteral2135970;
extern Il2CppCodeGenString* _stringLiteral2587682;
extern const uint32_t BonjourTest_OnGUI_m2492450427_MetadataUsageId;
extern "C"  void BonjourTest_OnGUI_m2492450427 (BonjourTest_t3311094517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BonjourTest_OnGUI_m2492450427_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_centerx_5();
		Rect_t4241904616  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Rect__ctor_m3291325233(&L_1, (((float)((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		GUIStyle_t2990928826 * L_2 = __this->get_labelStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		GUI_Label_m4283747336(NULL /*static, unused*/, L_1, _stringLiteral3628334792, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_centerx_5();
		Rect_t4241904616  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m3291325233(&L_4, (((float)((float)((int32_t)((int32_t)L_3-(int32_t)((int32_t)125)))))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)175)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		String_t* L_5 = __this->get_service_10();
		String_t* L_6 = GUI_TextField_m3177770189(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->set_service_10(L_6);
		bool L_7 = __this->get_querying_2();
		if (L_7)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_8 = __this->get_centerx_5();
		Rect_t4241904616  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Rect__ctor_m3291325233(&L_9, (((float)((float)((int32_t)((int32_t)L_8+(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)75)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_10 = GUI_Button_m885093907(NULL /*static, unused*/, L_9, _stringLiteral78391464, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00b2;
		}
	}
	{
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, _stringLiteral79702124, /*hidden argument*/NULL);
		String_t* L_11 = __this->get_service_10();
		Bonjour_StartLookup_m2338335568(NULL /*static, unused*/, L_11, _stringLiteral103145323, /*hidden argument*/NULL);
		__this->set_querying_2((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_status_4(L_12);
	}

IL_00b2:
	{
		bool L_13 = __this->get_querying_2();
		if (!L_13)
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_14 = Time_get_frameCount_m3434184975(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_14%(int32_t)((int32_t)10))))
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_15 = Bonjour_GetLookupStatus_m2641401623(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_status_4(L_15);
		StringU5BU5D_t4054002952* L_16 = Bonjour_GetServiceNames_m1574780540(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_services_7(L_16);
		String_t* L_17 = __this->get_status_4();
		__this->set_label_3(L_17);
	}

IL_00ec:
	{
		String_t* L_18 = __this->get_status_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_18, _stringLiteral2135970, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0108;
		}
	}
	{
		__this->set_querying_2((bool)0);
	}

IL_0108:
	{
		bool L_20 = __this->get_querying_2();
		if (!L_20)
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_21 = __this->get_centerx_5();
		Rect_t4241904616  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Rect__ctor_m3291325233(&L_22, (((float)((float)((int32_t)((int32_t)L_21+(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)75)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		bool L_23 = GUI_Button_m885093907(NULL /*static, unused*/, L_22, _stringLiteral2587682, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_013f;
		}
	}
	{
		Bonjour_StopLookup_m1161896652(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_013f:
	{
		int32_t L_24 = __this->get_centerx_5();
		Rect_t4241904616  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Rect__ctor_m3291325233(&L_25, (((float)((float)((int32_t)((int32_t)L_24-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)75)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		String_t* L_26 = __this->get_label_3();
		GUIStyle_t2990928826 * L_27 = __this->get_labelStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		GUI_Label_m4283747336(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_01a1;
	}

IL_016f:
	{
		int32_t L_28 = __this->get_centerx_5();
		int32_t L_29 = V_0;
		Rect_t4241904616  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Rect__ctor_m3291325233(&L_30, (((float)((float)((int32_t)((int32_t)L_28-(int32_t)((int32_t)75)))))), (((float)((float)((int32_t)((int32_t)((int32_t)100)+(int32_t)((int32_t)((int32_t)L_29*(int32_t)((int32_t)25)))))))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		StringU5BU5D_t4054002952* L_31 = __this->get_services_7();
		int32_t L_32 = V_0;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		GUI_Button_m885093907(NULL /*static, unused*/, L_30, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		V_0 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_01a1:
	{
		int32_t L_36 = V_0;
		StringU5BU5D_t4054002952* L_37 = __this->get_services_7();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_37);
		int32_t L_38 = Array_get_Length_m1203127607((Il2CppArray *)(Il2CppArray *)L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_016f;
		}
	}
	{
		return;
	}
}
// System.Void BonjourTest::Main()
extern "C"  void BonjourTest_Main_m704910108 (BonjourTest_t3311094517 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
