
#include"Prototype.h"


int main(int argc, char **argv)
{
	//���ɶ���
	CPrototype* conProA = new CConcretePrototype();
	//��������
	CPrototype* conProB = conProA->Clone();

	CPrototype* conProC = conProB->Clone();

	delete conProA; conProA = nullptr;
	delete conProB; conProB = nullptr;
	delete conProC; conProC = nullptr;

	system("pause");
}
