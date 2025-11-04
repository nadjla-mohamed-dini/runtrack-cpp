//
// Created by nadjl on 04/11/2025.
//

#include "Terrestre.hpp"

#include <iostream>


Terrestre::Terrestre(double vitesseMarche) : vitesseMarche(vitesseMarche) {}

void Terrestre::marcher() const {
    std::cout << "Je marche à " <<vitesseMarche<<"m/s"<< std::endl;
}
double Terrestre::getVitesseMarche() const {
    return vitesseMarche;
}
void Terrestre::setVitesseMarche(double nouvelleVitesse) {
    vitesseMarche = nouvelleVitesse;
}



