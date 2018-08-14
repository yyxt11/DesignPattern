#include "Builder.h"



Builder::Builder()
{
}


Builder::~Builder()
{
}

void Builder::BuildPartA()
{
}

void Builder::BuildPartB()
{
}



ConcreteBuildA::ConcreteBuildA()
{	
	std::cout << "ConcreteBuildA create" << std::endl;
	this->product = new Product();
}


ConcreteBuildA::~ConcreteBuildA()
{
	std::cout << "ConcreteBuildA delete" << std::endl;
	if (this->product)
	{
		delete this->product;
	}
}

void ConcreteBuildA::BuildPartA()
{
	std::cout << "ConcreteBuildA add A" << std::endl;
	this->product->Add("A");
}

void ConcreteBuildA::BuildPartB()
{	
	std::cout << "ConcreteBuildA add B" << std::endl;
	this->product->Add("B");
}

Product* ConcreteBuildA::GetResult()
{	
	return this->product;
}

ConcreteBuildB::ConcreteBuildB()
{	
	std::cout << "ConcreteBuildB create" << std::endl;
	this->product = new Product();
}


ConcreteBuildB::~ConcreteBuildB()
{
	std::cout << "ConcreteBuildB delete" << std::endl;
	if (this->product)
	{
		delete this->product;
	}
}

void ConcreteBuildB::BuildPartA()
{
	std::cout << "ConcreteBuildB add A" << std::endl;
	this->product->Add("A");
}

void ConcreteBuildB::BuildPartB()
{
	std::cout << "ConcreteBuildB add B" << std::endl;
	this->product->Add("B");
}

Product* ConcreteBuildB::GetResult()
{
	return this->product;
}
