#include <iostream>
#include <vector>

int main()
{
	setlocale(LC_ALL, "RU");
	std::vector<int>  v;

	//Способы инициализации вектора
	//std::vector<int>  v{1,2,3,4,5};
	//std::vector<int>  v = {1,2,3,4,5};
	//std::vector<int>  v(20) - 20 элементов;
	//std::vector<int>  v(20, 1) - 20 единиц;

	std::cout << "Есть ли в векторе что то: " << v.empty() << std::endl; //Возвращает true или false в зависимости от того есть ли что что в векторе
	v.push_back(2); //Добавление элементов в вектор
	v.push_back(2); //Добавление элементов в вектор
	v.push_back(8); //Добавление элементов в вектор

	//v.insert() //

	//v.pop_back(); //Удаление последнего элемента

	//v.clear(); //Удаление всех элементов вектора

	std::cout << "Резервирование 100 элементов для вектора" << std::endl;
	v.reserve(100); //Резервирование места для 100 элементов

	int sizeV = v.size(); //Метод возвращающий текущий размер вектора
	int resSizeV = v.capacity(); //Метод возвращающий максимальный размер вектора

	std::cout << "Текущее кол-во элементов в векторе: " << sizeV << std::endl;
	std::cout << "Макс кол-во элементов в векторе: " << resSizeV << std::endl;
	std::cout << "Элементы вектора" << std::endl;

	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
	
	std::cout << "Использование метода shrink_to_fit" << std::endl;
	v.shrink_to_fit();
	std::cout << "Макс кол-во элементов в векторе: " << resSizeV << std::endl;


}
