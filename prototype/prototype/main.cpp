#include"ConcreteMonkey.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete p;(p)=nullptr;}}
#endif // !SAFE_DELETE\


int main() {

	std::cout << "原型模式测试!" << std::endl;
	Monkey *CM = new ConcreteMonkey("猴子");
	Monkey *CM1 = CM->Clone();
	Monkey *CM2 = CM1->Clone();

	CM->report();
	CM1->report();
	CM2->report();

	SAFE_DELETE(CM);
	SAFE_DELETE(CM1);
	SAFE_DELETE(CM2);

	system("pause");
};