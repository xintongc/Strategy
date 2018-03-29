#pragma once
#include "MathStrategy.h"
#include <iostream>

class Calculator
{
public:
	Calculator(MathStrategy*);
	~Calculator();

	void setStrategy(MathStrategy* strat) { this->strategy = strat; }
	int calculate(int, int);


private:
	MathStrategy * strategy;
};

