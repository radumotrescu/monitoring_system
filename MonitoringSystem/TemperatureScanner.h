#ifndef _TEMPERATURE_SCANNER_H_
#define _TEMPERATURE_SCANNER_H_

#include "IScanner.h"

#include <iostream>

class TemperatureScanner :
	public IScanner {

public:
	~TemperatureScanner();
	virtual double GetValue() override;
};

#endif

