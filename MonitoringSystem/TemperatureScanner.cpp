#include "TemperatureScanner.h"

TemperatureScanner::~TemperatureScanner()
{
}

double TemperatureScanner::GetValue()
{
	double value = 0;
	std::cout << "Put a temperature value: ";
	std::cin >> value;
	return value;
}
