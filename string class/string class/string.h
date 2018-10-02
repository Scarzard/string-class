#ifndef _STRING_H_
#define _STRING_H_

#include <cstring>
class stringClass
{
private:
	char* str = nullptr;
	unsigned int mem_allocation = 0;

public:
	//CONSTRUCTORS
	stringClass()
	{
		str = nullptr;
		mem_allocation = 0;
	}

	stringClass(const char *inputString)
	{
		if (inputString != NULL) {
			mem_allocation = strlen(inputString);
			str = new char[mem_allocation + 1]; // +1 because all strings end in \0
			strcpy(str, inputString);
		}
	}

	stringClass(stringClass& inputString)
	{
		mem_allocation = inputString.mem_allocation;
		str = new char[mem_allocation];
		strcpy(str, inputString.str);
	}


	//DESTRUCTOR THAT DELETES THE STRING
	~stringClass()
	{
		if (str != NULL) delete[] str;
	}
public:

	bool empty()const { return mem_allocation == 0; }

	unsigned int size() { return mem_allocation; }

	void clear()
	{
		str[0] = '\0';
	}
	/*stringClass operator= (stringClass &string)
	{
		delete[] str;
		if (mem_allocation = string.size() != 0)
		{
			if(string.size <= mem_allocation)
			{

			}


				str = new char[mem_allocation];
			for (int i = 0; i < mem_allocation; i++)
				str[i] = string[i];
			return *this;
		}
	}*/
};
#endif // !_STRING_H_

