#pragma once

#include "IAlarm.h"
#include "InBetweeenCondition.h"


template<class IAlarm>
class AlarmWrap :public IAlarm {
	IAlarm m_alarm;
public:
	AlarmWrap(const IAlarm& alarm) : m_alarm(alarm) {}
	bool Check()
	{
		return m_alarm.IsOn();

	}
};