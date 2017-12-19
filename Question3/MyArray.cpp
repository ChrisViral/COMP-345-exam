#include "MyArray.h"

MyArray::MyArray()
{
	theArray = new int[0];
	size = 0;
}

MyArray::MyArray(const int a[], const int length)
{
	//Initialize the array to the size of the static array
	theArray = new int[length];
	size = 0;

	for (int i = 0, j = 0; i < length; i++)
	{
		//Only add non dupplicates
		if (!isInArray(a[i]))
		{
			//Increment size when adding items
			theArray[j] = a[i];
			j++;
			size++;
		}
	}

	//If size does not match original length
	if (size != length)
	{
		//Reduce dynamic array to real size and copy elements over
		int* temp = new int[size];
		for (int i = 0; i < size; i++)
		{
			temp[i] = theArray[i];
		}

		//Delete oversized array and swap pointer
		delete[] theArray;
		theArray = temp;
		temp = nullptr;
	}
}

MyArray::MyArray(const MyArray& a)
{
	size = a.size;
	theArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		theArray[i] = a.theArray[i];
	}
}

MyArray::~MyArray()
{
	delete[] theArray;
	theArray = nullptr;
}

bool MyArray::isInArray(const int value) const
{
	//Loop through elements and return true if a match is found
	for (int i = 0; i < size; i++)
	{
		if (theArray[i] == value)
		{
			return true;
		}
	}
	//Else return false;
	return false;
}

const MyArray& MyArray::operator=(const MyArray& a)
{
	//Check if instances are equal
	if (&a != this)
	{
		//Delete previous array
		delete[] theArray;
		size = a.size;

		//Copy new array
		theArray = new int[size];
		for (int i = 0; i < size; i++)
		{
			theArray[i] = a.theArray[i];
		}
	}

	//Return reference
	return *this;
}
