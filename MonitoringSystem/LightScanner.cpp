#include "LightScanner.h"

LightScanner::~LightScanner()
{
}

double LightScanner::GetValue()
{
	double value = 0;
	std::cout << "Put a temperature value: ";
	std::cin >> value;
	return value;
}
