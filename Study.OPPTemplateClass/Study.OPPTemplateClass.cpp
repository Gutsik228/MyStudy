
#include <iostream>

template<typename T1> //��������� �����
class TypeSize
{
public:

    TypeSize(T1 value)
    {
        this->value = value;
    }

    void DataTypeSize()
    {
        std::cout << "typesize: " << sizeof(value) << std::endl;
    }
protected: //������������� ���������� �� ������ �������, � �� �������� ������
    T1 value;
};

template<typename T1>
class TypeInfo : public TypeSize<T1> //������������ ��� ��������� ������
{
public:
    TypeInfo(T1 value) : TypeSize<T1>(value) //����������� ������ ������, ��������� ������ ������������ ������ ����������
    {

    }

    void ShowTypeName()
    {
        std::cout << "�������� ����: " << typeid(this->value).name() << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    int a = 5;
    TypeInfo<int> c(a);

    c.DataTypeSize();
    c.ShowTypeName();

    return 0;
}
