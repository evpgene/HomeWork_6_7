#pragma once
#include <string>
class IElectronics
{
public:
    IElectronics() = default;
    IElectronics(std::string name);
    virtual void ShowSpec();
    virtual ~IElectronics();
protected:
    std::string _name;
};

