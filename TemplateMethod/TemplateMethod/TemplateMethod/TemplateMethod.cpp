#include "TemplateMethod.h"



TemplateMethod::TemplateMethod()
{
	std::cout << "ģ�巽����ʼ��" << std::endl;

}


TemplateMethod::~TemplateMethod()
{
}

void TemplateMethod::TemplateM()
{
	std::cout << "ģ��Ǽ�" << std::endl;
	this->DoMethod();
	this->DoMethod2();
}

void TemplateMethod::DoMethod()
{
	std::cout << "����1����ʼ" << std::endl;
}


void TemplateMethod::DoMethod2()
{
	std::cout << "����2����ʼ" << std::endl;
}
