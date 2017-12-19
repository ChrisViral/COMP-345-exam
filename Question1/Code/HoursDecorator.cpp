#include "HoursDecorator.h"
#include "DigitalClockObserver.h"
#include <iostream>

using std::cout;
using std::endl;
using std::to_string;

HoursDecorator::HoursDecorator(DigitalClockObserver* observer) : ObserverDecorator(observer) { }

HoursDecorator::~HoursDecorator() { }

string HoursDecorator::constructDisplayString() const
{
	//Display previous observer string and append new
	return observer->constructDisplayString() + to_string(_subject->getHour()) + " hours ";
}
