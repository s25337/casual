#include <iostream>

int main(){
	
	int a, b;
	std::cin>>a>>b;
	int suma=0;
	int c=a;
	while(c<=b){
		//std::cout<<suma<<" ";
		suma+=c;
		c+=a;
		}
	std::cout<<suma<<"\n";
	
	}
