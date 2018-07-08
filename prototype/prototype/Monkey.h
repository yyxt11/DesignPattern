#pragma once
/*
原型模式就是深拷贝一个本体
可以用拷贝构造函数来实现clone的过程
*/
#include<iostream>

/*抽象原型类*/
class Monkey
{
public:
	Monkey();
	virtual ~Monkey();
	virtual Monkey* Clone()= 0;
	virtual void report() = 0;
};


