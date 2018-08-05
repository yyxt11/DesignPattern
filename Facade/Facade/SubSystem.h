#pragma once
/*外观模式*/
#include<iostream>
#include<stdio.h>

class AbstractSubsystem{
public:
	AbstractSubsystem() {};
	virtual ~AbstractSubsystem() {};
public:
	virtual void Method() {};

};

class SubsystemA:public AbstractSubsystem {

public:
	SubsystemA();
	virtual ~SubsystemA();

public:
	virtual void Method();

};

class SubsystemB :public AbstractSubsystem {

public:
	SubsystemB();
	virtual ~SubsystemB();

public:
	virtual void Method();

};

class SubsystemC :public AbstractSubsystem {

public:
	SubsystemC();
	virtual ~SubsystemC();

public:
	virtual void Method();

};
