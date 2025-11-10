//
// Created by nadjl on 06/11/2025.
//

#ifndef DECOR_HPP
#define DECOR_HPP
#include "../job2/GameObject.hpp"
#include <iostream>

class Decor : GameObject{
public:
    Decor(double x, double y) : GameObject(x, y){}

    void draw() override {
        std::cout << "Element du decor à: " << std::endl;
        print();
    }

    void update() override {
        std::cout << "Le decors ne bouge pas " << std::endl;
    }

};



#endif //DECOR_HPP
