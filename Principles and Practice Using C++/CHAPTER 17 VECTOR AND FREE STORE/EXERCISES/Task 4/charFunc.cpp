#include <iostream>
#include <cstdlib>

using namespace std;

const char* maina(const char* s)
{
	char* getCopy = new char[strlen(s) + 1];

	for (int i = 0; i < strlen(s); ++i)
	{
		getCopy[i] = s[i];
	}

	return s;
}

int main()
{
	const char* copyMe = "Fuck Yea";

	cout << maina(copyMe) << endl;

	return EXIT_SUCCESS;
}