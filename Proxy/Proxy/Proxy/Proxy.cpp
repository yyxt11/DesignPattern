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
	std::cout << "����givecall����!" << std::endl;
	if (realsource != nullptr)
	{
		realsource->GiveCall();
	}
	else
	{
		std::cout << "�����ڲ�Ϊ�գ�givecall����ʧ��!" << std::endl;
	};
};

void Proxy::GiveTextMail() {
	std::cout << "����GiveTextMail����!" << std::endl;
	if (realsource != nullptr)
	{
		realsource->GiveCall();
	}
	else
	{
		std::cout << "�����ڲ�Ϊ�գ�givecall����ʧ��!" << std::endl;
	};

}

void Proxy::GiveVideo() {
	std::cout << "����GiveVideo����!" << std::endl;
	if (realsource != nullptr)
	{
		realsource->GiveCall();
	}
	else
	{
		std::cout << "�����ڲ�Ϊ�գ�givecall����ʧ��!" << std::endl;
	};

}