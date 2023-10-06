#include <iostream>
using namespace std;

void AddRandNum(int* const arr, const int size);
void ShowArr(int* const arr, const int size);
void main()
{
    const int size = 10;
    int* arr = new int[size];
    int* arr2 = new int[size];
    AddRandNum(arr, size);
    AddRandNum(arr2, size);

    cout << "First arr\t" << endl;
    ShowArr(arr, size);
    cout << endl;

    cout << "Second arr\t" << endl;
    ShowArr(arr2, size);
    cout << endl;

    cout << "==============================" << endl;

    delete[] arr;

    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr2[i];
    }

    cout << "First arr\t" << endl;
    ShowArr(arr, size);
    cout << endl;

    cout << "Second arr\t" << endl;
    ShowArr(arr2, size);
    cout << endl;

    delete[] arr;
    delete[] arr2;

}

void AddRandNum(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArr(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


