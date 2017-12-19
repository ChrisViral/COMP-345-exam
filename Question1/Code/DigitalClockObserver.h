#pragma once
#include "Observer.h"
#include "ClockTimer.h"

using std::string;

class DigitalClockObserver : public Observer
{
public:
	DigitalClockObserver();
	explicit DigitalClockObserver(ClockTimer* s);
	virtual ~DigitalClockObserver();

	ClockTimer* getTimer() const { return _subject; }
	void Update() override;
	void display() const;
	virtual string constructDisplayString() const;

protected:
    ClockTimer* _subject;
};
