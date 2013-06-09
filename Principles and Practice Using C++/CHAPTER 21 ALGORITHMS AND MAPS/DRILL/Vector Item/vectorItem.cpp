#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Item
{
	string name;
	int id;
	double value;
};

int main()
{
	vector<Item> vecItem;

	ifstream myFile;

	Item getData;

	myFile.open("items.txt");

	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			myFile >> getData.value;
				
			vecItem.push_back(getData);	
		}
	}
	else if (!myFile.is_open())
	{
		cerr << "The file is not opened!" << endl;
	}

	myFile.close();

	for (auto i = vecItem.begin(); i != vecItem.end(); ++i)
	{
		cout << i->value << endl;
	}

	return EXIT_SUCCESS;
}