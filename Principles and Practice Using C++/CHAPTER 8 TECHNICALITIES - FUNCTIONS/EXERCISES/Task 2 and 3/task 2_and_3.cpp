#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v)
{
	cout << "Printing fib vector:" << endl;

	for (auto iter = v.begin(); iter < v.end(); ++iter)
	{
		cout << *iter << " ";
	}
}

int main()
{
	int n;

	cout << "Enter a size for the vector: ";
	cin >> n;

	vector<int> fib(n);

	int x;
	int y;
	cout << "Enter the first two numbers of the sequence: ";
	cin >> x >> y;

	fib[0] = x;
	fib[1] = y;

	for (int i = 2; i < n; ++i)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	print(fib);

	return 0;
}