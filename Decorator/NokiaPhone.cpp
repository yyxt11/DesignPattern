#include "NokiaPhone.h"



NokiaPhone::NokiaPhone(string name)
{
	m_name = name;
}


NokiaPhone::~NokiaPhone()
{
}


void NokiaPhone::ShowDecorate() {
	std::cout << "��ǰ�ֻ�Ϊ��" << m_name << std::endl;
}