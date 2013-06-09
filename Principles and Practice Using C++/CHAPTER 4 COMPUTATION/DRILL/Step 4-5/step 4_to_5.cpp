#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const double DIFF = 1.0 / 10000000;

int main()
{
	double x, y;

	while(cin >> x >> y)
	{
		if(x == '|' || y == '|')
		{
			return EXIT_FAILURE;
		}

		double differ = abs(x - y);

		cout << "The smaller value is " << min(x, y) << endl;
		cout << "The larger value is " << max(x, y) << endl;

		if(differ < DIFF)
		{
			cout << "The numbers are almost equal" << endl;
		}
	}
	
	return EXIT_SUCCESS;
}