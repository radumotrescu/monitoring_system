#include "Alarm.h"
#include "Sensor.h"
#include "AlarmSystem.h"
#include "VibrationScanner.h"

#include "InsideAlarm.h"
#include "LowerAlarm.h"
#include "InBetweeenCondition.h"

auto main() -> int
{
	//auto vibrationScanner = std::make_shared<VibrationScanner>();
	//Sensor vibrationSensor(vibrationScanner);
	//Alarm vibrationAlarm(10, 100, vibrationSensor);
	//AlarmSystem vibrationAlarmSystem(vibrationAlarm);
	//while (1)
	//{
	//	vibrationAlarmSystem.SoundAlarmIfNecessary();
	//}

	auto vibrationScanner = std::make_shared<VibrationScanner>();
	Sensor vibrationSensor(vibrationScanner);	
	auto inBetweenCondition = std::make_shared<InBetweeenCondition>(10, 50);
	Alarm vibrationAlarm(inBetweenCondition, vibrationSensor);
	AlarmSystem alarmSys(vibrationAlarm);
	while (1)
	{
		alarmSys.SoundAlarmIfNecessary();
	}




	return 0;
}