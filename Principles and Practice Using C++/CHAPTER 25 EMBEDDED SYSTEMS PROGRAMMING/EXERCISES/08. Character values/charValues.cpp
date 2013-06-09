#include <iostream>

using namespace std;

int main()
{
	for (char alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		char upperCase = toupper(alphabet);

		cout << alphabet << " : " << alphabet - 0 << "\t\t"
			 << upperCase << " : " << upperCase - 0 << endl;
	}

	return 0;
}