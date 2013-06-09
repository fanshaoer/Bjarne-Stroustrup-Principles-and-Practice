#include "fileHandle.h"

#include <iostream>

File_handle::File_handle(string s)
{
	this->fileName = s;

	if (file.is_open())
	{
		cout << "The file is already opened!\n";
	}
	else
	{
		file.open(s);
		cout << s << " opened successfully." << endl;
	}
}

File_handle::~File_handle()
{
	if (!file.is_open())
	{
		cout << "The file is already closed!\n";
	}
	else if (file.is_open())
	{
		file.close();
		cout << fileName << " closed successfully." << endl;
	}
}