#include "SubtractStrategy.h"
#include <iostream>

using namespace std;


SubtractStrategy::SubtractStrategy()
{
}


SubtractStrategy::~SubtractStrategy()
{
}

int SubtractStrategy::calculate(int num1, int num2) {
	int sub = num1 - num2;
	cout << "Substracting 2 numbers! " << num1 << "-" << num2 << "=";
	return sub;
}
