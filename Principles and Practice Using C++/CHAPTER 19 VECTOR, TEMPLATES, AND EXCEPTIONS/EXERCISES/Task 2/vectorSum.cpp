#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T, class U>
double someReturn(vector<T> &vt, vector<U> &vu)
{
	double sum = 0;

	for (int i = 0; i < vt.size(); ++i)
	{
		sum += vt[i] * vu[i];
	}

	return sum;
}

int main()
{
	vector<int> coll(3, 1);
	vector<double> coll1(3, 3.0);
	//vector<string> text(3, "a");

	cout << someReturn(coll, coll1) << endl;

	return EXIT_SUCCESS;
}