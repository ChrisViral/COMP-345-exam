// CarController.h
// THIS FILE SHOULD NOT BE CHANGED

#pragma once
#include "Sensor.h"
#include <vector>
using namespace std;

enum CarState {
	safe, unsafe
};

enum WheelId {
	FR, FL, RR, RL
};

class Wheel {
public:
	Wheel(Sensor* pressureSensor, WheelId wid);
	Sensor* pressureSensor;
	WheelId wid;
};

class CarController {
  public:
	CarController();
	~CarController();
	void start();
	vector<Wheel*> wheels;
	CarState state;
};
