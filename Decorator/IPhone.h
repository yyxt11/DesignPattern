#pragma once
#include "Phone.h"
using namespace std;
/*���������*/
class IPhone :
	public Phone
{
private:
	string m_name;

public:
	IPhone(string name="IPhone 8");
	virtual ~IPhone();
public:
	void ShowDecorate();
};