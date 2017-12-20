#include "Animal.h"
#include "Beaver.h"
#include "Cat.h"
#include "Duck.h"
#include "Platypus.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const int SIZE = 4;
	Animal* animals[SIZE] = { new Duck, new Beaver, new Cat, dynamic_cast<Duck*>(new Platypus) };

	//Output
	for (int i = 0; i < SIZE; i++)
	{
		cout << animals[i]->talk();
	}
	cout << endl << endl;

	//Clear memory
	for (int i = 0; i < SIZE; i++)
	{
		delete animals[i];
		animals[i] = nullptr;
	}

	system("PAUSE");

	return 0;
}

