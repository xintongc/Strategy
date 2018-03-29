#pragma once
#include "MathStrategy.h"
class AddStrategy : public MathStrategy
{
public:
	AddStrategy();
	~AddStrategy();

	int calculate(int, int);
};

