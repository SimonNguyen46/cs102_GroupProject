/*
lab.cpp
*/

#include <iostream>
#include <string>
#include <fstream>
#include "lab.h"

int main()
{
    string newline;
    ifstream aesop;
    aesop.open("fable.txt");
    while(getline(aesop, newline))
    {
        int i = 0;
        searchPunc(newline, i);
    }
    aesop.close();
    return 0;
}
