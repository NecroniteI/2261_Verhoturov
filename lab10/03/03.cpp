#include <iostream>

int main() {
	int a = 5, b = 4;

	int *c = &a;

	*c = 3;

	std::cout << a * b;

}