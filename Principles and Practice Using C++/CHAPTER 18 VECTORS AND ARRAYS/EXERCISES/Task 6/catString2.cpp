#include <iostream>
#include <string>

using namespace std;

string cat_dot(const string &s1, const string &s2, const string &separator)
{
	string cat = s1 + separator + s2;

	return cat;
}

int main()
{
	cout << cat_dot("shpek", "salam", "_|_") << endl;

	return 0;
}