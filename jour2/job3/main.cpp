//
// Created by nadjl on 04/11/2025.
//
#include <iostream>
#include "Pingouin.hpp"
#include <memory>
using namespace std;

void afficherPingouins() {
    std::cout << "\n--- Pingouins vivants ---\n";
    for (auto& weak : Pingouin::tousLesPingouins) {
        if (auto p = weak.lock()) {
            p->sePresenter();
            std::cout << std::endl;
        }
    }
}

int main() {
    {
    auto p1 = std::make_shared<Pingouin>("Ronald", 1.6, 3.5);
    auto p2 = std::make_shared<Pingouin>("Benjamin", 2.0, 1.5);

    Pingouin::tousLesPingouins.push_back(p1);
    Pingouin::tousLesPingouins.push_back(p2);
    afficherPingouins();
    }
    afficherPingouins();

    return 0;
}