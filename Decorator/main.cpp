#include"Decorator.h"
#include"NokiaPhone.h"
#include"IPhone.h"

int main() {

	std::cout << "×°ÊÎÄ£Ê½²âÊÔ!" << std::endl;
	Phone *ph = new IPhone();
	Phone *video = new DecoratorVideo(*ph);
	Phone *dpi = new DecoratorVideo(*video);
	Phone *photo = new DecoratorVideo(*dpi);
	photo->ShowDecorate();

	delete photo;
	delete dpi;
	delete video;
	delete ph;


	system("pause");
};