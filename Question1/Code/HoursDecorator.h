#pragma once
#include "ObserverDecorator.h"

class HoursDecorator : public ObserverDecorator
{
public:
	explicit HoursDecorator(DigitalClockObserver* observer);
	~HoursDecorator();

	string constructDisplayString() const override;
};
