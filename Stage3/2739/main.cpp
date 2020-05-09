#include <iostream>

int main(void){
	int x;
	int i;
	std::cin>>x;
	for(i=1; i<=9; i++){
		std::cout<<x<<" * "<<i<<" = "<<x*i<<std::endl;
	}
	
	return 0;
}