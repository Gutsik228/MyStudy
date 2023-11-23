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
    //lst.sort(); //���������� �� ����������� � �����������
    //lst.pop_back() ������� ��������� ������� �����
    //lst.pop_front() ������� ������ ������� �����
    //lst.unique() ������� ���������������� ������������ ��������
    //lst.reverse() �������� �������
    //advance(it, 3) �������� �������� �� 3 �������
    //lst.remove(10) ������� ���������� ������� �����
    //lst.assign(3, 10) ������� ����� ���� � ��������� � ���� ��������, � ����� ������� ����� 3 �������
    //lst.assign(lst2.begin(), lst2.end()) ����������� ��������� �� ������ ����� � ������

    cout << "�������� �����: ";
    /*for (it; it != lst.end(); it++) 
    {
        cout << *it << " ";
    }*/

    PrintLst(lst);

}
