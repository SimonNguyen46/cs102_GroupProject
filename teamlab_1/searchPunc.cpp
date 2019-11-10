/*
searchPunc.cpp
The function will search the punctuation through the file.
If the punctuation is not between double quotes, then a new line will be inserted after it.
*/

#include "lab.h"

bool searchPunc(string s, int i)
{
	bool meetdq = false;
	while(i<s.length())
	{
		cout << s[i];
		if(s[i]=='"')
			meetdq = !meetdq;
		if((s[i]=='.' || s[i]=='!' || s[i]=='?' || s[i] == '"') && meetdq==false) {
			cout << endl;
		}
		i+=1;
	}
	return false;
}
