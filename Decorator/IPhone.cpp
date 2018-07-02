#include "IPhone.h"

IPhone::IPhone(string name)
{
	m_name = name;
}


IPhone::~IPhone()
{
}


void IPhone::ShowDecorate() {
	std::cout <<"当前手机为："<< m_name << std::endl;
}