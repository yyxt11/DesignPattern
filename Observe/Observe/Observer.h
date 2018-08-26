#include<iostream>
#include<string>
#include<list>

#pragma once
class Observer
{
public:
	Observer();
	~Observer();

public:
	virtual void update(const std::string &msg)= 0;

public:
	std::string name ;
	std::string state;
	std::string action;
};

class Roommate:public Observer
{
public:
	Roommate(std::string name, std::string state, std::string action);
	~Roommate();

public:
	virtual void update(const std::string &msg);

public:
	std::string name;
	std::string state;
	std::string action;
};

