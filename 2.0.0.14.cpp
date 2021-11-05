
#include <iostream>

int main(){
	
	int a,b;
	std::cin>>a>>b;
for(int j=1; j<=b; j++) std::cout<<"*";
std::cout<<"\n";
	for(int i=1; i<=a-2; i++){
	std::cout<<"*";
		for(int j=1; j<b-1; j++) std::cout<<" ";
		std::cout<<"*\n";
		}
for(int j=1; j<=b; j++) std::cout<<"*";
std::cout<<"\n";
	
	}
