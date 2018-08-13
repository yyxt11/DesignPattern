#pragma once

#include<vector>
#include<iostream>
#include <algorithm>
#include<string>
/*产品类，主要描述建造者具体装配哪些产品*/

using namespace std;
typedef vector<string> vString;

class Product
{
public:
	Product();
	virtual ~Product();

public:
	virtual void Add(string A);
	virtual void Show();

private:
	vString ListV;
};

