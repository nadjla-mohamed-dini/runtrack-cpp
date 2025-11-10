//
// Created by nadjl on 09/11/2025.
//
#include <iostream>

template <typename T>
class Box {
private:
    T value;
public:
    Box(const T& val) : value(val) {}

    T get() const {
        return value;
    }

    void set(const T& val) {
        value = val;
    }
};
int main() {
    Box<int> intBox(42);
    std::cout << "intBox contient : " << intBox.get() << std::endl;

    Box<std::string> strBox("Bonjour");
    std::cout << "strBox contient : " << strBox.get() << std::endl;

    return 0;
}
