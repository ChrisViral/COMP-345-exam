#pragma once
#include "Subject.h"

class ClockTimer : public Subject
{
public:
	ClockTimer();
	~ClockTimer();

	int getHour() const { return hour; }
	int getMinute() const { return minute; }
	int getSecond() const { return second; }

	void start(const int time);
	void tick();

private:
	int hour;
	int minute;
	int second;
};
