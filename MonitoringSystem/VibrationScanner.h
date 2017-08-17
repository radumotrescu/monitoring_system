#ifndef _VIBRATION_SCANNER_H_
#define _VIBRATION_SCANNER_H_

#include "IScanner.h"

#include <cstdlib>
#include <time.h>

class VibrationScanner :
	public IScanner {

public:
	VibrationScanner();
	~VibrationScanner();
	virtual double GetValue() override;

};

#endif
