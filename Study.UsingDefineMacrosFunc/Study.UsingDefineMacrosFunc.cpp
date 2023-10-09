#include <iostream>
#define PI 3.14
#define DEBAG
#define Prod(a, b)((a) * (b))
using namespace std;

int main()
{
	int a = 5; 
	int b = 10;
	
	cout << a << " " << b << endl;

	cout << "Pi = " << PI << endl;

	cout << "Prod two nums = " << Prod(a, b);
}
