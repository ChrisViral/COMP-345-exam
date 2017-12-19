#include "Code/ClockTimer.h"
#include "Code/DigitalClockObserver.h"
#include <iostream>
#include "Code/MinutesDecorator.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	//Create a ClockTimer to be observed
	ClockTimer *timer = new ClockTimer;

	//Create a DigitalClock that is connected to the ClockTimer  
	DigitalClockObserver *digitalClock = new DigitalClockObserver(timer);
	digitalClock = new MinutesDecorator(digitalClock);
	//digitalClock = new HoursDecorator(digitalClock);

	//Advancing the ClockTimer updates the DigitalClock
	//as Tick() calls Update() after it changed its state
	int secs;
	cout << "Enter number of seconds to count: ";
	cin >> secs;
	timer->start(secs);

	cout << endl;
	system("PAUSE");

	return 0;
}
