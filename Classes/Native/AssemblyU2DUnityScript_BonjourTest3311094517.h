#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.SceneManagement.SceneManager
struct SceneManager_t2940962239;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BonjourTest
struct  BonjourTest_t3311094517  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean BonjourTest::querying
	bool ___querying_2;
	// System.String BonjourTest::label
	String_t* ___label_3;
	// System.String BonjourTest::status
	String_t* ___status_4;
	// System.Int32 BonjourTest::centerx
	int32_t ___centerx_5;
	// System.Int32 BonjourTest::centery
	int32_t ___centery_6;
	// System.String[] BonjourTest::services
	StringU5BU5D_t4054002952* ___services_7;
	// UnityEngine.GUIStyle BonjourTest::labelStyle
	GUIStyle_t2990928826 * ___labelStyle_8;
	// UnityEngine.SceneManagement.SceneManager BonjourTest::ls
	SceneManager_t2940962239 * ___ls_9;
	// System.String BonjourTest::service
	String_t* ___service_10;

public:
	inline static int32_t get_offset_of_querying_2() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___querying_2)); }
	inline bool get_querying_2() const { return ___querying_2; }
	inline bool* get_address_of_querying_2() { return &___querying_2; }
	inline void set_querying_2(bool value)
	{
		___querying_2 = value;
	}

	inline static int32_t get_offset_of_label_3() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___label_3)); }
	inline String_t* get_label_3() const { return ___label_3; }
	inline String_t** get_address_of_label_3() { return &___label_3; }
	inline void set_label_3(String_t* value)
	{
		___label_3 = value;
		Il2CppCodeGenWriteBarrier(&___label_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___status_4)); }
	inline String_t* get_status_4() const { return ___status_4; }
	inline String_t** get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(String_t* value)
	{
		___status_4 = value;
		Il2CppCodeGenWriteBarrier(&___status_4, value);
	}

	inline static int32_t get_offset_of_centerx_5() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___centerx_5)); }
	inline int32_t get_centerx_5() const { return ___centerx_5; }
	inline int32_t* get_address_of_centerx_5() { return &___centerx_5; }
	inline void set_centerx_5(int32_t value)
	{
		___centerx_5 = value;
	}

	inline static int32_t get_offset_of_centery_6() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___centery_6)); }
	inline int32_t get_centery_6() const { return ___centery_6; }
	inline int32_t* get_address_of_centery_6() { return &___centery_6; }
	inline void set_centery_6(int32_t value)
	{
		___centery_6 = value;
	}

	inline static int32_t get_offset_of_services_7() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___services_7)); }
	inline StringU5BU5D_t4054002952* get_services_7() const { return ___services_7; }
	inline StringU5BU5D_t4054002952** get_address_of_services_7() { return &___services_7; }
	inline void set_services_7(StringU5BU5D_t4054002952* value)
	{
		___services_7 = value;
		Il2CppCodeGenWriteBarrier(&___services_7, value);
	}

	inline static int32_t get_offset_of_labelStyle_8() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___labelStyle_8)); }
	inline GUIStyle_t2990928826 * get_labelStyle_8() const { return ___labelStyle_8; }
	inline GUIStyle_t2990928826 ** get_address_of_labelStyle_8() { return &___labelStyle_8; }
	inline void set_labelStyle_8(GUIStyle_t2990928826 * value)
	{
		___labelStyle_8 = value;
		Il2CppCodeGenWriteBarrier(&___labelStyle_8, value);
	}

	inline static int32_t get_offset_of_ls_9() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___ls_9)); }
	inline SceneManager_t2940962239 * get_ls_9() const { return ___ls_9; }
	inline SceneManager_t2940962239 ** get_address_of_ls_9() { return &___ls_9; }
	inline void set_ls_9(SceneManager_t2940962239 * value)
	{
		___ls_9 = value;
		Il2CppCodeGenWriteBarrier(&___ls_9, value);
	}

	inline static int32_t get_offset_of_service_10() { return static_cast<int32_t>(offsetof(BonjourTest_t3311094517, ___service_10)); }
	inline String_t* get_service_10() const { return ___service_10; }
	inline String_t** get_address_of_service_10() { return &___service_10; }
	inline void set_service_10(String_t* value)
	{
		___service_10 = value;
		Il2CppCodeGenWriteBarrier(&___service_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
