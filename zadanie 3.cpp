#include <iostream>

int main(){
	
	std::cout<<"WprowadŸ imiê: ";
	std::string imie, imie2;
	std::cin>>imie;
	std::cout<<"WprowadŸ drugie imiê: ";
	std::cin>>imie2;
	if(imie.size()>imie2.size()) std::cout<<"pierwsze by³o d³u¿sze!";
	else if(imie.size()<imie2.size()) std::cout<<"drugie by³o d³u¿sze...";
			else std::cout<<"s¹ równe.";
}

