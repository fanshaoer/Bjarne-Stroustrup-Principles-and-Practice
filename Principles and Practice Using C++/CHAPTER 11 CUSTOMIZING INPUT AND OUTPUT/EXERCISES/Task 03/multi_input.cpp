#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int input;

	vector<int> inputStore;

	do
	{
		cout << "Enter a number: ";
		cin >> input;

	    inputStore.push_back(input);

	} while (input > 0);

	cout << showbase;

	for (auto i = inputStore.begin(); i < inputStore.end(); ++i)
	{
		cout << hex << *i << " in dec is " << dec << *i << endl;
	}

	return 0;
}