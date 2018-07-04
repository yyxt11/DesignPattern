#include"StrategyContent.h"


int main() {

	std::cout << "策略模式测试!" << std::endl;
	StrategyContent *SC = new StrategyContent();
	double result = 0;
	std::cout << "无打折测试!" << std::endl;
	SC->SetStrategy(1);
	result = SC->GetResult(500.0);
	std::cout << "无打折结果：" << result <<std::endl;
	result = 0.0;

	std::cout << "dicount打折测试!" << std::endl;
	SC->SetStrategy(2);
	result = SC->GetResult(500.0);
	std::cout << "dicount打折结果：" << result << std::endl;
	result = 0.0;

	std::cout << "rebate打折测试!" << std::endl;
	SC->SetStrategy(3);
	result = SC->GetResult(500.0);
	std::cout << "rebate打折结果：" << result << std::endl;
	result = 0.0;

	system("pause");
};