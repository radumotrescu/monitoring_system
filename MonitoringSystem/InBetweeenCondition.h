#ifndef _IN_BETWEEN_CONDITION_H_
#define _IN_BETWEEN_CONDITION_H_

#include "ICondition.h"

class InBetweeenCondition :
	public ICondition {

public:
	InBetweeenCondition(const double& min, const double& max) :m_min(min), m_max(max) {}
	~InBetweeenCondition();
	virtual auto Check(const double value) const  -> bool;

private:
	double m_min = 0;
	double m_max = 0;

};

#endif
