#pragma once
#include "Observer.h"

class ObserverDecorator : public Observer
{
public:
	explicit ObserverDecorator(Observer* observer);
	virtual ~ObserverDecorator() = 0;

	void Update() override { observer->Update(); }

protected:
	Observer * observer;
};