#pragma once
/*�������࣬ȷ����Ʒ����ɲ�����������һ������ӿ�*/
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
