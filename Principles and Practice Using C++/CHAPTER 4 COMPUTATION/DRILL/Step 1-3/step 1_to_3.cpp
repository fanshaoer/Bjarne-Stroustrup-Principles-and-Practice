#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int x, y;

	while(cin >> x >> y)
	{
		if(x == '|' || y == '|')
		{
			return EXIT_FAILURE;
		}

		if(x == y)
		{
			cout << "The numbers are equal" << endl;
		}
		else
		{
			cout << "The smaller value is " << min(x, y) << endl;
			cout << "The larger value is " << max(x, y) << endl;
		}
	}

	return EXIT_SUCCESS;
}