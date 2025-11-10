//
// Created by nadjl on 04/11/2025.
//

#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP
#include <iostream>
#include <memory>

#include "../job1/Aquatique.hpp"
#include "../job1/Terrestre.hpp"
#include <string>
#include <vector>
using namespace std;


class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;
    double vitesseGlise;

public:
    Pingouin(std::string nom, double vitesseNage, double vitesseMarche);
    Pingouin(const Pingouin& orig);

    void sePresenter() const;

    double getVitesseGlisse() const;
    void setVitesseGlisse(double nouvelleVitesse);

    void setVitesseNage(double nouvelleVitesse) override;
    void setVitesseMarche(double nouvelleVitesse) override;

    static std::vector<std::weak_ptr<Pingouin*>> tousLesPingouins;
};

#endif





