#include <iostream>
#include <string>
using namespace std;


class Weapon
{
public: 
    Weapon()
    {
        cout << "Выделение памяти для класса Weapon" << endl;
    }
    virtual void Using() = 0; 

    virtual ~Weapon()
    {
        cout << "Очистка памяти для класса Weapon" << endl;
    }
};

class Gun : public Weapon
{
public:
    void Using() override 
    {
        cout << "Bim" << endl;
    }
    ~Gun() override
    {
        cout << "Очистка памяти для класса Gun" << endl;
    }
};

class MachineGun : public Gun
{
public:
    void Using() override
    {
        cout << "Bim Bim Bim" << endl;
    }

     ~MachineGun() override
    {
        cout << "Очистка памяти для класса MachineGun" << endl;
    }
};

class Bazooka : public  Weapon
{
public:
    void Using() override
    {
        cout << "BOOM" << endl;                   
    }

     ~Bazooka() override
    {
        cout << "Очистка памяти для класса Bazooka" << endl;
    }
};

class Knife : public Weapon
{
public:

    void Using() override
    {
        cout << "Chik Chik" << endl;
    }

     ~Knife() override
    {
        cout << "Очистка памяти для класса Knife" << endl;
    }
};

class Player
{
public:
    void Using(Weapon *weapon)
    {
        weapon->Using();
    }
};

int main() 
{
    setlocale(LC_ALL, "RU");
    Gun gun;
    MachineGun machineGun;
    Bazooka bazooka;
    Knife knife;
    Player player;

   
    player.Using(&bazooka);

    player.Using(&knife);
    

    return 0;
}