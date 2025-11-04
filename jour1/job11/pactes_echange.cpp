//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 26;
    int y = 11;

    std::cout << x << " " << y << std::endl;
    swapValues(x, y);
    std::cout << x << " " << y << std::endl;

    return 0;
}