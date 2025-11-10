//
// Created by nadjl on 06/11/2025.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include "../job3/Character.hpp"
#include <iostream>

class Weapon {
private:
    virtual ~Weapon() = default;

    virtual void attack(Character& target) = 0;
    virtual  int getRange()const = 0;
    virtual int getPower()const = 0;
};



#endif //WEAPON_HPP
