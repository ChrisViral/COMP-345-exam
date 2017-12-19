#include "ObserverDecorator.h"
#include <iostream>

using std::cout;
using std::endl;

ObserverDecorator::ObserverDecorator(DigitalClockObserver* observer): observer(observer)
{
	//Get clock object of previous observer
	_subject = observer->getTimer();

	//Detach previous observer and attach new one
	_subject->Detach(observer);
	_subject->Attach(this);
}

ObserverDecorator::~ObserverDecorator()
{
	//Detach this observer
	getTimer()->Detach(this);
}

void ObserverDecorator::Update()
{
	//Update calls display, which only output the display string.
	cout << constructDisplayString() << endl;
}
