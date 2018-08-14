#pragma once
#include"Builder.h"
/*指挥官类，用来指挥建造过程，最终返回结果在builder类中返回*/
class Director
{
public:
	Director();
	~Director();
public:
	void CreateBuilder(Builder *B);
};

