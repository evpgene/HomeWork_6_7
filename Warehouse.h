#pragma once
#include "IElectronics.h"
class Warehouse
{
public:
	Warehouse(int cellNumb);
	Warehouse() = default;
	~Warehouse();
	void addItem(IElectronics* item);
	IElectronics** item{ nullptr };
	void print(int No);
private:

	int cellCount{ 0 };
	int cellNumb{ 0 };

};

