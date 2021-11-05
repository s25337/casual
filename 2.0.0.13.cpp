

#include <iostream>

int main(){
	
	int a;
	std::cin>>a;

	for(int i=1; i<=a; i++){
		for(int j=0; j<=a-i; j++) std::cout<<"*";
		std::cout<<"\n";
		}

	
	}
