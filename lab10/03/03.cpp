#include <iostream>

int main() {
    int number = 6;
    int mask = 3;

    int *numberPtr = &number;
    int &numberRef = number;

    int product = (*numberPtr) * mask;
    int bitwiseAnd = numberRef & mask;

    std::cout << product << ' ' << bitwiseAnd << std::endl;
}