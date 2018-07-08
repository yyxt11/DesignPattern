#include "RealSource.h"



RealSource::RealSource()
{
}


RealSource::~RealSource()
{
}

void RealSource::GiveCall() {
	std::cout << "调用RS的give call 方法!" << std::endl;
};

void RealSource::GiveTextMail() {
	std::cout << "调用RS的GiveTextMail 方法!" << std::endl;
}

void RealSource::GiveVideo() {
	std::cout << "调用RS的GiveVideo 方法!" << std::endl;
}