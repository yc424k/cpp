#include <iostream>

int main(void){
	int num,i,j;
	
	std::cin>>num;
	
	int a = num;
	
	for(i=0;i<num*2-1;i++){
		if(i<num){
			for(j=0;j<=i;j++)
				std::cout<<"*";
		}
		else{
			for(j=a;j>1;j--){
				std::cout<<"*";
			}
			a--;
		}
		std::cout<<"\n";
	}
	
	return 0;
}