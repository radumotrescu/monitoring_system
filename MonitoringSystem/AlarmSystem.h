#pragma once
#include "Alarm.h"
#include <vector>
#include <iostream>
class AlarmSystem {
	Alarm m_alarm;
public:
	AlarmSystem() = default;
	AlarmSystem(const Alarm& alarm);
	auto SoundAlarmIfNecessary() ->void;
	~AlarmSystem();
};

