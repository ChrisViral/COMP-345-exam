#pragma once

class Object
{
public:
	Object() { }
	virtual ~Object() = 0;

	//TODO: Setup abstract methods

	virtual void foo() = 0;
};