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

int main()
{
    Human human;

    human.SetName("Ivan");
    human.SetAge(18);
    human.SetWeight(100);

    human.ShowInfo();

}

