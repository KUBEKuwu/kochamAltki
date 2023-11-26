#include <iostream>

int silnia(int n) {
    if (n == 0) {
        return 1;
    }

    return n * silnia(n - 1);
}

int main() {
    int liczba;

    std::cout << "Podaj liczbe do obliczenia silni: ";
    std::cin >> liczba;

    if (liczba < 0) {
        std::cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych." << std::endl;
    }
    else {
        int wynik = silnia(liczba);
        std::cout << "Silnia liczby " << liczba << " to: " << wynik << std::endl;
    }

    return 0;
}