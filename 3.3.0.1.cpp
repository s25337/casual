#include <iostream>
#include <stdio.h>

void some_function(int const a){
    std::cout<<a;
}
 
 
int main(){
	void (*fp)(int);
    fp = &some_function;
	(*fp)(42); 
	return 0;	
}

