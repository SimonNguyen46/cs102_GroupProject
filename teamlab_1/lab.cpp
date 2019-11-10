/*
lab.cpp
*/

#include "lab.h"

int main()
{
	string newline;
	while(getline(cin, newline))
	{
		int i = 0;
		searchPunc(newline, i);
	}
	return 0;
}
