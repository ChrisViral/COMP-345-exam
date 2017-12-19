#include "MyArray.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	cout << "Creating statically allocated array..." << endl;
	int sampleArray[4] = { 1, 2, 2, 4 };

	cout << "Using constructor..." << endl;
	MyArray anArray(sampleArray, 4);

	cout << "Using copy constructor..." << endl;
	MyArray* copiedArray = new MyArray(anArray);

	cout << "Printing content of MyArray..." << endl;
	for (int i = 0; i < copiedArray->getSize(); i++)
	{
		cout << copiedArray->getArray()[i] << endl;
	}

	delete copiedArray;
	
	system("PAUSE");
	return 0;
}
