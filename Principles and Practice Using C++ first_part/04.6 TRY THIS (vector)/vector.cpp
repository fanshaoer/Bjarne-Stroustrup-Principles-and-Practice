#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const string BLEEP = "BLEEP";

int main()
{
	string hated = "exciting";
	string input;

	vector<string> dictionary;

	while(cin >> input)
	{
		dictionary.push_back(input);
	}

	cout << "Number of words: " << dictionary.size() << endl;
	sort(dictionary.begin(), dictionary.end());

	for(int i = 0; i < dictionary.size(); ++i)
	{
		if(dictionary[i] == hated)
		{
			dictionary[i] = BLEEP;
		}

		cout << dictionary[i] << endl;
	}

	return 0;
}