#include <iostream>

int main(void){
	int year;
	std::cin >> year;
	if((year%400) == 0)
		std::cout << 1 << std::endl;
	else{
		if((year % 100) == 0)
			std::cout << 0 << std::endl;
		else{
			if((year % 4) == 0 )
				std::cout << 1 << std::endl;
			else
				std::cout << 0 << std::endl;
		}
	}
	
	return 0;
}