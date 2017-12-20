#pragma once
#include <exception>

using std::exception;

class NegativeSensorException : public exception
{
public:
	explicit NegativeSensorException(const int& pressure);
	~NegativeSensorException();

	int getPressure() const { return pressure; }

private:
	int pressure;
};

class OverloadSensorException : public exception
{
public:
	explicit OverloadSensorException(const int& pressure);
	~OverloadSensorException();

	int getPressure() const { return pressure; }

private:
	int pressure;
};
