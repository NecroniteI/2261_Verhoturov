#include <iostream>

int main() {
    int to = 5;

    std::cout << "forc: ";
    {
        int __i = 0, __n = to;
        for (const int& i = __i; i < __n; __i++) {
            std::cout << i << ' ';
            if (i == 1) {
                to = 2;
            }
        }
    }

    to = 5;
    std::cout << "\nfor: ";
    for (int i = 0; i < to; i++) { // Условие i < to проверяется на каждой итерации.
        std::cout << i << ' ';
        if (i == 1) {
            to = 2; // Новая граница учитывается при следующей проверке условия.
        }
    }

    std::cout << '\n';
    return 0;
}
