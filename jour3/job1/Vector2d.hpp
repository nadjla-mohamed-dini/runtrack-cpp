//
// Created by nadjl on 06/11/2025.
//

#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP
#include <iostream>


class Vector2d {
private:
    double x;
    double y;
public:
    Vector2d();
    Vector2d(double x, double y);

    double getX() const;
    double getY() const;

    void setX(double newX);
    void setY(double newY);

    Vector2d operator+=(const Vector2d& other) const;
    Vector2d operator-=(const Vector2d& other) const;

    double distance(const Vector2d& other) const;

    void print() const;

};



#endif //VECTOR2D_HPP
