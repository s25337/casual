#include <iostream>
#include <string.h>

int main(){
	char a[] = "hello world";
	memset (a, '@', 11);
	puts (a); 
}
