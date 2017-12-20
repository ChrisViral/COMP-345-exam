#pragma once
#include "Animal.h"

class Beaver : public Animal
{
public:
	~Beaver();

	string talk() override;
};
