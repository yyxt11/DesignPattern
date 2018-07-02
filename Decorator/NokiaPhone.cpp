#include "NokiaPhone.h"



NokiaPhone::NokiaPhone(string name)
{
	m_name = name;
}


NokiaPhone::~NokiaPhone()
{
}


void NokiaPhone::ShowDecorate() {
	std::cout << "当前手机为：" << m_name << std::endl;
}