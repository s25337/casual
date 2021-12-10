#include <iostream>

bool is_palindrome(std::string a){
	
	int n=a.size();
	for(int i=0; i<n; i++){
		//std::cout<<a[i]<<" "<<a[n-i-1];
		if(a[i]!=a[n-i-1]) return false;
	}
	return true;
}

int main(){
	
	std::string a;
	std::cin>>a;
	if(is_palindrome(a)) std::cout<<"palindrom";
	else std::cout<<"nie palindrom";
}
