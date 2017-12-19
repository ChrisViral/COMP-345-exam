#include "MinutesDecorator.h"
#include "DigitalClockObserver.h"

using std::to_string;

MinutesDecorator::MinutesDecorator(DigitalClockObserver* observer) : ObserverDecorator(observer)
{
	_subject = observer->getTimer();
}

MinutesDecorator::~MinutesDecorator() { }

string MinutesDecorator::constructDisplayString() const
{
	return observer->constructDisplayString() + to_string(_subject->getMinute()) + " minutes";
}

