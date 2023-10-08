
#include <iostream>
#include <string>
using namespace std;

string PrintDataWeb();
string PrintDataService();
string PrintFI(string surname, string name);
string PrintWork(string placeWork, string dolz);
void PrintInfo(string(*func)(string, string), string arg1, string arg2);

void main()
{
	PrintInfo(PrintFI, "Igor", "Dudkov");

	PrintInfo(PrintWork, "IT-Spec", "IT-Spec");

}

string PrintDataWeb()
{
    return "Data Web";
}

string PrintDataService()
{
    return "Data Service";
}

string PrintFI(string surname, string name)
{
	return (surname + " " + name);
}

string PrintWork(string placeWork, string dolz)
{
	return placeWork + " " + dolz;
}

void PrintInfo(string(*func)(string, string),string arg1, string arg2)
{
	cout << func(arg1, arg2) << endl;
}


