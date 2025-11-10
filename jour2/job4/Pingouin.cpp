//
// Created by nadjl on 04/11/2025.
//

#include "Pingouin.hpp"
#include <iostream>
using namespace std;

Pingouin::Pingouin(std::string nom, double vitesseNage, double vitesseMarche, double vitesseGlisse)
    : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nom), Pingouin(vitesseGlisse) {}



void Pingouin::sePresenter() const {
    std::cout << "Bonjour, je suis " << nom << " le pingouin !" << std::endl;
    std::cout << "Je peux nager à " << getVitesseNager() << " m/s" << std::endl;
    std::cout << "Et je marche à " << getVitesseMarche() << " m/s" << std::endl;
    std::cout << "Et je glisse à " <<vitesseGlise<<"m/s"<< std::endl;
}
