#include "VibrationScanner.h"

VibrationScanner::VibrationScanner()
{
	srand(time(NULL));
}

VibrationScanner::~VibrationScanner()
{
}

double VibrationScanner::GetValue()
{
	return 1. * (rand() % 100 + 5);
}
