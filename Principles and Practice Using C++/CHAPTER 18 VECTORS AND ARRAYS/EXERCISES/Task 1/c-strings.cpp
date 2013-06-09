#include <iostream>
#include <cstring>

using namespace std;

char* strdup2(const char* ch)
{
	char* get = new char[strlen(ch) + 1];
	for (int i = 0; i < strlen(get); ++i)
	{
		*(get + i) = *(ch + i);
	}

	return get;
}

int main()
{
	cout << strdup2("yea f") << endl;

	return 0;
}