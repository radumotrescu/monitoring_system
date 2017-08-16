#include "LowerAlarm.h"


LowerAlarm::LowerAlarm(const double & threshold, const Sensor& sensor):IAlarm(sensor), m_threshold(threshold)
{
}

LowerAlarm::~LowerAlarm()
{
}

bool LowerAlarm::IsOn() const
{
	double value = m_sensor.GetNextSensorValue();
	if (value > m_threshold)
		return true;
	return false;
}
