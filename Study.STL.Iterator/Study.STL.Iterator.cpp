#include <iostream>
#include <vector>
int main()
{
	std::vector<int> Vector{ 1,2,3,4,5 };

	std::vector<int>::iterator it;

	//std::vector<int>:: const_iterator it; //�������� ������������ ���������, ��� ������� ����� ������������ ����������� ������ 
	/* for (std::vector<int>:: const_iterator it = Vector.cbegin(); it != Vector.cend(); it++)
	{

	}
	*/

	//std::vector<int>::reverse_iterator it; //�������� ������ ��������� , ��� ������� ����� ������������ ����������� ������
	/* for (std::vector<int>:: reverse_iterator it = Vector.rbegin(); it != Vector.rend(); it++)
	{

	}
	*/

	//advance(it, 3) �������� �������� �� ��������� �����

	it = Vector.begin(); //����� Vector.begin() ���������� �������� ����������� �� ������ ������� �������� �������
	//Vector.end() //����� Vector.end() ���������� �������� ����������� �� ������ ���������� �������� �������


	for (it; it != Vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Insert" << std::endl;
	Vector.insert(it, 1000);
	it = Vector.begin();

	for (it; it != Vector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;


	/*std::vector<int>::iterator IErase = Vector.begin();

	for (IErase; IErase != Vector.end(); IErase++)
	{
		std::cout << *IErase << " ";
	}
	std::cout << std::endl;

	std::cout << "Erase" << std::endl;
	Vector.erase(IErase);
	IErase = Vector.begin();

	for (IErase; IErase != Vector.end(); IErase++)
	{
		std::cout << *IErase << " ";
	}
	std::cout << std::endl;*/
}
