#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<class T>
struct S
{
	private:
		T val;

	public:
		S(T var) : val(var)
		{
		}

	T get();
	T set(T var);
};

template<class T>
T S<T>::get()
{
	return this->val;
}
template<class T>
T S<T>::set(T var)
{
	this->val = var;

	return this->val;
}

int main()
{
	S<int> test(10);
	S<string> text("kur");
	
	cout << test.get() << endl;
	cout << text.get() << endl;

	test.set(13);
	cout << test.get() << endl;

	text.set("fuuu");
	cout << text.get() << endl;

	return EXIT_SUCCESS;
}