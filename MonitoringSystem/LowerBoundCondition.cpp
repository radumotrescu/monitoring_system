#include "LowerBoundCondition.h"


LowerBoundCondition::~LowerBoundCondition()
{
}

auto LowerBoundCondition::Check(const double value) const -> bool
{
	return m_bound < value;
}
