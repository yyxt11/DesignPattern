#pragma once
#include"Product.h"
/*建造者类，确定产品的组成部件，并返回一个结果接口*/
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
