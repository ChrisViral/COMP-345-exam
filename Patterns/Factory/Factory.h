#pragma once


class Factory
{
public:
	enum Types
	{
		//TODO: Insert object types
	};

	static void* create(const Types type)
	{
		switch (type)
		{
        //TODO: Return different objects for each types
		default:
			return nullptr;
		}
	}

private:
	Factory() { }
	~Factory() { }
};