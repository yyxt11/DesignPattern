#pragma once
#include "Phone.h"

/*抽象装饰类*/
class DecoratorPhone :
	public Phone
{
private:
	Phone * D_phone;
public:
	DecoratorPhone(Phone &phone);
	virtual ~DecoratorPhone();

public:
	virtual void ShowDecorate();

};


/*实体装饰类*/
class DecoratorDPI :
	public DecoratorPhone
{
public:
	DecoratorDPI(Phone &phone) :DecoratorPhone(phone) {};
	~DecoratorDPI() {};
public:
	void ShowDecorate();
	void SetDecorator();

};

class DecoratorPhoto :
	public DecoratorPhone
{
public:
	DecoratorPhoto(Phone &phone) :DecoratorPhone(phone) {};
	~DecoratorPhoto() {};
public:
	void ShowDecorate();
	void SetDecorator();
};

class DecoratorVideo :
	public DecoratorPhone
{
public:
	DecoratorVideo(Phone &phone) :DecoratorPhone(phone) {};
	~DecoratorVideo() {};

public:
	void ShowDecorate();
	void SetDecorator();
};
