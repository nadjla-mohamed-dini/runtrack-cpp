//
// Created by nadjl on 06/11/2025.
//

#ifndef SWORD_HPP
#define SWORD_HPP

#include <iostream>
#include "Weapon.hpp"


class Sword : public Weapon{
public:
    void attack(Character& target) override {
        std::cout << "Coup d'épée sur" << target.getName()
                  <<  "avec puissance" << getPower() << "à distance" << getRange() << std::endl;
        target.setHealth(target.getHealth() - getPower());
    }
    int getRange() const override{return 1;}
    int getPower() const override{return 4;}
};



#endif //SWORD_HPP
