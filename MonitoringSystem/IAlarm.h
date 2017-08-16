#pragma once
#include "Sensor.h"
class IAlarm {
protected:
	Sensor m_sensor;
public:
	IAlarm(const Sensor& sensor);
	virtual bool IsOn() const = 0;
	virtual ~IAlarm();
};

