#pragma once
#include "IAlarm.h"
#include "Sensor.h"
class InsideAlarm :
	public IAlarm {
	double m_min = 0;
	double m_max = 0;
public:
	InsideAlarm(const double& min, const double& max, const Sensor& sensor);
	// Inherited via IAlarm
	virtual bool IsOn() const override;

};

