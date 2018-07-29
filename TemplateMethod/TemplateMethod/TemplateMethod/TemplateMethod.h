/*模板方法模式，构造函数给出逻辑的骨架，而逻辑的组成是一些抽象函数，他们都推迟到子类实现*/
#include<stdio.h>
#include<iostream>
#pragma once
class TemplateMethod
{
public:
	TemplateMethod();
	~TemplateMethod();

public:
	void TemplateM();

public:
	virtual void DoMethod();
	virtual void DoMethod2();

};

