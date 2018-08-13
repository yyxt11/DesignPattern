#pragma once
/*建造者类，确定产品的组成部件，并返回一个结果接口*/
class Builder
{
public:
	Builder();
	virtual ~Builder();

public:
	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual void GetResult();
};



class ConcreteBuildA :public Builder 
{
public:
	ConcreteBuildA();
	virtual ~ConcreteBuildA();

public:
	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual void GetResult();


};

class ConcreteBuildB :public Builder
{
public:
	ConcreteBuildB();
	virtual ~ConcreteBuildB();

public:
	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual void GetResult();


};
