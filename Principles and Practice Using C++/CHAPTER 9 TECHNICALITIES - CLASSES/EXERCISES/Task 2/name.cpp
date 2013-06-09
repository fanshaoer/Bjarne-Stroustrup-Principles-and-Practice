#include "name.h"
#include <algorithm>

void Name_pairs::read_names()
{
	string temp;

	cin >> temp;

	name.push_back(temp);
}

void Name_pairs::read_ages()
{
	double temp;

	cin >> temp;

	age.push_back(temp);
}

void Name_pairs::print()
{
	for (int i = 0; i < name.size(); ++i)
	{
		cout << name[i] << " " << age[i] << endl;
	}
}

void Name_pairs::nameSort()
{
	sort(name.begin(), name.end());
}