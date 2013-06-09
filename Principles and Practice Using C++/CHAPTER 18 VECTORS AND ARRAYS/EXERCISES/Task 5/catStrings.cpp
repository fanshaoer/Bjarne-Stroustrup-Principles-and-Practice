#include <iostream>
#include <string>

using namespace std;

string cat_dot(const string &s1, const string &s2)
{
	string cat = s1 + "." + s2;

	return cat;
}

int main()
{
	cout << cat_dot("shpek", "salam") << endl;

	return 0;
}