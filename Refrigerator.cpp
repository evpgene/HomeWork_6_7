#include "Refrigerator.h"
#include <iostream>
using namespace std;

Refrigerator::Refrigerator( string name, int weight) : IElectronics(name), Appliances(name, weight)
{
	//cout << "Refrigerator constructor called for: " << _name << endl;
}


void Refrigerator::ShowSpec()
{
	cout << "Refrigerator " ;
	std::cout << _name << ": Weight: " << _weight << std::endl;
}

Refrigerator::~Refrigerator()
{
	//cout << "Refrigerator destructor called for " << _name << endl;
}