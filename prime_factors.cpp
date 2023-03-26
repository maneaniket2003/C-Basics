#include<iostream>
using namespace std;
int main() {
	
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"The prime factors of "<<num<<" are ";
	for(int j=2; j<=num; j++) {
		if(num % j == 0) {
		
	
	int is_prime = 1;
	for(int i=2; i<j; i++) {
		if(j % i == 0) {
			is_prime = 0;
		}
	}
	if(is_prime == 1) {
		cout<<j<<" ";
	} 
}
}
}
