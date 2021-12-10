#include <iostream>

void is_even(int a){
	if (a%2==0) std::cout<<a<<" jest parzyste";
	else std::cout<<a<<" nie jest parzyste";
}

int main(){
	
	int a;
	std::cin>>a;
	is_even(a);

}
