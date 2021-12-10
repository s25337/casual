#include <iostream>

bool is_divisible(int a, int b){
	if (a%b==0) return true;
	return false;
}

void is_even(int a){
	if (is_divisible(a,2)) std::cout<<a<<" jest parzyste";
	else std::cout<<a<<" nie jest parzyste";
}

int main(){
	
	int a;
	std::cin>>a;
	is_even(a);

}
