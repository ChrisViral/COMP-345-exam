#pragma once

class Builder
{
public:
	Builder() : object(nullptr) { }
	virtual ~Builder() = 0;

	//TODO: Setup builder methods

	void* get() const { return object; }
	void createNew() { object = static_cast<void*>(new int); }
	virtual void build() = 0;

protected:
	void* object;
};

inline Builder::~Builder()
{
	delete object;
}