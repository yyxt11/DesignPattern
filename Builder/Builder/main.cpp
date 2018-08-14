#include "Builder.h"
#include "Director.h"


#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main() {

	std::cout << "builder pattern test" << std::endl;
	Director * DD = new Director();
	ConcreteBuildA *builderA = new ConcreteBuildA();
	ConcreteBuildB *builderB = new ConcreteBuildB();

	DD->CreateBuilder(builderA);
	DD->CreateBuilder(builderB);

	Product* PA = builderA->GetResult();
	Product* PB = builderB->GetResult();

	PA->Show();
	PB->Show();


	//attention the delete sequence
	//SAFE_DELETE(PA);
	//SAFE_DELETE(PB);
	SAFE_DELETE(builderA);
	SAFE_DELETE(builderB);
	SAFE_DELETE(DD);

	system("pause");
};