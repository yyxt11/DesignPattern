#pragma once

#include<vector>
#include<iostream>
#include <algorithm>
#include<string>
/*��Ʒ�࣬��Ҫ���������߾���װ����Щ��Ʒ*/

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

