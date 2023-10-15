#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string name;
    int age;
    int weight;
public:

    Human()
    {
        name = "None";
        age = 0;
        weight = 0;
    }

    Human(string Vname, int Vage, int Vweight)
    {
        name = Vname;
        age = Vage;
        weight = Vweight;
    }

    Human(string Name)
    {
        name = Name;
        age = 0;
        weight = 0;
    }

    string GetName()
    {
        return name;
    }

    void SetName(string ValueName)
    {
        name = ValueName;
    }

    void SetAge(int ValueAge)
    {
        age = ValueAge;
    }

    void SetWeight(int ValueWeight)
    {
        weight = ValueWeight;
    }

    void ShowInfo()
    {
        cout << "info: " << "\nage - " << age << ", " << "\nname - "
            << name << ", " << "\nweight - " << weight << endl << endl;;
    }
};

class MyClass
{
private:
    int* arr;

public:
     MyClass(int size)
     {
         this->Size = size;
         arr = new int[size];
         cout << "Вызвался конструктор, начальные действия класса по умолчанию" << this << endl;
         for(int i = 0; i < size; i++)
         {
             arr[i] = i;
         }
         
         cout << "Элементы созданного массива" << endl;

         for (int i = 0; i < size; i++)
         {
             cout << arr[i] << " ";
         } 
         cout << "Коструктор закончился" << this << endl;
         
     }

     MyClass(const MyClass &other)
     {
         this->Size = other.Size;
         this->arr = new int[other.Size];
         for(int i = 0 ; i < Size; i ++)
         {
             this->arr[i] = other.arr[i];
         }
         cout << "Вызвался конструктор копирования" << this << endl;
     }

    ~MyClass()
    {
        delete[] arr;
        cout << "Вызвался деструктор и почистил память" << this << endl;
    }
private:
    int Size;
};

int main()
{
    setlocale(LC_ALL, "RU");
    MyClass bebra(5);
    MyClass bebra2(bebra);
    
    return 0;
}