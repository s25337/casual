#include <iostream>
bool tab[100000];
int main(){
	int n;
	std::cin>>n;
	for(int i=2; i*i<=n; i++){
		
		if(!tab[i]) for(int j=i*i; j<=n; j+=i){
			tab[j]=true;
			}
		}
		//std::cout<<tab[n];
		
		if(tab[n]==false){
			for(int i=0; i<=n; i++){
				if(tab[i]==0) std::cout<<i<<"\n";
				
				}
			}
	}
