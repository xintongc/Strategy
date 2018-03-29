#include "Calculator.h"
#include "AddStrategy.h"
#include "SubtractStrategy.h"
#include <iostream>

using namespace std;

int main() {

	Calculator* calculator = new Calculator(new AddStrategy());
	
	cout << calculator->calculate(1, 2) << endl;

	calculator->setStrategy(new SubtractStrategy());
	cout << calculator->calculate(6, 2) << endl;

//	cin.get();
	return 0;
}