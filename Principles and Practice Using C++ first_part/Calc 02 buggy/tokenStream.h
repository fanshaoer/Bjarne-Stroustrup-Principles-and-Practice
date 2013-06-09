#ifndef TOKEN_STREAM_H
#define TOKEN_STREAM_H

#include "token.h"
#include <iostream>

using namespace std;

class Token_stream
{
	public:

		// make a Token_stream that reads from cin
		Token_stream();

		// get a Token (get() is defined elsewhere)
		Token get();

		// put a Token back
		void putback(Token t);

	private:

		// is there a Token in the buffer?
		bool full;

		// here is where we keep a Token put back using putback()
		Token buffer;
};

#endif