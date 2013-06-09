#include <iostream>
#include <cstring>

using namespace std;

char* cat_dot(char* s1, char* s2, char* separator)
{
	char* cat = new char[strlen(s1) + strlen(s2) + strlen(separator) + 1];
	
	for (int i = 0; i < strlen(s1); ++i)
	{
		cat[i] = s1[i];
	}
	int k = 0;
	for (int i = strlen(s1); i < strlen(s1) + strlen(separator); ++i)
	{
		cat[i] = separator[k];
		++k;
	}
	int l = 0;
	for (int i = strlen(s1) + strlen(separator); i <= strlen(s1) + strlen(separator) + strlen(s2); ++i)
	{
		cat[i] = s2[l];
		++l;
	}

	return cat;
}

int main()
{
	cout << cat_dot("shpek", "salam", ".") << endl;

	return 0;
}