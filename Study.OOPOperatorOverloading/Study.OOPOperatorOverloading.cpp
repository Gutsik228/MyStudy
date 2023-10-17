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
    friend void ChangeValue(Point& classPoint);

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

    Point& operator ++()
    {
        this->x++;
        this->y++;

        return *this;
    }

    Point operator ++(int value)
    {
        Point temp = *this;

        this->x++;
        this->y++;

        return temp;
    }

    int& operator[](int index)
    {
        return arr[index];
    }
    
    void ShowInfo()
    {
        cout << "X = " << x << " " << "Y = " << y << endl;
    }

private:
    double x;
    double y;
    int arr[5] {1, 2, 3, 4, 5};

    
};

void ChangeValue(Point& classPoint)
{
    classPoint.x = -1;
    classPoint.y = -1;

}

int main() {
    setlocale(LC_ALL, "RU");
    
    Point a(5, 5);
    Point b(1, 5);

    ChangeValue(a);

    a.ShowInfo();
    

    
}