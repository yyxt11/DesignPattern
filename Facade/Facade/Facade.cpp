#include "Facade.h"



Facade::Facade()
{
	std::cout << "Facade build" << std::endl;
	this->FSM.SA = new SubsystemA();
	this->FSM.SB = new SubsystemB();
	this->FSM.SC = new SubsystemC();
}


Facade::~Facade()
{
	if (this->FSM.SA != NULL)
		delete this->FSM.SA;

	if (this->FSM.SB != NULL)
		delete this->FSM.SB;

	if (this->FSM.SC != NULL)
		delete this->FSM.SC;
	
	std::cout << "Facade destory" << std::endl;
}

void Facade::methodA() {
	std::cout << "Facade methodA" << std::endl;
	this->FSM.SA->Method();
}

void Facade::methodB() {
	std::cout << "Facade methodB" << std::endl;
	this->FSM.SB->Method();
}

void Facade::methodC() {
	std::cout << "Facade methodC" << std::endl;
	this->FSM.SC->Method();
}