#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<int> someShit(vector<string> &n)
{
	vector<int> size;

	for (int i = 0; i < n.size(); ++i)
	{
		size.push_back(n[i].size());
	}

	return size;
}

int main()
{
	vector<string> names;

	names.push_back("Pesho");
	names.push_back("Nasko");
	names.push_back("Dido");
	names.push_back("Dobcho");
	names.push_back("Momchi");
	names.push_back("Alexandra");

	vector<int> holder = someShit(names);

	for (auto i = holder.begin(); i < holder.end(); ++i)
	{
		cout << *i << " ";
	}

	cout << endl;

	return 0;
}