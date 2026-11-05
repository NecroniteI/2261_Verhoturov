#include <iostream>

int main() {
    std::cout << "forc: ";
    {
        int __i = 0, __n = 3;
        for (const int& i = __i; i < __n; __i++) {
            std::cout << i << ' ';
        }
    }

    std::cout << "\nfor: ";
    for (int i = 0; i < 3; i++) {
        std::cout << i << ' ';
        if (i == 0) {
            i = 1;
        }
    }

    std::cout << '\n';
    return 0;
}
