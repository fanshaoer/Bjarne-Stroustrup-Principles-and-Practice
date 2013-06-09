#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

vector<string> split(const string &s, const string &w)
{
	vector<string> get;

	for (int i = 0; i < s.length(); ++i)
	{
		if (isspace(s[i]) || ispunct(s[i]))
		{
			get.push_back(&s[i]);
		}

		if (isspace(w[i]) || ispunct(w[i]))
		{
			get.push_back(&w[i]);
		}
	}

	return get;
}

int main()
{
	string shit;
	string bigShit;

	cout << "shit = ";
	getline(cin, shit);

	cout << "bigShit = ";
	getline(cin, bigShit);

	vector<string> copy = split(shit, bigShit);

	for (auto i = copy.begin(); i < copy.end(); ++i)
	{
		cout << *i << endl;
	}

	return EXIT_SUCCESS;
}