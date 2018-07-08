#include "ConcreteMonkey.h"



ConcreteMonkey::ConcreteMonkey(const string name)
{
	m_name = name;
}

ConcreteMonkey::ConcreteMonkey(const ConcreteMonkey & other)
{
	m_name = other.m_name;
}


ConcreteMonkey::~ConcreteMonkey()
{
}

Monkey *ConcreteMonkey::Clone() {
	return new ConcreteMonkey(*this);
}

void ConcreteMonkey::report() {
	cout << m_name << "���Ǹ�ţB�ĺ���" << endl;
};
