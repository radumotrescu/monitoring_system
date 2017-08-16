#include "InsideAlarm.h"




InsideAlarm::InsideAlarm(const double & min, const double & max, const Sensor & sensor):IAlarm(sensor),m_min(min), m_max(max)
{
}

bool InsideAlarm::IsOn() const
{
	const auto value = m_sensor.GetNextSensorValue();
	if (value < m_min || value > m_max)
		return true;
	return false;
}


