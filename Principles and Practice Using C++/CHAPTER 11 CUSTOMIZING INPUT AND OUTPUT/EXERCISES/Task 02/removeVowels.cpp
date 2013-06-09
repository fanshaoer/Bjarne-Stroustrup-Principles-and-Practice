#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string hold;

	char copy;

	vector<string> keepInfo;
	vector<char> chars;
	
	fstream myFile;
	myFile.open("file.txt");

	if (myFile.is_open())
	{
		while (!myFile.eof())
		{
			getline(myFile, hold);
			//myFile >> hold;

			for (int i = 0; i < hold.size(); ++i)
			{
				if (hold[i] == 'a' || hold[i] == 'o' || hold[i] == 'u' || hold[i] == 'e' || hold[i] == 'i' || hold[i] == 'y' ||
					hold[i] == 'A' || hold[i] == 'O' || hold[i] == 'U' || hold[i] == 'E' || hold[i] == 'I' || hold[i] == 'Y')
				{
					hold[i] = NULL;
				}
			}
		}
	}
	else
	{
		cerr << "Error opening the file.\n";
	}

	cout << hold << endl;

	for (int i = 0; i < hold.size(); ++i)
	{
		if (hold[i] == NULL)
		{
			//copy = hold[i];
			//hold[i] = hold[i + 1];
			//hold[i + 1] = copy;
			hold.erase(remove_if(hold.begin(), hold.end(), isspace), hold.end());
		}
	}

	cout << hold << endl;

	myFile.close();

	return 0;
}