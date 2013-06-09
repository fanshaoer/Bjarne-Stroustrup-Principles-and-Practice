#include <iostream>
#include <vector>

using namespace std;

void handleError(int number, vector<int> numArray, int sum)
{	
	if (number > numArray.size())
	{
		throw "ERROR: There are not so many numbers.\n";
	}

	for (int i = 0; i < number; ++i)
	{
		sum += numArray[i];
	}

	cout << "The sum of the first " << number << " numbers is: " << sum << endl;
}

int main()
{
	int input;
	vector<int> numArray;

	cout << "Enter some numbers and when you're done enter 'q' to stop\n";

	do
	{
		cin >> input;

		if (cin)
		{
			numArray.push_back(input);
		}

	} while(cin);
	
	cin.clear();
	cin.ignore();

	int number;
	cout << "Please enter how many numbers you want to sum"
		 << " starting from the first: ";
	cin >> number;

	int sum = 0;

	try
	{
		handleError(number, numArray, sum);
	}
	catch (char *error)
	{
		cerr << error << endl;
	}

	return 0;
}