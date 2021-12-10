#include <iostream>

int main(){
	
	std::string imiona[5];
	int zenskie=0;
	for(int i=0; i<5; i++) std::cin>>imiona[i];
	
	for(int i=0; i<5; i++){
	int n=imiona[i].size();
	if(imiona[i][n-1]=='a') zenskie++;		
	}
	
	std::cout<<zenskie<<" ¿eñskie i "<<5-zenskie<<" mêskich";
}
