#include <iostream>
#include <string>
using namespace std;


class Gun
{
public:
    virtual void Shoot()
    {
        cout << "Bim" << endl;
    }
};

class MachineGun : public Gun
{
public:
    void Shoot() override
    {
        cout << "Bim Bim Bim" << endl;
    }
};

class Bazooka : public Gun
{
    void Shoot() override
    {
        cout << "BOOM" << endl;
    }
};

int main() 
{
    
    Gun gun;
    MachineGun machineGun;
    Bazooka bazooka;

    Gun * weapon = & machineGun;

    Gun* weapon2 = & bazooka;

    gun.Shoot();

    machineGun.Shoot();

    weapon->Shoot();

    weapon2->Shoot();


    return 0;
}