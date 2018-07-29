#pragma once
/*
原型模式:用原型实例指定创建对象的种类，并通过拷贝这些原型创建新的对象
*/
#include<iostream>
#include<stdio.h>

class CPrototype
{
public:
	CPrototype();
	virtual ~CPrototype();
	virtual CPrototype *Clone()=0;


};


class CConcretePrototype :public CPrototype
{
private:
	int num;
public:
	CConcretePrototype();
	virtual ~CConcretePrototype();

	//拷贝构造函数
	CConcretePrototype(const CConcretePrototype*rhs);

	//复制本身
	virtual CPrototype *Clone();


};