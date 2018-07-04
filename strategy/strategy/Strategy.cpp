#include"Strategy.h"


AbstractStrategy::AbstractStrategy(){
};

AbstractStrategy::~AbstractStrategy(){
}

NormalStrategy::NormalStrategy() {
	std::cout << "��ǰΪ��ͨ�շ�ģʽ!" << std::endl;
};

NormalStrategy::~NormalStrategy(){
};


double NormalStrategy::GetResult(double &money) {
	std::cout << "��ͨ�շ�ģʽ���������շ�!" << std::endl;
	return money;

};

DiscountStrategy::DiscountStrategy(double discountparam) {
	std::cout << "��ǰΪ�����շ�ģʽ!" << std::endl;
	this->discount = discountparam;

};

DiscountStrategy::~DiscountStrategy() {
};


double DiscountStrategy::GetResult(double &money) {
	std::cout << "�����շ�ģʽ���������շ�!" << std::endl;
	double result = money;
	result = money * discount;
	return  result;
};

RebateStrategy::RebateStrategy(double moneyconditionparam, double moneyrebateparam) {
	std::cout << "��ǰΪ�����շ�ģʽ!" << std::endl;
	this->moneycondition = moneyconditionparam;
	this->moneyrebate = moneyrebateparam;
};

RebateStrategy::~RebateStrategy() {
};


double RebateStrategy::GetResult(double &money) {
	std::cout << "�����շ�ģʽ���������շ�!" << std::endl;
	double result = money;

	if (money > moneycondition)
		result = money - (money / moneycondition)*moneyrebate;
	return result;
};



