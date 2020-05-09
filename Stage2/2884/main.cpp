#include <iostream>

int main(void){
	int H,M;
	
	std::cin >> H >> M;
	if(M-45 < 0){
		if(H == 0)
			std::cout << 23 <<" "<< M + 15 << std::endl;
		else
			std::cout << H-1 <<" "<<M + 15 << std::endl;
	}
	else 
		std::cout << H <<" "<< M - 45 << std::endl;
	
	return 0;
}