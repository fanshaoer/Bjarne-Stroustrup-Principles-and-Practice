#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

const char QUIT = toupper('q');

void printText()
{
	cout << "Enter three arguments: two values separated by space,\n" <<
			"followed by ('+', '-', '*', '/', '%'). To exit press 'q'.\n" << endl;
	cout << "==> ";
}

int switchStatement(char &ch, double &x, double &y)
{
	switch (ch)
	{
		case '+': cout << "The sum of " << x << " and " << y << " is "
					   << x + y << endl;
				  break;
		case '-': cout << "The difference of " << x << " and " << y << " is "
					   << x - y << endl;
				  break;
		case '*': cout << "The product of " << x << " and " << y << " is "
					   << x * y << endl;
				  break;
		case '/': cout << "The quotient of " << x << " and " << y << " is "
					   << x / y << endl;
				  break;
		case '%': cout << "The modulo of " << x << " and " << y << " is "
					   << (int)x % (int)y << endl;
				  break;
		case 'q': case 'Q': return EXIT_SUCCESS;
				  break;
		default: cout << "Wrong input !" << endl;
	}
}

int main()
{
	double x, y;
	char ch;

	do
	{
		printText();

		cin >> x >> y >> ch;

		switchStatement(ch, x, y);

	} while(ch != QUIT);

	return EXIT_SUCCESS;
}