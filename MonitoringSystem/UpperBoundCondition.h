#ifndef _UPPER_BOUND_CONDITION_H_ 
#define _UPPER_BOUND_CONDITION_H_ 

#include "ICondition.h"
class UpperBoundCondition :
	public ICondition {

public:
	UpperBoundCondition(const double bound);
	~UpperBoundCondition();
	virtual auto Check(const double value) const  -> bool;

private:
	double m_bound = 0;

};

#endif
