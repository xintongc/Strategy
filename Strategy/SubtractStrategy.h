#pragma once
#include "MathStrategy.h"
class SubtractStrategy : public MathStrategy
{
public:
	SubtractStrategy();
	~SubtractStrategy();

	int calculate(int, int);
};

