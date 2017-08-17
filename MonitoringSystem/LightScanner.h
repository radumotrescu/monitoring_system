#ifndef _LIGHT_SCANNER_H_
#define _LIGHT_SCANNER_H_

#include "IScanner.h"

#include <iostream>

class LightScanner :
	public IScanner {

public:
	~LightScanner();
	virtual double GetValue() override;

};

#endif
