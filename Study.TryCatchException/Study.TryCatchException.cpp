
#include <iostream>
using namespace std;

int CycleSum(int startValue, int endValue)
{
	int sum = 0;
	for(int i = startValue; i <= endValue; i++)
	{
		if(i == 0)
		{
			throw exception("Деление на ноль!!!");
		}
		else 
		{
			sum += i;
		}
	}
	return sum;
}


int main()
{
	setlocale(LC_ALL, "RU");
	try
	{
		CycleSum(-5, 5);
		
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}
	
}
