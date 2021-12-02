#include <iostream>
auto sort_asc (int a[], int n) -> void
{	
	while(n>1){
     for (int i=0; i<n-1; i++){
       if (a[i] > a[i+1]) {
		   int p=a[i];
		   a[i]=a[i+1];
		   a[i+1]=p;
       }
     }
     n-=1;
   }
}

int main(){
	int n = 10;
	int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	//int m;
	//std::cin>>m;
	sort_asc(a,n);
	for (int i=0; i<n; i++) std::cout<<a[i]<<" ";
	//std::cout<<"\n";
	//std::cout<<s;
	return 0;
}

