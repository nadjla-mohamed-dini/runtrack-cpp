#ifndef BOW_HPP
#define BOW_HPP

#include "Weapon.hpp"
#include <iostream>

class Bow : public Weapon {
public:
    void attack(Character& target) override {
        std::cout << "Tir à l’arc sur " << target.getName()
                  << " avec puissance " << getPower() << " à distance " << getRange() << std::endl;
        target.setHealth(target.getHealth() - getPower());
    }

    int getRange() const override { return 4; }
    int getPower() const override { return 1; }
};

#endif // BOW_HPP
