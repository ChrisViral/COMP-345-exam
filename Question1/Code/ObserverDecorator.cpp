#include "ObserverDecorator.h"

ObserverDecorator::ObserverDecorator(Observer* observer): observer(observer) { }

ObserverDecorator::~ObserverDecorator() { }