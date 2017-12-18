#pragma once
#include "Decorator.h"

class Decorated : public Decorator
{
public:
	explicit Decorated(Object* object) : Decorator(object) { }
	~Decorated() { }

	//TODO: Add new methods
	void bar() { }
};
