#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 401; ++i)
	{
		cout << hex << i << " ";
	}
	cout << endl;

	for (int i = -200; i < 201; ++i)
	{
		cout << hex << i << " ";
	}
	cout << endl;

	return 0;
}