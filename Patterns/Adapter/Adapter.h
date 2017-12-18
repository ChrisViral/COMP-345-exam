#pragma once
#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target
{
public:
	explicit Adapter(Adaptee* adaptee) { this->adaptee = adaptee; }
	~Adapter() { }

	//TODO: Override methods

	void* foo() override { return adaptee->bar(); }

private:
	Adaptee* adaptee;
};