#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;

void printMenu()
{
	cout << "Chose from the menu\n";
	cout << "0 --> Rock\n"
		 << "1 --> Scissors\n"
		 << "2 --> Paper\n"
		 << "Press 7 to quit\n\n";
}

int mySwitch(int &choice, vector<string> &h, string &myString)
{
	switch (choice)
	{
		case 0: cout << "YOU: " << h[0] << endl;
				myString = h[0];
				break;
		case 1: cout << "YOU: " << h[1] << endl;
				myString = h[1];
				break;
		case 2: cout << "YOU: " << h[2] << endl;
				myString = h[2];
				break;
		case 7: return EXIT_SUCCESS;
		default: cout << "WRONG CHOICE NOOB !\n\n";
	}	
}

void botCase(vector<string> &h, string &botString)
{
	botString = h[rand() % 3];
	cout << "BOT: " << botString << endl;
}

void whoWins(string &myString, string &botString, vector<string> &h)
{
	//if (myString == botString)
	//{
	//	cout << "DRAW\n\n";
	//}

	for (int i = 0; i < 3; ++i)
	{
		if (myString == h[i] && botString == h[i])
		{
			cout << "DRAW\n\n";
		}
	}

	if (myString == h[0] && botString == h[1])
	{
		cout << "YOU WIN\n\n";
	}
	else if (myString == h[0] && botString == h[2])
	{
		cout << "BOT WINS\n\n";
	}
	else if (myString == h[1] && botString == h[0])
	{
		cout << "BOT WINS\n\n";
	}
	else if (myString == h[1] && botString == h[2])
	{
		cout << "YOU WIN\n\n";
	}
	else if (myString == h[2] && botString == h[0])
	{
		cout << "YOU WIN\n\n";
	}
	else if (myString == h[2] && botString == h[1])
	{
		cout << "BOT WINS\n\n";
	}
}

int main()
{
	srand(time(NULL));

	vector<string> holder;

	holder.push_back("Rock");
	holder.push_back("Scissors");
	holder.push_back("Paper");

	int choice;
	string myString;
	string botString;

	do
	{
		printMenu();

		cin >> choice;

		mySwitch(choice, holder, myString);

		botCase(holder, botString);

		whoWins(myString, botString, holder);

	} while(choice != 7);

	return EXIT_SUCCESS;
}