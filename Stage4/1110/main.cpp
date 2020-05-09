#include <iostream>

int main(void){
	int num;
	int x,y,z=0;
	int count=0;
	
	std::cin>>num;
	z = num;
	
	while(true){
		x = z/10;
		y = z%10;
		z = (y*10) + (x + y)%10;
		
		count++;
		
		if(num==z)
			break;
	}
	
	std::cout<<count<<std::endl;
	
	return 0;
}