#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int i;

	while (cin >> i)
	{
		cout << bitset<8*sizeof(int)>(i) << endl;

		int m = i << 2;
		cout << bitset<8*sizeof(int)>(m) << endl;

		int n = i | 1;
		cout << bitset<8*sizeof(int)>(n) << endl;
	}

	return EXIT_SUCCESS;
}