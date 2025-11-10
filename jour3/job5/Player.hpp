//
// Created by nadjl on 06/11/2025.
//

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "../job3/Character.hpp"
#include "../job4/Weapon.hpp"
#include "../job4/Bow.hpp"
#include "../job4/Spear.hpp"
#include "../job4/Sword.hpp"
#include <vector>

#include "Enemy.hpp"


class Player : public Character{
private:
    Weapon* currentWeapon;
    int weaponIndex;
    std::vector<Weapon*> arsenal;

public:
    Player(std::string name, int health, double x, double y)
        :Character(name, health, x, y), weaponIndex(0) {
        arsenal.push_back(new Bow());
        arsenal.push_back(new Sword());
        arsenal.push_back(new Spear());
        currentWeapon = arsenal[weaponIndex];
    }

    ~Player() {
        for (Weapon* w : arsenal) delete w;
    }

    void update(std::vector<Enemy*>& enemies) {
        for (Enemy*e : enemies ) {

            if (e->isAlive()) {
                double dist = distance(*e);
                if (dist <= currentWeapon->getRange()) {
                    currentWeapon->attack(*e);
                    break;
                }
            }
        }
        switchWeapon();
    }
    void switchWeapon() {
        weaponIndex = (weaponIndex + 1) % arsenal.size();
        currentWeapon = arsenal[weaponIndex];
        std::cout << "porte = "<< currentWeapon ->getRange()
                  <<", puissance= " <<currentWeapon->getPower() <<std::endl;
    }
    void draw() override {
        std::cout << "joueur \""<< getName() << "\"à" << std::endl;
        print();
    }
};



#endif //PLAYER_HPP
