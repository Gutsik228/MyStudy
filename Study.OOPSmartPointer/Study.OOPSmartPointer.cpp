#include <iostream>
#include <memory> //ѕодключение необходимой библиотеки
#include <string>

template<typename T>
class SmartPointer //—обственный простейший класс реализующий логику очистки пам€ти.
{
public:
	SmartPointer(T *ptr)
	{
		this->ptr = ptr;
		std::cout << "Constructor" << std::endl;
	}

	~SmartPointer()
	{
		delete ptr;
		std::cout << "Destructor" << std::endl;
	}

	T& operator*() //ѕерегрузка оператора *
	{
		return *ptr;
	}

private:
	T* ptr; //”казатель шаблонной переменной
};


int main()
{
	setlocale(LC_ALL, "RU");

	SmartPointer<int> sp = new int(1);
	std::shared_ptr<int> shp(new int(2)); //—амый попул€рный автоматический умный указатель, использует статический идентификатор, с помощью которого определ€ет последний созданный объект класса и использует его конструктор
	std::unique_ptr<int> up(new int(3)); //”никальный умный указатель , у которого есть методы дл€ перемещени€ данных между указател€ми
	std::auto_ptr<int> ap(new int(4)); //—амый дефолтный попущенный указатель, устарел. 
	std::shared_ptr<int> shp2(shp);

	int SIZE; 
	
	std::cout << "¬ведите размер массива" << std::endl;
	std::cin >> SIZE;

	int *arr = new int[SIZE];
	std::shared_ptr<int[]> ptr(arr);

	for(int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
		std::cout << "Ёлемент массива " << i << ": " << arr[i] << std::endl;
	}

	std::cout << "SmartPointer: " << * sp << std::endl;
}
