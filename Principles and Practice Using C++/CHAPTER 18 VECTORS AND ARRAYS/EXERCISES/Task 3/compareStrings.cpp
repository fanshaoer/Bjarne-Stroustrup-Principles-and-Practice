#include <iostream>
#include <cstring>

using namespace std;

int strCompare(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		++s1;
		++s2;
	}
	if (*s1 - *s2 < 0)
	{
		return -1;
	}
	return 1;
}

int main()
{
	cout << strCompare("abv", "ok") << endl;

	return 0;
}