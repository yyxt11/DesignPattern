/*
2  * 观察者模式
3  * 情景：高数课，ABCD四位同学，A是好学生，去上课，B在寝室睡觉，C在打游戏，D在学校外陪女友逛街
4  * 他们约定，如果要点名了，A在QQ群里吼一声，他们立刻赶到教室去。
6  * 采用观察者模式实现这个情景的应用。
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