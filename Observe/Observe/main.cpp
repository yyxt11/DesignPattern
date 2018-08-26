/*
2  * �۲���ģʽ
3  * �龰�������Σ�ABCD��λͬѧ��A�Ǻ�ѧ����ȥ�ϿΣ�B������˯����C�ڴ���Ϸ��D��ѧУ����Ů�ѹ��
4  * ����Լ�������Ҫ�����ˣ�A��QQȺ���һ�����������̸ϵ�����ȥ��
6  * ���ù۲���ģʽʵ������龰��Ӧ�á�
7  */

#include"Subject.h"
#include"Observer.h"


#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif


void main() {
	Roommate *stuB = new Roommate("B",
		"sleep",
		"wake up and go class");
	Roommate *stuC = new Roommate("C",
		"play compute game",
		"close compute and go class");
	Roommate *stuD = new Roommate("D",
		"shopping",
		"finish shopping and go class");

	MathClass *stuA = new MathClass();
	stuA->Attach(stuB);
	stuA->Attach(stuC);
	stuA->Attach(stuD);

	stuA->Notify("fine");
	stuA->Notify("duty");

	SAFE_DELETE(stuA);
	SAFE_DELETE(stuD);
	SAFE_DELETE(stuC);
	SAFE_DELETE(stuB);

	system("pause");

}