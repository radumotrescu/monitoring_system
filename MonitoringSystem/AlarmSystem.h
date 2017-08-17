#ifndef _ALARM_SYSTEM_H_
#define _ALARM_SYSTEM_H_

#include "Alarm.h"

#include <vector>
#include <iostream>

class AlarmSystem {
	
public:
	AlarmSystem(const Alarm& alarm);
	auto SoundAlarmIfNecessary() ->void;
	~AlarmSystem();

private:
	Alarm m_alarm;

};

#endif
