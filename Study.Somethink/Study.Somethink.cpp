﻿

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch[255] = "String is good";
	char ch2[255] = "or";
	char ch3[255] = "Char is good";
	char resultChar[255];
	
	strcat(resultChar, ch);
	strcat(resultChar, ch2);
	strcat(resultChar, ch3);

	cout << resultChar << endl;


	cout << "Using string" << endl;
	string str1 = "Hello";
	string str2 = "World";
	string resultString{};
	
	cout << resultString << endl;

	return 0;
}




