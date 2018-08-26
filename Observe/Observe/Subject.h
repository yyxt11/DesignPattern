#pragma once

#include"Observer.h"

class Subject
{
public:
	Subject() {};
	~Subject() {};
public:
	virtual void Attach(Observer *ob) = 0;
	virtual void Detach(Observer *ob) = 0;
	virtual void Notify(const std::string &msg) = 0;
};

class MathClass : public Subject {
public:
	MathClass();
	~MathClass();

public:
	virtual void Attach(Observer *ob);
	virtual void Detach(Observer *ob);
	virtual void Notify(const std::string &msg);

private:
	std::list<Observer *> *Obs;

};