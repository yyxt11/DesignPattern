#pragma once
#include"SubSystem.h"
struct FacadeSubMethod
{
	SubsystemA *SA;
	SubsystemB *SB;
	SubsystemC *SC;
};



class Facade
{
public:
	FacadeSubMethod FSM;

public:
	Facade();
	~Facade();

public:
	void methodA();
	void methodB();
	void methodC();
};

