#include"Facade.h"

int main() {

	std::cout << "���ģʽ����" << std::endl;
	Facade *Fc = new Facade();
	Fc->methodA();
	Fc->methodB();
	Fc->methodC();
	delete Fc;

	system("pause");
};