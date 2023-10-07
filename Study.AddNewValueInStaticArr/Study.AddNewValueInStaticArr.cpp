#include <iostream>
#include <cstdlib>
using namespace std;

void push_back(int *&arr, int& size, int value);
void AddRandNum(int* const arr, const int size);
void ShowArr(int* const arr, const int size);

int main()
{
    int size = 5;
    int* arr = new int[size];
    AddRandNum(arr, size);

    ShowArr(arr, size);
    cout << endl;

    cout << "=============================" << endl;

    push_back(arr, size, 10);

    ShowArr(arr, size);
    cout << endl;

}

void push_back(int *&arr, int& size, int value)
{
    int* NewArr = new int[size + 1];
    for(int i = 0; i < size; i++)
    {
        NewArr[i] = arr[i]; 
    }
    NewArr[size] = value;
    size++;

    delete[] arr;
    arr = NewArr;

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