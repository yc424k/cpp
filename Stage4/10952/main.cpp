#include <iostream>

int main(void){
	int x,y=0;
	
	while(true){
		std::cin>>x>>y;
		if(x+y == 0)
			break;
		std::cout<<x+y<<std::endl;
	}
	
	return 0;
}