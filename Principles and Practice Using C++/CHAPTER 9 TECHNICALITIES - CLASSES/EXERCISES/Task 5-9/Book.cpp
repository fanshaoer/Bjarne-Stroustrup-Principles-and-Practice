#include "Book.h"

Book::Book()
	: title("")
	, author("")
	, isChecked(false)
	, ISBN("")
{
}

Book::Book(string t, string a, bool c, char *I) 
	: title(t)
	, author(a)
	, isChecked(c)
	, ISBN(I)
{
}

bool Book::isBookChecked()
{
	return isChecked;
}

string Book::getTitle()
{
	return this->title;
}

string Book::getAuthor()
{
	return this->author;
}

void Book::getISBN()
{
	printf("%c-%c-%c-%c\n", ISBN[0], ISBN[1], ISBN[2], ISBN[3]);
}

string Book::returnISBN()
{
	return ISBN;
}

bool Book::operator==(const Book &right)const
{
	if (ISBN == right.ISBN)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Book::operator!=(const Book &right)const
{
	if (ISBN != right.ISBN)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream &operator<<(ostream &output, Book &obj)
{
	output << obj.getAuthor() << "\n" << obj.returnISBN() << endl;

	return output;
}