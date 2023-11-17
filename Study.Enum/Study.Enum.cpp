
#include <iostream>
using namespace std;

enum Speed
{
    MIN = 0,
    RECOMEND = 300,
    MAX  = 600,
};

class PC 
{
public:
    enum PCState
    {
        OFF,
        ON,
        Sleep,
    };

    PCState GetState()
    {
        return state;
    }

    void SetState(PCState state)
    {
        this->state = state;
    }

    

private:
    PCState state;
};


int main()
{
    setlocale(LC_ALL, "RU");
    PC pc;

    pc.SetState(PC::PCState::ON);

    Speed speed = Speed::RECOMEND;
    
    switch (pc.GetState())
    {
    case PC::PCState::OFF:
        cout << "�� ��������" << endl;
        break;
    case PC::PCState::ON:
        cout << "�� �������" << endl;
        break;
    case PC::PCState::Sleep:
        cout << "�� ����" << endl;
        break;
    default:
        break;
    }

    cout <<"�������� �������� ������ " << speed << endl;
}
