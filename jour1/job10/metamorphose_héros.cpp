//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int tableauMin(int **tableau, int taille) {
    int min = *tableau[0];

    for (int i =1; i<taille; i++) {
        if (*tableau[i] < min) {
            min = *tableau[i];
        }
    }
    return min;
}
int main() {
    int a =11, b=42, c=26, d=10, e=5, f=2;
    int *tableau[] = {&a, &b, &c, &d, &e, &f};
    int taille = sizeof(tableau)/sizeof(tableau[0]);

    int min = tableauMin(tableau, taille);
    std::cout << min << std::endl;
    return 0;
}