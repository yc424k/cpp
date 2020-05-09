#include <iostream>

int main(void){
	int x;
	int i,j;
	
	std::cin>>x;
	
	for(i=0;i<x;i++){
		
		for(j=0;j<=i;j++){
			std::cout<<"*";
		}
	std::cout<<std::endl;
	}
}