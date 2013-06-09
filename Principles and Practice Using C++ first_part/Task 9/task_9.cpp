#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const int SIZE   = 64;
const double TWO = 2;

int main()
{
	unsigned long long chess[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		chess[i] = pow(TWO, i);
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << "[" << i + 1 << "] --> " << chess[i] << endl;
	}

	return EXIT_SUCCESS;
}