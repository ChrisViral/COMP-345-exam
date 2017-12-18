#pragma once

class Builder
{
public:
	Builder();
	virtual ~Builder() = 0;

	//TODO: Setup builder methods

	void* get() const { return object; }
	virtual void createNew();
	virtual void build() = 0;

protected:
	void* object;
};