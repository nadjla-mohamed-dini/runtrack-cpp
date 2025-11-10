//
// Created by nadjl on 04/11/2025.
//

#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include <iostream>
#include "../job1/Aquatique.hpp"
#include "../job1/Terrestre.hpp"
#include <string>
using namespace std;


class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;
    double vitesseGlisse;

public:
    Pingouin(std::string nom, double vitesseNage, double vitesseMarche, double vitesseGlisse);

    double calculeTempsParcouru() {
        double tempsGlisse = 15.0;
        double tempsPlat1 = 20.0;
        double tempsNage = 50.0;
        double tempsPlat2 = 15.0;
        return tempsGlisse + tempsNage + tempsPlat1 + tempsPlat2;
    }

    static void afficherTemps() {
        std::cout<<"Temps:"<<calculeTempsParcouru<<endl;
    }
};

#endif





