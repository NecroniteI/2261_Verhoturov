#include <iostream>

namespace first {
    int value = 10;
}

namespace second {
    int value = 25;
}

int main() {
    std::cout << first::value << std::endl;
    std::cout << second::value << std::endl;
    std::cout << first::value + second::value << std::endl;
    return 0;
}