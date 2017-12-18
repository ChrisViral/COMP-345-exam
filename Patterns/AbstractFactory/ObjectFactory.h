#pragma once

class ObjectFactory
{
public:
	ObjectFactory();
	virtual ~ObjectFactory() = 0;

	//TODO: Setup needed methods

	virtual void* createObject() = 0;
};