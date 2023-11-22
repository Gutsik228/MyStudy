#include <iostream>
#include <vector>

int main()
{
	setlocale(LC_ALL, "RU");
	std::vector<int>  v;

	//������� ������������� �������
	//std::vector<int>  v{1,2,3,4,5};
	//std::vector<int>  v = {1,2,3,4,5};
	//std::vector<int>  v(20) - 20 ���������;
	//std::vector<int>  v(20, 1) - 20 ������;

	std::cout << "���� �� � ������� ��� ��: " << v.empty() << std::endl; //���������� true ��� false � ����������� �� ���� ���� �� ��� ��� � �������
	v.push_back(2); //���������� ��������� � ������
	v.push_back(2); //���������� ��������� � ������
	v.push_back(8); //���������� ��������� � ������

	//v.insert() //

	//v.pop_back(); //�������� ���������� ��������

	//v.clear(); //�������� ���� ��������� �������

	std::cout << "�������������� 100 ��������� ��� �������" << std::endl;
	v.reserve(100); //�������������� ����� ��� 100 ���������

	int sizeV = v.size(); //����� ������������ ������� ������ �������
	int resSizeV = v.capacity(); //����� ������������ ������������ ������ �������

	std::cout << "������� ���-�� ��������� � �������: " << sizeV << std::endl;
	std::cout << "���� ���-�� ��������� � �������: " << resSizeV << std::endl;
	std::cout << "�������� �������" << std::endl;

	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	
	std::cout << "������������� ������ shrink_to_fit" << std::endl;
	v.shrink_to_fit();
	std::cout << "���� ���-�� ��������� � �������: " << resSizeV << std::endl;


}
