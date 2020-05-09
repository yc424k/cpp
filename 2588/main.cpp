#include <iostream>

int main(void){
	int x,y=0;
	int a,b,c = 0;
	std::cin >> x;
	std::cin >> y;
	a = x * (y%10);
	std::cout << a << std::endl;
	b = x * ((y%100)/10);
	std::cout << b << std::endl;
	c = x * (y/100);
	std::cout << c << std::endl;	
	
	std::cout << c*100 + b*10 + a << std::endl;
	
	return 0;
}