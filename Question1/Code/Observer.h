#pragma once

class Observer
{
public:
	virtual ~Observer() = 0;
	virtual void Update() = 0;

protected:
	Observer();
};
