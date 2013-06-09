#include <iostream>
#include <cstring>

using namespace std;

char* findx(const char* s, const char* x)
{
	const char* subString = strstr(s, x);

	char* returnSubstring = const_cast<char *>(subString);

	return returnSubstring;
}

int main()
{
	cout << findx("I am noob", "noob") << endl;

	return 0;
}