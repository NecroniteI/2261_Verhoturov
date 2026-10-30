#include <iostream>

int main(){
	int x = 0, y = 0, z = 0;
	x=x+1;
	z=z+2*x+3*y;
	y=y+1;
	
	std::cout << x << ' ' << y << ' ' << z;
}