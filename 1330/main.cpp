#include <iostream>

int main(void){
	int a,b;
	std::cin >> a >> b;
	
	if (a<b){
		std::cout << "<" << std::endl;
	}
	else if (a>b){
		std::cout << ">" << std::endl;
	}
	else{
		std::cout << "==" << std::endl;
	}
	
	return 0;
}