#pragma once
#include "Observer.h"
#include "ClockTimer.h"

class DigitalClockObserver : public Observer
{
public:
	DigitalClockObserver();
	explicit DigitalClockObserver(ClockTimer* s);
	~DigitalClockObserver();

	ClockTimer* getTimer() const { return _subject; }
	void Update() override;
	void display() const;
	std::string constructDisplayString() const;

private:
	ClockTimer* _subject;
};
