//
// Created by Administrator on 2018/6/23 0023.
//

#include "factory.h"

OperationFactory::OperationFactory() {}
OperationFactory::~OperationFactory() {}


FactoryAdd::FactoryAdd()
{
}

FactoryAdd::~FactoryAdd()
{
}

/*加法工厂抽象类*/
AbstractOperation * FactoryAdd::CreateOperate() {
    std::cout << "加法工厂类实体化!" << std::endl;
	AbstractOperation* temp = NULL;
    temp = new OperationAdd();
    return temp;
}


FactorySub::FactorySub()
{
}

FactorySub::~FactorySub()
{
}


/*减法工厂抽象类*/
AbstractOperation * FactorySub::CreateOperate() {
    std::cout << "减法工厂类实体化!" << std::endl;
	AbstractOperation* temp = NULL;
    temp = new OperationSub();
    return temp;
}


FactoryMul::FactoryMul()
{
}

FactoryMul::~FactoryMul()
{
}

/*乘法工厂抽象类*/
AbstractOperation * FactoryMul::CreateOperate() {
    std::cout << "乘法工厂类实体化!" << std::endl;
	AbstractOperation* temp = NULL;
    temp = new OperationMul();
    return temp;
}


FactoryDiv::FactoryDiv()
{
}

FactoryDiv::~FactoryDiv()
{
}


/*除法工厂抽象类*/
AbstractOperation * FactoryDiv::CreateOperate() {
    std::cout << "除法工厂类实体化!" << std::endl;
	AbstractOperation* temp = NULL;
    temp = new OperationDiv();
    return temp;
}

