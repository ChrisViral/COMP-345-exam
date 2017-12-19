#pragma once

class MyArray
{
public:
	MyArray();
	MyArray(const int a[], const int length);
	MyArray(const MyArray& a);
	~MyArray();

	int* getArray() const { return theArray; }
	int getSize() const { return size; }

	bool isInArray(const int value) const;

	const MyArray& operator=(const MyArray& a);
	
private:
	int* theArray;
	int size;
};
