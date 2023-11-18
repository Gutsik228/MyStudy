
#include <iostream>

template<typename T1> //Ўаблонный класс
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
protected: //»спользование переменной на уровне классов, а не объектов класса
    T1 value;
};

template<typename T1>
class TypeInfo : public TypeSize<T1> //Ќаследование при шаблонном классе
{
public:
    TypeInfo(T1 value) : TypeSize<T1>(value) //конструктор общего класса, исполн€ет логику присваивани€ данных переменной
    {

    }

    void ShowTypeName()
    {
        std::cout << "Ќазвание типа: " << typeid(this->value).name() << std::endl;
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
