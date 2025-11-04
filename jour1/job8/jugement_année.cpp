//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int main() {
    int a;
    std::cout <<"enter a year";std::cin >>a;
    if ((a%4==0 && a%100!=0)||(a%400==0)) {
        std::cout <<"the year is a leap year";
    }else{
        std::cout <<"the year is not a leap year";
        return 0;
    }
}