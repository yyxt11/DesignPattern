#include"Prototype.h"

CPrototype::CPrototype(){};

CPrototype::~CPrototype() {};

CConcretePrototype::CConcretePrototype() {
	std::cout << "创建新的原型" << std::endl;
	this->num = 0;
};

CConcretePrototype::~CConcretePrototype() {	

};

CConcretePrototype::CConcretePrototype(const CConcretePrototype * rhs)
{
	this->num = rhs->num;
};

CPrototype *CConcretePrototype::Clone() {
	std::cout << "复制原型" << std::endl;
	return new CConcretePrototype(*this);
};