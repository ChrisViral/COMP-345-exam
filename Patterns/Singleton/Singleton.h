#pragma once

class Singleton
{
public:
	static Singleton* instance()
	{
		if (_instance == nullptr) { _instance = new Singleton(); }
		return _instance;
	}

	//TODO: Add Singleton data

	void foo();

private:
	Singleton();
	~Singleton();

	static Singleton* _instance;
};