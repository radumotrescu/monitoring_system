#pragma once
class ICondition {
public:
	ICondition() = default;
	virtual ~ICondition();
	virtual auto Check(const double value) const -> bool = 0;
};

