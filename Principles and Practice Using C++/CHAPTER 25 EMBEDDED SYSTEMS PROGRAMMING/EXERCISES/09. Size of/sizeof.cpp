#include <iostream>

using namespace std;

int main()
{
	const int BITS_IN_BYTE = 8;

	int size_of_int = sizeof(int);
	int bits_in_int = size_of_int * BITS_IN_BYTE;

	cout << bits_in_int << endl;

	return 0;
}