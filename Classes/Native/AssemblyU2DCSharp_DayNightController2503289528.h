#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t4202674828;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DayNightController
struct  DayNightController_t2503289528  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Light DayNightController::sun
	Light_t4202674828 * ___sun_2;
	// System.Single DayNightController::secondsInFullDay
	float ___secondsInFullDay_3;
	// System.Single DayNightController::currentTimeOfDay
	float ___currentTimeOfDay_4;
	// System.Single DayNightController::timeMultiplier
	float ___timeMultiplier_5;
	// System.Single DayNightController::sunInitialIntensity
	float ___sunInitialIntensity_6;

public:
	inline static int32_t get_offset_of_sun_2() { return static_cast<int32_t>(offsetof(DayNightController_t2503289528, ___sun_2)); }
	inline Light_t4202674828 * get_sun_2() const { return ___sun_2; }
	inline Light_t4202674828 ** get_address_of_sun_2() { return &___sun_2; }
	inline void set_sun_2(Light_t4202674828 * value)
	{
		___sun_2 = value;
		Il2CppCodeGenWriteBarrier(&___sun_2, value);
	}

	inline static int32_t get_offset_of_secondsInFullDay_3() { return static_cast<int32_t>(offsetof(DayNightController_t2503289528, ___secondsInFullDay_3)); }
	inline float get_secondsInFullDay_3() const { return ___secondsInFullDay_3; }
	inline float* get_address_of_secondsInFullDay_3() { return &___secondsInFullDay_3; }
	inline void set_secondsInFullDay_3(float value)
	{
		___secondsInFullDay_3 = value;
	}

	inline static int32_t get_offset_of_currentTimeOfDay_4() { return static_cast<int32_t>(offsetof(DayNightController_t2503289528, ___currentTimeOfDay_4)); }
	inline float get_currentTimeOfDay_4() const { return ___currentTimeOfDay_4; }
	inline float* get_address_of_currentTimeOfDay_4() { return &___currentTimeOfDay_4; }
	inline void set_currentTimeOfDay_4(float value)
	{
		___currentTimeOfDay_4 = value;
	}

	inline static int32_t get_offset_of_timeMultiplier_5() { return static_cast<int32_t>(offsetof(DayNightController_t2503289528, ___timeMultiplier_5)); }
	inline float get_timeMultiplier_5() const { return ___timeMultiplier_5; }
	inline float* get_address_of_timeMultiplier_5() { return &___timeMultiplier_5; }
	inline void set_timeMultiplier_5(float value)
	{
		___timeMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_sunInitialIntensity_6() { return static_cast<int32_t>(offsetof(DayNightController_t2503289528, ___sunInitialIntensity_6)); }
	inline float get_sunInitialIntensity_6() const { return ___sunInitialIntensity_6; }
	inline float* get_address_of_sunInitialIntensity_6() { return &___sunInitialIntensity_6; }
	inline void set_sunInitialIntensity_6(float value)
	{
		___sunInitialIntensity_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
