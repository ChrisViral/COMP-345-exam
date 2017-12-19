#include "MinutesDecorator.h"
#include <iostream>
#include <string>
#include "DigitalClockObserver.h"

using std::cout;
using std::to_string;

MinutesDecorator::MinutesDecorator(Observer* observer) : ObserverDecorator(observer) { }

MinutesDecorator::~MinutesDecorator() { }

void MinutesDecorator::Update()
{
	ObserverDecorator::Update();
	DigitalClockObserver* p = dynamic_cast<DigitalClockObserver*>(observer);
	if (p != nullptr)
	{
		cout << to_string(p->getTimer()->getMinute()) + " minutes";
	}
}
