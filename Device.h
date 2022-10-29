#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
public:
    Device(std::string name, int batteryLife);
    virtual void ShowSpec();
    virtual ~Device();
protected:
    int _batteryLife;
};

