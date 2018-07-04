#include"Strategy.h"


AbstractStrategy::AbstractStrategy(){
};

AbstractStrategy::~AbstractStrategy(){
}

NormalStrategy::NormalStrategy() {
	std::cout << "当前为普通收费模式!" << std::endl;
};

NormalStrategy::~NormalStrategy(){
};


double NormalStrategy::GetResult(double &money) {
	std::cout << "普通收费模式计算最终收费!" << std::endl;
	return money;

};

DiscountStrategy::DiscountStrategy(double discountparam) {
	std::cout << "当前为打折收费模式!" << std::endl;
	this->discount = discountparam;

};

DiscountStrategy::~DiscountStrategy() {
};


double DiscountStrategy::GetResult(double &money) {
	std::cout << "打折收费模式计算最终收费!" << std::endl;
	double result = money;
	result = money * discount;
	return  result;
};

RebateStrategy::RebateStrategy(double moneyconditionparam, double moneyrebateparam) {
	std::cout << "当前为返利收费模式!" << std::endl;
	this->moneycondition = moneyconditionparam;
	this->moneyrebate = moneyrebateparam;
};

RebateStrategy::~RebateStrategy() {
};


double RebateStrategy::GetResult(double &money) {
	std::cout << "返利收费模式计算最终收费!" << std::endl;
	double result = money;

	if (money > moneycondition)
		result = money - (money / moneycondition)*moneyrebate;
	return result;
};



