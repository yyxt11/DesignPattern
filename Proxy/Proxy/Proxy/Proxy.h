#pragma once
#include "subject.h"
#include "RealSource.h"

class Proxy :
	public subject
{
private:
	RealSource * realsource;

public:
	Proxy();
	~Proxy();
public:
	 void GiveTextMail();
	 void GiveCall();
	 void GiveVideo();
	
};

