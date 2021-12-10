#include <iostream>

int count_chars(std::string a, char b){
	int n=a.size();
	int wynik=0;
	for(int i=0;i<n;i++) if(a[i]==b) wynik++;
	return wynik;
}

int main(){
	
	std::string a;
	char b;
	std::cout<<"podaj tekst: ";
	std::cin>>a;
	std::cout<<"podaj znak: ";
	std::cin>>b;
	int wynik=count_chars(a,b);
	std::cout<<"w tekœcie by³o "<<wynik<<" takich znaków.";
}
