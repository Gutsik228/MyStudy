#include <iostream>
using namespace std;

class Human
{
public:
    
    string name;
};

class Student : public Human
{
public:

    Student()
    {
        name = " ";
    }

    Student(string name)
    {
        this->name = name;
    }
    string group;
    void Info()
    {
        cout << "name: " << name << endl;
    }

    ~Student()
    {
        cout << "Вызвался деструктор класса студент" << endl;
    }
};

class Professor : public Human
{
public:
    string subject;

};

class ExtraStudent : public Student
{
public:
    ExtraStudent()
    {
        name = "Пустое имя";
    }

    ExtraStudent(string name) : Student(name)
    {
        this->name = name;
    }
    void Info()
    {
        cout << "name: " <<  name << endl;
    }
    ~ExtraStudent()
    {
        cout << "Вызвался деструктор класса экстра студент" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Ru");

    Student student;
    ExtraStudent ExStudent("Vanya");

    student.Info();

    ExStudent.Info();
}
