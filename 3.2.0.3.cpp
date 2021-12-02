#include <iostream>
void swap(std::string *a, std::string *b){
std::string c;
c=*a;
*a=*b;
*b=c;
}
int main(){

std::string a="hello world";
std::string b="goodbye world";
std::cout<<a<<" "<<b<<"\n";
swap(&a,&b);
std::cout<<a<<" "<<b;

}

