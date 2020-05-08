#include <iostream>

int main(void){
	int x,y,z=0;
	std::cin >> x >> y >> z;
	std::cout << (x + y) %  z << std::endl;
	std::cout << ((x % z) + (y % z)) % z << std::endl;
	std::cout << (x * y) % z << std::endl;
	std::cout << ((x % z )* (y % z)) % z<< std::endl;
	
	return 0;
}