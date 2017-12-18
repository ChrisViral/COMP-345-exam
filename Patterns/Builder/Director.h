#pragma once
#include "Builder.h"

class Director
{
public:
	Director(): builder(nullptr) { }
	~Director() { }

	void setBuilder(Builder* builder) { this->builder = builder; }
	void* getObject() const { return builder->get(); }
	void construct() const
	{
		//TODO: Implement construction
		builder->build();
	}

private:
	Builder* builder;
};