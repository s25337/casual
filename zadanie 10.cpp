#include <iostream>

void print(int max, std::string a){
	std::cout<<"*"<<a;
	for(int i=1; i<=max-a.size(); i++)  std::cout<<" ";
	std::cout<<"*\n";
	
	
}

void box_print(std::string a,std::string b,std::string c,std::string d,std::string e){
	int max=0;
	if (a.size()>max) max=a.size();
	if (b.size()>max) max=b.size();
	if (c.size()>max) max=c.size();
	if (d.size()>max) max=d.size();
	if (e.size()>max) max=e.size();
	
	for(int i=0; i<max+2; i++) std::cout<<"*";
	std::cout<<"\n";
	print(max,a);
	print(max,b);
	print(max,c);
	print(max,d);
	print(max,e);
	for(int i=0; i<max+2; i++) std::cout<<"*";
}


int main(){
	
	std::string a,b,c,d,e;
	std::cin>>a>>b>>c>>d>>e;
	box_print(a,b,c,d,e);
	}
