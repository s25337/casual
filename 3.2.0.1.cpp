#include <iostream>

int main(){

std::string a="hello world";
auto xp=&a;
auto xd=*xp;

std::cout<<xd<<" "<<xp<<" ";
}
