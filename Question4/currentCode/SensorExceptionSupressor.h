#pragma once
#include "Sensor.h"
#include "../newSensorDriver/SensorV2.h"
#include "CarController.h"

class SensorExceptionSupressor : public Sensor
{
public:
	explicit SensorExceptionSupressor(SensorV2* newSensor, CarController* controller);
	~SensorExceptionSupressor();

	int getPressure() override;

private:
	SensorV2* newSensor;
	CarController* controller;
};
