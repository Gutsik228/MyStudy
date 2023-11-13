#include <iostream>
#include <string>
using namespace std;


class Human
{
public:
    Human(string name)
    {
        this->name = name;
    }

    Human(string name, int age) : Human(name)
    {
        this->age = age;
    }

    Human(string name, int age, int weigth) : Human(name, age)
    {
        this->weigth = weigth;
    }

    void PrintInfo()
    {
        cout << name << " " << age << " " << weigth << endl;
    }

private:
    int age;
    int weigth;
    string name;

};

class Message
{
public:
    Message(string text)
    {
        this->text = text;
    };

    virtual string GetText()
    {
        return text;
    }

private:
    string text;

};

class BrMes : public Message
{
public:
    BrMes(string text) :Message(text)
    {

    }

    string GetText() override
    {
        return  "/" + ::Message::GetText() + "/";
    }

};

class Printer
{
public:
    void PrintString(Message* mes)
    {
        cout << mes->GetText();
    }
};

int main()
{
    Human human("Petya", 32, 60);

    human.PrintInfo();

    cout << "----------------------------------------------------------------------------" << endl;

    Message mes("ZXC");

    BrMes brMes("QWE");

    Printer printer;

    printer.PrintString(&mes);
    cout << endl;
    printer.PrintString(&brMes);
}