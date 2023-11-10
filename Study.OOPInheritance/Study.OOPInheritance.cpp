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
        name = " ";
    }

    ExtraStudent(string name)
    {
        this->name = name;
    }
    void Info()
    {
        cout << "name: " <<  name << endl;
    }
};

int main()
{
    
    Student student("Petya");
    ExtraStudent ExStudent("Vanya");

    student.Info();                           

    ExStudent.Info();
}
