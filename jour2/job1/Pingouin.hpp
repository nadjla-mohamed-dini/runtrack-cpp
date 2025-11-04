//
// Created by nadjl on 04/11/2025.
//

#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include <iostream>
#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include <string>
using namespace std;


class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;

public:
    Pingouin(std::string nom, double vitesseNage, double vitesseMarche);
    void sePresenter() const;
};

#endif





