#pragma once
#include "IElectronics.h"
class Appliances : virtual public IElectronics
{
public:
    Appliances(std::string name, int weight);
    virtual void ShowSpec() override;
    virtual ~Appliances(); // = default;
protected:
    int _weight;
};


