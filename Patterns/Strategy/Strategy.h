#pragma once

class Strategy
{
public:
	Strategy();
	virtual ~Strategy() = 0;

	virtual void execute() = 0;
};