
#include <iostream>
using namespace std;

class IBicycle //Абстрактный класс , грубо говоря интерфейс
{
public:
    virtual void TwistTheWheel() = 0; //Полностью виртуальная функция
    virtual void Ride() = 0; //Полностью виртуальная функция
};

class SimpleBicycle : public IBicycle //Класс наследник
{
public:
    void TwistTheWheel() override
    {
        cout << "Метод TwistTheWheel : SimpleBicycle " << endl;
    }
    void Ride() override
    {
        cout << "Метод Ride : SimpleBicycle " << endl;
    }

};

class SportBicycle : public IBicycle //Класс наследник
{
public:
    void TwistTheWheel() override
    {
        cout << "Метод TwistTheWheel :  SportBicycle " << endl;
    }
    void Ride() override
    {
        cout << "Метод Ride :  SportBicycle " << endl;
    }
};

class Human
{
public:
    void UseBicycle(IBicycle& bicycle)
    {
        cout << "Кручу педали пока не дали" << endl;
        bicycle.TwistTheWheel();
        cout << "Поехали епта" << endl;
        bicycle.Ride();
    }

};
int main()
{
    setlocale(LC_ALL, "RU");

    Human human;
    SimpleBicycle simBicycle;
    SportBicycle sportBicycle;

    human.UseBicycle(sportBicycle);
}
