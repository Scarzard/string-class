#pragma once

#include <cstring>

#ifndef _STRING_H_
#define _STRING_H_

typedef unsigned int uint;

class string
{
private:
	char*str = nullptr;
	uint mem_allocation = 0;

public:

	//CONSTRUCTORS
	string()
	{
		str = nullptr;
		mem_allocation = 0;
	}

	string(const char *inputString)
	{
		mem_allocation = strlen(inputString);
		str = new char[mem_allocation + 1]; // +1 because all strings end in \0
		strcpy(str, inputString);
	}

	string(string& copyString)
	{
		str = new char[copyString.mem_allocation];
		strcpy(str, copyString.str);
	}


	//DESTRUCTOR THAT DELETES THE STRING
	~string()
	{
		delete[] str;
		str = nullptr;
	}

};
#endif // !_STRING_H_

