#include <iostream>

void skip(std::string a, int b){
	int n=a.size();

	for(int i=b-1;i<n;i+=b) std::cout<<a[i]<<" ";
}

int main(){
	
	std::string a;
	int b;
	std::cout<<"podaj tekst: ";
	std::cin>>a;
	std::cout<<"podaj liczbe: ";
	std::cin>>b;
	skip(a,b);

}
