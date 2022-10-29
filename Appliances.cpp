#include "Appliances.h"
#include <iostream>
using namespace std;

Appliances::Appliances(string name, int weight) :IElectronics(name), _weight(weight)
{
    //cout << "Appliances constructor called for: " << _name << endl;

}
void Appliances::ShowSpec()
{
    cout << "Appliance " ;
    cout << _name << ": Weight: " << _weight << endl;
}
Appliances::~Appliances()
{
    //cout << "Appliances destructor called for: " << _name << endl;
}