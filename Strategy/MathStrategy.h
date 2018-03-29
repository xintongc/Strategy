#pragma once
class MathStrategy
{
public:
	MathStrategy() {}
	~MathStrategy() {}

	virtual int calculate(int, int) = 0;
};

