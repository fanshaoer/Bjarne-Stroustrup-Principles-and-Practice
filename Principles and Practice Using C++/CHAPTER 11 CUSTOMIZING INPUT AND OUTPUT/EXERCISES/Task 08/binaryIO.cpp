/* 
	8. Split the binary I/O program from §11.3.2 into two: one program that
	convens an ordinary text file into binary and Olle program that reads binary
	and converts it to text. Test these programs by comparing a text file
	with what you get by converting it to binary and back.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

template<class T>
char* as_bytes(T& i)
{
	void* addr = &i;

	return static_cast<char *>(addr);
}

int main()
{
	string name;

	cout << "Enter the input file name: ";
	cin >> name;

	ifstream ifs(name.c_str(), ios_base::binary);
	
	if (!ifs)
	{
		cerr << "Can't open " << name << endl;
	}

	vector<int> binFile;

	int i;

	while (ifs.read(as_bytes(i), sizeof(int)))
	{
		binFile.push_back(i);
	}

	for (auto i = binFile.begin(); i < binFile.end(); ++i)
	{
		cout << *i << endl;
	}

	return 0;
}