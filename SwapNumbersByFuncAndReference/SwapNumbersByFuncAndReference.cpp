#include <iostream>

using namespace std;

void reverse(int* pa, int* pb)
{
	int rev;
	rev = *pb;
	*pb = *pa;
	*pa = rev;

}

void main()
{
	int a = 5;
	int b = 6;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	reverse(&a, &b);
	cout << "reverse" << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}