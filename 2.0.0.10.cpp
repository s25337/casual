#include <iostream>

int main(){
	
	int a;
	std::cin>>a;
	int wynik=1;
	int i=1;
	do{
		wynik*=i;
		i++;
		}while(i<=a);
	std::cout<<wynik<<"\n";
	
	}
