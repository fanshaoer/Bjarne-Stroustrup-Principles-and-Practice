#pragma once

#include <string>
#include <cstring>

using namespace std;

class Book
{
	private:

		string title;
		string author;

		char *ISBN;

		bool isChecked;

	public:

		Book();
		Book(string, string, bool, char *);

		bool isBookChecked();

		string getTitle();
		string getAuthor();
		string returnISBN();

		// return formated ISBN
		void getISBN();

		bool operator==(const Book &)const;
		bool operator!=(const Book &)const;
		
		friend ostream &operator<<(ostream &, Book &);
};