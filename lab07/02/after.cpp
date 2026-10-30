#include <iostream>

int main(){
	int x = 0, y = 0, z = 0;
	(++x, z += 2*x + 3*y, ++y);
	
	std::cout << x << ' ' << y << ' ' << z;
}