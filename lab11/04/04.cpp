#include <iostream>

int G1[128], G2[128];

void def(void){
	int L1[128] = {0}, L2[128] = {0};
	
	static int S1[128] = {0}, S2[128] = {0};
	
	int *H1 = new int [128], *H2 = new int [128];
	
	std::cout << "global 1 " << &G1[0] << ' ' << &G1[127] << std::endl;
	std::cout << "global 2 " << &G2[0] << ' ' << &G2[127] << std::endl;
	
	std::cout << "local 1 " << &L1[0] << ' ' << &L1[127] << std::endl;
	std::cout << "local 2 " << &L2[0] << ' ' << &L2[127] << std::endl;
	
	std::cout << "static 1 " << &S1[0] << ' ' << &S1[127] << std::endl;
	std::cout << "static 2 " << &S2[0] << ' ' << &S2[127] << std::endl;
	
	std::cout << "in heap 1 " << &H1[0] << ' ' << &H1[127] << std::endl;
	std::cout << "in heap 2 " << &H2[0] << ' ' << &H2[127] << std::endl;
	
	int s = 0;
	
	delete[] H1;
	delete[] H2;
	for(int i = 0; i < 128; i++){
		s += S1[i];
		S1[i] += 1;
	}

	std::cout << "sum static = " << s << std::endl;
	
	s = 0;
	for(int i = 0; i < 128; i++){
		s += L1[i];
		L1[i] += 1;
	}

	std::cout << "sum local = " << s << std::endl;
	
	
	
}

int main(){
	def();
	def();
	
}