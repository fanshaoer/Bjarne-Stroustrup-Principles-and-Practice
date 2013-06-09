#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> holder;
	vector<string>::iterator iter;

	ifstream readFile;

	string data;

	readFile.open("text.txt");

	if (readFile.is_open())
	{
		while (!readFile.eof())
		{
			readFile >> data;
			
			for (int i = 0; i < data.size(); i++)
			{
				data[i] = tolower(data[i]);
			}

			holder.push_back(data);
		}

		readFile.close();
	}
	else
	{
		cerr << "Error opening file.\n";
	}

	ofstream newFile;

	newFile.open("newfile.txt");

	if (newFile.is_open())
	{
		for (iter = holder.begin(); iter < holder.end(); ++iter)
		{
			newFile << *iter << " ";
		}

		newFile.close();
	}
	else
	{
		cerr << "Error opening file.\n";
	}

	return 0;
}