//
// Created by nadjl on 06/11/2025.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include "../job3/Character.hpp"
#include "Player.hpp"
#include <cmath>


class Enemy : public Character {
public:
    Enemy(std::string name, int health, double x, double y)
        : Character(name, health, x, y) {}

    void update(Player& player) {
        double dist = distance(player);
        if (dist <= 1.0) {
            std::cout<< getName() <<"attaque"<<player.getName() <<std::endl;
            player.setHealth(player.getHealth() -1);
        } else {
            double dx = player.getX() - getX();
            double dy = player.getY - getY();
            double step = 0.5;

            double mag = std::sqrt(dx*dx + dy*dy);
            if (mag > 0) {
                setX(getX() + step * dx / mag);
                setY(getY() + step * dy / mag);
            }

            std:
                std::cout << getName() << "s'approche de "<< player.getName() <<std::endl;
        }
    }
    void draw() override {
        std::cout << "Ennemie \"" <<getName() << "\"à" << std::endl;
        print();
    }
};
#endif //ENEMY_HPP
