#ifndef _I_CONDITION_H_
#define _I_CONDITION_H_

class ICondition {

public:
	virtual ~ICondition();
	virtual auto Check(const double value) const -> bool = 0;
};

#endif
