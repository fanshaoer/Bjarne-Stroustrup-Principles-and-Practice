#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int randint()
{
	srand(time(NULL));

	int random = rand() % (INT_MAX + 1);

	return random;
}

int rand_in_range(int a, int b)
{
	srand(time(NULL));

	int random = rand() % (b - a) + a; // [a; b)

	return random;
}

int main()
{
	int a, b;

	cout << "Enter digits for the interval [a, b):\n";
	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "Random number in the interval [" << a << ", " << b << ") : ";
	cout << rand_in_range(a, b) << endl;

	return 0;
}