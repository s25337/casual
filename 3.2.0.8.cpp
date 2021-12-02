#include <iostream>
#include <cstdlib>
#include <ctime>

void* memrand(void* s, size_t n)
{
	char* a = (char*)s;
	int r;
	srand(time(NULL));
	for (size_t i=0;i<n;i++)
	{
	r = rand()%100+0;
	*(a+i)=r;
	}
	return a;
}

int main()
{
	char a[] = "hello world";
	puts(a);
	memrand(a,11);
	puts(a);
	return 0;
}
