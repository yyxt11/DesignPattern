#include"StrategyContent.h"


int main() {

	std::cout << "����ģʽ����!" << std::endl;
	StrategyContent *SC = new StrategyContent();
	double result = 0;
	std::cout << "�޴��۲���!" << std::endl;
	SC->SetStrategy(1);
	result = SC->GetResult(500.0);
	std::cout << "�޴��۽����" << result <<std::endl;
	result = 0.0;

	std::cout << "dicount���۲���!" << std::endl;
	SC->SetStrategy(2);
	result = SC->GetResult(500.0);
	std::cout << "dicount���۽����" << result << std::endl;
	result = 0.0;

	std::cout << "rebate���۲���!" << std::endl;
	SC->SetStrategy(3);
	result = SC->GetResult(500.0);
	std::cout << "rebate���۽����" << result << std::endl;
	result = 0.0;

	system("pause");
};