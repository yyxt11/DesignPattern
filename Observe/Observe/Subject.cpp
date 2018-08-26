#include "Subject.h"

MathClass::MathClass()
{
	std::cout << "observe list initial" << std::endl;
	Obs = new std::list<Observer*>;
};

MathClass::~MathClass()
{
	if (Obs != nullptr)
	{	
		std::cout << "observe list delete" << std::endl;
		delete Obs;
		Obs = nullptr;

	}
}

void MathClass::Attach(Observer *ob) {
	std::cout << "observe list add" <<ob->name <<std::endl;
	Obs->push_back(ob);
};

void MathClass::Detach(Observer *ob) {
	std::cout << "observe list remove" << ob->name << std::endl;
	if (Obs->size() > 0)
	{
		Obs->remove(ob);
	}
};


void MathClass::Notify(const std::string &msg) {
	std::cout << " msg " <<msg << " broadcast " <<std::endl;
	std::list<Observer *>::iterator iter;
	for (iter = Obs->begin(); iter != Obs->end(); iter++)
	{
		(*iter)->update(msg);
	}

};

