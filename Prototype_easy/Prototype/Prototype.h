#pragma once
/*
ԭ��ģʽ:��ԭ��ʵ��ָ��������������࣬��ͨ��������Щԭ�ʹ����µĶ���
*/
#include<iostream>
#include<stdio.h>

class CPrototype
{
public:
	CPrototype();
	virtual ~CPrototype();
	virtual CPrototype *Clone()=0;


};


class CConcretePrototype :public CPrototype
{
private:
	int num;
public:
	CConcretePrototype();
	virtual ~CConcretePrototype();

	//�������캯��
	CConcretePrototype(const CConcretePrototype*rhs);

	//���Ʊ���
	virtual CPrototype *Clone();


};