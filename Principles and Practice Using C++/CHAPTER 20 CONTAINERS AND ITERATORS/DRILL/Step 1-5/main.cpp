#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	vector<int> coll;

	for (int i = 0; i < 10; i++)
	{
		coll.push_back(i);
	}

	list<int> num;

	for (int i = 0; i < 10; ++i)
	{
		num.push_back(i);
	}

	int newArr[10];
	for (int i = 0; i < 10; ++i)
	{
		newArr[i] = arr[i] + 2;
	}

	vector<int> newColl;
	for (auto i = coll.begin(); i < coll.end(); ++i)
	{
		newColl.push_back((*i) * 3);
	}

	list<int> newNum;
	for (auto i = num.begin(); i != num.end(); ++i)
	{
		newNum.push_back((*i) + 5);
	}

	for (auto i = newColl.begin(); i < newColl.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	list<int>::iterator iter;
	for (iter = newNum.begin(); iter != newNum.end(); ++iter)
	{
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}