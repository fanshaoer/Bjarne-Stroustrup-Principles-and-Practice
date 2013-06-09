#include <iostream>

using namespace std;

namespace X
{
	double var;

	void print()
	{
		cout << var << endl;
	}
}

namespace Y
{
	double var;

	void print()
	{
		cout << var << endl;
	}
}

namespace Z
{
	double var;

	void print()
	{
		cout << var << endl;
	}
}

int main()
{
	X::var = 7;
	X::print();

	using namespace Y;
	var = 9;
	print();

	{
		using Z::print;
		using Z::var;

		var = 11;
		print();
	}

	print();
	X::print();

	return 0;
}