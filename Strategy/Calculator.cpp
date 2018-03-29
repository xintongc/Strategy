#include "Calculator.h"



Calculator::Calculator(MathStrategy* strat): strategy(strat)
{
}


Calculator::~Calculator()
{
}

int Calculator::calculate(int num1, int num2) {
	return strategy->calculate(num1, num2);
}