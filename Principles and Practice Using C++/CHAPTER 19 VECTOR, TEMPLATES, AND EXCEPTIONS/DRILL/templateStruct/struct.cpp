#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<class T>
struct S
{
	T val;

	S(T var) : val(var)
	{
	}
};

int main()
{
	vector<int> num(10, 100);

	S<int> test(10);
	S<string> text("FYeah");
	S<char> symbol('o');
	S<vector<int>> coll(num);

	cout << test.val << endl;
	cout << text.val << endl;
	cout << symbol.val << endl;

	for (auto i = (coll.val).begin(); i < (coll.val).end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	return 0;
}