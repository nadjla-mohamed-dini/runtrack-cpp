//
// Created by nadjl on 06/11/2025.
//

#ifndef SPEAR_HPP
#define SPEAR_HPP
#include "Weapon.hpp"
#include <iostream>


class Spear : public Weapon{
public:
    void attack(Character& target) override {
        std::cout << "Coup de hache sur " << target.getName()
                  << "avec puissance " << getPower() << "a distance" << getRange() << std::endl;
        target.setHealth(target.getHealth() - getPower());
    }
    int getRange() const override {return 2;}
    int getPower() const override {return 2;}
};



#endif //SPEAR_HPP
