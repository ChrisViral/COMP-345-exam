#pragma once
#include "ObserverDecorator.h"

class MinutesDecorator : public ObserverDecorator
{
public:
	explicit MinutesDecorator(Observer* observer);
	~MinutesDecorator();

	void Update() override;
};

