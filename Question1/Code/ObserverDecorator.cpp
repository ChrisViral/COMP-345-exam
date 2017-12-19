#include "ObserverDecorator.h"

ObserverDecorator::ObserverDecorator(DigitalClockObserver* observer): observer(observer)
{
	_subject = observer->getTimer();
	_subject->Detach(observer);
	_subject->Attach(this);
}

ObserverDecorator::~ObserverDecorator()
{
	getTimer()->Detach(this);
}