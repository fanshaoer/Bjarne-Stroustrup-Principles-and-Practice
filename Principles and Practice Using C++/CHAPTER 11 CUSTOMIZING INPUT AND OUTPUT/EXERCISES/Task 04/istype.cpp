#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;

	while (true)
	{
		cout << "Enter a string: ";
		getline(cin, word);

		for (int i = 0; i < word.size(); ++i)
		{
			if (isspace(word[i]))
			{
				cout << word[i] << " is a space.\n";
			}
			else if (isalpha(word[i]))
			{
				cout << word[i] << " is a letter.\n";
			}
			else if (isdigit(word[i]))
			{
				cout << word[i] << " is a digit.\n";
			}
			else if (isxdigit(word[i]) && isalpha(word[i]))
			{
				cout << word[i] << " is a hex digit.\n";
			}
			else if (ispunct(word[i]))
			{
				cout << word[i] << " is a punct sign.\n";
			}
		}
	}

	return 0;
}