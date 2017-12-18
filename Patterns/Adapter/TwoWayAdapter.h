#pragma once
#include "Target.h"
#include "Adaptee.h"

class TwoWayAdapter : public Target, public Adaptee
{
public:
	explicit TwoWayAdapter(Target* target): adaptee(nullptr) { this->target = target; }
	explicit TwoWayAdapter(Adaptee* adaptee): target(nullptr) { this->adaptee = adaptee; }
	~TwoWayAdapter() { }

	//TODO: Override methods
	void* foo() override { return adaptee->bar(); }
	void* bar() override { return target->foo(); }

private:
	Target* target;
	Adaptee* adaptee;
};
