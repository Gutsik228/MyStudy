#include <iostream>
#include <string> // Добавляем заголовочный файл для класса string
using namespace std;

class Cap
{
public:
    Cap(string color) : color(color) {} // Конструктор с инициализацией
    string GetColorObject()
    {
        return color;
    }
private:
    string color;
};

class Human
{
public:
    void Think()
    {
        brain.Think();
    }

    string GetColorObjectOnClass()
    {
        return cap.GetColorObject();
    }
private:
    class Brain
    {
    public:
        void Think()
        {
            cout << "I think" << endl;
        }
    };
    Brain brain;
    Cap cap; // Добавляем конструктор для Cap
public:
    Human() : cap("blue") {} // Конструктор Human, инициализирующий объект Cap
};

int main() // Исправляем точку входа
{
    Human human;
    human.Think();

    cout << "Object color on human:" << " " << human.GetColorObjectOnClass();

}