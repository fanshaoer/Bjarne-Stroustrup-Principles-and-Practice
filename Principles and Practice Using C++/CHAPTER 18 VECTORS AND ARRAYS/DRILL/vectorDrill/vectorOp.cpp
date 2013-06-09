#include <iostream>
#include <vector>

using namespace std;

vector<int> globalVec(10, 1);

void f(vector<int> v)
{
	vector<int> localVec;

	for (int i = 0; i < globalVec.size(); ++i)
	{
		localVec.push_back(globalVec[i]);
	}

	for (auto i = localVec.begin(); i < localVec.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	
	vector<int> locVec2;

	for (int i = 0; i < v.size(); ++i)
	{
		locVec2.push_back(v[i]);
	}
	
	for (auto i = locVec2.begin(); i < locVec2.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main()
{
	f(globalVec);

	vector<int> mainVec(10, 3);

	f(mainVec);

	return 0;
}