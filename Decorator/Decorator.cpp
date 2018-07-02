#include "Decorator.h"



DecoratorPhone::DecoratorPhone(Phone &phone)
{
	if (this->D_phone == NULL)
	{
		this->D_phone = &phone;
	}
}


DecoratorPhone::~DecoratorPhone()
{
}

void DecoratorPhone::ShowDecorate()
{
	D_phone->ShowDecorate();
}



void DecoratorPhoto::SetDecorator()
{
	cout << "当前加上拍照功能" << endl;
}

void DecoratorVideo::SetDecorator()
{
	cout << "当前加上摄像功能" << endl;
}

void DecoratorDPI::SetDecorator()
{
	cout << "当前加上屏幕功能" << endl;
}

void DecoratorPhoto::ShowDecorate()
{
	DecoratorPhone::ShowDecorate();
	this->SetDecorator();
}

void DecoratorVideo::ShowDecorate()
{
	DecoratorPhone::ShowDecorate();
	this->SetDecorator();
}

void DecoratorDPI::ShowDecorate()
{
	DecoratorPhone::ShowDecorate();
	this->SetDecorator();
}

