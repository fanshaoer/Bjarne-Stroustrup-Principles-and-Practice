#include <iostream>
#include <string>

using namespace std;

int main()
{
	string coll;

	cout << "--> ";
	getline(cin, coll, '!');

	cout << coll << endl;

	return 0;
}