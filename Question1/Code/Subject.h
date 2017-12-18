#pragma once
#include "Observer.h"
#include <list>

using std::list;

//Needs to have a forward reference due to 
//circular reference between Observer and Subject
class Observer;

class Subject
{
public:
	Subject();
	virtual ~Subject() = 0;

	virtual void Attach(Observer* o);
	virtual void Detach(Observer* o);
	virtual void Notify();

private:
	list<Observer*>* _observers;
};
