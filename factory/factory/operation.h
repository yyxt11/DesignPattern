//
// Created by Administrator on 2018/6/23 0023.
//

#ifndef FACTORY_PATTERN_OPERATION_H
#define FACTORY_PATTERN_OPERATION_H
#include <stdio.h>
#include <iostream>

/*计算方式抽象类*/
class AbstractOperation{
private:
    double term1,term2;

public:
    AbstractOperation();
    virtual ~AbstractOperation();
    virtual double Get_Result()=0;
    void set_term1(double &parameter);
    double get_term1();
    void set_term2(double &parameter);
    double get_term2();
};

/*加法*/
class OperationAdd:public AbstractOperation{
public:
    OperationAdd();
    virtual ~OperationAdd();

public:
    double Get_Result();
};

/*减法*/
class OperationSub:public AbstractOperation{
public:
    OperationSub();
    virtual ~OperationSub();

public:
    double Get_Result();
};

/*乘法*/
class OperationMul:public AbstractOperation{
public:
    OperationMul();
    virtual ~OperationMul();

public:
    double Get_Result();
};

/*除法*/
class OperationDiv:public AbstractOperation{
public:
    OperationDiv();
    virtual ~OperationDiv();

public:
    double Get_Result();
};

#endif //FACTORY_PATTERN_OPERATION_H