#include <iostream>
#include <string> // ��������� ������������ ���� ��� ������ string
using namespace std;

class Cap
{
public:
    Cap(string color) : color(color) {} // ����������� � ��������������
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
    Cap cap; // ��������� ����������� ��� Cap
public:
    Human() : cap("blue") {} // ����������� Human, ���������������� ������ Cap
};

int main() // ���������� ����� �����
{
    Human human;
    human.Think();

    cout << "Object color on human:" << " " << human.GetColorObjectOnClass();

}