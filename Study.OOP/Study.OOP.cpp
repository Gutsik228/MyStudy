#include <iostream>
#include <string>
using namespace std;


int main() // ���������� ����� �����
{
    struct Point
    {
        double x;
        double y;
        
        int ShiftValue(double x, double y)
        {
            this->x += x;
            this->y += y;
        }
    };

    Point point = { 10, 10 };

    cout << point.ShiftValue(10, 10);
    return 0;
}