/*
searchPunc.cpp
*/

#include <iostream>
#include <string>
#include <fstream>
#include "lab.h"

using namespace std;
bool searchPunc(string s, int i)
{
    bool meetdq = false;
    while(i<s.length())
    {
        cout << s[i];
        if(s[i]=='"') {
            meetdq = !meetdq;
        }
        if((s[i]=='.' || s[i]=='!' || s[i]=='?' || s[i] == '"') && meetdq==false) {
            cout << endl;
        }
        i+=1;
    }
    return false;
}
