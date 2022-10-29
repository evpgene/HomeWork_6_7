#pragma once
#include "Device.h"
#include "Appliances.h"
class Scooter : public Device, Appliances
{
public:
    Scooter(std::string name, int batteryLife, int weight);
    void ShowSpec() override;
    ~Scooter();// = default;
private:

};

