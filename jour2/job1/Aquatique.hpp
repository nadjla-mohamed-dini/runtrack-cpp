//
// Created by nadjl on 04/11/2025.
//

#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP
#include <iostream>



class Aquatique {
private:
    double vitesseNage;
public:
    Aquatique(double vitesseNage);
    void nager()const;
    double getVitesseNager()const;
    virtual void setVitesseNager(double nouvelleVitesse);
};



#endif //AQUATIQUE_HPP
