
#include <iostream>
using namespace std;

class IBicycle //����������� ����� , ����� ������ ���������
{
public:
    virtual void TwistTheWheel() = 0; //��������� ����������� �������
    virtual void Ride() = 0; //��������� ����������� �������
};

class SimpleBicycle : public IBicycle //����� ���������
{
public:
    void TwistTheWheel() override
    {
        cout << "����� TwistTheWheel : SimpleBicycle " << endl;
    }
    void Ride() override
    {
        cout << "����� Ride : SimpleBicycle " << endl;
    }

};

class SportBicycle : public IBicycle //����� ���������
{
public:
    void TwistTheWheel() override
    {
        cout << "����� TwistTheWheel :  SportBicycle " << endl;
    }
    void Ride() override
    {
        cout << "����� Ride :  SportBicycle " << endl;
    }
};

class Human
{
public:
    void UseBicycle(IBicycle& bicycle)
    {
        cout << "����� ������ ���� �� ����" << endl;
        bicycle.TwistTheWheel();
        cout << "������� ����" << endl;
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
