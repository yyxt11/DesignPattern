#pragma once
#include "Monkey.h"
#include<string>

using namespace std;
/*实体原型类*/
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

