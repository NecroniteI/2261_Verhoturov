#include <iostream>

int main(){
	int x = 1, b = 2;
	x, b = b, x;
	
	std::cout << x << ' ' << b;
}