#include <iostream>

int main(){
	
	int a;
	std::cin>>a;
	int wynik=1;
	int i=1;
	while(i<=a){
		wynik*=i;
		i++;
		}
	std::cout<<wynik<<"\n";
	
	}
