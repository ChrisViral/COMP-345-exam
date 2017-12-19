#pragma once
#include <string>
#include "DigitalClockObserver.h"

using std::string;

class ObserverDecorator : public DigitalClockObserver
{
public:
	explicit ObserverDecorator(DigitalClockObserver* observer);
	virtual ~ObserverDecorator() = 0;

	void Update() override { observer->Update(); }
	string constructDisplayString() const override = 0;

protected:
	DigitalClockObserver * observer;
};
