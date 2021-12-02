#include <iostream>
auto amax(int a[], int n) -> int
{
	int max = 0;
	for (int i=0; i<n; i++) if (a[i] > max) max = a[i];
	return max;
}

int main(){
	int n = 10;
	int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	int s = amax(a,n);
	for (int i=0; i<n; i++) std::cout<<a[i]<<" ";
	std::cout<<"\n";
	std::cout<<s;
	return 0;
}
