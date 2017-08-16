#pragma once
#include "IScanner.h"
#include <cstdlib>
#include <time.h>
class VibrationScanner :
	public IScanner {
public:
	VibrationScanner();
	~VibrationScanner();

	// Inherited via IScanner
	virtual double GetValue() override;
};

