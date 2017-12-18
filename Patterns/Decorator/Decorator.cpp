#include "Decorator.h"

Decorator::Decorator(Object* object): object(nullptr) { }

Decorator::~Decorator() { }

//TODO: Wrap base class methods

void Decorator::foo()
{
	object->foo();
}
