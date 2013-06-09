#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	clock_t begin = clock();

	srand(time(NULL));

	vector<char*> memAlloc;

	for (int i = 0; i < 10000; ++i)
	{
		int byte_size = rand() % 1001;

		for (int j = 0; j < byte_size; ++j)
		{
			memAlloc.push_back(new char('a'));
		}
	}

	memAlloc.clear();

	clock_t end = clock();

	double time = (double)(end - begin) / CLOCKS_PER_SEC;

	cout << setprecision(17) << time << endl;

	return EXIT_SUCCESS;
}