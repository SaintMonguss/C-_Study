#include "str.h"
#include <iostream>

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();

	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);

	*(str + i) = '\0';
}

int main()
{
	char str[BUFSIZ];
	StringCharArray a("Hello World!");
	a.toCharArray(str);

}