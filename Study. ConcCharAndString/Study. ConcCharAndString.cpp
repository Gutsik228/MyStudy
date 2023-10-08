#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch[255] = "String is good";
	char ch2[255] = "or";
	char ch3[255] = "Char is good";
	char resultChar[255] = {""};
	
	cout << "Using char and strcat" << endl;
	strcat_s(resultChar, ch);
	strcat_s(resultChar, ch2);
	strcat_s(resultChar, ch3);

	cout << resultChar << endl;


	cout << endl << endl;

	cout << "Using string" << endl;
	string str1 = "Hello";
	string str2 = "World";
	string resultString{};

	resultString = str1 + " " + str2;
	cout << resultString << endl;

	return 0;
}

