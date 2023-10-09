#include <iostream>
#include <string>
using namespace std;

class Human 
{
public:

    string name;
    int age;
    int weight;

    void ShowInfo()
    {
        cout << "info: " << "\nage - " << age << ", " << "\nname - "
            << name << ", " << "\nweight - " << weight << endl << endl;;
    }
};

class Point 
{
public:
    int x;
    int y;
    int z;

    void PrintCoord()
    {
        cout << "x = " << x << "\n" << "y = " << y << "\n" << "z = " << z << endl << endl; 
        PrintCoordX2();
    }

private:
    void PrintCoordX2()
    {
        cout << "x = " << x * 2 << "\n" << "y = " << y * 2 << "\n" << "z = " << z * 2 << endl;
    }
};

int main()
{
    Human human;

    human.age = 18;
    human.name = "Ivanov Ivan Ivanovich";
    human.weight = 100;

    Human human2;

    human2.age = 19;
    human2.name = "Uzbek Tatorovich";
    human2.weight = 50;

    human.ShowInfo();
    human2.ShowInfo();
    
    Point pointA;

    pointA.x = 1;
    pointA.y = 1;
    pointA.z = 1;

    pointA.PrintCoord();
   
}

