#include <iostream>
#include "std_lib.h"

using namespace std;

const double TEMP = 273.15;

double ctok(double c)
{
	double k = c + TEMP;

	if (c < -TEMP)
	{
		throw "ERROR: You must input a value bigger than -273.15 or equal.\n";
	}

	return k;
}

int main()
{
	double c = 0;

	cin >> c;

	try
	{
		double k = ctok(c);
		cout << k << endl;
	}
	catch (char *error)
	{
		cerr << error << endl;
	}

	return 0;
}