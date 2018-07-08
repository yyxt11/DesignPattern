#pragma once
#include "Monkey.h"
#include<string>

using namespace std;
/*ʵ��ԭ����*/
class ConcreteMonkey :
	public Monkey
{
private:
	string m_name;
public:
	ConcreteMonkey(const string name);
	ConcreteMonkey(const ConcreteMonkey &other);
	~ConcreteMonkey();

public:
	Monkey * Clone();
	void report();
};

