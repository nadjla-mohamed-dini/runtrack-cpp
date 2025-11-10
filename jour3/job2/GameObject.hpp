//
// Created by nadjl on 06/11/2025.
//

#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include "../job1/Vector2d.hpp"


class GameObject : Vector2d {
public:
    GameObject() = default;
    GameObject(double x, double y) : Vector2d(x, y) {};

    virtual void draw() = 0;
    virtual void update() = 0;

    virtual ~GameObject() = default;
};



#endif //GAMEOBJECT_HPP
