//
// Created by nadjl on 04/11/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    int somme =0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        somme+=i*i*i;
        std::cout << somme << std::endl;
    }
    return 0;
}