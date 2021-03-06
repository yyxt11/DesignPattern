//
// Created by Administrator on 2018/6/23 0023.
//

#ifndef FACTORY_PATTERN_FACTORY_H
#define FACTORY_PATTERN_FACTORY_H
#include <stdio.h>
#include "operation.h"

/*工厂类*/
class OperationFactory{
public:
    OperationFactory();
    virtual ~OperationFactory();

public:
    virtual AbstractOperation* CreateOperate()=0;

};

/*加法工厂*/
class FactoryAdd:public OperationFactory{
public:
    FactoryAdd();
    virtual ~FactoryAdd();

public:
    AbstractOperation* CreateOperate();
};

/*减法工厂*/
class FactorySub:public OperationFactory{
public:
    FactorySub();
    virtual ~FactorySub();

public:
    AbstractOperation* CreateOperate();
};

/*乘法工厂*/
class FactoryMul:public OperationFactory{
public:
    FactoryMul();
    virtual ~FactoryMul();

public:
    AbstractOperation* CreateOperate();
};

/*除法工厂*/
class FactoryDiv:public OperationFactory{
public:
    FactoryDiv();
    virtual ~FactoryDiv();

public:
    AbstractOperation* CreateOperate();
};

#endif //FACTORY_PATTERN_FACTORY_H