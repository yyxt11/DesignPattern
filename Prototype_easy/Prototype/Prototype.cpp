#include"Prototype.h"

CPrototype::CPrototype(){};

CPrototype::~CPrototype() {};

CConcretePrototype::CConcretePrototype() {
	std::cout << "�����µ�ԭ��" << std::endl;
	this->num = 0;
};

CConcretePrototype::~CConcretePrototype() {	

};

CConcretePrototype::CConcretePrototype(const CConcretePrototype * rhs)
{
	this->num = rhs->num;
};

CPrototype *CConcretePrototype::Clone() {
	std::cout << "����ԭ��" << std::endl;
	return new CConcretePrototype(*this);
};