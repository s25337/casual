#include <iostream>
auto amin(int a[], int n) -> int
{
	int min = 1000000000;
	for (int i=0; i<n; i++) if (a[i] < min) min = a[i];
	return min;
}

int main(){
	int n = 10;
	int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int s = amin(a,n);
	for (int i=0; i<n; i++) std::cout<<a[i]<<" ";
	std::cout<<"\n";
	std::cout<<s;
	return 0;
}
