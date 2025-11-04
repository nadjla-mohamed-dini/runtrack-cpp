//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a;
    std::cout << "Enter an integer: ";std::cin >> a;
    if (a%2 == 0) {
        printf("number pair");
    }else{
        printf(" number unpair");
    }
    return 0;
}