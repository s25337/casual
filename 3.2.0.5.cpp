#include <iostream>
#include <string.h>
int main()
{
	char a[] = "hello world ";
	char b[] = "goodbye worm";

	memcpy(a, b, 12);
	puts (a); 
}
