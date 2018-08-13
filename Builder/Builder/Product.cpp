#include "Product.h"



Product::Product()
{
}


Product::~Product()
{
}

void Product::Add(string A)
{
	ListV.push_back(A);
}

void Product::Show()
{
	int i;
	string j;
	for (i = 0; i < ListV.size(); i++)
	{
		cout << ListV[i] << " ";
	}
	cout << endl;
}