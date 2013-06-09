#include <iostream>
#include <string>

using namespace std;

void to_lower(char* s)
{
	cout << "Original C-string: " << s << endl;

	int i = 0;

	string coll = s;
	
	while (i < coll.length())
	{
		if (int(coll[i]) > 64 && int(coll[i]) < 91)
		{
			coll[i] = char(coll[i] + 32);
		}

		++i;
	}

	cout << "ToLower C-string: " << coll << endl;
}

int main()
{
	char* stack = new char[100];

	cout << "--> ";
	cin >> stack;

	to_lower(stack);

	return 0;
}