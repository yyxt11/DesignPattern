#include"Facade.h"

int main() {

	std::cout << "外观模式测试" << std::endl;
	Facade *Fc = new Facade();
	Fc->methodA();
	Fc->methodB();
	Fc->methodC();
	delete Fc;

	system("pause");
};