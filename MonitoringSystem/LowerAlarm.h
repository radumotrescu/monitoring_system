#pragma once
#include "IAlarm.h"
#include "Sensor.h"

class LowerAlarm :
	public IAlarm {
	
	double m_threshold = 0;

public:
	LowerAlarm(const double& threshold, const Sensor& sensor);
	~LowerAlarm();

	// Inherited via IAlarm
	virtual bool IsOn() const override;
};

