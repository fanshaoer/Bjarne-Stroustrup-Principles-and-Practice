#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Name_pairs
{
	private:

		vector<string> name;
		vector<double> age;

	public:

		void read_names();
		void read_ages();
		void print();
		void nameSort();
};