#pragma once
#include "ObjectFactory.h"

class AbstractFactory : public ObjectFactory
{
public:
	~AbstractFactory() { }

	//TODO: Implement methods
	void* createObject() override
	{
		return nullptr;
	}
};