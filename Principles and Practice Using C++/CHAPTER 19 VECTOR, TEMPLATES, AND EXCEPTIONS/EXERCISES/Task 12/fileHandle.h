#pragma once

#include <fstream>
#include <string>

using namespace std;

class File_handle
{
	private:
		string fileName;
		fstream file;

	public:
		File_handle(string name);
		~File_handle();
};