#pragma once
#include "Sensor.h"
#include "IScanner.h"
#include "ICondition.h"
class Alarm {
	const Sensor& m_sensor;
	std::shared_ptr<ICondition> m_condition;
public:
	Alarm() = default;
	Alarm(std::shared_ptr<ICondition> condition, const Sensor& sensor);
	bool checkCondition()
	{
		return m_condition->Check(m_sensor.GetNextSensorValue());
	}
	~Alarm();
};

