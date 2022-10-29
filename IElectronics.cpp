#include "IElectronics.h"
using namespace std;
#include <iostream>

IElectronics::IElectronics(std::string name) : _name(name) 
{ 
	//cout << "IElectronic constructor called for: " << _name << endl; 
}

void IElectronics::ShowSpec()
{
	cout << _name << "IElectronics showspec" << endl;
}

IElectronics::~IElectronics()
{ 
	//cout << "IElectronics destructor called for: " << _name << endl; 
}
