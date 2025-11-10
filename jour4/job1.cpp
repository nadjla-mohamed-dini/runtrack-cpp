//
// Created by nadjl on 09/11/2025.
//
#include <iostream>
template <typename T>
T max(T a, T b) {
    return (a < b) ? b : a;
}

int main() {
    int x = 5, y = 10;
    double a = 3.14, b = 2.71;
    std::cout << max(x, y) << std::endl;
    std::cout << max(a, b) << std::endl;
}