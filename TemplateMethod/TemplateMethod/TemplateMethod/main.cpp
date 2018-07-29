#include"ConCreteTemplateMethod.h"

int main(int argc, char **argv)
{
	TemplateMethod *A ;
	A = new ConCreteATemplateMethod();
	A->TemplateM();

	delete A;

	TemplateMethod *B;
	B = new ConCreteBTemplateMethod();
	B->TemplateM();

	delete B;

	system("pause");
}