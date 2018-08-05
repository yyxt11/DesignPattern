#include"SubSystem.h"

SubsystemA::SubsystemA()
{
	std::cout << "subsystem A instance build"<< std::endl;
}

SubsystemA::~SubsystemA()
{
	std::cout << "subsystem A instance detroy" << std::endl;
}

void SubsystemA::Method()
{
	std::cout << "subsystem A method" << std::endl;
}

SubsystemB::SubsystemB()
{
	std::cout << "subsystem B instance build" << std::endl;
}

SubsystemB::~SubsystemB()
{
	std::cout << "subsystem B instance detroy" << std::endl;
}

void SubsystemB::Method()
{
	std::cout << "subsystem B method" << std::endl;
}

SubsystemC::SubsystemC()
{
	std::cout << "subsystem C instance build" << std::endl;
}

SubsystemC::~SubsystemC()
{
	std::cout << "subsystem C instance detroy" << std::endl;
}

void SubsystemC::Method()
{
	std::cout << "subsystem C method" << std::endl;
}