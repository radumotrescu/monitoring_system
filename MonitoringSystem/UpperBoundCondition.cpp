#include "UpperBoundCondition.h"

UpperBoundCondition::UpperBoundCondition(const double bound):m_bound(bound)
{
}

UpperBoundCondition::~UpperBoundCondition()
{
}

auto UpperBoundCondition::Check(const double value) const -> bool
{
	return value > m_bound;
}
