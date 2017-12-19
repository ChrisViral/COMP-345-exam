#pragma once
#include "ObserverDecorator.h"
#include <string>

using std::string;

class MinutesDecorator : public ObserverDecorator
{
public:
	explicit MinutesDecorator(DigitalClockObserver* observer);
	~MinutesDecorator();

	string constructDisplayString() const override;
};

