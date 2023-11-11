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
        cout << "�������� ���������� ������ �������" << endl;
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
        name = "������ ���";
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
        cout << "�������� ���������� ������ ������ �������" << endl;
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
