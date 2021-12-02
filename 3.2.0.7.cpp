#include <iostream>

void* memrev(void* s, size_t n
){
	char* a = (char*)s;
	char* rev = new char[n];
	for (size_t i=0;i<n;i++){
		*(rev+i) = *(a+n-i-1);
	}
	for(size_t i=0;i<n;i++)	*(a+i)=*(rev+i);	
		return rev;
}

int main()
{
	char a[] = "hello world";
	puts(a);
	memrev(a,11);
	puts(a); 
	return 0;
}
