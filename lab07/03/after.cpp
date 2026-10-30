#include <iostream>
#include <vector>

int main(){
	std::vector<int> x(10);
	for (int i = -1; i < 9;)
		x[++i] = 1;
}