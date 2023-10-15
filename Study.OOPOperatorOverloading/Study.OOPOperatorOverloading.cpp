#include <iostream>
using namespace std;

class MyClass {
public:
    int* data;

    MyClass(int size) {
        this->Size = size;
        this->data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = i;
        }
        cout << "Вызвался конструктор для памяти " << this << endl;
    }

    MyClass(const MyClass& other) {
        this->data = new int[other.Size];
        this->Size = other.Size;
        for (int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
        cout << "Вызвался конструктор копирования для памяти " << this << endl;
    }

    ~MyClass() {
        cout << "Вызвался деструктор для памяти " << this << endl;
        delete[] data;
    }

    MyClass& operator=(const MyClass& other) {
        this->Size = other.Size;
        this->data = new int[Size];

        for (int i = 0; i < Size; i++) {
            this->data[i] = other.data[i];
        }
        return *this;
    }

    void ShowData() {
        for (int i = 0; i < Size; i++) {
            cout << data[i] << " ";
        }
    }

    int GetSize() {
        return Size;
    }

private:
    int Size;
};

class Point
{
public:

    Point(double x, double y)
    {
        x = 0;
        y = 0;
    }

    bool operator ==(const Point& other) 
    {
        return this->x == other.x && this->y == other.y;
    }
        
    Point operator +(const Point& other)
    {
        Point temp(x, y);

        temp.x = this->x + other.x;
        temp.y = this->y + other.y;

        return temp;
    }

    Point operator -(const Point& other)
    {
        Point temp(x, y);

        temp.x = this->x - other.x;
        temp.y = this->y - other.y;

        return temp;
    }


private:
    double x;
    double y;
};

int main() {
    setlocale(LC_ALL, "RU");
    
    Point a(5, 5);
    Point b(1, 5);

    bool result = a == b;

    Point c = a + b;

    Point d = a - b;

    cout << result;
}