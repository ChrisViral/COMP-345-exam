#pragma once
#include "Object.h"

class Decorator : public Object
{
public:
	explicit Decorator(Object* object);
	virtual ~Decorator() = 0;

	//TODO: Wrap base class methods

	void foo();

private:
	Object* object;
};