#pragma once
/*
ԭ��ģʽ�������һ������
�����ÿ������캯����ʵ��clone�Ĺ���
*/
#include<iostream>

/*����ԭ����*/
class Monkey
{
public:
	Monkey();
	virtual ~Monkey();
	virtual Monkey* Clone()= 0;
	virtual void report() = 0;
};


