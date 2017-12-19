#include "ObserverDecorator.h"

ObserverDecorator::ObserverDecorator(DigitalClockObserver* observer): observer(observer) { }

ObserverDecorator::~ObserverDecorator() { }