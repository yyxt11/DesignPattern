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
	cout << "��ǰ�������չ���" << endl;
}

void DecoratorVideo::SetDecorator()
{
	cout << "��ǰ����������" << endl;
}

void DecoratorDPI::SetDecorator()
{
	cout << "��ǰ������Ļ����" << endl;
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

