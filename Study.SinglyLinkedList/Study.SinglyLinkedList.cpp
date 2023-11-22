#include <iostream>

template<typename T>
class List
{
public:
    List()
    {
        Size = 0;
        head = nullptr;
    }
    ~List()
    {

    }

    void push_back(T data)
    {
        if (head == nullptr)
        {
            head = new Node<T>(data);
        }
        else
        {
            Node<T>* current = this->head;
            while (current->pNext != nullptr)
            {
                current = current->pNext;
            }
            current->pNext = new Node<T>(data);

        }
        Size++;
    }

    int GetSize()
    {
        return Size;
    }

private:

    template<typename>
    class Node
    {
    public:
        Node* pNext;
        T data;

        Node(Node* pNext = nullptr, T data = T())
        {
            this->pNext = pNext;
            this->data = data;
        }
    };

    int Size;
    Node<T> *head;
};


int main()
{
    List<int>  lst;

    lst.push_back(4);
    lst.push_back(3);


    std::cout << "Размер односвязного списка: " << lst.GetSize() << std::endl;
}