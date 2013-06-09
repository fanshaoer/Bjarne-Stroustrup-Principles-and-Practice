#include <iostream>

using namespace std;

int main()
{
	cout << "Please enter expression (we can handle + and -): ";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval >> op >> rval;

	if (op=='+')
		res = lval + rval;
	else if (op=='-')
		res = lval - rval;

	cout << "Result : " <<  res << "\n";

	return 0;
}