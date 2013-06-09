#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
	srand(time(NULL));

	int myNumber;
	cout << "Enter a number between 1 and 100: ";
	cin >> myNumber;

	int guess;
	int question;
	char answer;
	int counter = 0;

	do
	{
		question = rand() % 50 + 1;

		cout << "Is your number less than " << question << " ? (Y/N): " << endl;
		cin >> answer;

		switch (toupper(answer))
		{
			case 'Y': guess = rand() % question + 1;
					  cout << guess << endl;
					  break;
			case 'N': guess = rand() % (100 - question) + (question + 1);
					  cout << guess << endl;
					  break;
		}

		++counter;

		if (counter > 7)
		{
			cout << "The PC failed to guess your number in 7 tries !" << endl;
		}

	} while(guess != myNumber);

	return EXIT_SUCCESS;
}