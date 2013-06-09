#include <iostream>
#include <map>
#include <string>

using namespace std;

template<class KEY, class VALUE>
void readPairs(map<KEY, VALUE> &m)
{
	KEY key;
	VALUE val;
	cout << "Insert <key, value> pairs:\n";
	for (int i = 0; i < 3; i++)
	{
		cin >> key >> val;

		m[key] = val;
	}
}

int main()
{
	// <key, value> pair
	map<string, int> msi;

	msi["shpek"] = 13;
	msi["salam"] = 15;
	msi["pesho"] = 48;
	msi["nakov"] = 18;
	msi["sam"] = 20;
	msi["Gandalf"] = 36;
	msi["babev"] = 0;

	for (auto elem : msi)
	{
		cout << elem.first << " " << elem.second << endl;
	}

	msi.erase(msi.begin(), msi.end());

	cout << "New elements: \n";

	readPairs(msi);

	for (auto &elem : msi)
	{
		cout << elem.first << " " << elem.second << endl;
	}

	cout << "The sum of the values is: ";
	auto sum = 0;
	for (auto &elem : msi)
	{
		sum += elem.second;
	}

	cout << sum << endl;

	map<int, string> mis;
	
	// swap the key/value pairs into new map
	for (auto &elem : msi)
	{
		mis[elem.second] = elem.first;
	}

	cout << "\n\nThe new map: " << endl;
	for (auto &elem : mis)
	{
		cout << elem.first << " " << elem.second << endl;
	}

	return EXIT_SUCCESS;
}