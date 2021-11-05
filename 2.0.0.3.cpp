#include <iostream>

int main(){
int a,b,s;
std::cin>>a>>b>>s;

if (s>0) for(int i=a; i<b; i+=s){
	//std::cout<<"??";
	if (i!=0)std::cout<<i<<"\n";
	} 
else{
	//s*=-1; 
	//std::cout<<s;
	for (int i=a; i<b; i-=s)
	if (i!=0)std::cout<<i<<"\n";
	}


}
