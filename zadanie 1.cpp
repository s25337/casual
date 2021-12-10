#include <iostream>
#include <string>
#include <vector>

bool tab[30];
int main(){
	std::string a;
	for(int i=2; i*i<=30; i++){
		
		if(!tab[i]) for(int j=i*i; j<=30; j+=i){
			tab[j]=true;
			}
		}
		//std::cout<<tab[n];
		

			for(int i=2; i<=28; i++){
				if(tab[i]==0) {
				a += std::to_string(i);
				a.append(" ");
				}
				
				}
			std::cout<<a<<"\n";
			std::cout<<a<<"\n";
	}
