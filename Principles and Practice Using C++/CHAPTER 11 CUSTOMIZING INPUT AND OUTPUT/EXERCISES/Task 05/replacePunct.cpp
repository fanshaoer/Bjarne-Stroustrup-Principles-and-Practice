#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string someShit;

	while (true)
	{
		cout << "--> ";
		getline(cin, someShit);

		for (int i = 0; i < someShit.length(); ++i)
		{
			someShit.erase(remove_if(someShit.begin(), someShit.end(), ispunct), someShit.end());
		}

		cout << someShit << endl;
	}

	return 0;
}