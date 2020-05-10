#include <iostream>

int main(void){
	int i,x,sum=0;
	
	for(i=0;i<5;i++){
		std::cin>>x;
		
		if(x<=40)
			x = 40;
		
		sum += x;
	}
	std::cout<<sum/5<<std::endl;
	
	return 0;
}