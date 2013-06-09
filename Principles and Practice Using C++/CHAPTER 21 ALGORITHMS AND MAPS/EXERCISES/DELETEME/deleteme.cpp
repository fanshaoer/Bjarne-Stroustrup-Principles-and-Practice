#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	clock_t time;

	const int SIZE = 1000;

	int coll[SIZE];

	time = clock();

	for (int i = 0; i < SIZE; ++i)
	{
		coll[i] = 1;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		cout << coll[i] << endl;
	}

	time = clock() - time;

	cout << setprecision(17) << " " << (double)time / CLOCKS_PER_SEC << endl;

	return EXIT_SUCCESS;
}