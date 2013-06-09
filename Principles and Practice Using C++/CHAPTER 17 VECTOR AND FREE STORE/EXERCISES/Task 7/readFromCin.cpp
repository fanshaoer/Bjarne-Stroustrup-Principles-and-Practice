#include <iostream>
#include <string>

using namespace std;

int main()
{
	char* coll = new char[100];

	cout << "--> ";
	cin.getline(coll, strlen(coll) + 1, '!');

	cout << coll << endl;

	delete [] coll;

	return 0;
}