// SensorV2.cpp
// THIS FILE SHOULD NOT BE CHANGED

#include <ctime> 
#include "SensorV2.h"
#include "Exceptions.h"
#include <iostream>
using namespace std;

void SensorV2::getPsi(int &pVal){
	cout << "in SensorV2::getPsi()" << endl;
	pVal = rand() % 255 - 3;
	if (pVal < 0) {
		throw new NegativeSensorException(pVal);
	}
	if (pVal > 250) {
		throw new OverloadSensorException(pVal);
	}
}
