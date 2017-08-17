#ifndef _LOWER_BOUND_CONDITION_H_
#define _LOWER_BOUND_CONDITION_H_

#include "ICondition.h"
class LowerBoundCondition :
	public ICondition {

public:
	LowerBoundCondition(const double bound) :m_bound(bound) {}
	~LowerBoundCondition();
	virtual auto Check(const double value) const  -> bool;

private:
	double m_bound = 0;
};

#endif
