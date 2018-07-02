#pragma once
#include<string>
#include<stdio.h>
#include <iostream>

using namespace std;
class Phone {
public:
	Phone() {};
	virtual ~Phone() {};
	virtual void ShowDecorate() {};
};