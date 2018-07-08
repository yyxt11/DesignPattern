#pragma once
#include<iostream>


class subject
{
public:
	subject();
	~subject();
public:
	virtual void GiveTextMail() {};
	virtual void GiveCall() {};
	virtual void GiveVideo() {};
};

