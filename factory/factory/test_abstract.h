//
// Created by Administrator on 2018/6/23 0023.
//

#ifndef FACTORY_PATTERN_TEST_ABSTRACT_H
#define FACTORY_PATTERN_TEST_ABSTRACT_H

#include <stdio.h>


class AbstractProduct{

public:
    AbstractProduct();
    virtual ~AbstractProduct();

public:
    virtual void operation() = 0;
};

class ProductA:public AbstractProduct{

public:
    ProductA();
    virtual ~ProductA();

public:
    void operation();
};

class ProductB:public AbstractProduct{

public:
    ProductB();
    ~ProductB();

public:
    void operation();
};

#endif //FACTORY_PATTERN_TEST_ABSTRACT_H
