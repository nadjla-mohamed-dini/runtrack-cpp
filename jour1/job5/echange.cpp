//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    int m;

    std::cout << "Enter a number for n: ";std::cin>>n;
    std::cout << "Enter a number for m: ";std::cin>>m;
    std::cout <<"Befor the exchange m: "<<m<< "and n: "<<n<<endl;

    int temp =  n;
    n = m;
    m = temp;

    std::cout << "After exchange m: "<<m<< "and n: "<<n<<endl;
    return 0;
}