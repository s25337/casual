#include <iostream>

int main(){
	
	std::cout<<"Wprowad� imi�: ";
	std::string imie, imie2;
	std::cin>>imie;
	std::cout<<"Wprowad� drugie imi�: ";
	std::cin>>imie2;
	if(imie.size()>imie2.size()) std::cout<<"pierwsze by�o d�u�sze!";
	else if(imie.size()<imie2.size()) std::cout<<"drugie by�o d�u�sze...";
			else std::cout<<"s� r�wne.";
}

