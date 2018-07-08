#include "Proxy.h"



Proxy::Proxy()
{		
	this->realsource = new RealSource();
}


Proxy::~Proxy()
{
	if (realsource != nullptr)
	{
		delete realsource;
	}

}

void Proxy::GiveCall(){
	std::cout << "代理givecall测试!" << std::endl;
	if (realsource != nullptr)
	{
		realsource->GiveCall();
	}
	else
	{
		std::cout << "代理内部为空，givecall测试失败!" << std::endl;
	};
};

void Proxy::GiveTextMail() {
	std::cout << "代理GiveTextMail测试!" << std::endl;
	if (realsource != nullptr)
	{
		realsource->GiveCall();
	}
	else
	{
		std::cout << "代理内部为空，givecall测试失败!" << std::endl;
	};

}

void Proxy::GiveVideo() {
	std::cout << "代理GiveVideo测试!" << std::endl;
	if (realsource != nullptr)
	{
		realsource->GiveCall();
	}
	else
	{
		std::cout << "代理内部为空，givecall测试失败!" << std::endl;
	};

}