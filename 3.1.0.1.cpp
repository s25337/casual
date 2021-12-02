#include <iostream>
auto init(int a[], int n) -> void
{
		for (int i=0;i<n;i++)  a[i] = 0;
}
int main(){
	int n;
	std::cout<<"Podaj rozmiar tablicy";
	std::cin>>n;
	int a[100000];
	init(a,n);
	for(int i=0; i<n; i++) std::cout<<a[i]<<" ";
	return 0;
}
