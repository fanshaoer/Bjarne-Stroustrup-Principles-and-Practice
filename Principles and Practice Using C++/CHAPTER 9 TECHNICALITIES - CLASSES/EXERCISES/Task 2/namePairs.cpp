#include <iostream>
#include <vector>
#include <string>

#include "name.h"

using namespace std;

int main()
{
	Name_pairs target;

	for (int i = 0; i < 5; ++i)
	{
		target.read_names();
		target.read_ages();
	}

	target.print();

	return 0;
}