#include "AddStrategy.h"
#include <iostream>

using namespace std;


AddStrategy::AddStrategy()
{
}


AddStrategy::~AddStrategy()
{
}

int AddStrategy::calculate(int num1, int num2) {
	int sum = num1 + num2;
	cout << "Adding two numbers! " << num1 << "+" << num2 << "=";
	return sum;
}