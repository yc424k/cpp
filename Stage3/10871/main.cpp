#include <iostream>

int main(void){
	int x,y=0;
	int i=0;
	
	std::cin>>x>>y;
	int *array = new int[x];
	
	for(i=0; i<x; i++){
		std::cin>>array[i];	
	}
	
	for(i=0; i<x; i++){
		if(array[i] < y)
			std::cout << array[i]<<" ";
	}
	
	return 0;
}