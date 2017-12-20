#pragma once
#include "Beaver.h"
#include "Duck.h"

class Platypus : public Beaver, public Duck
{
public:
	~Platypus();

	string talk() override;
};
