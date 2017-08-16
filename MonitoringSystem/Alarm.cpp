#include "Alarm.h"

//Alarm::Alarm(const double & minim, const double & maxim, const Sensor& sensor) :m_minimumSensorThreshold(minim), m_maximumSensorThreshold(maxim), m_sensor(sensor)
//{
//	
//}
//




Alarm::Alarm(std::shared_ptr<ICondition> condition, const Sensor & sensor):m_condition(condition), m_sensor(sensor)
{

}



Alarm::~Alarm()
{
}
