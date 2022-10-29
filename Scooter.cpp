#include "Scooter.h"
#include <iostream>
using namespace std;

Scooter::Scooter(std::string name, int batteryLife, int weight) : IElectronics(name), Device(name, batteryLife), Appliances(name, weight)
{
	//cout << "Scooter constructor called for: " << _name << endl;
}

void Scooter::ShowSpec()
{
	cout << "Scooter " ;
	cout << _name << ": Battery Life: " << _batteryLife << " Weight: " << _weight << endl ;
}

Scooter::~Scooter()
{
	//cout << "Scooter destructor called for: " << _name << endl;
}