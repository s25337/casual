#include <iostream>
bool czy;
int main(){

int a;
std::cin>>a;
for(int i=2; i<a; i++) if(a%i==0) czy=true;
if (czy==0) std::cout<<"Jest liczbą pierwszą\n";
else std::cout<<"Nie jest liczbą pierwszą\n";

}
