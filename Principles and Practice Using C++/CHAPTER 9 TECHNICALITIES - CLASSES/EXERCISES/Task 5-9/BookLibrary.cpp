#include <iostream>
#include "Book.h"

int main()
{
	Book myBook("Belgariad", "D.Eddings", true, "345d");
	Book yourBook("Unnamed", "WhoKnows", false, "532s");

	myBook.getISBN();
	yourBook.getISBN();

	if (myBook.returnISBN() == yourBook.returnISBN())
	{
		cout << "Yes.\n";
	}
	else
	{
		cout << "NO.\n";
	}

	// overloaded output stream operator
	cout << myBook << endl;

	return 0;
}