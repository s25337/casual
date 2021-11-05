#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	int a=atoi(argv[1]);
	for (int i=2; i<argc; i++){
		int b=atoi(argv[i]);
		std::cout<<a;
		if(a==b)std::cout<<"==";
		else if (a>b)std::cout<<">";
				else std::cout<<"<";
		std::cout<<b<<"\n";
		}
    return 0;

}
