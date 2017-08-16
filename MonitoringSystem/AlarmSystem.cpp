#include "AlarmSystem.h"




AlarmSystem::AlarmSystem(const Alarm & alarm) :m_alarm(alarm)
{

}

auto AlarmSystem::SoundAlarmIfNecessary() -> void
{
	if (!m_alarm.IsOn())
		std::cout << "VALUE OUT OF RANGE" << std::endl;
	else
		std::cout << "VALUE GOOD" << std::endl;
}

AlarmSystem::~AlarmSystem()
{
}
