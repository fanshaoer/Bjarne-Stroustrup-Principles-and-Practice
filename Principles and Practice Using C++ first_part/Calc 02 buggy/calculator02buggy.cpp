#include "token.h"
#include "tokenStream.h"

#include <iostream>

using namespace std;

// provides get() and putback()
Token_stream ts;

double expression();

// deal with numbers and parentheses
double primary()
{
	Token t = ts.get();

	switch (t.kind)
	{
		case '(':
			{
	            double d = expression();
				t = ts.get();

				if (t.kind != ')') 
				{
					cerr << "')' expected\n";
				}

				return d;
			}
		case '8': // we use '8' to represent a number
			return t.value;
		default: cerr << "primary expected\n";
	}
}

// deal with *, /, and %
double term()
{
	double left = primary();
    Token t = ts.get();        // get the next token from token stream

    while (true) 
	{
        switch (t.kind)
		{
			case '*':
				left *= primary();
				t = ts.get();
			case '/':
				{    
					double d = primary();
					if (d == 0)
					{
						cerr << "divide by zero";
					}

					left /= d; 
					t = ts.get();

					break;
				}
			default: 
				ts.putback(t);     // put t back into the token stream
				return left;
        }
    }
}

// deal with + and -
double expression()
{
    double left = term();      // read and evaluate a Term
    Token t = ts.get();        // get the next token from token stream

    while (true) 
	{    
        switch (t.kind) 
		{
			case '+':
				left += term();    // evaluate Term and add
				t = ts.get();
				break;
			case '-':
				left += term();    // evaluate Term and subtract
				t = ts.get();
				break;
			default: 
				ts.putback(t);     // put t back into the token stream
				return left;       // finally: no more + or -: return the answer
        }
    }
}

int main()
{
	try
	{
		while (cin)
		{
			Token t = ts.get();

			if (t.kind == 'q')
			{
				break;
			}

			double val = expression();

			if (t.kind = ';')
			{
				cout << "=" << val << "\n";
			}
			else
			{
				ts.putback(t);
			}
		}
	}
	catch (exception &e)
	{
		cerr << "error: " << e.what() << "\n";
		return 1;
	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		return 2;
	}

	return 0;
}