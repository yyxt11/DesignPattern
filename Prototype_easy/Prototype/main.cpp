
#include"Prototype.h"


int main(int argc, char **argv)
{
	//生成对像
	CPrototype* conProA = new CConcretePrototype();
	//复制自身
	CPrototype* conProB = conProA->Clone();

	CPrototype* conProC = conProB->Clone();

	delete conProA; conProA = nullptr;
	delete conProB; conProB = nullptr;
	delete conProC; conProC = nullptr;

	system("pause");
}
