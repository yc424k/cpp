#include <iostream>

int main(void){
	int x;
	int i,j;
	
	std::cin>>x;
	
	for(i=x-1;i>=0;i--){
		
		for(j=0;j<x;j++){
			if(j>=i)
				std::cout<<"*";
			else
				std::cout<<" ";
		}
	std::cout<<std::endl;
	}
}