#include <iostream>

int main(void){
	int x;
	int i;
	std::cin>>x;
	for(i=0; i<x; i++){
		int a,b = 0;
		std::cin >> a >> b;
		std::cout <<"Case #"<<i+1<<": "<<a+b << std::endl;
	}
	
	return 0;
}