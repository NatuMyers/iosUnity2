#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DayNightController
struct DayNightController_t2503289528;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeStop
struct  TimeStop_t2282226831  : public MonoBehaviour_t667441552
{
public:
	// System.Single TimeStop::timer
	float ___timer_2;
	// DayNightController TimeStop::controller
	DayNightController_t2503289528 * ___controller_3;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(TimeStop_t2282226831, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_controller_3() { return static_cast<int32_t>(offsetof(TimeStop_t2282226831, ___controller_3)); }
	inline DayNightController_t2503289528 * get_controller_3() const { return ___controller_3; }
	inline DayNightController_t2503289528 ** get_address_of_controller_3() { return &___controller_3; }
	inline void set_controller_3(DayNightController_t2503289528 * value)
	{
		___controller_3 = value;
		Il2CppCodeGenWriteBarrier(&___controller_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
