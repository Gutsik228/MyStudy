#include <iostream>
#include <forward_list>
#include <array>
#include <deque>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "RU");

	//forward_list
	cout << "forward_list" << endl;
	forward_list<int> fl{ 1,2,3,4,5 }; //ќдносв€зный список , в который добавление элементов разрешено только спереди
	forward_list<int>::iterator it = fl.begin();

	fl.push_front(100); //ƒобавл€ет элемент в начало листа
	fl.push_front(100); //ƒобавл€ет элемент в начало листа

	cout << "Ёлементы forward_list: ";
	for (it; it != fl.end(); it++) 
	{
		cout << *it << " ";
	}

	cout << endl << endl;

	//array
	cout << "array" << endl;

	array<int, 5> arr; //ќбычный статический массив , но с дополнительными возможност€ми
	arr.fill(100);

	cout << "Ёлементы arr: ";
	for (auto z : arr) 
	{
		cout << z << " ";
	}

	//deque
	cout << "deque" << endl;

	deque<int> dq{ 14,86,10, 14 };

	//¬небрачный сын листа и вектора, вобрал в себ€ все преимущества и недостатки своих родителей
	//√рубо говор€ это лист динамический массивов, то есть можно сказать что это двумерный контейнер
	//deque имеет индексирование, данные расположены последовательно в пам€ти 

	return 0;
}

