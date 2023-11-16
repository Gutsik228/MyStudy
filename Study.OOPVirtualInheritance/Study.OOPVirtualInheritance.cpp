using namespace std;

#include <iostream>

class Character
{
public:
    Character()
    {
        cout << " онструктор класса character" << endl;
    }
private:
    int hp;
};

class Warrior : public virtual Character //»спользование virtual предотвращает повторное использование конструктора character
{
public:
    Warrior()
    {
        cout << " онструктор класса Warrior" << endl;
    }

};

class Orc : public virtual Character //»спользование virtual предотвращает повторное использование конструктора character
{
public:
    Orc()
    {
        cout << " онструктор класса Orc" << endl;
    }

};

class OrcWarrior : public Orc, public Warrior //ѕри наследовании без использовани€ virtual во всех классах от которых наследуетс€ данный класс, будет использовано два конструктора класса character
{
public:
    OrcWarrior()
    {   
        cout << " онструктор класса OrcWarrior" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "RU");

    OrcWarrior orcWarrior;
}
