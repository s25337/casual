#include <cstdio>
#include <iostream>

void fpprint(void* a[], size_t n, void (*fp)(void*)) {

for(int i=0; i<n; i++){
	std::cout<<i<<" = ";
	(*fp)(a[i]);
}

}

void printint(void* elem) {
	int* ptr = (int*)elem;
	std::cout<<*ptr<<"\n";
}
void printstring(void* elem) {
	std::string* ptr = (std::string*)elem;
	std::cout<<*ptr<<"\n";
}

int main(int argc, char const* argv[])
{
	//char a[]="lol";
	int a[]= {5, 3, 6};
	std::string b[]={"hello","world",":("};
	void* t[]={&a[0], &a[1], &a[2]};
	void* s[]={&b[0], &b[1], &b[2]};
	size_t size=3;
	fpprint(t,size,printint);
	fpprint(s,size,printstring);
    return 0;
}
