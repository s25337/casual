#include <iostream>

int main(){
int a,b,c;
std::cin>>a>>b>>c;
if (c==0) return 0;
for(int i=a; i<b; i++) {
if (i%c==0) std::cout<<i<<"\n";
}
}
