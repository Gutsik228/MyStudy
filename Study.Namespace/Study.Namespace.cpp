
#include <iostream>

namespace FirstNamespace
{
    void PrintFNS()
    {
        std::cout << "������ ������������ ����" << std::endl;
    }

    class Point
    {

    };
}

namespace SecondNamespace
{
    void PrintFNS()
    {
        std::cout << "������ ������������ ����" << std::endl;
    }

    class Point
    {

    };
}

namespace ThirdNamespace
{
    namespace SecondNamespace
    {
        void PrintFNS()
        {
            std::cout << "������ ������������ ����" << std::endl;
        }
    }

    class Point
    {

    };
}

int main()
{
    setlocale(LC_ALL, "RU");

    FirstNamespace::PrintFNS();

    SecondNamespace::PrintFNS();

    ThirdNamespace::SecondNamespace::PrintFNS();
}
