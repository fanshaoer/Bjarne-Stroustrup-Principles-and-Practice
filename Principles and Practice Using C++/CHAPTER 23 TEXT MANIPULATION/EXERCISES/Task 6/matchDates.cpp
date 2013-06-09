#include <iostream>
#include <fstream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex pattern("^(\\d{1,2}[0-9])\\/(\\d{1,2})\\/(\\d{4})$");
	regex pattern_two("^(\\d{1,2})\\.(\\d{1,2})\\.(\\d{4})$");
	string line;
	smatch matches;

	ifstream file("date.txt");

	if (file.is_open())
	{
		while (file.good())
		{
			getline(file, line);

			if (regex_match(line, matches, pattern_two))
			{
				cout << line << " -- " << "YES" << endl;
			}
			else
			{
				cout << line << " -- " << "NO" << endl;
			}
		}

		file.close();
	}

	return EXIT_SUCCESS;
}