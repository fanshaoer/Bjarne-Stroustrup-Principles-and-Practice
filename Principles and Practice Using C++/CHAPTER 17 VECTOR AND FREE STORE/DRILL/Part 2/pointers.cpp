#include <iostream>

using namespace std;

int main()
{
	int* numb = new int(7);

	int* p1 = numb;

	// print addresses of numb and p1
	cout << numb << endl;
	cout << p1 << endl;

	// print the values of numb and p1
	cout << *numb << endl;
	cout << *p1 << endl;

	cout << "----------------------------------\n";
	//----------------------------------

	int* coll = new int[7];

	for (int i = 0; i < 7; ++i)
	{
		coll[i] = i;
	}

	int* p2 = coll;

	cout << *p2 << endl;
	cout << p2 << endl;
	cout << coll << endl;

	int* p3 = p2;

	cout << *p3 << endl;
	cout << p3 << endl;

	delete [] coll;

	cout << "----------------------------------\n";
	//----------------------------------

	int* stack = new int(10);
	for (int i = 0; i < 10; ++i)
	{
		stack[i] = i;
	}

	int* stack2 = new int(10);
	for (int i = 0; i < 10; ++i)
	{
		stack2[i] = 0;
	}

	int* p4 = stack;
	int* p5 = stack2;

	delete [] stack;
	delete [] stack2;

	return 0;
}