using namespace std;

#include <iostream>

class Character
{
public:
    Character()
    {
        cout << "����������� ������ character" << endl;
    }
private:
    int hp;
};

class Warrior : public virtual Character //������������� virtual ������������� ��������� ������������� ������������ character
{
public:
    Warrior()
    {
        cout << "����������� ������ Warrior" << endl;
    }

};

class Orc : public virtual Character //������������� virtual ������������� ��������� ������������� ������������ character
{
public:
    Orc()
    {
        cout << "����������� ������ Orc" << endl;
    }

};

class OrcWarrior : public Orc, public Warrior //��� ������������ ��� ������������� virtual �� ���� ������� �� ������� ����������� ������ �����, ����� ������������ ��� ������������ ������ character
{
public:
    OrcWarrior()
    {   
        cout << "����������� ������ OrcWarrior" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "RU");

    OrcWarrior orcWarrior;
}
