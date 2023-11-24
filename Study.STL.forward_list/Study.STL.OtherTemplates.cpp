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
	forward_list<int> fl{ 1,2,3,4,5 }; //����������� ������ , � ������� ���������� ��������� ��������� ������ �������
	forward_list<int>::iterator it = fl.begin();

	fl.push_front(100); //��������� ������� � ������ �����
	fl.push_front(100); //��������� ������� � ������ �����

	cout << "�������� forward_list: ";
	for (it; it != fl.end(); it++) 
	{
		cout << *it << " ";
	}

	cout << endl << endl;

	//array
	cout << "array" << endl;

	array<int, 5> arr; //������� ����������� ������ , �� � ��������������� �������������
	arr.fill(100);

	cout << "�������� arr: ";
	for (auto z : arr) 
	{
		cout << z << " ";
	}

	//deque
	cout << "deque" << endl;

	deque<int> dq{ 14,86,10, 14 };

	//���������� ��� ����� � �������, ������ � ���� ��� ������������ � ���������� ����� ���������
	//����� ������ ��� ���� ������������ ��������, �� ���� ����� ������� ��� ��� ��������� ���������
	//deque ����� ��������������, ������ ����������� ��������������� � ������ 

	return 0;
}

