//
// Created by nadjl on 04/11/2025.
//

#include <iostream>
using namespace std;

int doubleArray(int* arr, int size) {
    int somme = 0;
    for (int i = 0 ; i < size ; i++){
        *(arr+i)*=2;
        somme+= *(arr+i);
    }
    return somme;
}
int printArray(int* arr, int size) {
    std::cout<<"Array: ";
    for (int i = 0 ; i < size ; i++) {
        std::cout<<*(arr+i)<<" ";
    }
    std::cout<<std::endl;
}
int main() {
    int data[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(data)/sizeof(data[0]);

    int total = doubleArray(data,size);
    printArray(data, size);
    std::cout<<total<<endl;
    return 0;
}