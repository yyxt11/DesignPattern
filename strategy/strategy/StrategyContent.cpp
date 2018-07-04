#include "StrategyContent.h"

StrategyContent::StrategyContent(){
};

StrategyContent::~StrategyContent(){
};

void StrategyContent::SetStrategy(int num) {

	switch (num)
	{
	case 1:
		if (AS != NULL) {
			delete AS;
		}		
		AS = new NormalStrategy();
		break;
	case 2:
		if (AS != NULL) {
			delete AS;
		}	
		AS = new DiscountStrategy(0.6);
		break;
	case 3:
		if (AS != NULL) {
			delete AS;
		}		
		AS = new RebateStrategy(300.0, 50.0);
		break;

	}

};


double StrategyContent::GetResult(double money) {
	double result = money;
	result = AS->GetResult(money);
	return result;

}