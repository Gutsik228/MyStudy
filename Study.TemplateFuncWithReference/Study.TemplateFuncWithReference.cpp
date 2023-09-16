#include <iostream>
using namespace std;

template <typename T>
void SwapValue(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a = 6;
    int b = 3;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    SwapValue(a, b);
    cout << "SwapValue" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

