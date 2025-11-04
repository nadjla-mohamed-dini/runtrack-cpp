//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a;
    std::cout<< "Enter the price of 1kg carrots HT: ";std::cin>>a;
    double tva = a * 0.15;
    double ttc = tva + a;
    std::cout<<"The price of 1kg carrots TTC: "<<ttc<<"euros";
    return 0;
}