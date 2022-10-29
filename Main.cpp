#include "main.h"



int main() 
{
	setlocale(LC_ALL, ""); // или system("chcp 1251") - кодировка вывода на консоль 
	const int ItemsNumb{ 10 };
	int No{ 0 };
	
	Warehouse* warehouse1 = new Warehouse(ItemsNumb);
	warehouse1->addItem(new Scooter("Xiaomi", 55, 30));
	warehouse1->addItem(new Player("Sony",99, 365));
	warehouse1->addItem(new Device("Scarlett",30));
	warehouse1->addItem(new Appliances("Vitek", 60));
	warehouse1->addItem(new Refrigerator("Atlant", 88));

	while(true)
	{
		cout << endl << endl << "Для выбора товара введите номер от 1 до " << ItemsNumb << endl;
		cout << "Для показа склада введите 0 " << endl;
		cout << "Для выхода введите номер > " << ItemsNumb << endl;
		cin >> No;
		if (No <= ItemsNumb && No >= 0)
		{

			warehouse1->print(No);
		}
		else
			break;
	}

	delete warehouse1;

	return 0;
}