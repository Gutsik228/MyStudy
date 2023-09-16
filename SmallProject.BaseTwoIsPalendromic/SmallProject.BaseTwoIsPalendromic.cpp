#include <iostream>
#include <string>

using namespace std;

bool isStrictlyPalindromic(int& n) {
    string numD = "";
    string RevNumD = "";
    while (n > 0)
    {
        numD += to_string(n % 2);
        n /= 2;
    }
    for (int i = numD.size() - 1; i >= 0; i--)
    {
        RevNumD += numD[i];
    }
    if (RevNumD == numD)
    {
        return true;
    }
    return false;
}

void main()
{
    cout << "Write 10-base num" << endl;
    int num;
    cin >> num;
    if (isStrictlyPalindromic(num))
        cout << "Palindromic";
    else
        cout << "NotPalindromic";
}
