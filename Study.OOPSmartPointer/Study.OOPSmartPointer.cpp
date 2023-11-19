#include <iostream>
#include <memory> //Подключение необходимой библиотеки
#include <string>

template<typename T>
class SmartPointer //Собственный простейший класс реализующий логику очистки памяти.
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

	T& operator*() //Перегрузка оператора *
	{
		return *ptr;
	}

private:
	T* ptr; //Указатель шаблонной переменной
};


int main()
{
	SmartPointer<int> sp = new int(1);
	std::shared_ptr<int> shp(new int(2)); //Самый популярный автоматический умный указатель, использует статический идентификатор, с помощью которого определяет последний созданный объект класса и использует его конструктор
	std::unique_ptr<int> up(new int(3)); //Уникальный умный указатель , у которого есть методы для перемещения данных между указателями
	std::auto_ptr<int> ap(new int(4)); //Самый дефолтный попущенный указатель, устарел. 
	std::shared_ptr<int> shp2(shp);


	std::cout << "SmartPointer: " << * sp << std::endl;
}
