//
// Created by Administrator on 2018/6/23 0023.
//

#ifndef FACTORY_PATTERN_TEST_FACTORY_H
#define FACTORY_PATTERN_TEST_FACTORY_H

#include <stdio.h>
#include "test_abstract.h"


class AbstractFactory{

public:
    AbstractFactory();
    virtual ~AbstractFactory();

public:
    virtual AbstractProduct* createProduct(int type) = 0;
};


class SimpleFactory:public AbstractFactory{

public:
    SimpleFactory();
    ~SimpleFactory();

public:
    AbstractProduct* createProduct(int type);
};


#endif //FACTORY_PATTERN_TEST_FACTORY_H
