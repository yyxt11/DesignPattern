#include "IPhone.h"

IPhone::IPhone(string name)
{
	m_name = name;
}


IPhone::~IPhone()
{
}


void IPhone::ShowDecorate() {
	std::cout <<"��ǰ�ֻ�Ϊ��"<< m_name << std::endl;
}