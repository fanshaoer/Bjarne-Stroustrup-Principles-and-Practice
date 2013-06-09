#include <iostream>

using namespace std;

int main()
{
	int birthYear = 1992;

	cout << showbase << birthYear << endl;
	cout << hex << birthYear << endl;
	cout << oct << birthYear << endl << dec;
	cout << 21 << endl;

	//-------------------------

	int a, b, c, d;

	cin >> a >> oct >> b >> hex >> c >> d;

	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

	return 0;
}