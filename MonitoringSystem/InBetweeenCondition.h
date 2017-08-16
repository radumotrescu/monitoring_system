#pragma once
#include "ICondition.h"
class InBetweeenCondition :
	public ICondition {
	double m_min = 0;
	double m_max = 0;
public:
	
	InBetweeenCondition(const double& min, const double& max) :m_min(min), m_max(max) {}
	~InBetweeenCondition();



	// Inherited via ICondition
	virtual auto Check(const double value) const  -> bool;

};

