#include "Subject.h"
#include "Observer.h"

Subject::Subject()
{
	_observers = new list<Observer*>;
}

Subject::~Subject()
{
	_observers->clear();
	delete _observers;
}

void Subject::Attach(Observer* o)
{
	_observers->push_back(o);
};

void Subject::Detach(Observer* o)
{
	_observers->remove(o);
};

void Subject::Notify()
{
	for (auto i = _observers->begin() ; i != _observers->end(); ++i)
	{
		(*i)->Update();
	}
};
