//
// Created by nadjl on 06/11/2025.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "../job2/GameObject.hpp"


class Character : GameObject{
private:
    std::string name;
    int health;

public:
    Character(std::string name, int health, double x, double y)
        :GameObject(x,y), health(health), name(name){}

    void draw() override {
        std::cout <<"Personnage \""<< name <<"\"à";
        print();
    }

    void update() override {
        std::cout <<"MAJ"<< name <<std::endl;
    }

    bool isAlive() const {
        return health > 0;
    }

    std::string getName() const {return name;}
    int getHealth() const {return health;}
    void setHealth(int newHealth) {health = newHealth;}
};



#endif //CHARACTER_HPP
