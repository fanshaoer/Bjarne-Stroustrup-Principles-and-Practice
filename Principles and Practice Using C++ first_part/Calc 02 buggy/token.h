#ifndef TOKEN_H
#define TOKEN_H

class Token
{
	public:

		// what kind of token
		char kind;

		// for numbers - a value
		double value;

		Token();

		Token(char ch)
		{
			kind  = ch;
			value = 0;
		}

		Token(char ch, double val)
		{
			kind  = ch;
			value = val;
		}
};

#endif