#pragma once
#include "TemplateMethod.h"
class ConCreteATemplateMethod :
	public TemplateMethod
{
public:
	ConCreteATemplateMethod();
	~ConCreteATemplateMethod();

public:
	virtual void DoMethod();
	virtual void DoMethod2();
};

class ConCreteBTemplateMethod :
	public TemplateMethod
{
public:
	ConCreteBTemplateMethod();
	~ConCreteBTemplateMethod();

public:
	virtual void DoMethod();
	virtual void DoMethod2();
};