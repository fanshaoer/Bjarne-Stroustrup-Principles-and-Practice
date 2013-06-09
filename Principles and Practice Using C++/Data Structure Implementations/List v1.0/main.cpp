#include <iostream>
#include "numberList.h"

using namespace std;

int main()
{
	NumberList list;

	list.appendNode(12);
	list.appendNode(13.37);
	list.appendNode(21);

	list.insertNode(11);

	list.displayList();

	cout << endl;

	list.deleteNode(13.37);
	list.displayList();

	return EXIT_SUCCESS;
}