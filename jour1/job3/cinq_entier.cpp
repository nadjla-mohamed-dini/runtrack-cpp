//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int main() {
    int val;
    int somme = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Entrez un entier: ";
        cin>>val;
        somme += val;
    }
    double moyenne = somme / 5.0;
    cout << "La moyenne est "<<moyenne << endl;
    return 0;
}