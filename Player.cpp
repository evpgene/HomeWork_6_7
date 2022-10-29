#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(std::string name, int batteryLife, int totalTracks) : IElectronics(name), Device(name, batteryLife), _totalTracks(totalTracks)
{
	//cout << "Player constructor called for: " << _name << endl;
}

void Player::ShowTotalTracks()
{
	std::cout << "Total tracks: " << _totalTracks << std::endl;
}

void Player::ShowSpec()
{
	cout << "Player " ;
	std::cout << _name << ": Battery Life: " << _batteryLife << std::endl;
}

Player::~Player()
{
	//cout << "Player destructor called for: " << _name << endl;
}