#include "MinutesDecorator.h"
#include "DigitalClockObserver.h"
#include <iostream>

using std::cout;
using std::endl;
using std::to_string;

MinutesDecorator::MinutesDecorator(DigitalClockObserver* observer) : ObserverDecorator(observer) { }

MinutesDecorator::~MinutesDecorator() { }

void MinutesDecorator::Update()
{
	display();
}

void MinutesDecorator::display() const
{
	cout << constructDisplayString() << endl;
}

string MinutesDecorator::constructDisplayString() const
{
	return observer->constructDisplayString() + to_string(_subject->getMinute()) + " minutes";
}

