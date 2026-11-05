#include <iostream>
#include <vector>

int main() {
    int n, otr = 0, pol;
    std::cin >> n;
    std::vector<int> x(n);

    for (auto num : x) {
        std::cin >> num;
    }

    int last = x[n - 1];

    for (auto num : x) {
        num += last;
        if (num < 0) {
            otr++;
        }
        else {
            pol++;
        }
    }

    std::cout << pol << ' ' << otr << std::endl;


}