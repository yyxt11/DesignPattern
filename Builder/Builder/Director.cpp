#include "Director.h"



Director::Director()
{
}


Director::~Director()
{
}

void Director::CreateBuilder(Builder * B)
{	
	std::cout << "Director start build" << std::endl;
	B->BuildPartA();
	B->BuildPartB();
}
