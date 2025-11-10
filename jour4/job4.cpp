//
// Created by nadjl on 09/11/2025.
//
#include <iostream>
#include <memory>


class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Je dessine un cercle." << std::endl;
    }
};


class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Je dessine un rectangle." << std::endl;
    }
};

template <typename T>
void drawShape(const T& shape) {
    static_assert(std::is_base_of<Shape, T>::value, "T doit hériter de Shape");
    shape.draw();
}
