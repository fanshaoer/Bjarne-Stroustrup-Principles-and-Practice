#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	vector<int> fib(4);

	//fib.push_back(1);
	//fib.push_back(1);

	//for (int i = 2; i < 100; ++i)
	//{
	//	//fib.push_back(fib[i - 1] + fib[i - 2]);
	//	if (true)
	//	{
	//		fib.push_back(fib[i - 1] + fib[i - 2]);
	//	}
	//	else if (fib[i] > INT_MAX)
	//	{
	//		break;
	//	}
	//}

	//for (auto i = fib.begin(); i < fib.end(); ++i)
	//{
	//	cout << *i << endl;
	//}

	for (int i = 0; i < fib.size(); ++i)
	{
		fib[i] = rand() % 10;
	}

	for (auto i = fib.begin(); i < fib.end(); ++i)
	{
		cout << *i << endl;
	}

	return 0;
}