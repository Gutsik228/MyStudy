#include <iostream>
#include <memory> //����������� ����������� ����������
#include <string>

template<typename T>
class SmartPointer //����������� ���������� ����� ����������� ������ ������� ������.
{
public:
	SmartPointer(T *ptr)
	{
		this->ptr = ptr;
		std::cout << "Constructor" << std::endl;
	}

	~SmartPointer()
	{
		delete ptr;
		std::cout << "Destructor" << std::endl;
	}

	T& operator*() //���������� ��������� *
	{
		return *ptr;
	}

private:
	T* ptr; //��������� ��������� ����������
};


int main()
{
	SmartPointer<int> sp = new int(1);
	std::shared_ptr<int> shp(new int(2)); //����� ���������� �������������� ����� ���������, ���������� ����������� �������������, � ������� �������� ���������� ��������� ��������� ������ ������ � ���������� ��� �����������
	std::unique_ptr<int> up(new int(3)); //���������� ����� ��������� , � �������� ���� ������ ��� ����������� ������ ����� �����������
	std::auto_ptr<int> ap(new int(4)); //����� ��������� ���������� ���������, �������. 
	std::shared_ptr<int> shp2(shp);


	std::cout << "SmartPointer: " << * sp << std::endl;
}
