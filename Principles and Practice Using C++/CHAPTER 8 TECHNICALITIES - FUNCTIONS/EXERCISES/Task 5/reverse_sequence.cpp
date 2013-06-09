#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseCopy(vector<int> v)
{
	reverse(v.begin(), v.end());

	cout << "\nREVERSE copy vector: ";

	for (auto i = v.begin(); i < v.end(); ++i)
	{
		cout << *i << " ";
	}
}

void reverseRef(vector<int> &v)
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
	vector<int> numbers;

	numbers.push_back(4);
	numbers.push_back(1);
	numbers.push_back(5);
	numbers.push_back(8);

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