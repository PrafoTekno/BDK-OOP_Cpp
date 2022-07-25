
#include <iostream>
#include "Player.h"

Player::Player (const char* nama, double power, double speed) {
    
    Player::nama = nama;
    Player::power = power;
    Player::speed = speed;

}

void Player::display () {
    
    std::cout << "Nama player  : " << this->nama << std::endl;
    std::cout << "Power player : " << this->power << std::endl;
    std::cout << "Speed player : " << this->speed << std::endl;
        
    std::cout << std::endl;

}

double Player::update_power (double power_baru) {

    this->power = power_baru;
    return this->power;

}

double Player::update_speed (double speed_baru) {

    this->speed = speed_baru;
    return this->speed;

}