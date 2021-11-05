#include <iostream>

int main(){
	
	int a;
	std::cin>>a;
	int wynik=1;
	for(int i=1; i<=a; i++) wynik*=i;
	std::cout<<wynik<<"\n";
	
	}
