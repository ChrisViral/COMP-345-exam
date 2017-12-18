#include "Builder.h"

Builder::Builder(): object(nullptr) { }

Builder::~Builder() { }

void Builder::createNew()
{
	//TODO: Setup object creation
	object = static_cast<void*>(new int(0));
}
