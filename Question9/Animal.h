#pragma once
#include<string>

using std::string;

//Abstract Animal class
class Animal
{
public:
	Animal();
	virtual ~Animal() = 0;

	virtual string talk() = 0;
};
