#include <iostream>

int main(void){
	int i,j,swap,max=0;
	int array[3];
	std::fill_n(array,3,0);
	
	for(i=0;i<3;i++){
		std::cin >> array[i];
	}
	
	for(j=0;j<2;j++){
		for(i=0;i<2;i++){
			if(array[i] > array[i+1]){
				swap = array[i];
				array[i] = array[i+1];
				array[i+1] = swap;
			}
		}
	}
	
	std::cout << array[1] << std::endl;
	
	return 0;
}