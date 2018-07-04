//
// Created by Administrator on 2018/6/23 0023.
//

#include "test_factory.h"


AbstractFactory::AbstractFactory(){
}


AbstractFactory::~AbstractFactory(){
}


SimpleFactory::SimpleFactory(){
}


SimpleFactory::~SimpleFactory(){
}


AbstractProduct* SimpleFactory::createProduct(int type){
    AbstractProduct* temp = NULL;
    switch(type)
    {
        case 1:
            temp = new ProductA();
            break;
        case 2:
            temp = new ProductB();
            break;
        default:
            break;
    }
    return temp;
}