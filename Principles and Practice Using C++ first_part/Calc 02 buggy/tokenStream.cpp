#include "tokenStream.h"

Token_stream::Token_stream()
{
	full   = false;
	buffer = 0;
}

void Token_stream::putback(Token t)
{
	if (full)
	{
		cerr << "putback() into a full buffer";

		// copy t to buffer
		buffer = t;

		// buffer is now full
		full = true;
	}
}

Token Token_stream::get()
{
	if (full)
	{
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;

	switch(ch)
	{
		case ';': // for "print"
		case 'q': // for exit
		case ')': case '(': case '+' : case '-': case '*': case '/':
			// let each character represent itself
			return Token(ch);
		case '.':
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			{
			    cin.putback(ch);         // put digit back into the input stream

				double val;
				cin >> val;              // read a floating-point number

				return Token('8',val);   // let '8' represent "a number"
			}
		default: cerr << "Bad token\n";
	}
}