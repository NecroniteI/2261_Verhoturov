#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool foundNegative = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x < 0) {
            cout << "Найдено отрицательное число: " << x << endl;
            foundNegative = true;
            break;
        }
    }

    if (!foundNegative) {
        cout << "Все числа неотрицательные" << endl;
    }

    return 0;
}