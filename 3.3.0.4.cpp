#include <cstdio>
#include <iostream>
using namespace std;

void fpprint(void* a[], size_t n, void (*fp)(void*)) {

for(int i=0; i<n; i++) (*fp)(a[i]);

}

void printint(void* elem) {
	auto m=elem;
	
std::cout<<m<<"\n";
}
//void printstring(void* elem) {
//std::cout<<elem<<"\n";
//}

int main(int argc, char const* argv[])
{
	//char a[]="lol";
	int a=5,b=3,c=6;
	
	void* t[]={&a, &b, &c};
	size_t size=3;
	fpprint(t,size,printint);
    return 0;
}
