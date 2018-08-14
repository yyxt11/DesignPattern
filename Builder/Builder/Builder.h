#pragma once
#include"Product.h"
/*�������࣬ȷ����Ʒ����ɲ�����������һ������ӿ�*/
class Builder
{
public:
	Builder();
	virtual ~Builder();

public:
	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual Product* GetResult()=0;
};



class ConcreteBuildA :public Builder 
{
private:
	Product * product;
public:
	ConcreteBuildA();
	virtual ~ConcreteBuildA();

public:
	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual Product* GetResult();

};

class ConcreteBuildB :public Builder
{
private:
	Product * product;

public:
	ConcreteBuildB();
	virtual ~ConcreteBuildB();

public:
	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual Product* GetResult();

};
