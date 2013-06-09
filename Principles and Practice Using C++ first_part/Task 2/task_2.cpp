#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));

	double input;
	cout << "Enter a size for the vector: ";
	cin >> input;

	vector<double> sequence(input);
	
	for (int i = 0; i < sequence.size(); ++i)
	{
		sequence[i] = rand() % 10;
	}

	sort(sequence.begin(), sequence.end());

	for (auto i = sequence.begin(); i < sequence.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	double middle = sequence.size() / 2;
	double median;

	if (sequence.size() % 2 == 0)
	{
		median = (sequence[middle] + sequence[middle - 1]) / 2;
		cout << "The median is " << median << endl;
	}
	else if (sequence.size() % 2 != 0)
	{
		median = sequence[int(middle)];
		cout << "The median is " << median << endl;
	}

	return EXIT_SUCCESS;
}