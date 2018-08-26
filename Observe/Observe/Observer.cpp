#include "Observer.h"



Observer::Observer()
{
}


Observer::~Observer()
{
}

Roommate::Roommate(std::string name, std::string state, std::string action)
{
	this->name = name;
	this->state = state;
	this->action = action;
}


Roommate::~Roommate()
{
}


void Roommate::update(const std::string &msg)
{
	if (msg == "duty")
	{
		std::cout <<this->name <<" start " <<this->action <<std::endl;
	}
	else
	{
		std::cout << this->name << " keep " << this->state << std::endl;
		
	}

}