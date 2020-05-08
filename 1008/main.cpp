#include <iostream>

int main(void){
	int x,y=0;
	std::cin >> x >> y;
	
	std::cout.precision(15);
	std::cout << x / (double)y << std::endl;
	
	return 0;
}