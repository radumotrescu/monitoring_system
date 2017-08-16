#pragma once
#include "IScanner.h"
#include <memory>
class Sensor {
	std::shared_ptr<IScanner> m_scanner;
	const double offset = 16;
public:
	Sensor() = default;
	Sensor::Sensor(std::shared_ptr<IScanner> scanner);
	Sensor::Sensor(const Sensor& s);
	auto GetNextSensorValue() const -> double;
	~Sensor();
};

