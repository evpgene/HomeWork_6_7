#include <iostream>
#include "Device.h"
using namespace std;
Device::Device(string name, int batteryLife) : IElectronics(name), _batteryLife(batteryLife)
{
	//cout << "Device constructor called for: " << _name << endl;
}

void Device::ShowSpec()
{
	cout << "Device " ;
	cout << _name << ": Battery Life: " << _batteryLife << endl;
}
Device::~Device()
{
	//cout << "Device destructor called for: " << _name << endl;
}