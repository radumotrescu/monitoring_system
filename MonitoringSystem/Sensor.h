#ifndef _I_SENSOR_H_
#define _I_SENSOR_H_

#include "IScanner.h"

#include <memory>

class Sensor {

private:
	std::shared_ptr<IScanner> m_scanner;
	const double offset = 16;

public:
	Sensor::Sensor(std::shared_ptr<IScanner> scanner);
	Sensor::Sensor(const Sensor& s);
	auto GetNextSensorValue() const -> double;
	~Sensor();
};

#endif
