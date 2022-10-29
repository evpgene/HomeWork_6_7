#include "Warehouse.h"
using namespace std;
#include <iostream>

Warehouse::Warehouse(int const cellNumb)
{
	//cout << "Warehouse constructor called" << endl;
	item = new IElectronics*[cellNumb]{};
	this->cellNumb = cellNumb;
}

Warehouse::~Warehouse()
{
	//cout << "Warehouse destructor called" << endl;
	for (int i = 0; i < cellNumb; i++)
	{
		delete item[i];
	}
	delete[] item;
}

void Warehouse::addItem(IElectronics* item)
{
	this->item[cellCount] = item;
	//cout << "New item showspec :" << endl;
	//this->item[cellCount]->ShowSpec();
	++cellCount;

}


void Warehouse::print(int No)
{
	if (!No)
	{
		cout << endl << "//////////////////////////////////// WAREHOUSE: //////////////////////////////////// " << endl;
		for (int i = 0; i < cellNumb; i++)
		{
			if (item[i] != nullptr)
			{
				
				cout << endl << "///////// item " << (i + 1) << ": /////////" << endl;
				item[i]->ShowSpec();
			}
			;
		}
	}
	else if (No <= (cellCount))
	{
		if (item[No - 1] != nullptr)
		{
			cout << endl << "You selected item " << (No) << ": " << endl;
			item[No - 1]->ShowSpec();
		}
		
	}
	else if (No <= cellNumb)
		cout << "Там нет товара :Р" << endl;
	else
		cout << "Это полки чужого склада :(" << endl;


}
