#ifndef _I_SCANNER_H_
#define _I_SCANNER_H_

class IScanner {

public:
	double virtual GetValue()=0;
	virtual ~IScanner() = default;
};

#endif
