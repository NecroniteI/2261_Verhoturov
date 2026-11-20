#include <vector>
#include <iostream>

void dosome_1(const std::vector<int> &V){
	int s = 0;
	for(auto x : V){
		s += x;
	}
	std::cout << s << std::endl;
}


void dosome_2(std::vector<int> &V){
	int s = 0;
	for(auto x : V){
		s += x;
	}
	std::cout << s << std::endl;
}


void dosome_3(const std::vector<int> V){
	int s = 0;
	for(auto x : V){
		s += x;
	}
	std::cout << s << std::endl;
}


void dosome_4(std::vector<int> V){
	int s = 0;
	for(auto x : V){
		s += x;
	}
	std::cout << s << std::endl;
}


int main(){
	std::vector<int> A = {1, 2, 3, 4, 5};
	
	dosome_1({1, 2, 3});
	dosome_2({1, 2, 3});
	dosome_3({1, 2, 3});
	dosome_4({1, 2, 3});
	return 0;
}