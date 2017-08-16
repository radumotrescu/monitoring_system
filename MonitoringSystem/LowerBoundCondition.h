#pragma once
#include "ICondition.h"
class LowerBoundCondition :
	public ICondition {
	double m_bound=0;
public:	
	LowerBoundCondition(const double bound):m_bound(bound){}
	~LowerBoundCondition();

	// Inherited via ICondition
	virtual auto Check(const double value) const  -> bool;
};

