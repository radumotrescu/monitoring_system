#include "Sensor.h"

Sensor::Sensor(const Sensor& s)
{
	m_scanner = s.m_scanner;
}

Sensor::Sensor(std::shared_ptr<IScanner> scanner)
{
	m_scanner = scanner;
}

auto Sensor::GetNextSensorValue() const -> double
{
	return offset + m_scanner.get()->GetValue();
}

Sensor::~Sensor()
{
}
