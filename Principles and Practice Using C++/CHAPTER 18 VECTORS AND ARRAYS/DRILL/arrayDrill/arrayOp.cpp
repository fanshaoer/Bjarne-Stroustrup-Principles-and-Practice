#include <iostream>

using namespace std;

const int SIZE = 10;

int globalArray[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int coll[], int size)
{
	int localArray[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		localArray[i] = globalArray[i];
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << localArray[i] << " ";
	}
	cout << endl;


	coll[size];
	int* p = new int[size];

	for (int i = 0; i < size; ++i)
	{
		p[i] = coll[i];
	}

	for (int i = 0; i < size; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;

	delete [] p;
}

int main()
{
	f(globalArray, SIZE);

	cout << endl;

	int mainArray[SIZE] = {1, 2, 6, 24, 120, 720, 1337, 1337, 1337, 1337};

	f(mainArray, SIZE);

	return 0;
}