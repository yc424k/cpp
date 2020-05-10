#include <iostream>

int main(void){
	int x,i,sum = 0;
	int min1=2000,min2=2000;
	
	for(i=0;i<5;i++){
		if(i<=2){
			std::cin >> x;
			if(x <= min1)
				min1 = x;
		}
		else{
			std::cin >> x;
			if(x <= min2)
				min2 = x;
		}
	}
	std::cout << min1 + min2 - 50 << std::endl;
	
	return 0;
}