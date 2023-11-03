#include <iostream>
using namespace std;

class Apple
{
public:
    static int count;
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        count++;
    }

private:
    int weight;
    string color;
};

int Apple::count = 0;

class User
{
public:
    static int count;
    User(int age, string Country, string name)
    {
        this->Age = age;
        this->Country = Country;
        this->name = name;
        count++;
        id = count;
    }

    int GetId()
    {
        return id;
    }

    static int GetCountUsers()
    {
        return count;
    }

    static void ChangeName(User& user, string name)
    {
        user.name = name;
    }

    string GetName()
    {
        return name;
    }
private:
    string name;
    int Age;
    string Country;
    int id;

};

int User::count = 0;

int main() {
    setlocale(LC_ALL, "RU");

    User user(15, "Russia", "Tolik");
    User user2(16, "Russia", "Valik");
    User user3(17, "Russia", "Petik");

    cout << "User name: " << user.GetName() << " " << "User id: " << user.GetId() << endl;
    cout << "User name: " << user2.GetName() << " " << "User id: " << user2.GetId() << endl;
    cout << "User name: " << user3.GetName() << " " << "User id: " << user3.GetId() << endl;

    cout << "Count users = " << User::GetCountUsers() << endl;

    User::ChangeName(user, "Malik");
    User::ChangeName(user2, "Ivasik");
    User::ChangeName(user3, "Chmonik");

    cout << "User name: " << user.GetName() << " " << "User id: " << user.GetId() << endl;
    cout << "User name: " << user2.GetName() << " " << "User id: " << user2.GetId() << endl;
    cout << "User name: " << user3.GetName() << " " << "User id: " << user3.GetId() << endl;

    cout << "Count users = " << User::GetCountUsers() << endl;
}