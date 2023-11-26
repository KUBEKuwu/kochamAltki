#include <iostream>
#include <bitset>

int main() {
    int liczba;
    std::cout << "Podaj liczbe w systemie dziesietnym: ";
    std::cin >> liczba;

    std::bitset<sizeof(int) * 8> binarna(liczba);
    std::cout << "Liczba w systemie binarnym: " << binarna << std::endl;

    return 0;
}