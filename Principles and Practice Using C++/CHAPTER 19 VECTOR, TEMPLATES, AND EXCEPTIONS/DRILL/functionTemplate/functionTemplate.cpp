#include <iostream>
#include <string>

using namespace std;

template<class T>
void read_val(T& v)
{
	cin >> v;
}

int main()
{
	int n;

	read_val(n);

	cout << n << endl;

	return EXIT_SUCCESS;
}