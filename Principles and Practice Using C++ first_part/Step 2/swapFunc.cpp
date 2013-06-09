#include <iostream>

using namespace std;

void swap_v(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap_r(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//void swap_cr(const int &a, const int &b)
//{
//	int temp = a;
//	a = b;	
//	b = temp;
//}

int main()
{
	int x = 7;
	int y = 9;

	swap_v(x, y);

	cout << "swap_v : " << x << " " << y << endl;

	const int cx = 7;
	const int cy = 9;

	swap_v(cx, cy);

	cout << "swap_r : " << cx << " " << cy << endl;

	// TODO: more versions


	return 0;
}