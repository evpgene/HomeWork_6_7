#pragma once
#include "Appliances.h"
#include <string>
class Refrigerator :public Appliances
{
public:
    Refrigerator( std::string name, int weight);
    void ShowSpec() override;
    ~Refrigerator();
private:

};

