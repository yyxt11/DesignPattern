#include"Proxy.h"

int main() {

	std::cout << "����ģʽ����!" << std::endl;
	Proxy *proxy = new Proxy();
	std::cout << "��������!" << std::endl;
	proxy->GiveCall();
	proxy->GiveTextMail();
	proxy->GiveVideo();

	system("pause");
};