#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

vector<string> split(const string &s)
{
	vector<string> whiteSpace;

	for (int i = 0; i < s.length(); ++i)
	{
		if (isspace(s[i]) || ispunct(s[i]))
		{
			whiteSpace.push_back(&s[i]);
		}
	}

	return whiteSpace;
}

int main()
{
	string someShit;

	cout << "--> ";
	getline(cin, someShit);

	vector<string> catchSpace = split(someShit);

	for (auto i = catchSpace.begin(); i < catchSpace.end(); ++i)
	{
		cout << *i << endl;
	}

	return EXIT_SUCCESS;
}