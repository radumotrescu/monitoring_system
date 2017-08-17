#ifndef _ALARM_H_
#define _ALARM_H_

#include "Sensor.h"
#include "IScanner.h"
#include "ICondition.h"

class Alarm {

public:
	Alarm(std::shared_ptr<ICondition> condition, const Sensor& sensor);
	bool checkCondition();
	~Alarm();

private:
	const Sensor m_sensor;
	std::shared_ptr<ICondition> m_condition;

};

#endif
