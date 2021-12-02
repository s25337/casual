#include <iostream>
void print(std::string *a){
std::cout<<a<<" "<<*a;
}
int main(){

std::string a="hello world";
print(&a);
}

