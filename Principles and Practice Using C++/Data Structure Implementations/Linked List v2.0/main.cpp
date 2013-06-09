#include <iostream>
#include "linkedList.h"

using namespace std;

int main()
{
	LinkedList<int> coll;

	coll.appendNode(1);
	coll.appendNode(11);
	coll.appendNode(111);

	coll.displayList();

	cout << endl;

	coll.insertNode(57);
	coll.displayList();

	coll.deleteNode(11);
	cout << endl;

	coll.displayList();

	return EXIT_SUCCESS;
}