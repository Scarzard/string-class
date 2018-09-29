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

	string(const char *pointerToString)
	{
		mem_allocation = strlen(pointerToString);
		str = new char[mem_allocation + 1]; // +1 because all strings end in \0
	}

	string(const char &pointerToString)
	{
		char *copyString = new char[mem_allocation + 1];
		strcpy(copyString, str);
	}


	//DESTRUCTOR THAT DELETES THE STRING
	~string()
	{
		delete[] str;
	}

};
#endif // !_STRING_H_

