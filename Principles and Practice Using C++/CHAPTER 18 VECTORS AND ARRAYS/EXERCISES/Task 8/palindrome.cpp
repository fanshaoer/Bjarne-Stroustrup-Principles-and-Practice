#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sup;
	cout << "--> ";
	cin >> sup;

	for (int i = sup.size() - 1; i >= 0; --i)
	{
		cout << sup[i] << "";
	}
	cout << endl;

	return 0;
}