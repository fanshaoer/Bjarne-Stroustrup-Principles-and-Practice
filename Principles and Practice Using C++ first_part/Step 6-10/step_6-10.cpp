#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	double x;
	double smallest;
	double largest;

	vector<double> stack;

	while(cin >> x)
	{
		if (x == '|')
		{
			return EXIT_FAILURE;
		}

		stack.push_back(x);

		smallest = stack[0];
		largest  = stack[0];

		for (auto i = stack.begin(); i < stack.end(); ++i)
		{
			if (*i < smallest)
			{
				smallest = *i;
			}
			else if (*i > largest)
			{
				largest = *i;
			}
		}

		cout << smallest << " is the smallest so far." << endl;
		cout << largest << " is the largest so far." << endl;
	}

	return EXIT_SUCCESS;
}