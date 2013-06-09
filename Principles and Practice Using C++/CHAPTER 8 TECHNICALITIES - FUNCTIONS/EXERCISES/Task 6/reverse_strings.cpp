#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void reverseCopy(vector<string> v)
{
	reverse(v.begin(), v.end());

	cout << "\nREVERSE copy vector: ";

	for (auto i = v.begin(); i < v.end(); ++i)
	{
		cout << *i << " ";
	}
}

void reverseRef(vector<string> &v)
{
	cout << "\nREVERSE ref vector: ";

	reverse(v.begin(), v.end());

	for (auto i = v.begin(); i < v.end(); ++i)
	{
		cout << *i << " ";
	}

	cout << endl;
}

int main()
{
	vector<string> numbers;

	numbers.push_back("Fuck");
	numbers.push_back("off");
	numbers.push_back("noob");
	numbers.push_back("idiot");

	cout << "DEFAULT vector: ";

	for (auto i = numbers.begin(); i < numbers.end(); ++i)
	{
		cout << *i << " ";
	}

	reverseCopy(numbers);

	cout << "\nDEFAULT: ";

	for (auto i = numbers.begin(); i < numbers.end(); ++i)
	{
		cout << *i << " ";
	}

	reverseRef(numbers);

	cout << "BACK in DEFAULT: ";

	for (auto i = numbers.begin(); i < numbers.end(); ++i)
	{
		cout << *i << " ";
	}

	return 0;
}