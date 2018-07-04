//
// Created by Administrator on 2018/6/23 0023.
//

#include "test_abstract.h"


AbstractProduct::AbstractProduct(){
}


AbstractProduct::~AbstractProduct(){
}


ProductA::ProductA(){
}


ProductA::~ProductA(){
}


void ProductA::operation(){
    fprintf(stderr,"productA operation!\n");
}


ProductB::ProductB(){
}


ProductB::~ProductB(){
}


void ProductB::operation(){
    fprintf(stderr,"productB operation!\n");
}
