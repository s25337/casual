#include <iostream>
auto search(int a[], int n, int needle) -> int
{
	int indeks=-1;
	for (int i=0; i<n; i++) if (a[i] == needle) indeks=i+1;
	return indeks;
}

int main(){
	int n = 10;
	int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int m;
	std::cin>>m;
	int s = search(a,n,m);
	for (int i=0; i<n; i++) std::cout<<a[i]<<" ";
	std::cout<<"\n";
	std::cout<<s;
	return 0;
}
