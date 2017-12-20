// Sensor.cpp
// THIS FILE SHOULD NOT BE CHANGED

#include <ctime> 
#include "Sensor.h"
#include <iostream>
using namespace std;

int Sensor::getPressure(){
	cout << "in Sensor::getPressure()" << endl;
	int pressure = rand() % 255 - 3;
	if (pressure < 0) 
      return 0;
	if (pressure > 250) 
	  return 250;
	return pressure;
}