#pragma once
#include "Strategy.h"

class User
{
public:
	explicit User(Strategy* strategy) : strategy(strategy) { }
	~User() { }

	void setStrategy(Strategy* strategy) { this->strategy = strategy; }
	void executeStrategy() const { strategy->execute(); }

private:
	Strategy* strategy;
};
