#pragma once
#include "Phone.h"

class NokiaPhone :
	public Phone
{
private:
	string m_name;

public:
	NokiaPhone(string name="Nokia1100");
	virtual ~NokiaPhone();
public:
	void ShowDecorate();
};

