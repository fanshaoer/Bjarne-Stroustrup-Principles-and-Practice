#include <iostream>

using namespace std;

void print_array(ostream& os, int* a, int n)
{
	a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = i;
		os << a[i] << " ";
	}

	os << endl;

	delete [] a;
}

int main()
{
	print_array(cout, NULL, 10); 

	return 0;
}