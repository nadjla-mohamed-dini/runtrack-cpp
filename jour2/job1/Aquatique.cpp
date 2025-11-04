//
// Created by nadjl on 04/11/2025.
//

#include "Aquatique.hpp"

Aquatique::Aquatique(double vitesseNage) : vitesseNage(vitesseNage){}

void Aquatique::nager() const {
    std::cout << "Je nage à " <<vitesseNage<<"m/s"<< std::endl;
}
double Aquatique::getVitesseNager()const {
    return vitesseNage;
}
void Aquatique::setVitesseNager(double nouvelleVitesse) {
    vitesseNage = nouvelleVitesse;
}

