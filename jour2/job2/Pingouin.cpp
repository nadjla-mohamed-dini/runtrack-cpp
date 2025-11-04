//
// Created by nadjl on 04/11/2025.
//

#include "Pingouin.hpp"
#include <iostream>
using namespace std;

Pingouin::Pingouin(std::string nom, double vitesseNage, double vitesseMarche)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nom) {}

Pingouin::Pingouin(const Pingouin& orig)
    :Aquatique((orig.getVitesseNager())),
    Terrestre((orig.getVitesseMarche())),
    nom(orig.nom),
    vitesseGlise(orig.vitesseGlise){}


void Pingouin::sePresenter() const {
    std::cout << "Bonjour, je suis " << nom << " le pingouin !" << std::endl;
    std::cout << "Je peux nager à " << getVitesseNager() << " m/s" << std::endl;
    std::cout << "Et je marche à " << getVitesseMarche() << " m/s" << std::endl;
    std::cout << "Et je glisse à " <<vitesseGlise<<"m/s"<< std::endl;
}
double Pingouin::getVitesseGlisse() const {
    return vitesseGlise;
}
void Pingouin::setVitesseGlisse(double nouvelleVitesse) {
    vitesseGlise = nouvelleVitesse;
}
void Pingouin::setVitesseNage(double nouvelleVitesse) {
    Aquatique::setVitesseNager(nouvelleVitesse);
}

void Pingouin::setVitesseMarche(double nouvelleVitesse) {
    Terrestre::setVitesseMarche(nouvelleVitesse);
}