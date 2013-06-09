#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

int randint()
{
	srand(time(NULL));

	int random = rand() % (INT_MAX + 1);

	return random;
}

int main()
{
	cout << randint() << endl;

	return 0;
}