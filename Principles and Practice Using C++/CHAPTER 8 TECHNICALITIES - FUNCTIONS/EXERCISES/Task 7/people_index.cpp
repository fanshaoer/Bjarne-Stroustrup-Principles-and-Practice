#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> name;

	vector<double> age;

	string names;
	int ages;

	cout << "Enter the names of 5 persons: ";
	
	for (int i = 0; i < 5; ++i)
	{
		cin >> names;
		name.push_back(names);
	}

	cout << "Enter the ages of the persons: ";

	for (int i = 0; i < 5; ++i)
	{
		cin >> ages;
		age.push_back(ages);
	}

	cout << "\nNames:\n";

	for (auto i = name.begin(); i < name.end(); ++i)
	{
		cout << *i << endl;
	}

	cout << "\nAges:\n";

	for (auto i = age.begin(); i < age.end(); ++i)
	{
		cout << *i << endl;
	}

	// TODO: sort the names

	return 0;
}