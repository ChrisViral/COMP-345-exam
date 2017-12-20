// CarController.cpp
//THIS FILE SHOULD BE CHANGED, SEE THE CONSTRUCTOR BELOW

#include "CarController.h"
#include "Sensor.h"
#include <iostream>
#include <ctime>
#include "SensorExceptionSupressor.h"

using namespace std;

CarController::CarController()
{
	state = safe;
	wheels.push_back(new Wheel(new Sensor(), FR));
	wheels.push_back(new Wheel(new Sensor(), FL));

	// THE TWO REAR WHEELS NEED TO BE CONNECTED TO THE NEW SENSORS 
	// USING THE ADAPTER
	wheels.push_back(new Wheel(new SensorExceptionSupressor(new SensorV2(), this), RR));
	wheels.push_back(new Wheel(new SensorExceptionSupressor(new SensorV2(), this), RL));

	srand(time(nullptr));
}

CarController::~CarController() { }

void CarController::start()
{
	cout << "in CarController::start()" << state << endl;
	while (state == safe)
	{
		for (Wheel* w : wheels)
		{
			int pressure = w->pressureSensor->getPressure();
			if (pressure > 240 || pressure < 10)
			{
				cout << "abnormal pressure: " << pressure << endl;
				state = unsafe;
			}
		}
	}
	cout << "Car usafe to drive!" << endl;
}

Wheel::Wheel(Sensor* newPressureSensor, WheelId newWid) : pressureSensor(newPressureSensor), wid(newWid) { }
