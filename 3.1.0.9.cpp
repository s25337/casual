#include <iostream>


auto quicksort(int a[], int s, int n) -> void
{
    int i = s;
    int j = n;
    int pivot = a[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    if (j > s)
        quicksort(a, s, j);
    if (i < n)
        quicksort(a, i, n);
}

int main(){
	int n = 10;
	int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
	//int m;
	//std::cin>>m;
	quicksort(a,0,n);
	for (int i=0; i<n; i++) std::cout<<a[i]<<" ";
	//std::cout<<"\n";
	//std::cout<<s;
	return 0;
}

