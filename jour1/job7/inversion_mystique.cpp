//
// Created by nadjl on 03/11/2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    int reverse_number = 0;
    cin >> n;

    while (n!=0) {
        reverse_number = reverse_number * 10 + n%10;
        n = n/10;
    }
    cout << "reverse number"<<reverse_number;
    return 0;
}