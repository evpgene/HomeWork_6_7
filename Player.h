#pragma once
#include "Device.h"

class Player : public Device
{
public:
    Player(std::string name, int batteryLife, int totalTracks);
    void ShowTotalTracks();
    void ShowSpec() override;
    ~Player();
private:
    int _totalTracks;
    //std::string _name;
};

