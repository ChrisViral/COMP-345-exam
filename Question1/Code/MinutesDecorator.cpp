#include "MinutesDecorator.h"
#include "DigitalClockObserver.h"
#include <iostream>

using std::cout;
using std::endl;
using std::to_string;

MinutesDecorator::MinutesDecorator(DigitalClockObserver* observer) : ObserverDecorator(observer) { }

MinutesDecorator::~MinutesDecorator() { }

string MinutesDecorator::constructDisplayString() const
{
	//Display previous observer string and append new
	return observer->constructDisplayString() + to_string(_subject->getMinute()) + " minutes ";
}

