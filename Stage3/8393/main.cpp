#include <iostream>

int main(void){
	int x;
	int i;
	int sum = 0;
	std::cin>>x;
	for(i=1; i<=x; i++){
		sum += i;
	}
	
	std::cout<<sum<<std::endl;
	
	return 0;
}