#include "Exceptions.h"

NegativeSensorException::NegativeSensorException(const int& pressure) : pressure(pressure) { }

NegativeSensorException::~NegativeSensorException() { }


OverloadSensorException::OverloadSensorException(const int& pressure) : pressure(pressure) { }

OverloadSensorException::~OverloadSensorException() { }
