#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector<char> globVec;

char* findx(const char* s, const char* x)
{
	int j = 0;

	for (int i = 0; i < strlen(s); ++i)
	{
		if (j == strlen(x))
		{
			break;
		}
		if (*(s + i) == *(x + j))
		{
			globVec.push_back(*(s + i));
			++j;
		}
		else
		{
			j = 0;
			if (!globVec.empty())
			{
				globVec.clear();
			}
		}
	}

	char* subStr = new char[strlen(x) + 1];
	if (!globVec.empty() && globVec.size() == strlen(x))
	{
		for (int i = 0; i < strlen(x); ++i)
		{
			*(subStr + i) = globVec[i];
		}
		*(subStr + strlen(x)) = '\0';

		return subStr;
	}
	else
	{
		return "No match\n";
	}
}

int main()
{
	cout << findx("shpek salam", "sal") << endl;

	return 0;
}