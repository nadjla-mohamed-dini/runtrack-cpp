//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int tableauMin(int* tableau, int taille) {
    int minimum = *tableau;

    int* ptr = tableau;

    for (int i = 0; i < taille; i++) {
        if (*(ptr + i) < minimum) {
            minimum = *(ptr + i);
        }
    }

    return minimum;
}

int main() {
    int tableau[] = {11, 26, 10, 2, 5, 42};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int min = tableauMin(tableau, taille);
    std::cout << min << std::endl;
    return 0;
}