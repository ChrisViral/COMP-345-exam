#include "SensorExceptionSupressor.h"
#include "../newSensorDriver/Exceptions.h"
#include <iostream>

using std::cout;
using std::endl;

SensorExceptionSupressor::SensorExceptionSupressor(SensorV2* newSensor, CarController* controller) : newSensor(newSensor), controller(controller) { }

SensorExceptionSupressor::~SensorExceptionSupressor()
{
	delete newSensor;
	newSensor = nullptr;
	controller = nullptr;
}

int SensorExceptionSupressor::getPressure()
{
	cout << "in SensorExceptionSuppressor::getPressure()" << endl;
	int pressure;
	try
	{
		newSensor->getPsi(pressure);
	}
	//Catch exceptions
	catch (NegativeSensorException* e)
	{
		cout << "Negative pressure of " << e->getPressure() << "psi read by sensor";
		this->controller->state = unsafe;
	}
	catch (OverloadSensorException* e)
	{
		cout << "Dangerously high pressure of " << e->getPressure() << "psi read by sensor";
		this->controller->state = unsafe;
	}
	return pressure;
}
