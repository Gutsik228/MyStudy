

#include <iostream>
using namespace std;


int main()
{
    int a = 5;
    int *pa = &a;
    int& RefA = a;
    
    cout << "a = " << a << endl;
    cout << "*pa = " << *pa << endl;
    cout << "RefA = " << RefA << endl;

    cout << endl;

    a = 7;


    cout << "a = " << a << endl;
    cout << "*pa = " << *pa << endl;
    cout << "RefA = " << RefA << endl;

    cout << endl;

    *pa = 8;
    

    cout << "a = " << a << endl;
    cout << "*pa = " << *pa << endl;
    cout << "RefA = " << RefA << endl;

    cout << endl;

    RefA = 10;

    cout << "a = " << a << endl;
    cout << "*pa = " << *pa << endl;
    cout << "RefA = " << RefA << endl;
}

