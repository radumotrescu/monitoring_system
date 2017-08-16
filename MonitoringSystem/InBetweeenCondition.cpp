#include "InBetweeenCondition.h"

InBetweeenCondition::~InBetweeenCondition()
{
}

auto InBetweeenCondition::Check(const double value) const -> bool
{
	if (value < m_min || value > m_max)
		return false;
	return true;
}


