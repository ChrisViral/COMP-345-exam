#include "DigitalClockObserver.h"
#include "ClockTimer.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::to_string;

DigitalClockObserver::DigitalClockObserver(): _subject(nullptr) { }

DigitalClockObserver::DigitalClockObserver(ClockTimer* s)
{
	//Upon instantiation, attaches itself to a ClockTimer
	_subject = s;
	_subject->Attach(this);
};

DigitalClockObserver::~DigitalClockObserver()
{
	//Upon destruction, detaches itself from its ClockTimer      
	_subject->Detach(this);
};

void DigitalClockObserver::Update()
{
	display();
};

void DigitalClockObserver::display() const
{
	cout << constructDisplayString();
};

string DigitalClockObserver::constructDisplayString() const
{
	return to_string(_subject->getSecond()) + " seconds ";
}
