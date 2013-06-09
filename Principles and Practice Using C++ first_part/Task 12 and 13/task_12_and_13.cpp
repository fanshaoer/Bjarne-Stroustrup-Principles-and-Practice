#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int bullCount = 0;
int cowCount  = 0;

int input;
int menu;

void printMenu()
{
	cout << "****************************************************************************\n";
	cout << "\t\t\t\tBULLS AND COWS\n";
	cout << "****************************************************************************\n\n";
	cout << "\tChoose from the menu\n\n";
	cout << "\t1 --> New Game\n";
	cout << "\t2 --> EXIT\n";
}

void wrongInputMessage()
{
	cout << "\nWrong input, try again!\n\n";
}

void resetCounters()
{
	bullCount = 0;
	cowCount  = 0;
}

void opponentAI(vector<int> &botN)
{
	srand(time(NULL));

	for (int i = 0; i < botN.size(); ++i)
	{
		botN[i] = rand() % 10;
	}
}

void gameLoop(vector<int> &botN, vector<int> &myN)
{
	opponentAI(botN);

	do
	{
		cout << "Enter a 4 digit number: ";
		cin >> input;

		if ((!cin) || (input > 9999) || input > INT_MAX || input < 1000)
		{
			cin.clear();
			cin.ignore();

			wrongInputMessage();

			gameLoop(botN, myN);
		}

		myN[0] = input / 1000;
		myN[1] = (input / 100) % 10;
		myN[2] = (input / 10) % 10;
		myN[3] = input % 10;

		// hack to see if random gen AI and myN is working
		if (input == 1337)
		{
			for (int i = 0; i < 4; ++i)
			{
				cout << botN[i] << " ";
			}
			cout << endl;

			for (int i = 0; i < 4; ++i)                
			{
				cout << myN[i] << " ";
			}
			cout << endl;
		}
		//
		
		for (int i = 0; i < 4; ++i)
		{
			if (myN[i] == botN[i])
			{
				++bullCount;
			}
		}

		for (int i = 0; i < 4; ++i)
		{
			for (int k = 0; k < 4; ++k)
			{
				if (myN[i] == botN[k] && i != k)
				{
					++cowCount;
				}
			}
		}

		cout << "You have " << bullCount << " bulls and " << cowCount << " cows.\n";

		if (bullCount == 4)
		{
			cout << "Gratz ! You found out the number!\n";
			printMenu();
			
		}

		resetCounters();

	} while(cin);
}

int gameControl(vector<int> &botN, vector<int> &myN)
{
	cin >> menu;

	if (!cin)
	{
		cin.clear();
		cin.ignore();

		wrongInputMessage();

		gameControl(botN, myN);
	}

	switch (menu)
	{
		case 1: gameLoop(botN, myN);
				break;
		case 2: return EXIT_SUCCESS;
				break;
		default: wrongInputMessage();
				 gameControl(botN, myN);
	}
}

int main()
{
	vector<int> botNumber(4);
	vector<int> myNumber(4);

	printMenu();

	gameControl(botNumber, myNumber);

	return EXIT_SUCCESS;
}