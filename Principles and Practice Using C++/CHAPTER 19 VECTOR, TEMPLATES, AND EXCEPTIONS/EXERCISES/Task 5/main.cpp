#include <iostream>

#include "intClass.h"

using namespace std;

int main()
{
	Int shpek(30);
	Int salam(20);

	cout << shpek.getMember() + salam.getMember() << endl;

	return 0;
}