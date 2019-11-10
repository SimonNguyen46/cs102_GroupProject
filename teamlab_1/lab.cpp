/*
lab.cpp
Once the user input the command: ./lab < fable.txt,
the function will read file from fable.txt.
Then search punctuation through the file and insert a new line after each sentence.
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
