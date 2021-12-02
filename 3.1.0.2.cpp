#include <iostream>
auto iota(int a[], int n, int m) -> void
{
		int r=m-n;
		for (int i=0;i<=r;i++)  a[i] = i+n;
}
int main(){
	int n,m;
	std::cout<<"Podaj start i koniec: ";
	std::cin>>n>>m;
	int a[100000];
	iota(a,n,m);
	int r=m-n;
	for(int i=0; i<=r; i++) std::cout<<a[i]<<" ";
	return 0;
}

