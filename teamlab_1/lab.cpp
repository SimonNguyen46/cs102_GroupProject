/*
lab.cpp
*/

#include "lab.h"

int main()
{
	string newline;
	string filename;
	ifstream aesop;

	cout << "please enter file name:";
	getline (cin, filename);
	cout << endl;
	aesop.open("fable.txt");
	while(getline(aesop, newline))
	{
		int i = 0;
		searchPunc(newline, i);
	}
	aesop.close();
	return 0;
}
