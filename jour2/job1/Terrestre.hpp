//
// Created by nadjl on 04/11/2025.
//

#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP



class Terrestre {
private:
    double vitesseMarche;
public:
    Terrestre(double vitesseMarche);
    void marcher()const;
    double getVitesseMarche()const;
    virtual void setVitesseMarche(double nouvelleVitesse);
};



#endif //TERRESTRE_HPP
