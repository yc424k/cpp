#include <iostream>
using namespace std;

	
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		
	int x;
	int i;
	cin>>x;
	for(i=0; i<x; i++){
		int a,b = 0;
		cin >> a >> b;
		cout << a+b << '\n';
	}
	
	return 0;
}