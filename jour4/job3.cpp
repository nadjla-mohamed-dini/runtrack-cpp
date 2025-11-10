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

// Spécialisation pour les pointeurs
template <typename T>
class Box<T*> {
private:
    T* ptr;

public:
    Box(T* p = nullptr) : ptr(p) {}

    // Accès au pointeur brut
    T* getPointer() const {
        return ptr;
    }
    T& get() const {
        if (!ptr) {
            throw std::runtime_error("Tentative de déréférencement d’un pointeur nul.");
        }
        return *ptr;
    }

    void set(T* p) {
        ptr = p;
    }
};
int main() {
    int x = 100;
    Box<int*> ptrBox(&x);

    std::cout << "Contenu déréférencé : " << ptrBox.get() << std::endl;

    int y = 200;
    ptrBox.set(&y);
    std::cout << "Nouveau contenu : " << ptrBox.get() << std::endl;

    return 0;
}
