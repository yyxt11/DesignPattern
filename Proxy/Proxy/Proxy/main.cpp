#include"Proxy.h"

int main() {

	std::cout << "代理模式测试!" << std::endl;
	Proxy *proxy = new Proxy();
	std::cout << "方法测试!" << std::endl;
	proxy->GiveCall();
	proxy->GiveTextMail();
	proxy->GiveVideo();

	system("pause");
};