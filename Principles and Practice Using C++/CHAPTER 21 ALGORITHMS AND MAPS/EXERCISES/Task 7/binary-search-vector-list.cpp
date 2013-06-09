#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


using namespace std;

int binarySearch(vector<int> &v, int &x)
{
	int midElementIndex = v.size() / 2;

	if (x == v[midElementIndex])
	{
		return x;
	}
	else if (x < v[midElementIndex])
	{
		for (int i = 0; i < midElementIndex; ++i)
		{
			if (x == v[i])
			{
				return x;
			}
		}
	} 
	else if (x > v[midElementIndex])
	{
		for (int i = midElementIndex + 1; i < v.size(); ++i)
		{
			if (x == v[i])
			{
				return x;
			}
		}
	}
}

int main()
{
	vector<int> coll;

	coll.push_back(0);
	coll.push_back(10);
	coll.push_back(4);
	coll.push_back(92);
	coll.push_back(104);
	coll.push_back(3);
	coll.push_back(15);
	coll.push_back(7);
	coll.push_back(1);
	coll.push_back(9);

	sort(coll.begin(), coll.end());

	for (auto i = coll.begin(); i != coll.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	int n;
	cin >> n;

	cout << binarySearch(coll, n) << endl;

	return EXIT_SUCCESS;
}