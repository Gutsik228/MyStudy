#include <iostream>
#include <list>
using namespace std;

template<typename T>
void PrintLst(const list<T> &lst)
{
    for (auto it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    list<int> lst{ 1,2,3,4,5 };
    list<int> lst2{ 6,7,8,9,10 };

    lst.push_back(10);
    lst.push_front(10);

    list<int>::iterator it = lst.begin();
    //lst.sort(); //—ортировка от наименьшего к наибольшему
    //lst.pop_back() удал€ем последний элемент листа
    //lst.pop_front() удал€ет первый элемент листа
    //lst.unique() удал€ем последовательные неуникальные значени€
    //lst.reverse() обратный пор€док
    //advance(it, 3) сдвигает итератор на 3 объекта
    //lst.remove(10) удал€ет конкретный элемент листа
    //lst.assign(3, 10) создает новый лист и добавл€ем в него элементы, в нашем случаем будет 3 дес€тки
    //lst.assign(lst2.begin(), lst2.end()) копирование элементов из одного листа в другой

    cout << "Ёлементы листа: ";
    /*for (it; it != lst.end(); it++) 
    {
        cout << *it << " ";
    }*/

    PrintLst(lst);

}
