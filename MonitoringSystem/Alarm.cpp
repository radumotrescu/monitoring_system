#include "Alarm.h"

Alarm::Alarm(std::shared_ptr<ICondition> condition, const Sensor & sensor) :m_condition(condition), m_sensor(sensor)
{
}

bool Alarm::checkCondition()
{
	return m_condition->Check(m_sensor.GetNextSensorValue());
}

Alarm::~Alarm()
{
}
