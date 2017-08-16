#pragma once
class IScanner {
public:
	IScanner() = default;
	double virtual GetValue()=0;
	virtual ~IScanner() = default;
};

