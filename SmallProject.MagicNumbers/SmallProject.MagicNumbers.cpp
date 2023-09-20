
#include <iostream>
#include <cstdlib>
using namespace std;


void Play(int magic);


int main()
{
    setlocale(LC_ALL, "RU");
    int magic = rand() % 10;
    int option;
    int NumUser;
    cout << "Привет, ты можешь поиграть в игру Волшебные числа" << endl;
    do
    {
        cout << "У тебя на выбор есть 3 опции" << endl;
        cout << "1. Сгенерировать случайное число" << endl;
        cout << "2. Проверить совпало ли твое число с сгенерированным" << endl;
        cout << "3. Закончить игру" << endl;
        do
        {
            cout << "Введите свой опцию" << endl;
            cin >> option;
        } while (option < 1 || option > 3);

        switch (option)
        {
            case 1:
                magic = rand() % 10;
                cout << "Новое число сгенеровано" << endl << endl << endl;
                break;
            case 2:
                Play(magic);
            case 3:
                cout << "Пока, надеюсь еще увидимся" << endl << endl << endl;
                break;
        }

    } while (option != 3);
}

void Play(int magic)
{
    int x;
    for(int i = 0; i < 10; i++)
    {
        cout << "Введите число, которое ты хочешь, у тебя есть " << 10 - i << " " << "Попыток" << endl;
        cin >> x;
        if(x == magic)
        {
            cout << "Ты угадал" << endl;
            break;
        }
        else
        {
            if(x > magic)
            {
                cout << "Твое число больше загаданного" << endl << endl << endl;
            }
            if(x < magic)
            {
                cout << "Твое число меньше загаданного" << endl << endl << endl;
            }
        }

    }
}


