//
// Created by Administrator on 2018/6/23 0023.
//
#include "operation.h"



/*抽象类定义*/
AbstractOperation::AbstractOperation() {
	term1 = 0.0;
	term2 = 0.0;

}

AbstractOperation::~AbstractOperation(){

}

void AbstractOperation::set_term1(double &parameter) {
    std::cout << "term1赋值完成!" << std::endl;
    term1 = parameter;
}


double AbstractOperation::get_term1() {
    std::cout << "term1取值完成!" << std::endl;
    return term1;
}

void AbstractOperation::set_term2(double &parameter) {
    std::cout << "term2赋值完成!" << std::endl;
    term2 = parameter;
}

double AbstractOperation::get_term2() {
    std::cout << "term2取值完成!" << std::endl;
    return term2;
}


OperationAdd::OperationAdd()
{
}
OperationAdd::~OperationAdd()
{
}

double OperationAdd::Get_Result() {
    std::cout << "调用加法公式!" << std::endl;
    double t1 = this->get_term1();
    double t2 = this->get_term2();
    double temp = t1 + t2;
    return temp;
}

OperationSub::OperationSub()
{
}
OperationSub::~OperationSub()
{
}


double OperationSub::Get_Result() {
    std::cout << "调用减法公式!" << std::endl;
    double t1 = this->get_term1();
    double t2 = this->get_term2();
    double temp = t1 - t2;
    return temp;
}

OperationMul::OperationMul()
{
}
OperationMul::~OperationMul()
{
}


double OperationMul::Get_Result() {
    std::cout << "调用乘法公式!" << std::endl;
    double t1 = this->get_term1();
    double t2 = this->get_term2();
    double temp = t1 * t2;
    return temp;

}

OperationDiv::OperationDiv()
{
}
OperationDiv::~OperationDiv()
{
}


double OperationDiv::Get_Result() {
    std::cout << "调用乘法公式!" << std::endl;
    double t1 = this->get_term1();
    double t2 = this->get_term2();
	double temp = NULL;
    if (t2 <= 0.0)
        throw(t2);
    else
        temp = t1 / t2;
    return temp;
}