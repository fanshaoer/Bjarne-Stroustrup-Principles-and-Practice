#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<char *> coll;
	vector<string> gg;

	string asd = "ddddddddlasdkklasd";

	for (; ;)
	{
		char* kur = new char[10000];
		
		coll.push_back(kur);

		gg.push_back(asd);
	}

	return 0;
}