#pragma once
#include"Builder.h"
/*ָ�ӹ��࣬����ָ�ӽ�����̣����շ��ؽ����builder���з���*/
class Director
{
public:
	Director();
	~Director();
public:
	void CreateBuilder(Builder *B);
};

