#include "TemplateMethod.h"



TemplateMethod::TemplateMethod()
{
	std::cout << "模板方法初始化" << std::endl;

}


TemplateMethod::~TemplateMethod()
{
}

void TemplateMethod::TemplateM()
{
	std::cout << "模板骨架" << std::endl;
	this->DoMethod();
	this->DoMethod2();
}

void TemplateMethod::DoMethod()
{
	std::cout << "方法1：初始" << std::endl;
}


void TemplateMethod::DoMethod2()
{
	std::cout << "方法2：初始" << std::endl;
}
