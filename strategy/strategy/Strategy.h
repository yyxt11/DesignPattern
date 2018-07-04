#pragma once
#include<iostream>

class AbstractStrategy {
public:	
	AbstractStrategy();
	~AbstractStrategy();

public:
	virtual double GetResult(double &monmey) = 0;
};


class NormalStrategy:public AbstractStrategy{
public:
	NormalStrategy();
	~NormalStrategy();

public:
	double GetResult(double &money);
};

class DiscountStrategy :public AbstractStrategy {
private:
	double discount;

public:
	DiscountStrategy(double discountparam=1.0);
	~DiscountStrategy();

public:
	double GetResult(double &money);
};

class RebateStrategy:public AbstractStrategy {
private:
	double moneycondition;
	double moneyrebate;

public:
	RebateStrategy(double moneycondition=0.0, double moneyrebate=0.0);
	~RebateStrategy();

public:
	double GetResult(double &money);
};