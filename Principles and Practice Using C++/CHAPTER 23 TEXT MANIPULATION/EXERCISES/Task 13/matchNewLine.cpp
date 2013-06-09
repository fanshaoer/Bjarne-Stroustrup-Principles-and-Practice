#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	string shit = "\n";

	regex pattern(".");

	smatch matches;

	if (regex_search(shit, matches, pattern))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}