//
// Created by nadjl on 04/11/2025.
//
#include <iostream>
#include "Pingouin.hpp"
using namespace std;

int main() {
    Pingouin pingouin1 ("Ronald", 2.0, 3.5);
    pingouin1.sePresenter();
    std::cout<<"\nCopie de Ronald";
    Pingouin copy1(pingouin1);
    copy1.setVitesseGlisse(5.0);
    copy1.sePresenter();
    return 0;
}