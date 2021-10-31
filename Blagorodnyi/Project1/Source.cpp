#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	system("chcp 1251");
	cout << "\nПримечание: в названиях машины и цвета необходимо ставить вместо пробела нижнее подчёркивание\n";
	//Установка размера массива
	int arr_size = 1;
here:
	cout << "Парадигма: Структуированное программирование\nВведите количество машин (1 или более).\n";
	cin >> arr_size;
	if (arr_size < 1) goto here;
	//Данные автомобиля
	float* speed = new float[arr_size]; //Скорость
	float* weight = new float[arr_size]; //Масса автомобиля
	float* size_width = new float[arr_size]; // Ширина
	float* size_long = new float[arr_size]; // Длина
	float* size_high = new float[arr_size]; // Высота
	float* engine_capacity = new float[arr_size];//Объём двигателя
	int* wheels = new int[arr_size];//Количество колёс
	int* doors = new int[arr_size]; //Количество дверей
	int* year = new int[arr_size];//Год выпуска
	string name[9999]; //Название автомобиля
	string colour[9999]; //Цвет
	string transmission[9999];//Коробка передач

	while (true) //Начало бесконечного цикла
	{
		int option = -1;
		int option2 = -1;
		cout << "\nВыберите одну из предложенных функций:\n0)Выход из программы\n1)Добавить машину\n2)Показать данные машины\n3)Изменить данные о машине\n4)Удалить данные о машине\n";
		cin >> option;
		//Выход из программы
		if (option == 0)
		{
			break;
			exit;
		}
		//Ввод новой машины
		else if (option == 1)
		{
		option_arraysize:
			cout << "\nВы выбрали функцию ввода новой машины.\n Пожалуйста, выберите ячейку, куда сохранить данные: от 0 до " << arr_size - 1 << "\n";
			cin >> option2;
			if (option2 > arr_size - 1) goto option_arraysize;

			//Пользователь заполняет данные о машине в массивы с номером "n"
			cout << "\nЗаполните форму, введите соответствующие данные:\n";
			cout << "Название автомобиля:\t"; cin >> name[option2]; cout << "\n";
			cout << "Год выпуска (г.в.):\t"; cin >> year[option2]; cout << "\n";
			cout << "Скорость:\t"; cin >> speed[option2]; cout << "\n";
			cout << "Объём двигателя:\t"; cin >> engine_capacity[option2]; cout << "\n";
			cout << "Количество дверей:\t"; cin >> doors[option2]; cout << "\n";
			cout << "Количество колёс:\t"; cin >> wheels[option2]; cout << "\n";
			cout << "Ширина:\t"; cin >> size_width[option2]; cout << "\n";
			cout << "Длина:\t"; cin >> size_long[option2]; cout << "\n";
			cout << "Высота:\t"; cin >> size_high[option2]; cout << "\n";
			cout << "Масса:\t "; cin >> weight[option2]; cout << "\n";
			cout << "Коробка передач:\t"; cin >> transmission[option2]; cout << "\n";
			cout << "Цвет:\t "; cin >> colour[option2]; cout << "\n";
		}
		//Чтение данных по машине
		else if (option == 2)
		{
		option_arraysize_read:
			cout << "\nВы выбрали функцию чтения данных о машине.\n Пожалуйста, выберите ячейку, откуда извлечь данные: от 0 до " << arr_size - 1 << "\n";
			cin >> option2;
			if (option2 > arr_size - 1) goto option_arraysize_read;

			cout << "\nИзвестные данные:\n";
			cout << "Название автомобиля:\t" << name[option2] << endl;
			cout << "Год выпуска (г.в.):\t" << year[option2] << endl;
			cout << "Скорость:\t" << speed[option2] << endl;
			cout << "Объём двигателя:\t" << engine_capacity[option2] << endl;
			cout << "Количество дверей:\t" << doors[option2] << endl;
			cout << "Количество колёс:\t" << wheels[option2] << endl;
			cout << "Ширина:\t" << size_width[option2] << endl;
			cout << "Длина:\t" << size_long[option2] << endl;
			cout << "Высота:\t" << size_high[option2] << endl;
			cout << "Масса:\t " << weight[option2] << endl;
			cout << "Коробка передач:\t" << transmission[option2] << endl;
			cout << "Цвет:\t " << colour[option2] << endl;
		}
		//Изменение конкретных данных
		else if (option == 3)
		{
		change_false:
			cout << "\nИзменение конкретных данных\nСписок доступных операций:\n0)Скорость\n1)Масса\n2)Ширина\n3)Длина\n4)Высота\n5)Колёса\n6)Двери\n7)Имя\n8)Цвет\n9)Коробка передач\n10)Год выпуска\n11)Объём двигателя\n";
			int change1, change2;
			cout << "\nВыберите ячейку данных, а затем тип: ";
			cout << "\n Ячейка: "; cin >> change1;
			cout << "\n Тип данных: "; cin >> change2;
			if (change1 > arr_size - 1 || change2 > 11) goto change_false;
			switch (change2)
			{
			case 0: cout << "Текущие данные: " << speed[change1]; cout << "\nНовые данные: "; cin >> speed[change1]; break; //Скорость
			case 1: cout << "Текущие данные: " << weight[change1]; cout << "\nНовые данные: "; cin >> weight[change1]; break; //Вес
			case 2: cout << "Текущие данные: " << size_width[change1]; cout << "\nНовые данные: "; cin >> size_width[change1]; break;//Ширина
			case 3: cout << "Текущие данные: " << size_long[change1]; cout << "\nНовые данные: "; cin >> size_long[change1]; break; //Длина
			case 4: cout << "Текущие данные: " << size_high[change1]; cout << "\nНовые данные: "; cin >> size_high[change1]; break; //Высота
			case 5: cout << "Текущие данные: " << wheels[change1]; cout << "\nНовые данные: "; cin >> wheels[change1]; break; //Колёса
			case 6: cout << "Текущие данные: " << doors[change1]; cout << "\nНовые данные: "; cin >> doors[change1]; break; //Двери
			case 7: cout << "Текущие данные: " << name[change1]; cout << "\nНовые данные: "; cin >> name[change1]; break; //Имя
			case 8: cout << "Текущие данные: " << colour[change1]; cout << "\nНовые данные: "; cin >> colour[change1]; break; //Цвет
			case 9: cout << "Текущие данные: " << transmission[change1]; cout << "\nНовые данные: "; cin >> transmission[change1]; break;//Коробка передач
			case 10: cout << "Текущие данные: " << year[change1]; cout << "\nНовые данные: "; cin >> year[change1]; break;//Год выпуска
			case 11: cout << "Текущие данные: " << engine_capacity[change1]; cout << "\nНовые данные: "; cin >> engine_capacity[change1]; break;//Объём двигателя
			default: break;
			}
		}
		//Удаление
		else if (option == 4)
		{
		option_arraysize_del:
			cout << "\nВы выбрали удаление данных.\nПожалуйста, выберите ячейку, откуда удалить данные: от 0 до " << arr_size - 1 << "\n";
			cin >> option2;
			if (option2 > arr_size - 1) goto option_arraysize_del;
			name[option2] = "0";
			speed[option2] = 0;
			doors[option2] = 0;
			wheels[option2] = 0;
			size_width[option2] = 0;
			size_long[option2] = 0;
			size_high[option2] = 0;
			weight[option2] = 0;
			colour[option2] = "0";
			transmission[option2] = "0";
			year[option2] = 0;
			engine_capacity[option2] = 0;
		}
	}
	delete speed;
	delete weight;
	delete size_width;
	delete size_long;
	delete size_high;
	delete wheels;
	delete doors;
	delete year;
	delete engine_capacity;
}
