

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = rand();
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "////////////////////////////";

    for(int i = 0; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            if(arr[j] < arr[j - 1])
            {
                int babble = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = babble;
            }
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

