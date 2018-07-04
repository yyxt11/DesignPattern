#pragma once
#include "Strategy.h"

class StrategyContent{
private:
	AbstractStrategy * AS;
public:
	StrategyContent();
	~StrategyContent();

public:
	void SetStrategy(int num=1);
	double GetResult(double money);

};